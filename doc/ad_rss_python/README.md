# Usage of Python binding for ad-rss-lib

## Compilation of Python binding
Before the Python binding for the ad-rss-lib can be used, it has to be compiled
first. Therefore, build ad-rss-lib with the following flags:
```bash
 ad_rss$>  mkdir build && cd build/
 build$>  cmake -DBUILD_PYTHON_BINDING=1 ..
 build$>  make
```
Please note that this requires python, boost and boost-python to be installed.
On Ubuntu systems the dependencies can be installed via
```bash
 ad_rss$> sudo apt-get install libboost-python-dev
```

This will create a libad_rss_python.so shared library inside the build/python
folder. The shared library can now be used inside any Python code to use
datatypes or call methods defined in ad-rss-lib.

## Usage of Python binding
To use the compiled Python binding, one has to extend the current environment
to be able to use the newly created library. Afterwards, one can import the
Python library as module and use it as any other Python module.
```bash
 ad_rss$>  export PYTHONPATH=$PYTHONPATH:<path/to/>build/python
 ad_rss$>  python
 >>> import libad_rss_python as rss
 >>> distance = rss.Distance(2.0)
 >>> print(float(distance))
```

## Regeneration of PythonWrapper code
Upon changing parts of the ad-rss-lib C++ source code, it may be required to
regenerate the Python wrapper code used for the binding. Therefore, the
PythonWrapper.cpp inside the python folder has to be recreated. To do so, the
python script `generate_python_lib.py` should be used, which requires castxml,
pygccxml and py++ to be installed:
```bash
 ad_rss$>  sudo apt-get install castxml
 ad_rss$>  pip install --user pygccxml
 ad_rss$>  pip install --user https://bitbucket.org/ompl/pyplusplus/get/1.8.1.zip
```

Afterwards, the resulting PythonWrapper.cpp may require some manual tweaking
(see [KnownLimitations](#known-limitations))

## Known Limitations
* After regeneration of PythonWrapper.cpp the following manual tweaks may be
required. We recommend to use a diff-tool to merge the updates with the
original PythonWrapper code.
  - Fix namespaces of enums (e.g.: ad_rss::physics::Longitudinal --> ad_rss::physics::CoordinateSystemAxis::Longitudinal)
  - Remove `withinValidInputRange` wrappers
  - Add wrappers for std::vectors
* Not all vector datatypes may have adequate wrappers. This will become
evident, if you see the following error:
```bash
No Python class registered for C++ class std::vector<...>
```
