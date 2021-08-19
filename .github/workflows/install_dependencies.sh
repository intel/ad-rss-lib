#!/bin/bash

sudo add-apt-repository ppa:ubuntu-toolchain-r/test
sudo apt-get update
sudo apt-get install -y --no-install-recommends build-essential castxml cmake libboost-all-dev libgtest-dev liblapacke-dev libopenblas-dev libproj-dev libpugixml-dev libpython3-dev python python-setuptools python3 python3-pip python3-setuptools python3-wheel

if [ `lsb_release -a | grep Release | grep 20.04 | wc -l` == 1 ]; then
  sudo apt-get install -y --no-install-recommends python-is-python3
else
  sudo apt-get install -y --no-install-recommends python-pip python-wheel
fi
sudo pip3 install --upgrade setuptools==51.1.2
sudo pip3 install colcon-common-extensions xmlrunner pygccxml pyplusplus

if [ `lsb_release -a | grep Release | grep 20.04 | wc -l` != 1 ]; then
  sudo pip2 install --upgrade setuptools==41.1.0
  sudo pip2 install pygccxml pyplusplus xmlrunner
fi
