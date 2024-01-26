#!/bin/bash

python3_pkgs="libpython3-dev python3 python3-pip python3-setuptools python3-wheel python-is-python3"
other_pkgs="build-essential castxml cmake libboost-all-dev libgtest-dev liblapacke-dev libopenblas-dev libpugixml-dev sqlite3"

sudo apt-get update
sudo apt-get install -y lsb-core
sudo apt-get install -y --no-install-recommends ${other_pkgs} ${python3_pkgs}

sudo pip3 install colcon-common-extensions xmlrunner pygccxml pyplusplus
sudo pip3 install --upgrade setuptools==59.6.0
