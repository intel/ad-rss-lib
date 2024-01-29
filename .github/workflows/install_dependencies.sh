#!/bin/bash

BOOST_PACKAGE="boost_${BOOST_VERSION//./_}"
ROOT_DIR="$PWD"

sudo apt-get update
sudo apt-get install -y lsb-core
sudo apt-get install -y --no-install-recommends build-essential castxml cmake libboost-all-dev libgtest-dev liblapacke-dev libopenblas-dev libpugixml-dev sqlite3

COMPILE_BOOST=0

if [ "${BOOST_VERSION}" != "" -a `lsb_release -a | grep Release | grep 20.04 | wc -l` == 1 -a "${PYTHON_BINDING_VERSION}" == "3.10" ]; then
  sudo add-apt-repository ppa:deadsnakes/ppa -y
  sudo apt-get update
  COMPILE_BOOST=1
  sudo apt-get install -y --no-install-recommends python${PYTHON_BINDING_VERSION}-full
else
  sudo apt-get install -y --no-install-recommends python${PYTHON_BINDING_VERSION}
fi

sudo apt-get install -y --no-install-recommends python-is-python3 python${PYTHON_BINDING_VERSION}-dev libpython${PYTHON_BINDING_VERSION}-dev
curl -sS https://bootstrap.pypa.io/get-pip.py | sudo python${PYTHON_BINDING_VERSION}
#sudo python${PYTHON_BINDING_VERSION} -m pip install --upgrade pip
sudo pip${PYTHON_BINDING_VERSION} install --upgrade setuptools==59.6.0
sudo pip${PYTHON_BINDING_VERSION} install python-wheel
sudo pip${PYTHON_BINDING_VERSION} install colcon-common-extensions xmlrunner pygccxml pyplusplus

if (( COMPILE_BOOST )); then
  pushd dependencies
  wget "https://boostorg.jfrog.io/artifactory/main/release/${BOOST_VERSION}/source/${BOOST_PACKAGE}.tar.gz"
  tar -xzf ${BOOST_PACKAGE}.tar.gz
  pushd ${BOOST_PACKAGE}

  py3="/usr/bin/env python${PYTHON_BINDING_VERSION}"
  py3_root=`${py3} -c "import sys; print(sys.prefix)"`
  pyv=`$py3 -c "import sys;x='{v[0]}.{v[1]}'.format(v=list(sys.version_info[:2]));sys.stdout.write(x)";`

  ./bootstrap.sh \
    --prefix=${ROOT_DIR}/install/boost
    --with-libraries=python,filesystem,system,program_options \
                  --with-python=${py3} --with-python-root=${py3_root}

  ./b2 --prefix="${ROOT_DIR}/install/boost" cxxflags="-fPIC" -j 10 stage release
  ./b2 --prefix="${ROOT_DIR}/install/boost" cxxflags="-fPIC" -j 10 install

  popd
  popd

  cat >colcon_boost.meta <<EOF
{
    "names": {
        "ad_physics": {
            "cmake-args": ["-DCMAKE_MODULE_PATH=${ROOT_DIR}/install/boost;${CMAKE_MODULE_PATH}"]
        },
        "ad_map_opendrive_reader": {
            "cmake-args": ["-DCMAKE_MODULE_PATH=${ROOT_DIR}/install/boost;${CMAKE_MODULE_PATH}"]
        },
        "ad_map_access": {
            "cmake-args": ["-DCMAKE_MODULE_PATH=${ROOT_DIR}/install/boost;${CMAKE_MODULE_PATH}"]
        },
        "ad_rss": {
            "cmake-args": ["-DCMAKE_MODULE_PATH=${ROOT_DIR}/install/boost;${CMAKE_MODULE_PATH}"]
        },
        "ad_rss_map_integration": {
            "cmake-args": ["-DCMAKE_MODULE_PATH=${ROOT_DIR}/install/boost;${CMAKE_MODULE_PATH}"]
        }
    }
}
EOF
else

  # ensure colon_boost.meta exists
  touch colcon_boost.meta
fi
