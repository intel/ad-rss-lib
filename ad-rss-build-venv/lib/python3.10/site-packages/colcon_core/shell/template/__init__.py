# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from io import StringIO
import os

from colcon_core.generic_decorator import GenericDecorator
from colcon_core.logging import colcon_logger
try:
    from em import Interpreter
except ImportError as e:
    try:
        import em  # noqa: F401
    except ImportError:
        e.msg += " The Python package 'empy' must be installed"
        raise e from None
    e.msg += " The Python package 'empy' must be installed and 'em' must " \
        'not be installed since both packages share the same namespace'
    raise e from None

logger = colcon_logger.getChild(__name__)


def expand_template(template_path, destination_path, data):
    """
    Expand an EmPy template.

    The directory of the destination path is created if necessary.

    :param template_path: The patch of the template file
    :param destination_path: The path of the generated expanded file
    :param dict data: The data used for expanding the template
    :raises: Any exception which `em.Interpreter.string` might raise
    """
    output = StringIO()
    try:
        try:
            from em import Configuration
        except ImportError:
            from em import OVERRIDE_OPT
            # disable OVERRIDE_OPT to avoid saving / restoring stdout
            interpreter = CachingInterpreter(
                output=output, options={OVERRIDE_OPT: False})
        else:
            interpreter = CachingInterpreter(
                output=output,
                config=Configuration(
                    defaultRoot=str(template_path),
                    useProxy=False),
                dispatcher=False)
        try:
            with template_path.open('r') as h:
                content = h.read()
            interpreter.string(content, locals=data)
            output = output.getvalue()
        finally:
            interpreter.shutdown()
    except Exception as e:  # noqa: F841
        logger.error(
            f"{e.__class__.__name__} processing template '{template_path}'")
        raise
    else:
        os.makedirs(str(destination_path.parent), exist_ok=True)
        # if the destination_path is a symlink remove the symlink
        # to avoid writing to the symlink destination
        if destination_path.is_symlink():
            destination_path.unlink()
        with destination_path.open('w') as h:
            h.write(output)


class BypassStdoutInterpreter(Interpreter):
    """Interpreter for EmPy which keeps `stdout` unchanged."""

    def installProxy(self, *args, **kwargs):  # noqa: D102 N802
        # avoid replacing stdout with ProxyFile
        # in EmPy 3.x, this function performed in-place modification.
        # in EmPy 4.x, it is passed the output stream and is expected to
        # return the output stream.
        return next(iter(args), None)


cached_tokens = {}


class CachingInterpreter(BypassStdoutInterpreter):
    """Interpreter for EmPy which caches parsed tokens."""

    class _CachingScannerDecorator(GenericDecorator):

        def __init__(self, decoree, cache):
            super().__init__(decoree, _cache=cache, _idx=0)

        def one(self, *args, **kwargs):
            if self._idx < len(self._cache):
                token, count = self._cache[self._idx]
                self.advance(count)
                self.sync()
            else:
                count = len(self._decoree)
                token = self._decoree.one(*args, **kwargs)
                count -= len(self._decoree)
                self._cache.append((token, count))

            self._idx += 1
            return token

    def parse(self, scanner, *args, **kwargs):  # noqa: A002 D102
        cache = cached_tokens.setdefault(scanner.buffer, [])
        return super().parse(
            CachingInterpreter._CachingScannerDecorator(scanner, cache),
            *args,
            **kwargs)
