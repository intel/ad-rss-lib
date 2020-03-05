#!/bin/bash

# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (c) 2019-2020 Intel Corporation
#
# SPDX-License-Identifier: LGPL-2.1-only
#
# ----------------- END LICENSE BLOCK -----------------------------------
##

git checkout -b intermediate
mkdir gh-pages
mkdir -p gh-pages/doxygen/ad_rss/
mkdir -p gh-pages/doxygen/ad_rss_map_integration/
mkdir gh-pages/documentation
mkdir gh-pages/coverage
cp -r coverage/* gh-pages/coverage/
cp -r build/ad_rss/apidoc/html/* gh-pages/doxygen/ad_rss/
cp -r build/ad_rss_map_integration/apidoc/html/* gh-pages/doxygen/ad_rss_map_integration/
cp -r site/* gh-pages/
git add gh-pages/
git commit -m "Dummy commit" --no-edit
git clean -fd
git checkout origin/gh-pages
git checkout -b gh-pages
git checkout intermediate gh-pages/
cp -r gh-pages/* .
rm -rf gh-pages/ build/
git add .
git commit -am "Update documentation" --no-edit
git remote add origin-pages https://${GITHUB_TOKEN}@github.com/intel/ad-rss-lib.git > /dev/null 2>&1
git push --set-upstream origin-pages gh-pages

