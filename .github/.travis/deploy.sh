#!/bin/bash

git checkout -b intermediate
mkdir gh-pages
mkdir gh-pages/doxygen
mkdir gh-pages/documentation
mkdir gh-pages/coverage
cp -r coverage/* gh-pages/coverage/
cp -r build/doc/apidoc/* gh-pages/doxygen
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

