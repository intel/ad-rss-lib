# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0


class JobUnselected:
    """An event containing the identifier of the unselected job."""

    __slots__ = ('identifier', )

    def __init__(self, identifier):
        """
        Construct a JobUnselected.

        :param str identifier: The job identifier
        """
        self.identifier = identifier


class JobQueued:
    """An event containing the identifier of the queued job."""

    __slots__ = ('identifier', 'dependencies')

    def __init__(self, identifier, dependencies=None):
        """
        Construct a JobQueued.

        :param str identifier: The job identifier
        :param set dependencies: The name of the recursive dependencies
        """
        self.identifier = identifier
        self.dependencies = dependencies


class JobStarted:
    """An event containing the identifier of the started job."""

    __slots__ = ('identifier', )

    def __init__(self, identifier):
        """
        Construct a JobStarted.

        :param str identifier: The job identifier
        """
        self.identifier = identifier


class JobProgress:
    """An event containing the identifier and progress of the job."""

    __slots__ = ('identifier', 'progress')

    def __init__(self, identifier, progress):
        """
        Construct a JobProgress.

        :param str identifier: The job identifier
        :param str progress: The message describing the progress of the job
        """
        self.identifier = identifier
        self.progress = progress


class JobEnded:
    """An event containing the identifier of the ended job and its rc."""

    __slots__ = ('identifier', 'rc')

    def __init__(self, identifier, rc):
        """
        Construct a JobEnded.

        :param str identifier: The job identifier
        :param rc: The return code of the job
        """
        self.identifier = identifier
        self.rc = rc


class JobSkipped:
    """An event containing the identifier of the skipped job."""

    __slots__ = ('identifier', )

    def __init__(self, identifier):
        """
        Construct a JobSkipped.

        :param str identifier: The job identifier
        """
        self.identifier = identifier
