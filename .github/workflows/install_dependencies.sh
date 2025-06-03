#!/bin/bash

sudo apt-get update
sudo apt-get install -y lsb-core
sudo apt-get install -y --no-install-recommends build-essential castxml cmake libgtest-dev liblapacke-dev libopenblas-dev libpugixml-dev sqlite3

IS_PYTHON_3_10=0
echo "!!!!!!! Python version: ${PYTHON_BINDING_VERSION} !!!!!!!"
if [ "${PYTHON_BINDING_VERSION}" == "3.10" ]; then
  echo "!!!!!!! Python version is 3.10 detected !!!!!!!"
  IS_PYTHON_3_10=1
fi

if [ `lsb_release -a | grep Release | grep "22.04" | wc -l` == 1 ]; then
  if [ "${PYTHON_BINDING_VERSION}" == "" ]; then
    echo "!!!!!!! Setting default python version for Ubuntu22.04 !!!!!!!"
    IS_PYTHON_3_10=1
    PYTHON_BINDING_VERSION="3.10"
  fi
fi

if (( IS_PYTHON_3_10==0 )); then
  echo "!!!!!!! Not python 3.10: install python${PYTHON_BINDING_VERSION} and boost !!!!!!!"
  sudo apt-get install -y --no-install-recommends python${PYTHON_BINDING_VERSION}
  sudo apt-get install -y --no-install-recommends libboost-all-dev
fi

sudo apt-get install -y --no-install-recommends python${PYTHON_BINDING_VERSION}-dev libpython${PYTHON_BINDING_VERSION}-dev
curl -sS https://bootstrap.pypa.io/get-pip.py | sudo python${PYTHON_BINDING_VERSION}

if [[ "${BUILD_DOCU}x" != "x" ]]; then
  sudo apt-get install doxygen graphviz lcov
fi

sudo apt remove python3-pygments
sudo python${PYTHON_BINDING_VERSION} -m pip install -r .github/workflows/requirements.txt
