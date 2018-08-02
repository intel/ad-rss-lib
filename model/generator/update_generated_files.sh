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

GEN_BASENAME="com.intel.mo2ive.generator.mockup"
GEN_VERSION="8.3.1-1478"

GEN_OUTPUT_DIR=$(readlink -m ${FILE_DIR}/../../build/generated)
GEN_MODEL_FILE=$(readlink -m ${FILE_DIR}/../export/RSS.xmi)
GEN_MODEL_TARGET_ELEMENT="RSS.RssModule"

INCLUDE_TARGET_LOCATION=$(readlink -m ${FILE_DIR}/../../include)
SRC_TARGET_LOCATION=$(readlink -m ${FILE_DIR}/../../src)

BASE_URL="https://af01p-ir.devtools.intel.com/artifactory/list/asd-generators-local/com/intel/mo2ive/"

GEN_NAME=${GEN_BASENAME}-${GEN_VERSION}.jar
GEN_JAR=${FILE_DIR}/${GEN_NAME}

JAVA_EXE=

CODEFORMATTING_SCRIPT=${FILE_DIR}/codeformat.py
CODEFORMATTING_CLANG_FILE=${FILE_DIR}/clang-format

RESULT=0

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

function process_and_copy_generated_files
{
  IGNORE_FILES="RSSChecker RSSResponse"

  BASE_INC_DIR=${1}/include
  for SUBPATH in ${BASE_INC_DIR}/rss/*; do
    SUBDIR=${SUBPATH##${BASE_INC_DIR}/}
    if [ -e ${INCLUDE_TARGET_LOCATION}/${SUBDIR} ]; then
      mv ${INCLUDE_TARGET_LOCATION}/${SUBDIR} ${BASE_INC_DIR}/${SUBDIR}.bak
    fi
    cp ${CODEFORMATTING_CLANG_FILE} ${BASE_INC_DIR}/${SUBDIR}/.clang-format
    mkdir -p ${INCLUDE_TARGET_LOCATION}/${SUBDIR}
    for IGNORE_FILE in ${IGNORE_FILES}; do
      for FILE in ${BASE_INC_DIR}/${SUBDIR}.bak/${IGNORE_FILE}*; do
        if [ -e ${FILE} ]; then
          cp ${FILE} ${INCLUDE_TARGET_LOCATION}/${SUBDIR}
        fi
      done
    done
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
        call_sed_inplace "${HEADER_FILE}" "#define.*PIPES.*$" ""
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
    if [ -e ${BASE_SRC_DIR}/${SUBDIR} ]; then
      cp ${CODEFORMATTING_CLANG_FILE} ${BASE_SRC_DIR}/${SUBDIR}/.clang-format
      if [ -e ${SRC_TARGET_LOCATION}/${SUBDIR} ]; then
        mv ${SRC_TARGET_LOCATION}/${SUBDIR} ${BASE_SRC_DIR}/${SUBDIR}.bak
      fi
      mkdir -p ${SRC_TARGET_LOCATION}/${SUBDIR}
      for SOURCE_FILE in ${BASE_SRC_DIR}/${SUBDIR}/*.cpp; do
        FILENAME=$(basename ${SOURCE_FILE})
        ignore=0
        for IGNORE_FILE in ${IGNORE_FILES}; do
          if [[ ${FILENAME} == ${IGNORE_FILE}* ]]; then
            ignore=1
          fi
          echo "Check ignore '${FILENAME}' and '${IGNORE_FILE}' results in ${ignore}"
        done
        if (( !ignore )); then
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
        fi
      done
    fi
  done
}

if [[ -n "${JAVA_HOME}" ]] && [[ -x "${JAVA_HOME}/bin/java" ]];  then
  JAVA_EXE="${JAVA_HOME}/bin/java"
elif type -p java >& /dev/null; then
  JAVA_EXE=java
else
  echo "no java found"
fi

#check if generator available or download it
echo "-- checking for generator ${GEN_NAME} ..."
if [ ! -f ${GEN_JAR} ]; then
  #not there, try to download it
  GEN_URL=${BASE_URL}/${GEN_BASENAME}/${GEN_VERSION}/${GEN_NAME}
  echo "-- generator ${GEN_NAME} not found locally"
  echo "-- trying to download it from Artifactory..."
  echo "-- ${GEN_URL}"
  wget -nv ${GEN_URL} -P ${FILE_DIR}
  WGET_RES=$?
  if [ ${WGET_RES} -eq 6 ]; then
    echo "-- Please provide your credentials:"
    wget -nv --user=${USER} --ask-password ${GEN_URL} -P ${FILE_DIR}
    WGET_RES=$?
  fi
  if [ ${WGET_RES} -ne 0 ]; then
    echo "-- Download failed with return code ${WGET_RES}. Aborting ..."
    exit ${WGET_RES}
  fi
else
  echo "-- generator ${GEN_NAME} found, using local copy"
fi

if [ -e ${GEN_OUTPUT_DIR} ]; then
  echo "-- cleaning output directory: ${GEN_OUTPUT_DIR}"
  rm -rf ${GEN_OUTPUT_DIR}
fi
mkdir -p ${GEN_OUTPUT_DIR}

POST_PROCESSING=0
if [ -f ${GEN_JAR} ]; then
  if [[ "${JAVA_EXE}" ]]; then
    if [[ "$@" == "" ]]; then
      POST_PROCESSING=1
      ${JAVA_EXE} -jar ${GEN_JAR} -D "${GEN_MODEL_TARGET_ELEMENT}" -p "${GEN_OUTPUT_DIR}" -c "${COPYRIGHT_FILE}" ${GEN_MODEL_FILE}
    else
      ${JAVA_EXE} -jar ${GEN_JAR} "$@"
    fi
    RESULT=$?
  fi
else
  echo "Generator not there. Download failed." >&2
  RESULT=1
fi

if (( POST_PROCESSING && ! RESULT )); then
  if [ -e ${GEN_OUTPUT_DIR} ]; then
    echo "Post process generated files"
    # adapt generated files
    process_and_copy_generated_files "${GEN_OUTPUT_DIR}/rss_module"
  fi
fi

exit $RESULT
