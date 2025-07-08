# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from queue import Empty
from queue import Queue
from threading import Thread
import time
import traceback

from colcon_core.event.timer import TimerEvent
from colcon_core.event_handler import apply_event_handler_arguments
from colcon_core.event_handler import get_event_handler_extensions
from colcon_core.logging import colcon_logger

logger = colcon_logger.getChild(__name__)


class EventReactor:
    """Notify registered observers for events posted to the queue."""

    TIMER_INTERVAL = 0.1

    def __init__(self):  # noqa: D107
        self._thread = Thread(target=self._run)
        self._queue = Queue()
        self._observers = []
        self._last_timer_event = 0

    def get_queue(self):
        """Get the event queue."""
        return self._queue

    def register_observer(self, observer):
        """
        Register an observer which gets called for each event.

        :param callable observer: The callback
        """
        self._observers.append(observer)

    def _run(self):
        """
        Process events and notify all observers.

        If no events are being process for :py:attribute:`TIMER_INTERVAL`
        seconds a :class:`TimerEvent` is being generated and processed.

        An :class:`EventReactorShutdown` event will stop the loop.
        """
        while True:
            # send timer events in regular interval
            now = time.monotonic()
            time_since_last_timer_event = now - self._last_timer_event
            if time_since_last_timer_event >= self.TIMER_INTERVAL:
                self._notify_observers((TimerEvent(), None))
                self._last_timer_event = now
                timeout = self.TIMER_INTERVAL
            else:
                timeout = self.TIMER_INTERVAL - time_since_last_timer_event

            # wait for next event or timeout
            try:
                event = self._queue.get(timeout=timeout)
            except Empty:
                continue

            # publish event
            self._notify_observers(event)
            self._queue.task_done()

            # the signal to end the processing thread
            if len(event) > 1 and isinstance(event[0], EventReactorShutdown):
                break

    def _notify_observers(self, event):
        for observer in self._observers:
            try:
                retval = observer(event)
                assert retval is None, 'event handler should return None'
            except Exception as e:  # noqa: F841
                # catch exceptions raised in event handler extension
                msg = 'Exception in event handler extension ' \
                    f"'{observer.EVENT_HANDLER_NAME}': {e}"
                if not isinstance(e, RuntimeError):
                    msg += '\n' + traceback.format_exc()
                logger.error(msg)
                # skip failing extension, continue with next one

    def flush(self):
        """Wait until the queue is empty."""
        while self._thread.is_alive():
            if self._queue.empty():
                return
            time.sleep(0.01)

    def start(self):
        """Start the event reactor."""
        self._thread.start()

    def stop(self):
        """
        Stop this event reactor and block until done.

        An :class:`EventReactorShutdown` event is added to the queue to notify
        all observers that the event reactor is shutting down.
        """
        self._queue.put((EventReactorShutdown(), None))
        logger.debug('joining thread')
        self._thread.join()
        logger.debug('joined thread')

    def __enter__(self):
        """
        Start the event reactor.

        :returns: self
        """
        self.start()
        return self

    def __exit__(self, exc_type, exc_val, exc_tb):
        """Stop the event reactor."""
        self.stop()


class EventReactorShutdown:
    """An event generated before the event reactor is shut down."""

    __slots__ = ()


def create_event_reactor(context):
    """
    Create an event reactor and add all event handlers as observers.

    :param context: The context is passed to all event handlers
    :returns: The event reactor
    """
    event_reactor = EventReactor()
    event_handlers = get_event_handler_extensions(context=context)
    apply_event_handler_arguments(event_handlers, context.args)

    # register enabled event handlers
    for event_handler in event_handlers.values():
        if not event_handler.enabled:
            continue
        event_reactor.register_observer(event_handler)

    return event_reactor
