#!/usr/bin/python
# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (c) 2019-2020 Intel Corporation
#
# ----------------- END LICENSE BLOCK -----------------------------------

import os
import re
import sys

from pygccxml import parser
from pygccxml import utils
from pyplusplus import module_builder, decl_wrappers

import fileinput

import warnings


def get_list_of_files(directory, ignore_files):
    """
    @return list of all files in directory and subdirectories of directory
    """
    dir_list = os.listdir(directory)
    all_files = list()
    for entry in dir_list:
        full_path = os.path.join(directory, entry)
        if os.path.isdir(full_path):
            all_files = all_files + get_list_of_files(full_path, ignore_files)
        else:
            skip = False
            for ignore_file in ignore_files:
                if full_path.find(ignore_file) != -1:
                    skip = True
                    print ("Skipping file: " + full_path)
            if not skip:
                if full_path.endswith(".h") or full_path.endswith(".hpp"):
                    all_files.append(full_path)

    return all_files


def generate_python_wrapper(header_directories, include_paths, library_name, cpp_filename, declarations, main_namespace="", ignore_declarations={}, ignore_files={}):
    """
    Function to generate Python-C++ binding code by calling pygccxml and py++

    :param header_directories: directories with headers to create python binding for
    :type header_directories: list<string>
    :param include_paths: directories required as includes for the header files
    :type include_paths: list<string>
    :param library_name: the output name of the library to be created
    :type library_name: string
    :param cpp_filename: the output name of the C++ file to be created
    :type cpp_filename: string
    :param declarations: a list of declarations to be used for starting the AST syntax tree. See also
      pygccxml start_with_declarations or either -fxml-start(gccxml) or -castxml-start(castxml)
    :type declarations: list<string>
    :param ignore_declarations: a list of declarations to be ignored when generating C++ code
    :type ignore_declarations: list<string>
    :param ignore_files: a list of files to be ignored
    :type ignore_files: list<string>
    :return:
    """

    warnings.filterwarnings(action="once", category=DeprecationWarning)

    # Find out the xml generator (gccxml or castxml)
    generator_path, generator_name = utils.find_xml_generator()
    compiler = "g++"
    compiler_path = "/usr/bin/g++"

    # Create configuration for CastXML
    xml_generator_config = parser.xml_generator_configuration_t(
        xml_generator_path=generator_path,
        xml_generator=generator_name,
        compiler=compiler,
        compiler_path=compiler_path,
        start_with_declarations=declarations)

    # Set include dirs and cflags to avoid warnings and errors
    xml_generator_config.append_cflags("-std=c++11")

    for inc_dir in include_paths:
        xml_generator_config.include_paths.append(inc_dir)

    for header_dir in header_directories:
        xml_generator_config.include_paths.append(header_dir)

    # Find all relevant headers
    header_list = list()
    for header_dir in header_directories:
        header_list = header_list + get_list_of_files(header_dir, ignore_files=ignore_files)

    # Parses the source files and creates a module_builder object
    builder = module_builder.module_builder_t(
        header_list,
        xml_generator_path=generator_path,
        compilation_mode=parser.COMPILATION_MODE.ALL_AT_ONCE,
        xml_generator_config=xml_generator_config,
        indexing_suite_version=2)

    # for some reason there is a problem with variables named 'length'
    # the filename is empty and the line no is set to -1
    # therefore the declaration is not processed in the code later on
    # this is to fix length struct members
    for decl in builder.decls("length"):
        if isinstance(decl, decl_wrappers.variable_wrapper.variable_t):
            if isinstance(decl.parent, decl_wrappers.class_wrapper.class_t):
                if decl.ignore:
                    decl.location.file_name = decl.parent.location.file_name
                    decl.location.line = decl.parent.location.line + 1
                    decl.ignore = False

    if main_namespace != "":
        if main_namespace.startswith("::"):
            main_namespace = main_namespace[2:]
        top_namespace_split = main_namespace.find(":")
        top_namespace = ""
        if top_namespace_split > 1:
            top_namespace = main_namespace[:top_namespace_split + 2]
        print("Main namespace defined, namespace filtering enabled: top-namespace '{}' main-namespace '{}'".format(
            top_namespace, main_namespace))

    for decl in builder.decls():
        for ignore_declaration in ignore_declarations:
            if ignore_declaration in decl.name or ignore_declaration in decl.alias:
                decl.exclude()
                decl.ignore = True
                decl.already_exposed = True
                # print("declaration to ignore found: {} (alias {})".format(decl, decl.alias))
                break
        if main_namespace != "":
            if isinstance(decl, decl_wrappers.class_wrapper.class_t) or isinstance(decl, decl_wrappers.class_wrapper.class_declaration_t) or isinstance(decl, decl_wrappers.typedef_wrapper.typedef_t):
                decl_full_string = "{}".format(decl)
                if main_namespace in decl_full_string:
                    # namespace present, ok
                    # print("typedef/class main namespace found: {}".format(decl_full_string))
                    continue
                if decl_full_string in main_namespace:
                    # declaration is a parent of main namespace, ok
                    # print("typedef/class declaration of upper level namespace found: {}".format(decl_full_string))
                    continue
                if top_namespace != "" and not top_namespace in decl_full_string:
                    # global or std defaults, ok
                    # print("typedef/class outside top namespace found: {}".format(decl_full_string))
                    continue
                # print("typedef/class outside of main namespace found. Ignoring: {}".format(decl_full_string))
                decl.exclude()
                decl.ignore = True
                decl.already_exposed = True

    # debug declarations
    # builder.print_declarations()

    # Automatically detect properties and associated getters/setters
    builder.classes().add_properties(exclude_accessors=True)

    # Define a name for the module
    builder.build_code_creator(module_name=library_name)

    # Writes the C++ interface file
    if os.path.exists(cpp_filename):
        os.remove(cpp_filename)
    builder.write_module(cpp_filename)

    print("generate_python_wrapper(): {} written.".format(cpp_filename))


