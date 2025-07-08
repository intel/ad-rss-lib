# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0


class StdoutLine:
    """
    An event containing a single line of text intended for `stdout`.

    The line has a trailing newline.
    """

    __slots__ = ('line', )

    def __init__(self, line):
        """
        Construct a StdoutLine.

        :param bytes|str line: The line of text
        """
        self.line = line


class StderrLine:
    """
    An event containing a single line of text intended for `stderr`.

    The line has a trailing newline.
    """

    __slots__ = ('line', )

    def __init__(self, line):
        """
        Construct a StderrLine.

        :param bytes|str line: The line of text
        """
        self.line = line
