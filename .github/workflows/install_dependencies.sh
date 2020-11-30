#!/bin/bash

sudo add-apt-repository ppa:ubuntu-toolchain-r/test
sudo apt-get update
sudo apt-get install -y --no-install-recommends build-essential castxml cmake libboost-all-dev libgtest-dev liblapacke-dev libopenblas-dev libproj-dev libpugixml-dev libpython3-dev python python-setuptools python-pip python-wheel python3 python3-setuptools python3-pip python3-wheel
sudo pip3 install --upgrade setuptools
sudo pip2 install --upgrade setuptools==41.1.0
sudo pip3 install colcon-common-extensions xmlrunner
sudo pip2 install pygccxml pyplusplus xmlrunner
