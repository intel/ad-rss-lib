#!/usr/bin/python

"""
This module uses pygccxml and py++ to generate
Python interfaces for all classes and datatypes
of the ad-rss-lib.

The resulting library is called pylib
"""

import os

from pygccxml import parser
from pygccxml import utils
from pyplusplus import module_builder


def get_list_of_files(directory):
    """
    @return list of all files in directory and subdirectories of directory
    """
    dir_list = os.listdir(directory)
    all_files = list()
    for entry in dir_list:
        full_path = os.path.join(directory, entry)
        if os.path.isdir(full_path):
            all_files = all_files + get_list_of_files(full_path)
        else:
            all_files.append(full_path)

    return all_files


def main():
    """
    Main function to generate Python-C++ binding code
    """

    # Find out the xml generator (gccxml or castxml)
    generator_path, generator_name = utils.find_xml_generator()
    compiler = "g++"
    compiler_path = "/usr/bin/g++"

    # Create configuration for CastXML
    xml_generator_config = parser.xml_generator_configuration_t(
        xml_generator_path=generator_path,
        xml_generator=generator_name,
        compiler=compiler,
        compiler_path=compiler_path)

    # Set include dirs and cflags to avoid warnings and errors
    xml_generator_config.append_cflags("-std=c++11")
    xml_generator_config.include_paths.append("../include/generated/")

    # Find all relevant headers
    header_list = get_list_of_files("../include/generated/")
    header_list = header_list + get_list_of_files("../include/ad_rss/core/")
    header_list = header_list + get_list_of_files("../include/ad_rss/physics/")

    # Parses the source files and creates a module_builder object
    builder = module_builder.module_builder_t(
        header_list,
        xml_generator_path=generator_path,
        xml_generator_config=xml_generator_config)

    # Automatically detect properties and associated getters/setters
    builder.classes().add_properties(exclude_accessors=True)

    # Define a name for the module
    builder.build_code_creator(module_name="libad_rss_python")

    # Writes the C++ interface file
    builder.write_module('PythonWrapper.cpp')


if __name__ == '__main__':
    main()
