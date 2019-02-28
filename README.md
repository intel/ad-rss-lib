C++ Library for Responsibility Sensitive Safety
=====

## Introduction
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


## License
This software library is provided under the BSD 3-clause open-source license: https://opensource.org/licenses/BSD-3-Clause.

In addition, the terms in the following apply:
[RELEASE NOTES AND DISCLAIMERS](./RELEASE_NOTES_AND_DISCLAIMERS.md).

## Release 1.0.0
The initial release of the C++ software library for RSS implements a subset of the rules and calculations specified in the published RSS paper. This means that this release handles a subset of autonomous driving scenarios, described below. Scenarios other than this subset cannot be handled.

### Features & Limitations
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


## Building the library

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

#### Full documentation
The full documentation is written in [Asciidoc](http://asciidoc.org/). To generate a PDF of the full documentation, it is recommended to use [Asciidoctor](https://asciidoctor.org) _asciidoctor-pdf_. Therefore, the following commands have to be executed within Ubuntu:

```bash
ad_rss$>  sudo apt-get install asciidoctor
ad_rss$>  sudo -E gem install asciidoctor-pdf --pre
ad_rss$>  sudo -E gem install coderay
ad_rss$>  asciidoctor-pdf ./doc/Main.adoc -n
```
