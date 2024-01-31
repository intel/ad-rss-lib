#!/bin/bash

sudo apt-get update
sudo apt-get install -y lsb-core
sudo apt-get install -y --no-install-recommends build-essential castxml cmake libgtest-dev liblapacke-dev libopenblas-dev libpugixml-dev sqlite3

if [ `lsb_release -a | grep Release | grep "20.04" | wc -l` == 1 ]; then
  sudo apt autoremove python2 -y
  sudo apt-get install -y --no-install-recommends python-is-python3
fi

if  [ `lsb_release -a | grep Release | grep "20.04" | wc -l` == 1 -a "${PYTHON_BINDING_VERSION}" == "3.10" ]; then
  sudo add-apt-repository ppa:deadsnakes/ppa -y
  sudo apt-get update
  sudo apt-get install -y --no-install-recommends python${PYTHON_BINDING_VERSION}-full
  sudo update-alternatives --install /usr/bin/python python /usr/bin/python3.10 10
  sudo apt autoremove libboost-all-dev -y
else
  sudo apt-get install -y --no-install-recommends python${PYTHON_BINDING_VERSION}
  sudo apt-get install -y --no-install-recommends libboost-all-dev
fi

sudo apt-get install -y --no-install-recommends python${PYTHON_BINDING_VERSION}-dev libpython${PYTHON_BINDING_VERSION}-dev
curl -sS https://bootstrap.pypa.io/get-pip.py | sudo python${PYTHON_BINDING_VERSION}

# to handle some error on missing pip dependencies
sudo pip${PYTHON_BINDING_VERSION} install testresources
sudo pip${PYTHON_BINDING_VERSION} install --upgrade setuptools==59.6.0
sudo pip${PYTHON_BINDING_VERSION} install colcon-common-extensions xmlrunner pygccxml pyplusplus

if [ `lsb_release -a | grep Release | grep "20.04" | wc -l` == 1 -a "${PYTHON_BINDING_VERSION}" == "3.10" ]; then
  pushd dependencies

  # boost 1.71 needs some patches for python3.10
  sudo add-apt-repository ppa:savoury1/boost-defaults-1.71
  # uncomment source packages
  sudo sed -i -e "s/# //" /etc/apt/sources.list.d/savoury1-ubuntu-boost-defaults-1_71-focal.list
  sudo apt update
  sudo apt-get source boost1.71=1.71.0-6ubuntu6+20.04.sav0
  pushd boost1.71-1.71.0

  py3=`which python3.10`
  py3_root=`${py3} -c "import sys; print(sys.prefix)"`
  pyv=`$py3 -c "import sys;x='{v[0]}.{v[1]}'.format(v=list(sys.version_info[:2]));sys.stdout.write(x)";`

  sudo ./bootstrap.sh \
    --prefix="/usr" \
    --with-libraries=python,filesystem,system,program_options \
    --with-python=${py3} --with-python-version=${pyv} --with-python-root=${py3_root}

  sudo ./b2 --prefix="/usr" cxxflags="-fPIC" -j 10 stage release
  sudo ./b2 --prefix="/usr" cxxflags="-fPIC" -j 10 install

  # ensure our colcon build process ignores boost sources
  sudo touch COLCON_IGNORE

  popd
  popd

fi