def post_process_python_wrapper(header_directories, cpp_filename_in, cpp_filename_out, additional_replacements={}, additional_includes={}, spdx_license="MIT", fix_include_directives=True, fix_enum_class=True):
    """
    Post process generated binding code

    As the generated code is not 100% perfect, some additional steps are automated by these post processing steps.
    1. The auto-generated include directives contain the full include path which is removed in here
    2. enum literals of C++ enum classes are not correctly handled by the generator, this fixes this

    :param header_directories: directories with headers the python binding is created for; used to remove the prefix from
      generated include directives
    :type header_directories: list<string>
    :param cpp_filename_in: the input name of the C++ file to be post processed
    :type cpp_filename_in: string
    :param cpp_filename_out: the output name of the C++ file to be post processed
    :type cpp_filename_out: string
    :param fix_include_directives: should the include directives be fixed (default: True)
    :type fix_include_directives: boolean
    :param fix_enum_class: should the enum classes be fixed (default: True)
    :type fix_enum_class: boolean
    :return:
    """

    enum_declaration_start = re.compile(".*bp::enum_< ([^>]*)>.*")
    enum_namespace = ""
    enum_namespace_full = ""
    enum_started = False

    file_input = fileinput.input(cpp_filename_in)
    file_output = open(cpp_filename_out, "w")
    write_prefix = True
    for line in file_input:
        if write_prefix:

            file_output.write("/*\n"
                              " * ----------------- BEGIN LICENSE BLOCK ---------------------------------\n"
                              " *\n"
                              " * Copyright (c) 2020 Intel Corporation\n"
                              " *\n"
                              " * SPDX-License-Identifier: " + spdx_license + "\n"
                              " *\n"
                              " * ----------------- END LICENSE BLOCK -----------------------------------\n"
                              " */\n"
                              "// clang-format off\n"
                              "#pragma GCC diagnostic push\n"
                              "#pragma GCC diagnostic ignored \"-Wshadow\"\n"
                              "#pragma GCC diagnostic ignored \"-Wignored-qualifiers\"\n"
                              "#if defined(__clang__) && (__clang_major__ >= 7)\n"
                              "#  pragma GCC diagnostic ignored \"-Wself-assign-overloaded\"\n"
                              "#endif\n\n")

            for additional_include in additional_includes:
                file_output.write("#include <{}>\n".format(additional_include))

            write_prefix = False

        # Remove the leading include
        if fix_include_directives:
            for header_dir in header_directories:
                if not header_dir.endswith("/"):
                    header_dir = header_dir + "/"
                line = line.replace(header_dir, "")

        # Fix C++ enum classes
        if fix_enum_class:
            if enum_started:
                if line.find("export_values()") != -1:
                    enum_started = False
                else:
                    line = line.replace(enum_namespace, enum_namespace_full)
            else:
                match = enum_declaration_start.match(line)
                if match:
                    enum_started = True
                    enum_name_start = match.group(1).rindex(':')
                    enum_namespace = match.group(1)[:enum_name_start + 1]
                    enum_namespace_full = match.group(1) + "::"

        for replacement in additional_replacements:
            line = line.replace(replacement[0], replacement[1])

        file_output.write(line)

    file_output.write("\n#pragma GCC diagnostic pop\n"
                      "// clang-format on\n")

    print("post_process_python_wrapper(): {} written.".format(cpp_filename_out))
