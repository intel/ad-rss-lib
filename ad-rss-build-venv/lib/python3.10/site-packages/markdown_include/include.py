# -*- coding: utf-8 -*-
#
#  include.py
#
#  Copyright 2015 Christopher MacMackin <cmacmackin@gmail.com>
#
#  This program is free software; you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation; either version 2 of the License, or
#  (at your option) any later version.
#
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software
#  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
#  MA 02110-1301, USA.
#
#

from __future__ import print_function
import re
import os.path
from codecs import open
from markdown.extensions import Extension
from markdown.preprocessors import Preprocessor

INC_SYNTAX = re.compile(r"{!\s*(.+?)\s*!((\blines\b)=([0-9 -]+))?\}")
HEADING_SYNTAX = re.compile("^#+")


class MarkdownInclude(Extension):
    def __init__(self, configs={}):
        self.config = {
            "base_path": [
                ".",
                "Default location from which to evaluate "
                "relative paths for the include statement.",
            ],
            "encoding": [
                "utf-8",
                "Encoding of the files used by the include " "statement.",
            ],
            "inheritHeadingDepth": [
                False,
                "Increases headings on included "
                "file by amount of previous heading (combines with "
                "headingOffset option).",
            ],
            "headingOffset": [
                0,
                "Increases heading depth by a specific "
                "amount (and the inheritHeadingDepth option).  Defaults to 0.",
            ],
            "throwException": [
                False,
                "When true, if the extension is unable "
                "to find an included file it will throw an "
                "exception which the user can catch. If false "
                "(default), a warning will be printed and "
                "Markdown will continue parsing the file.",
            ],
        }
        for key, value in configs.items():
            self.setConfig(key, value)

    def extendMarkdown(self, md):
        md.preprocessors.register(
            IncludePreprocessor(md, self.getConfigs()), "include", 101
        )


class IncludePreprocessor(Preprocessor):
    """
    This provides an "include" function for Markdown, similar to that found in
    LaTeX (also the C pre-processor and Fortran). The syntax is {!filename!},
    which will be replaced by the contents of filename. Any such statements in
    filename will also be replaced. This replacement is done prior to any other
    Markdown processing. All file-names are evaluated relative to the location
    from which Markdown is being called.
    """

    def __init__(self, md, config):
        super(IncludePreprocessor, self).__init__(md)
        self.base_path = config["base_path"]
        self.encoding = config["encoding"]
        self.inheritHeadingDepth = config["inheritHeadingDepth"]
        self.headingOffset = config["headingOffset"]
        self.throwException = config["throwException"]

    def run(self, lines):
        done = False
        bonusHeading = ""
        while not done:
            for loc, line in enumerate(lines):
                m = INC_SYNTAX.search(line)

                while m:
                    filename = m.group(1)
                    filename = os.path.expanduser(filename)
                    if not os.path.isabs(filename):
                        filename = os.path.normpath(
                            os.path.join(self.base_path, filename)
                        )
                    try:
                        with open(filename, "r", encoding=self.encoding) as r:
                            original_text = self.run(r.readlines())

                    except Exception as e:
                        if not self.throwException:
                            print(
                                "Warning: could not find file {}. Ignoring "
                                "include statement. Error: {}".format(filename, e)
                            )
                            lines[loc] = INC_SYNTAX.sub("", line)
                            break
                        else:
                            raise e
                    if m.group(2) is None:
                        text = original_text
                    else:
                        lines_str = m.group(4)
                        lines_blocks = lines_str.split()
                        wanted_lines = []
                        for block in lines_blocks:
                            if "-" in block:
                                start, end = block.strip().split("-")
                                current_start = int(start)
                                current_end = int(end)
                                if not len(original_text) >= current_end:
                                    current_end = len(original_text)
                                    print(
                                        f"Warning: line range: {block} ending in "
                                        f"line: {end} is larger than file: {filename} "
                                        f"using end: {current_end}"
                                    )
                                if not current_start <= current_end:
                                    current_start = max(current_end - 1, 1)
                                    print(
                                        f"Warning: in line range: {block} "
                                        f"the start line: {start} is not "
                                        f"smaller than the end line: {current_end} "
                                        f"using start: {current_start}"
                                    )

                                wanted_lines.extend(
                                    original_text[current_start - 1 : current_end]
                                )
                            else:
                                wanted_line = int(block.strip())
                                current_line = wanted_line
                                if current_line > len(original_text):
                                    current_line = len(original_text)
                                    print(
                                        f"Warning: line: {wanted_line} is larger than "
                                        f"file: {filename} using end: {current_line}"
                                    )
                                wanted_lines.append(original_text[current_line - 1])
                        text = wanted_lines

                    if len(text) == 0:
                        text.append("")
                    for i in range(len(text)):
                        # Strip the newline, and optionally increase header depth
                        if HEADING_SYNTAX.search(text[i]):
                            if self.inheritHeadingDepth:
                                text[i] = bonusHeading + text[i]
                            if self.headingOffset:
                                text[i] = "#" * self.headingOffset + text[i]

                        text[i] = text[i].rstrip("\r\n")
                    text_to_insert = "\r\n".join(text)
                    line = line[: m.start()] + text_to_insert.strip() + line[m.end() :]
                    del lines[loc]
                    lines[loc:loc] = line.splitlines()
                    m = INC_SYNTAX.search(line)

                else:
                    h = HEADING_SYNTAX.search(line)
                    if h:
                        headingDepth = len(h.group(0))
                        bonusHeading = "#" * headingDepth

            else:
                done = True
        return lines


def makeExtension(*args, **kwargs):
    return MarkdownInclude(kwargs)
