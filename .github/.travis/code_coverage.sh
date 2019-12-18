#!/bin/bash

lcov -q -c -i -d build -b . --no-external -o initialCov.info
lcov -q -r initialCov.info "*CMake*CompilerId*" -o initialCov.info
lcov -q -c -d build -b . --no-external -o testCov.info --rc lcov_branch_coverage=1
lcov -q -a initialCov.info -a testCov.info -o coverage.info --rc lcov_branch_coverage=1
lcov -q -r coverage.info "*test*" -o coverage.info --rc lcov_branch_coverage=1
lcov --summary coverage.info --rc lcov_branch_coverage=1
genhtml -q -t ad-rss-lib --branch-coverage -o coverage coverage.info
bash <(curl -s https://codecov.io/bash) -f coverage.info || echo "Codecov did not collect coverage reports"

