﻿C++ Library for Responsibility Sensitive Safety
=====

[![License](https://img.shields.io/badge/License-LGPL%202.1--Clause-blue.svg)](https://opensource.org/licenses/LGPL-2.1)
![GitHub tag (latest SemVer)](https://img.shields.io/github/tag/intel/ad-rss-lib.svg)
[![Build Status](https://travis-ci.com/intel/ad-rss-lib.svg?branch=master)](https://travis-ci.com/intel/ad-rss-lib)
[![Code Coverage](https://codecov.io/gh/intel/ad-rss-lib/branch/master/graph/badge.svg)](https://codecov.io/gh/intel/ad-rss-lib)


# Table of contents
1. [Introduction](#introduction)
2. [License](#license)
3. [Documentation](#documentation)
4. [Releases](#releases)
   1. [Release 4.x](#release_4)
   2. [Release 3.x](#release_3)
   3. [Release 2.x](#release_2)
   4. [Release 1.x](#release_1)
5. [Getting Started](#started)
   1. [Supported Systems](#systems)
6. [Building the library](#building)
7. [Contributing](#contributing)


## Introduction <a name="introduction"></a>
This library intends to provide a C++ implementation of the Responsibility Sensitive Safety model (RSS) for Autonomous Vehicles.

RSS is described in the following papers. Potential users of this C++ library are encouraged to read these papers in order to become familiar with the concepts and functions provided by the library.

* On a Formal Model of Safe and Scalable Self-driving Cars, S. Shalev-Shwartz, S. Shammah, A. Shashua, Mobileye, arXiv:1708.06374, [https://arxiv.org/abs/1708.06374](https://arxiv.org/abs/1708.06374)
* Implementing the RSS Model on NHTSA Pre-Crash Scenarios, Mobileye, July 2018, [https://www.mobileye.com/responsibility-sensitive-safety/rss_on_nhtsa.pdf](https://www.mobileye.com/responsibility-sensitive-safety/rss_on_nhtsa.pdf)

The RSS module in this library receives (processed) sensor information as input and provides actuator command restrictions as output. The input to the RSS module is an object list, with information about all objects (road agents) in the surrounding environment of the ego vehicle. For each object, the RSS module creates a description of the object-ego vehicle pair and their properties, called a "situation". For each situation, the relevant RSS safety checks are performed and a proper response is calculated. Finally, one overall response is obtained by combining the responses calculated for each object-ego vehicle situation. The resulting actuation command restrictions, in the form of longitudinal and lateral limits on acceleration are provided as output.

This library contains a stand-alone C++ implementation of the RSS module.

* Conversion of AV sensor data to the input object list required by the RSS module is outside the scope of this library. This includes conversion of object location and motion in a Cartesian world coordinate system into a situation based coordinate system.
* Conversion of the output acceleration restrictions to real AV actuation commands (enforcing the restrictions) is outside the scope of this library. This conversion depends strongly on the software and hardware setup of the actual (or simulated)vehicle.

The scope, design and architecture of this C++ library for RSS is described in more detail in the following document packaged with this release. This documentation includes guidance on the usage of the RSS library and its integration into an autonomous driving system. Users of this library are strongly encouraged to read this documentation prior to integration of the library.

### Integrating RSS with automated driving maps
When RSS is to be integrated into a larger system it is usually up to the user implementation to provide the required input into RSS based on the environment information
available within the system. The [*ad_rss_map_integration*](https://intel.github.io/ad-rss-lib/ad_rss_map_integration/Main/) library provides a C++ implementation
for integrating RSS with automated driving maps.

### Usage of ad-rss-lib
If you use ad-rss-lib for any publication, please cite the IV'2019 paper:
```
@INPROCEEDINGS{
   title={Towards Standardization of AV Safety: C++ Library for Responsibility Sensitive Safety}
   author={Gassmann, Bernd and Oboril, Fabian and Buerkle, Cornelius and Liu, Shuang and Yan, Shoumeng and Elli, Maria Soledad and Alvarez, Ignacio and Aerrabotu, Naveen and Jaber, Suhel and van Beek, Peter and Iyer, Darshan and Weast, Jack}
   booktitle={2019 IEEE Intelligent Vehicles Symposium (IV)}
   year={2019}
}
```

#### Usage with Python
Starting with Release v1.6, it is possible to use the ad-rss-lib library also with Python.
Please see the [Documentation on the Python binding for ad_rss](https://intel.github.io/ad-rss-lib/ad_rss/ad_rss_python/index.html) or [ad_rss_map_integration_python](https://intel.github.io/ad-rss-lib/ad_rss_map_integration/ad_rss_map_integration_python/index.html) for further information.

#### Usage within CARLA
This library can be used together with the open-source driving simulator [CARLA](https://github.com/carla-simulator/carla) to investigate the behavior of RSS. A first version is shown in the following video sequence:
[![RSS safety sensor in CARLA](https://raw.githubusercontent.com/intel/ad-rss-lib/master/doc/images/carla_integration.png)](https://www.youtube.com/watch?v=UxKPXPT2T8Q)

#### Usage within Baidu Apollo
In addition, the library is already integrated and used in Baidu's [Apollo Open Platform stack](https://github.com/ApolloAuto/apollo):

![RSS integration in Apollo](https://raw.githubusercontent.com/intel/ad-rss-lib/master/doc/images/apollo_integration.png)


## License <a name="license"></a>
This software library is provided under the LGPL-2.1 open-source license: https://opensource.org/licenses/LGPL-2.1.

In addition, the terms in the following apply:
[RELEASE NOTES AND DISCLAIMERS](./RELEASE_NOTES_AND_DISCLAIMERS.md).

## Documentation
Visit the project's [GitHub page](https://intel.github.io/ad-rss-lib/) to access the online version of the full documentation of this library. This includes:

* [Doxygen](https://intel.github.io/ad-rss-lib/doxygen/ad_rss/index.html)
* [Background documentation](https://intel.github.io/ad-rss-lib/ad_rss/Overview/).
* [Integrate RSS with AD map data](https://intel.github.io/ad-rss-lib/ad_rss_map_integration/Main/) and respective [Doxygen](https://intel.github.io/ad-rss-lib/doxygen/ad_rss_map_integration/index.html).

If you have any additional question not answered therein, you might find more in the [FAQ](https://intel.github.io/ad-rss-lib/FAQ/index.html)

## Releases <a name="releases"></a>
General release notes and changes can be found in the [Changelog](https://intel.github.io/ad-rss-lib/CHANGELOG/index.html)

#### Release 4.x.x <a name="release_4"></a>
These releases extends the 3.x version with handling of unstructured roads and pedestrians.

#### Release 3.x.x <a name="release_3"></a>
These releases improve the 2.x version capabilities on scene creation.

#### Release 2.x.x <a name="release_2"></a>
These releases extend the 1.x version with map integration for extended usability.

#### Release 1.x.x <a name="release_1"></a>
The initial release of the C++ software library for RSS implements a subset of the rules and calculations specified in the published RSS paper. This means that this release handles a subset of autonomous driving scenarios, described below. Scenarios other than this subset cannot be handled.

##### Features & Limitations
This release implements the RSS calculations and rules corresponding to the following scenarios:

* Multi-lane roads, i.e. longitudinal and lateral safe distance and proper response determination; and
* Intersections, i.e. two or more routes of different geometry, rules for intersections of routes, with priority/right of way, and longitudinal and lateral proper response determination. However, in the case of intersections, it is assumed that there is always a lateral conflict; and
* Unstructured roads and pedestrians.

The following parts of RSS are NOT implemented in this release of the library software:

* Occlusions;
* Longitudinal or lateral evasive maneuvers as defined by RSS; and
* Intersections without a lateral conflict.

Note: The RSS module in this library does not initiate evasive manuevers. At the same time, it would not hinder an evasive manuever being executed by the AV driving policy and planning modules, as long as it is compliant with the required RSS proper response.

## Getting started <a name="started"></a>

#### Installation of dependencies
Currently, the focused operating system is Ubuntu 16.04. Nevertheless, the library should work in a similar way for any other Linux OS.
To install the dependencies for Ubuntu 16.04 execute the following command:
```bash
 user$> sudo apt-get install git build-essential cmake libboost-dev
```

If you want to use doxygen for API documentation, please also install:
```bash
 user$> sudo apt-get install doxygen graphviz
```

#### Get the library
To download the library, you may run:
```bash
 user$> git clone https://github.com/intel/ad-rss-lib.git
 user$> cd ad-rss-lib
```

#### Supported systems <a name="systems"></a>
Development systems are Ubuntu 16.04 and Ubuntu 18.04.
Following compiler combinations are [tested continously](https://github.com/intel/ad-rss-lib/blob/master/.travis.yml):

|                 | Ubuntu 16.04 | Ubuntu 18.04 |
|:---------------:|:------------:|:------------:|
|  Clang 5.0      |      x       |              |
|  Clang 6.0      |      x       |              |
|  Clang 7        |              |       x      |
|  Clang 8        |              |       x      |
|   GCC 5         |      x       |              |
|   GCC 6         |      x       |              |
|   GCC 7         |              |       x      |
|   GCC 8         |              |       x      |
|   GCC 9         |              |       x      |

Important: cmake is required to be at least version 3.5!

## Building the library <a name="building"></a>
See the detailed [Build instructions](https://intel.github.io/ad-rss-lib/BUILDING/index.html).

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
