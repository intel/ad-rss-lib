#!/bin/bash

# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (c) 2019-2020 Intel Corporation
#
# SPDX-License-Identifier: LGPL-2.1-only
#
# ----------------- END LICENSE BLOCK -----------------------------------
##
BUILD_DIR=build/ad_rss
SRC_DIR=ad_rss
PACKAGE_NAME=ad-rss-lib

lcov -q -i -c -d ${BUILD_DIR} -b ${SRC_DIR} --no-external -o initialCoverage.info
lcov -q -c -d ${BUILD_DIR} -b ${SRC_DIR} --no-external -o testCoverage.info --rc lcov_branch_coverage=1
lcov -q -a initialCoverage.info -a testCoverage.info -o coverage.info --rc lcov_branch_coverage=1
lcov -q -r coverage.info "impl/test*" -o coverage.info --rc lcov_branch_coverage=1
grep -v -E 'D0Ev|D1Ev|C1Ev|C1Eb' coverage.info > cleanedCoverage.info
lcov --summary cleanedCoverage.info --rc lcov_branch_coverage=1
genhtml -q -t ${PACKAGE_NAME} -p ${SRC_DIR} --branch-coverage -o coverage cleanedCoverage.info              
bash <(curl -s https://codecov.io/bash) -f cleanedCoverage.info || echo "Codecov did not collect coverage reports"

