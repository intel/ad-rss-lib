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

IS_UBUNTU_20_04=0
if [ `lsb_release -a | grep Release | grep "20.04" | wc -l` == 1 ]; then
  echo "!!!!!!! Ubuntu 20.04: remove python2 !!!!!!!"
  sudo apt autoremove python2 python2-dev -y
  IS_UBUNTU_20_04=1
fi

if (( IS_UBUNTU_20_04 && IS_PYTHON_3_10 )); then
  echo "!!!!!!! Ubunut 20.04 and python 3.10: install python 3.10 and remove boost !!!!!!!"
  sudo add-apt-repository ppa:deadsnakes/ppa -y
  sudo apt-get update
  sudo apt-get install -y --no-install-recommends python${PYTHON_BINDING_VERSION}-full
  sudo update-alternatives --install /usr/bin/python python /usr/bin/python3.10 10
  sudo apt autoremove libboost-all-dev -y
else
  echo "!!!!!!! Not Ubuntu 20.04 or not python 3.10: install python${PYTHON_BINDING_VERSION} and boost !!!!!!!"
  sudo apt-get install -y --no-install-recommends python${PYTHON_BINDING_VERSION}
  sudo apt-get install -y --no-install-recommends libboost-all-dev
fi

sudo apt-get install -y --no-install-recommends python${PYTHON_BINDING_VERSION}-dev libpython${PYTHON_BINDING_VERSION}-dev
curl -sS https://bootstrap.pypa.io/get-pip.py | sudo python${PYTHON_BINDING_VERSION}

# to handle some error on missing pip dependencies
sudo pip${PYTHON_BINDING_VERSION} install testresources
sudo pip${PYTHON_BINDING_VERSION} install --upgrade setuptools==59.6.0
sudo pip${PYTHON_BINDING_VERSION} install colcon-common-extensions xmlrunner pygccxml pyplusplus

if (( IS_UBUNTU_20_04 && IS_PYTHON_3_10 )); then
  echo "!!!!!!! Ubunut 20.04 and python 3.10: compile boost 1.80 !!!!!!!"
  pushd dependencies

  BOOST_VERSION=1.78.0
  BOOST_PACKAGE_BASENAME=boost_${BOOST_VERSION//./_}
  wget "https://boostorg.jfrog.io/artifactory/main/release/${BOOST_VERSION}/source/${BOOST_PACKAGE_BASENAME}.tar.gz"
  
  tar -xzf ${BOOST_PACKAGE_BASENAME}.tar.gz
  pushd ${BOOST_PACKAGE_BASENAME}

  py3=`which python3.10`
  py3_root=`${py3} -c "import sys; print(sys.prefix)"`
  pyv=`$py3 -c "import sys;x='{v[0]}.{v[1]}'.format(v=list(sys.version_info[:2]));sys.stdout.write(x)";`

  ./bootstrap.sh \
    --prefix="/usr" \
    --with-libraries=python,filesystem,system,program_options \
    --with-python=${py3} --with-python-version=${pyv} --with-python-root=${py3_root}
  if (( $? )); then
    echo "!!!!!!! boost bootstrap failed !!!!!!!"
    cat bootstrap.log
  fi
  
  ./b2 --prefix="/usr" cxxflags="-fPIC" -j 10 stage release
  sudo ./b2 --prefix="/usr" cxxflags="-fPIC" -j 10 install

  # ensure our colcon build process ignores boost sources
  touch COLCON_IGNORE

  popd
  popd

fi
