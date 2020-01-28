# General build instructions

## Dependencies
The components within this repository have some dependencies:

 - **ad_rss**:
   - ad_physics: <https://github.com/carla-simulator/map.git>
   - spdlog: <https://github.com/gabime/spdlog.git>
   - **ad_rss_python** (if Python binding build enabled):
     - Python lib
     - castxml, pygccxml and py++
 - **ad_rss_map_integration**:
   - *ad_rss*
   - ad_map_access: <https://github.com/carla-simulator/map.git>
   - spdlog: <https://github.com/gabime/spdlog.git>
   - **ad_rss_map_integration_python** (if Python binding build enabled):
     - ad_map_access_python: <https://github.com/carla-simulator/map.git>
     - ad_physics_python: <https://github.com/carla-simulator/map.git>
     - Python lib
     - castxml, pygccxml and py++

 - ***all components when enabling unit tests***:
   - gtest aka. googletests < 1.10 : <https://github.com/google/googletest>

Dependencies provided by Ubunutu (>= 16.04):

 - gtest
 - libpython-dev

Those can be installed by calling:
```bash
$>  sudo apt-get install libgtest-dev libpython-dev
```

Additional dependencies for the python bindings:
```bash
$>  sudo apt-get install castxml
$>  pip install --user pygccxml
$>  pip install --user https://bitbucket.org/ompl/pyplusplus/get/1.8.1.zip
```

Remaining dependencies:

 - ad_map_access
 - ad_physics
 - spdlog

## Building all libraries
For compiling all libraries (and potentially also some dependencies), it is suggested to use [colcon](https://colcon.readthedocs.io/).
Please use the link above for installation instructions.

This repository is prepared as colcon workspace including all dependencies not provided as installable packages by the OS.
Those dependencies are part of the __dependencies__ folder as GIT submodules. To properly fetch these, the submodules have to be updated and initialized.
```bash
 ad_rss$>  git submodule update --init
```
Once this is done, the full set of dependencies and components can be built calling:
```bash
 ad_rss$> colcon build
```
All components will be compiled respecting the dependencies between them.

There are some CMake options affecting what or how the components are built.
These can be applied to all components by appending them to the call (together with the additional --cmake-args):
```bash
 ad_rss$> colcon build --cmake-args -DBUILD_TESTING=ON
```
When activating the Unit tests, they all can be executed with:
```bash
 ad_rss$> colcon test
```

The python bindings are disable by default. To integrate them into the build you can make use of the prepared
colcon meta file:
```bash
 ad_rss$> colcon build --metas colcon_python.meta
```

## Building a single library
The ad_rss (same applies to the other libraries) library is built with a standard cmake toolchain. Simply run the following commands to build the library:
```bash
 ad_rss$> mkdir build
 ad_rss$> cd build
 build$>  cmake ..
 build$>  make
```

## CMake options
There are some build options available:

 - BUILD_TESTING: Enables unit tests compilation
 - BUILD_APIDOC: Enables API documentation building
 - BUILD_HARDENING: Enables hardening compiler and linker flags
 - BUILD_PYTHON_BINDING: Enables the build of the respective python bindings

By default, all options are set to off. Any of these could be activate by adding them to the initial cmake call above as "-D<OPTION>=[ON|OFF]",
e.g. "-DBUILD_TESTING=ON -DBUILD_APIDOC=ON".

#### Unit tests
When BUILD_TESTING is enabled, the "make" call will automatically compile the Unit tests.
They can be executed using CMake's ctest application.
```bash
 build$>  cmake -DBUILD_TESTING=ON ..
 build$>  make
 build$>  ctest
```
#### API documentation
When BUILD_APIDOC is enabled, the "make" call will automatically generate the API documentation.
```bash
 build$>  cmake -BUILD_APIDOC=ON ..
 build$>  make
```
The API documentation is written to the _apidoc_ folder within the _build_ directory.

#### Build hardening
Usually, build hardening is injected by the surrounding build system. Nevertheless, the CMakeLists.txt defines
hardening flags to ensure the code is compatible to respective flags. To enable hardening compiler and linker flags:
```bash
 build$>  cmake -DBUILD_HARDENING=ON ..
 build$>  make
```

#### Python binding
With this option enabled, Python bindings are generated and compiled. This option is disabled by default.
```bash
 build$>  cmake -DBUILD_PYTHON_BINDING=ON ..
 build$>  make
```
