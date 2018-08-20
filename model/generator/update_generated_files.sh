#!/bin/bash

# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# INTEL CONFIDENTIAL
#
# Copyright (c) 2018 Intel Corporation
#
# This software and the related documents are Intel copyrighted materials, and
# your use of them is governed by the express license under which they were
# provided to you (License). Unless the License provides otherwise, you may not
# use, modify, copy, publish, distribute, disclose or transmit this software or
# the related documents without Intel's prior written permission.
#
# This software and the related documents are provided as is, with no express or
# implied warranties, other than those that are expressly stated in the License.
#
# ----------------- END LICENSE BLOCK -----------------------------------

FILE_DIR=$(dirname $(readlink -f $0))

COPYRIGHT_FILE=$(readlink -m ${FILE_DIR}/copyright_code_header.txt)
BASE_URL="https://af01p-ir.devtools.intel.com/artifactory/list/asd-generators-local/com/intel/mo2ive/"

GEN_MODEL_FILE=$(readlink -m ${FILE_DIR}/../export/RSS.xmi)


if [[ "x$1" == "xSYS" ]]; then

GEN_BASENAME="com.intel.mo2ive.generator.ros"
GEN_VERSION="9.1.1-1503"
GEN_OUTPUT_DIR=$(readlink -m ${FILE_DIR}/../../build/generated/ros)
GENERATOR_ARGUMENTS="-p ${GEN_OUTPUT_DIR} -c ${COPYRIGHT_FILE} ${GEN_MODEL_FILE}"

(
. ${FILE_DIR}/../../../utilities/generators/mo2ive_generator_common.sh -D RSS.RssModule ${GENERATOR_ARGUMENTS}
)
RESULT=$?

(
. ${FILE_DIR}/../../../utilities/generators/mo2ive_generator_common.sh -D RSS.RssSystem ${GENERATOR_ARGUMENTS}
)
RESULT=$?

exit

fi


GEN_BASENAME="com.intel.mo2ive.generator.mockup"
GEN_VERSION="8.3.1-1478"

GEN_OUTPUT_DIR=$(readlink -m ${FILE_DIR}/../../build/generated/mockup)
GEN_MODEL_FILE=$(readlink -m ${FILE_DIR}/../export/RSS.xmi)
GEN_MODEL_TARGET_ELEMENT="RSS.RssModule"

INCLUDE_TARGET_LOCATION=$(readlink -m ${FILE_DIR}/../../include)
SRC_TARGET_LOCATION=$(readlink -m ${FILE_DIR}/../../src)

CODEFORMATTING_SCRIPT=${FILE_DIR}/codeformat.py
CODEFORMATTING_CLANG_FILE=${FILE_DIR}/clang-format

#
# defines a function to perform a sed call recursively until the file doesn't change any more
#
function call_sed_inplace
{
  INFILE=$1
  BACKUPFILE="${1}.bak"
  if [ "x$3" == "x" ]; then
    SED_COMMAND="sed --in-place=.bak -r '/$2/d'"
  else
    SED_COMMAND="sed --in-place=.bak -r 's/$2/$3/g'"
  fi
  #echo "Execute(${SED_COMMAND}) ..."
  SOMETHING_DONE=1
  while (( SOMETHING_DONE )); do
    if [ -e $BACKUPFILE ]; then
      rm ${BACKUPFILE}
    fi
    eval ${SED_COMMAND} ${INFILE}
    DIFF=`diff ${BACKUPFILE} ${INFILE}`
    if [ "x$DIFF" == "x" ]; then
      SOMETHING_DONE=0
    fi
  done
  #echo "Done."
}

#
# defines a function to perform code formatting
#
function call_code_formatting
{
  ${CODEFORMATTING_SCRIPT} --yes "$1"
}

function is_directory_ignored
{
  IGNORE_DIRS="core"
  for IGNORE_DIR in ${IGNORE_DIRS}; do
    if [ "${1}" == "rss/${IGNORE_DIR}" ]; then
      return 1
    fi
  done
  return 0
}

