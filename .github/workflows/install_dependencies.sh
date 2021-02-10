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
sudo pip3 install --upgrade six>=1.11.0 Markdown==3.2.1 mkdocs markdown-include pymdown-extensions pygments mdx_truly_sane_lists
sudo pip3 install colcon-common-extensions xmlrunner

if [ `lsb_release -a | grep Release | grep 20.04 | wc -l` == 1 ]; then
  sudo pip3 install pygccxml pyplusplus
else
  sudo pip2 install --upgrade setuptools==41.1.0
  sudo pip2 install pygccxml pyplusplus xmlrunner
fi



