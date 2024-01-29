#!/bin/bash

BOOST_VERSION="$1"
BOOST_PACKAGE="boost_${BOOST_VERSION//./_}"
ROOT_DIR="$PWD"


if [[ "${PYTHON_BINDING_VERSION}" == "3.10" ]]; then

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

fi

# create colon_boost.meta
touch colcon_boost.meta
