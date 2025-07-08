#!/bin/bash

install_boost() {
  if ((IS_DEFAULT_PYTHON_VERSION)); then
    echo "!!!!!!! The default python version $(which python${PYTHON_BINDING_VERSION}): install system boost !!!!!!!"
    sudo apt-get install -y --no-install-recommends libboost-all-dev
  else
    echo "!!!!!!! Not the default python version $(which python${PYTHON_BINDING_VERSION}): compile boost 1.83 !!!!!!!"
    pushd dependencies

    BOOST_VERSION=1.83.0
    BOOST_PACKAGE_BASENAME=boost_${BOOST_VERSION//./_}
    wget "https://archives.boost.io/release/${BOOST_VERSION}/source/${BOOST_PACKAGE_BASENAME}.tar.gz"

    tar -xzf ${BOOST_PACKAGE_BASENAME}.tar.gz
    pushd ${BOOST_PACKAGE_BASENAME}

    py3=`which python${PYTHON_BINDING_VERSION}`
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

    # the python headers were installed via system and not by the virtual environment
    ./b2 --prefix="/usr" cxxflags="-fPIC -I/usr/include/python${PYTHON_BINDING_VERSION}" -j 10 stage release
    sudo ./b2 --prefix="/usr" cxxflags="-fPIC -I/usr/include/python${PYTHON_BINDING_VERSION}" -j 10 install

    # ensure our colcon build process ignores boost sources
    touch COLCON_IGNORE

    popd
  fi
}

IS_DEFAULT_PYTHON_VERSION=1
if [ `lsb_release -a | grep Release | grep "22.04" | wc -l` == 1 ]; then
  if [ "${PYTHON_BINDING_VERSION}" == "" ]; then
    echo "!!!!!!! Setting default python version for Ubuntu22.04 !!!!!!!"
    PYTHON_BINDING_VERSION="3.10"
  elif [ "${PYTHON_BINDING_VERSION}" != "3.10" ]; then
    IS_DEFAULT_PYTHON_VERSION=0
  fi
fi

if [ `lsb_release -a | grep Release | grep "24.04" | wc -l` == 1 ]; then
  if [ "${PYTHON_BINDING_VERSION}" == "" ]; then
    echo "!!!!!!! Setting default python version for Ubuntu24.04 !!!!!!!"
    PYTHON_BINDING_VERSION="3.12"
  elif [ "${PYTHON_BINDING_VERSION}" != "3.12" ]; then
    IS_DEFAULT_PYTHON_VERSION=0
  fi
fi

echo "!!!!!!! Python version: ${PYTHON_BINDING_VERSION} !!!!!!!"

if ((! IS_DEFAULT_PYTHON_VERSION)); then
  sudo add-apt-repository ppa:deadsnakes/ppa
fi

sudo apt-get update

sudo apt-get install -y lsb-core
sudo apt-get install -y --no-install-recommends build-essential castxml cmake sqlite3 libgtest-dev libpugixml-dev liblapacke-dev libtbb-dev libspdlog-dev



sudo apt-get install -y --no-install-recommends python${PYTHON_BINDING_VERSION}-dev python${PYTHON_BINDING_VERSION}-venv libpython${PYTHON_BINDING_VERSION}-dev

if [[ "${BUILD_DOCU}x" != "x" ]]; then
  sudo apt-get install doxygen graphviz lcov
fi

sudo apt remove python3-pygments

echo "creating virtual python${PYTHON_BINDING_VERSION} environment at $PWD/ad-rss-build-venv"
export PYTHONNOUSERSITE=1
python${PYTHON_BINDING_VERSION} -m venv ad-rss-build-venv
source ad-rss-build-venv/bin/activate && \
echo "activating virtual environment at $(which python${PYTHON_BINDING_VERSION})" && \
curl -sS https://bootstrap.pypa.io/get-pip.py | python${PYTHON_BINDING_VERSION}  && \
python${PYTHON_BINDING_VERSION} -m pip install -r .github/workflows/requirements.txt && \
install_boost
