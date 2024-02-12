#!/bin/bash

# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (c) 2019-2020 Intel Corporation
#
# SPDX-License-Identifier: LGPL-2.1-only
#
# ----------------- END LICENSE BLOCK -----------------------------------
##


get_coverage() {
    BUILD_DIR=$1
    SRC_DIR=$2
    PACKAGE_NAME=$3
    lcov -q -i -c -d ${BUILD_DIR} -b ${SRC_DIR} --no-external -o initialCoverage_${PACKAGE_NAME}.info
    lcov -q -c -d ${BUILD_DIR} -b ${SRC_DIR} --no-external -o testCoverage_${PACKAGE_NAME}.info --rc lcov_branch_coverage=1
    lcov -q -a initialCoverage_${PACKAGE_NAME}.info -a testCoverage_${PACKAGE_NAME}.info -o coverage_${PACKAGE_NAME}.info --rc lcov_branch_coverage=1
    lcov -q -r coverage_${PACKAGE_NAME}.info "impl/test*" -o coverage_${PACKAGE_NAME}.info --rc lcov_branch_coverage=1
    grep -v -E 'D0Ev|D1Ev|C1Ev|C1Eb' coverage_${PACKAGE_NAME}.info > cleanedCoverage_${PACKAGE_NAME}.info
    lcov --summary cleanedCoverage_${PACKAGE_NAME}.info --rc lcov_branch_coverage=1
    genhtml -t ${PACKAGE_NAME} -p ${PWD}/${SRC_DIR} --branch-coverage -o coverage/${SRC_DIR} cleanedCoverage_${PACKAGE_NAME}.info
    bash <(curl -s https://codecov.io/bash) -f cleanedCoverage_${PACKAGE_NAME}.info || echo "Codecov did not collect coverage reports"
}

get_coverage build/ad_rss ad_rss ad_rss
get_coverage build/ad_rss_map_integration ad_rss_map_integration ad_rss_map_integration
