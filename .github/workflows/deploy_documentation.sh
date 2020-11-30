#!/bin/bash

# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (c) 2019-2020 Intel Corporation
#
# SPDX-License-Identifier: LGPL-2.1-only
#
# ----------------- END LICENSE BLOCK -----------------------------------
##

mv coverage/ coverage_tmp/

git checkout origin/gh-pages
git checkout -b gh-pages


# docu website
cp -r site/* .

# apidoc
cp -r build/ad_rss/apidoc/html/* doxygen/ad_rss/.
cp -r build/ad_rss_map_integration/apidoc/html/* doxygen/ad_rss_map_integration/.

# coverage
cp -r coverage_tmp/* coverage/.

# cleanup
rm -rf site
rm -rf build
rm -rf coverage_tmp
rm -rf install
rm -rf log

# commit
git add -f .
git status

git config user.email "noemail@email.com"
git config user.name "Github Action"
git commit -am "Update documentation" --no-edit

if [ "$1" = true ]; then
  git push origin gh-pages
else
  echo "Only testing mode - No deployment"
fi
