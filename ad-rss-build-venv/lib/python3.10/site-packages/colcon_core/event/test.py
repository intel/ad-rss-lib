# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0


class TestFailure:
    """An event containing the identifier of the job with test failures."""

    __slots__ = ('identifier', )

    def __init__(self, identifier):
        """
        Construct a TestFailure.

        :param str identifier: The job identifier
        """
        self.identifier = identifier
