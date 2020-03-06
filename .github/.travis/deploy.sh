#!/bin/bash

# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (c) 2019-2020 Intel Corporation
#
# SPDX-License-Identifier: LGPL-2.1-only
#
# ----------------- END LICENSE BLOCK -----------------------------------
##

git clone --quiet --branch=gh-pages https://${GITHUB_TOKEN}@github.com/intel/ad-rss-lib.git gh-pages > /dev/null 2>&1
cd gh-pages

mkdir -p doxygen/ad_rss/
mkdir -p doxygen/ad_rss_map_integration/
mkdir coverage
cp -r ../coverage/* coverage/.
cp -r ../build/ad_rss/apidoc/html/* doxygen/ad_rss/.
cp -r ../build/ad_rss_map_integration/apidoc/html/* doxygen/ad_rss_map_integration/.
cp -r ../site/* .

git add -f .
git status

git commit -am "Update documentation" --no-edit
git remote add origin-pages https://${GITHUB_TOKEN}@github.com/intel/ad-rss-lib.git > /dev/null 2>&1

if [ "$1" = true ]; then
  git push --set-upstream origin-pages gh-pages
else
  echo "Only testing mode - No deployment"
fi
