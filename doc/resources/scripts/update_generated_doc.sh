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
INPUT_DIR=$1
if [ "$INPUT_DIR" == "" ]; then
  INPUT_DIR=$(readlink -m $PWD)
fi

# check if node is installed
node -v  > /dev/null
RESULT=$?
if (( RESULT )); then
  echo "node not installed."
else
  npm -g list | grep node-jsdom > /dev/null
  RESULT=$?
  if (( RESULT )); then
    echo "npm or node-jsdom not installed."
  fi
fi

if (( RESULT )); then
  echo "Ensure to install the required packages"
  echo ""
  echo "$> sudo apt-get install nodejs npm build-essential"
  echo "$> sudo npm install -g fs node-jsdom"
  echo ""
  echo "In case your super user has no network configuration you might want to use 'sudo -E' instead"
  echo "In case your home directory is on NFS, the npm installer fails since it want to write something there and root has no access. You might want to call:"
  echo "$> export OLDHOME=$HOME"
  echo "$> export HOME=/root"
  echo "$> cd /tmp"
  echo "before you call 'sudo npm install...'"
  echo "and reset your home directory again (or close the shell)"
  echo "$> export HOME=$OLDHOME"
  exit
fi

IMAGE_DIR=$(readlink -m ${FILE_DIR}/../../images/img)
ADOC_FOLDER=$(readlink -m ${FILE_DIR}/../../includes)

RSS_OVERVIEW_FOLDER="RSS-ArchitectureOverview"
RSS_OVERVIEW_HTML="HLD-ArchitectureOverview.html"
RSS_OVERVIEW_ADOC="HLD-ArchitectureOverview.adoc"

RSS_SWARCH_FOLDER="RSS-SwArchitecture"
RSS_SWARCH_HTML="HLD-SwArchitecture.html"
RSS_SWARCH_ADOC="HLD-SwArchitecture.adoc"

for entity in "${INPUT_DIR}"  \
                "${IMAGE_DIR}" \
                "${ADOC_FOLDER}" \
                "${INPUT_DIR}/${RSS_OVERVIEW_FOLDER}" \
                "${INPUT_DIR}/${RSS_OVERVIEW_FOLDER}/${RSS_OVERVIEW_HTML}" \
                "${INPUT_DIR}/${RSS_SWARCH_FOLDER}" \
                "${INPUT_DIR}/${RSS_SWARCH_FOLDER}/${RSS_SWARCH_HTML}" ; do

  #echo "Checking '${entity}' existing"
  if [ ! -e ${entity} ]; then
    echo "Error: Input '${entity}' not existing"
    exit
  fi
done


# update with new images
NEW_FILES=1
for file in ${INPUT_DIR}/${RSS_OVERVIEW_FOLDER}/img/*tmp ${INPUT_DIR}/${RSS_SWARCH_FOLDER}/img/*tmp; do
  if [ ! -e $file ]; then
    # only update if both paths are new since all the old images are deleted at once
    NEW_FILES=0
  fi
done
if (( NEW_FILES )); then
  # perform backup of the old images
  BACKUP_DIR=${INPUT_DIR}/backup
  if [ -e ${BACKUP_DIR} ]; then
    rm -f ${BACKUP_DIR}/*tmp
  else
    mkdir -p ${BACKUP_DIR}
  fi
  mv ${IMAGE_DIR}/*tmp ${BACKUP_DIR}

  # update with new images
  mv ${INPUT_DIR}/${RSS_OVERVIEW_FOLDER}/img/*tmp ${IMAGE_DIR}
  mv ${INPUT_DIR}/${RSS_SWARCH_FOLDER}/img/*tmp ${IMAGE_DIR}

fi

NEW_FILES=1
if (( NEW_FILES )); then
  export NODE_PATH=/usr/local/lib/node_modules/
  node ${FILE_DIR}/update_generated_doc.js "${INPUT_DIR}/${RSS_OVERVIEW_FOLDER}/${RSS_OVERVIEW_HTML}" "${ADOC_FOLDER}/${RSS_OVERVIEW_ADOC}"
  node ${FILE_DIR}/update_generated_doc.js "${INPUT_DIR}/${RSS_SWARCH_FOLDER}/${RSS_SWARCH_HTML}" "${ADOC_FOLDER}/${RSS_SWARCH_ADOC}"
fi
