C++ Library for Responsibility Sensitive Safety
=====

[![License](https://img.shields.io/badge/License-BSD%203--Clause-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)
![GitHub tag (latest SemVer)](https://img.shields.io/github/tag/intel/ad-rss-lib.svg)
[![Build Status](https://travis-ci.com/intel/ad-rss-lib.svg?branch=master)](https://travis-ci.com/intel/ad-rss-lib)


## Table of contents
1. [Introduction](#introduction)
2. [License](#license)
3. [Releases](#releases)
   1. [Release 1.x](#release_1)
3. [Getting Started](#started)
   1. [Supported Systems](#systems)
4. [Building the library](#building)
5. [Map Integration](#mapintegration)
6. [Contributing](#contributing)


## Introduction <a name="introduction"></a>
This library intends to provide a C++ implementation of the Responsibility Sensitive Safety model (RSS) for Autonomous Vehicles.

RSS is described in the following papers. Potential users of this C++ library are encouraged to read these papers in order to become familiar with the concepts and functions provided by the library.
- On a Formal Model of Safe and Scalable Self-driving Cars, S. Shalev-Shwartz, S. Shammah, A. Shashua, Mobileye, arXiv:1708.06374, https://arxiv.org/abs/1708.06374
- Implementing the RSS Model on NHTSA Pre-Crash Scenarios, Mobileye, July 2018, https://www.mobileye.com/responsibility-sensitive-safety/rss_on_nhtsa.pdf

The RSS module in this library receives (processed) sensor information as input and provides actuator command restrictions as output. The input to the RSS module is an object list, with information about all objects (road agents) in the surrounding environment of the ego vehicle. For each object, the RSS module creates a description of the object-ego vehicle pair and their properties, called a "situation". For each situation, the relevant RSS safety checks are performed and a proper response is calculated. Finally, one overall response is obtained by combining the responses calculated for each object-ego vehicle situation. The resulting actuation command restrictions, in the form of longitudinal and lateral limits on acceleration are provided as output.

This library contains a stand-alone C++ implementation of the RSS module.
- Conversion of AV sensor data to the input object list required by the RSS module is outside the scope of this library. This includes conversion of object location and motion in a Cartesian world coordinate system into a situation based coordinate system.
- Conversion of the output acceleration restrictions to real AV actuation commands (enforcing the restrictions) is outside the scope of this library. This conversion depends strongly on the software and hardware setup of the actual (or simulated)vehicle.

The scope, design and architecture of this C++ library for RSS is described in more detail in the following document packaged with this release. This documentation includes guidance on the usage of the RSS library and its integration into an autonomous driving system. Users of this library are strongly encouraged to read this documentation prior to integration of the library.
- C++ Library for Responsibility Sensitive Safety, Intel, 2018


## License <a name="license"></a>
This software library is provided under the BSD 3-clause open-source license: https://opensource.org/licenses/BSD-3-Clause.

In addition, the terms in the following apply:
[RELEASE NOTES AND DISCLAIMERS](./RELEASE_NOTES_AND_DISCLAIMERS.md).

## Documentation
Visit the project's [GitHub page](https://intel.github.io/ad-rss-lib/) to access the online version of the full documentation of this library. This includes:
- [Doxygen](https://intel.github.io/ad-rss-lib/doxygen/html/index.html)
- [Background documentation](https://intel.github.io/ad-rss-lib/documentation/Main.html).

If you have any additional question not answered therein, you might find more in:
- [FAQ](./FAQ.md)

## Releases <a name="releases"></a>
### Release 1.x.x <a name="release_1"></a>
The initial release of the C++ software library for RSS implements a subset of the rules and calculations specified in the published RSS paper. This means that this release handles a subset of autonomous driving scenarios, described below. Scenarios other than this subset cannot be handled.

#### Features & Limitations
This release implements the RSS calculations and rules corresponding to the following scenarios:
- Multi-lane roads, i.e. longitudinal and lateral safe distance and proper response determination; and
- Intersections, i.e. two or more routes of different geometry, rules for intersections of routes, with priority/right of way, and longitudinal and lateral proper response determination. However, in the case of intersections, it is assumed that there is always a lateral conflict.

The following parts of RSS are NOT implemented in this release of the library software:
- Unstructured roads, e.g. parking lots and wide round-abouts;
- Pedestrians, bicyclists and other vulnerable road users;
- Occlusions;
- Longitudinal or lateral evasive maneuvers as defined by RSS; and
- Intersections without a lateral conflict.

Note: The RSS module in this library does not initiate evasive manuevers. At the same time, it would not hinder an evasive manuever being executed by the AV driving policy and planning modules, as long as it is compliant with the required RSS proper response.


## Getting started <a name="started"></a>

### Installation of dependencies
Currently, the focused operating system is Ubuntu 16.04. Nevertheless, the library should work in a similar way for any other Linux OS.
To install the dependencies for Ubuntu 16.04 execute the following command:
```bash
 user$> sudo apt-get install git build-essential cmake 
```

If you want to use doxygen for API documentation, please also install:
```bash
 user$> sudo apt-get install doxygen graphviz
```

### Get the library
To download the library, you may run:
```bash
 user$> git clone https://github.com/intel/ad-rss-lib.git
 user$> cd ad-rss-lib
```

### Supported systems <a name="systems"></a>
Besides Ubuntu 16.04 we are currently supporting the following Linux OS and compiler combinations:

|                 | Ubuntu 14.04 | Ubuntu 16.04 | Ubuntu 18.04 |
|:---------------:|:------------:|:------------:|:------------:|
|  Clang 3.4      |       x      |              |              |
|  Clang 3.8/3.9  |       x      |       x      |              |
|  Clang 5.0      |              |       x      |              |
|  Clang 6.0      |              |       x      |       x      |
|   GCC 4.8       |       x      |              |              |
| GCC 5.4/5.5     |              |       x      |              |
|   GCC 6.0       |              |       x      |              |
|   GCC 7.3       |              |       x      |       x      |

Important: cmake is required to be at least version 3.5!

## Building the library <a name="building"></a>

### Build instructions
The RSS library is built with a standard cmake toolchain. Simply run the following commands to build the library:
```bash
 ad_rss$> mkdir build
 ad_rss$> cd build
 build$>  cmake ..
 build$>  make
```

#### Unit tests
Run the following commands to run the unit-tests:
```bash
 build$>  make test
```

#### API documentation
Please run the following command to build the API documentation, if desired:
```bash
 build$>  cmake -DBUILD_DOC=1 ..
 build$>  make apidoc
```

#### Build hardening
Usually, build hardening is injected by the surrounding build system. Nevertheless, the CMakeLists.txt defines
hardening flags to ensure the code is compatible to respective flags. To enable hardening compiler and linker flags:
```bash
 build$>  cmake -DBUILD_HARDENING=1 ..
 build$>  make
```

#### Full documentation
The full documentation is written in [Asciidoc](http://asciidoc.org/). To generate a PDF of the full documentation, it is recommended to use [Asciidoctor](https://asciidoctor.org) _asciidoctor-pdf_. Therefore, the following commands have to be executed within Ubuntu:

```bash
ad_rss$>  sudo apt-get install asciidoctor
ad_rss$>  sudo -E gem install asciidoctor-pdf --pre
ad_rss$>  sudo -E gem install coderay
ad_rss$>  asciidoctor-pdf ./doc/Main.adoc -n
```


## Map Integration <a name="mapintegration"></a>

TODO

## Contributing <a name="contributing"></a>
Contibutions are very welcome!

Before submitting a pull request, please ensure that your code compiles successfully and that the tests run successfully.
Please also check that your code formatting complies to the provided clang style. To do so, you can run:
```bash
ad_rss$> sudo apt-get install clang-format-3.9
ad_rss$> find -iname *.cpp -o -iname *.hpp | xargs clang-format-3.9 -style=file -i
```
This command will automatically update the code formatting to be compliant with our style.

In addition, please perform a static code analysis, if possible.
```bash
ad_rss$> sudo apt-get install clang-tidy
ad_rss$> cmake -DBUILD_STATIC_ANALYSIS=ON
ad_rss$> make clang-tidy
```
This may provide a list of possible improvements that you would like to consider in your pull request.
