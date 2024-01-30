#!/bin/bash

BOOST_PACKAGE="boost_${BOOST_VERSION//./_}"
ROOT_DIR="$PWD"

sudo apt-get update
sudo apt-get install -y lsb-core
sudo apt-get install -y --no-install-recommends build-essential castxml cmake libgtest-dev liblapacke-dev libopenblas-dev libpugixml-dev sqlite3

COMPILE_BOOST=0

function is_ubuntu_version() {
  return `lsb_release -a | grep Release | grep "$1" | wc -l` == 1
}

function is_python_version() {
  return "${PYTHON_BINDING_VERSION}" == "$1"
}

if [ is_ubuntu_version("20.04") ]; then
  sudo apt autoremove python2 -y
  sudo apt-get install -y --no-install-recommends python-is-python3
fi

if [ is_ubuntu_version("20.04") -a is_python_version("3.10") ]; then
  sudo add-apt-repository ppa:deadsnakes/ppa -y
  sudo apt-get update
  sudo apt-get install -y --no-install-recommends python${PYTHON_BINDING_VERSION}-full
  sudo update-alternatives --install /usr/bin/python python /usr/bin/python3.10 10
  COMPILE_BOOST=1
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

if (( COMPILE_BOOST )); then
  pushd dependencies
  wget "https://boostorg.jfrog.io/artifactory/main/release/${BOOST_VERSION}/source/${BOOST_PACKAGE}.tar.gz"
  tar -xzf ${BOOST_PACKAGE}.tar.gz
  pushd ${BOOST_PACKAGE}

  py3=`which python3.10`
  py3_root=`${py3} -c "import sys; print(sys.prefix)"`
  pyv=`$py3 -c "import sys;x='{v[0]}.{v[1]}'.format(v=list(sys.version_info[:2]));sys.stdout.write(x)";`

  ./bootstrap.sh \
    --prefix="/usr" \
    --with-libraries=python,filesystem,system,program_options \
    --with-python=${py3} --with-python-version=${pyv} --with-python-root=${py3_root}

  ./b2 --prefix="/usr" cxxflags="-fPIC" -j 10 stage release
  sudo ./b2 --prefix="/usr" cxxflags="-fPIC" -j 10 install

  popd
  popd

fi
