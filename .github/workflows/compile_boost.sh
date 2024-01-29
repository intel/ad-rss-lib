#!/bin/bash

BOOST_VERSION="$1"
BOOST_PACKAGE="boost_${BOOST_VERSION//./_}"
ROOT_DIR="$PWD"

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
