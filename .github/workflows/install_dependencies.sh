#!/bin/bash

python3_pkgs="libpython3-dev python3 python3-pip python3-setuptools python3-wheel"
python2_pkgs="libpython-dev python python-pip python-wheel python-setuptools"
other_pkgs="build-essential castxml cmake libboost-all-dev libgtest-dev liblapacke-dev libopenblas-dev libpugixml-dev sqlite3"

sudo apt-get update
sudo apt-get install -y lsb-core

if [ `lsb_release -a | grep Release | grep 18.04 | wc -l` == 1 ]; then
  sudo add-apt-repository ppa:ubuntu-toolchain-r/test
fi

sudo apt-get update
sudo apt-get install -y --no-install-recommends ${other_pkgs} ${python3_pkgs}

sudo pip3 install --upgrade setuptools==51.1.2
sudo pip3 install colcon-common-extensions xmlrunner pygccxml pyplusplus

if [ `lsb_release -a | grep Release | grep 18.04 | wc -l` == 1 ]; then
  sudo apt-get install -y --no-install-recommends ${python2_pkgs}
  sudo pip2 install --upgrade setuptools==41.1.0
  sudo pip2 install pygccxml==2.2.1 pyplusplus==1.8.4 xmlrunner
else
  sudo apt-get install -y --no-install-recommends "python-is-python3"
fi

