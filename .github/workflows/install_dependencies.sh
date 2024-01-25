#!/bin/bash

python_native_pkgs="libpython3-dev python3 python3-pip python3-setuptools python3-wheel"
other_pkgs="build-essential castxml cmake libboost-all-dev libgtest-dev liblapacke-dev libopenblas-dev libpugixml-dev sqlite3"

sudo apt-get update
sudo apt-get install -y lsb-core
sudo apt-get install -y --no-install-recommends ${other_pkgs} ${python3_pkgs}

sudo pip3 install colcon-common-extensions xmlrunner pygccxml pyplusplus

if [ `lsb_release -a | grep Release | grep 22.04 | wc -l` == 1 ]; then
  sudo add-apt-repository ppa:deadsnakes/ppa
  sudo apt-get update
  sudo apt-get install -y python3.8-full libpython3.8-dev python3.8-dev
  sudo python3.8 -m pip install --upgrade pip
  sudo pip3.8 install colcon-common-extensions xmlrunner pygccxml pyplusplus
  sudo pip3.8 install --upgrade setuptools==59.6.0
  sudo pip3.8 install python3.8-wheel

  sudo pip3 install --upgrade setuptools==59.6.0
else
  sudo pip3 install --upgrade setuptools==51.1.2
  sudo apt-get install -y --no-install-recommends "python-is-python3"
fi
