#!/bin/bash

mkdir build
cd build

if [ "$1" == "release" ]; then
  cmake .. -DBUILD_HARDENING=ON -DBUILD_COVERAGE=ON
elif [ "$1" == "debug" ]; then
  cmake .. -DBUILD_HARDENING=ON -DBUILD_COVERAGE=ON -DCMAKE_BUILD_TYPE=DEBUG
else
  echo "Unsupported mode"
  exit 1
fi

make

if [ "$2" == "test" ]; then
  ctest -V
fi

cd ..


