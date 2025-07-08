# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

"""
Event classes have no common base class.

They are being pushed to the queue of the
:py:class:`colcon_core.event_reactor.EventReactor` and handled by instances of
the :py:class:`colcon_core.event_handler.EventHandlerExtensionPoint` interface.
"""