function process_and_copy_generated_files
{
  BASE_INC_DIR=${1}/include
  for SUBPATH in ${BASE_INC_DIR}/rss/*; do
    SUBDIR=${SUBPATH##${BASE_INC_DIR}/}
    is_directory_ignored "${SUBDIR}"
    if (( $? )); then
      continue
    fi

    if [ -e ${INCLUDE_TARGET_LOCATION}/${SUBDIR} ]; then
      mv ${INCLUDE_TARGET_LOCATION}/${SUBDIR} ${BASE_INC_DIR}/${SUBDIR}.bak
    fi
    cp ${CODEFORMATTING_CLANG_FILE} ${BASE_INC_DIR}/${SUBDIR}/.clang-format
    mkdir -p ${INCLUDE_TARGET_LOCATION}/${SUBDIR}
    for HEADER_FILE in ${BASE_INC_DIR}/${SUBDIR}/*.hpp; do
      FILENAME=$(basename ${HEADER_FILE})
      ignore=0
      for IGNORE_FILE in ${IGNORE_FILES}; do
        if [[ ${FILENAME} == ${IGNORE_FILE}* ]]; then
          ignore=1
        fi
        echo "Check ignore '${FILENAME}' and '${IGNORE_FILE}' results in ${ignore}"
      done
      if (( !ignore )); then
        echo "Updating include file: ${INCLUDE_TARGET_LOCATION}/${SUBDIR}/${FILENAME}"
        # include guard -> pragma once
        call_sed_inplace "${HEADER_FILE}" "#ifndef.*PIPES.*" "#pragma once"
        ## and prepend limits include
        call_sed_inplace "${HEADER_FILE}" "#define.*PIPES.*$" "#include <limits>"
        call_sed_inplace "${HEADER_FILE}" "#endif.*PIPES.*$" ""
        # remove unnecessary boost dependency
        call_sed_inplace "${HEADER_FILE}" "#include.*boost.*$" ""
        call_sed_inplace "${HEADER_FILE}" "using.*boost.*$" ""
        # replace generated file header parts
        call_sed_inplace "${HEADER_FILE}" " \* Generated file.*$" ""
        call_sed_inplace "${HEADER_FILE}" " \* Model Library.*$" ""
        call_sed_inplace "${HEADER_FILE}" " \* Model Version.*$" ""
        call_sed_inplace "${HEADER_FILE}" " \* Generator.*$" ""
        call_sed_inplace "${HEADER_FILE}" " \* Generator Version.*$" ""
        # replace invalid consts on return types of getter functions
        call_sed_inplace "${HEADER_FILE}" " const get" " get"
        # remove pipes references
        call_sed_inplace "${HEADER_FILE}" "#include.*pipes.*$" ""
        call_sed_inplace "${HEADER_FILE}" "(.*):.*::pipes::Event$" "\1"

        # code formatting
        call_code_formatting "${HEADER_FILE}"
        if [ -e ${INCLUDE_TARGET_LOCATION}/${SUBDIR} ]; then
          cp ${HEADER_FILE} ${INCLUDE_TARGET_LOCATION}/${SUBDIR}
        fi
      fi
    done
  done

  BASE_SRC_DIR=${1}/src
  for SUBPATH in ${BASE_SRC_DIR}/rss/*; do
    SUBDIR=${SUBPATH##${BASE_SRC_DIR}/}
    is_directory_ignored "${SUBDIR}"
    if (( $? )); then
      continue
    fi
    if [ -e ${BASE_SRC_DIR}/${SUBDIR} ]; then
      cp ${CODEFORMATTING_CLANG_FILE} ${BASE_SRC_DIR}/${SUBDIR}/.clang-format
      if [ -e ${SRC_TARGET_LOCATION}/${SUBDIR} ]; then
        mv ${SRC_TARGET_LOCATION}/${SUBDIR} ${BASE_SRC_DIR}/${SUBDIR}.bak
      fi
      mkdir -p ${SRC_TARGET_LOCATION}/${SUBDIR}
      for SOURCE_FILE in ${BASE_SRC_DIR}/${SUBDIR}/*.cpp; do
        FILENAME=$(basename ${SOURCE_FILE})

        echo "Updating source file: ${SRC_TARGET_LOCATION}/${SUBDIR}/${FILENAME}"
        # replace generated file header parts
        call_sed_inplace "${SOURCE_FILE}" " \* Generated file.*$" ""
        call_sed_inplace "${SOURCE_FILE}" " \* Model Library.*$" ""
        call_sed_inplace "${SOURCE_FILE}" " \* Model Version.*$" ""
        call_sed_inplace "${SOURCE_FILE}" " \* Generator.*$" ""
        call_sed_inplace "${SOURCE_FILE}" " \* Generator Version.*$" ""
        # code formatting
        call_code_formatting "${SOURCE_FILE}"
        if [ -e ${SRC_TARGET_LOCATION}/${SUBDIR} ]; then
          cp ${SOURCE_FILE} ${SRC_TARGET_LOCATION}/${SUBDIR}
        fi
      done
    fi
  done
}

if [ -e ${GEN_OUTPUT_DIR} ]; then
  echo "-- cleaning output directory: ${GEN_OUTPUT_DIR}"
  rm -rf ${GEN_OUTPUT_DIR}
fi
mkdir -p ${GEN_OUTPUT_DIR}

POST_PROCESSING=0
GENERATOR_ARGUMENTS="$@"
if [[ "$GENERATOR_ARGUMENTS" == "" ]]; then
  POST_PROCESSING=1
  GENERATOR_ARGUMENTS="-D ${GEN_MODEL_TARGET_ELEMENT} -p ${GEN_OUTPUT_DIR} -c ${COPYRIGHT_FILE} ${GEN_MODEL_FILE}"
fi

(
. ${FILE_DIR}/../../../utilities/generators/mo2ive_generator_common.sh ${GENERATOR_ARGUMENTS}
)
RESULT=$?

if (( POST_PROCESSING && ! RESULT )); then
  if [ -e ${GEN_OUTPUT_DIR} ]; then
    echo "Post process generated files"
    # adapt generated files
    process_and_copy_generated_files "${GEN_OUTPUT_DIR}/rss_module"
  fi
fi


exit $RESULT
