## Latest changes
* Add option to select library build type (static/dynamic)
## Release 1.3.0
* Allow multiple situations per ego vehicle/object pair: Add RssSituationIdProvider and made RssSituationExtraction a class holding RssSituationIdProvider instance to keep track of the different situation classes
* Renamed world::Dynamics in world::RssDynamics, extended it by responseTime and separated it from world::Object; world::Scene got the objectRssDynamics and world::WorldModel the egoVehicleRssDynamics each as separate elements
* Extended world::Scene by egoVehicle object description as occupied regions and velocity are actually scene dependent (e.g. when considering different vehicle predictions)
* Added world::ObjectType::Invalid
* Small updates to be compliant to clang-tidy-3.8 static code analysis
* Added basic FAQ
* Added official support for Ubuntu 14.04 (GCC 4.8, Clang 3.4 and 3.8/3.9)
* Added official support for Ubuntu 18.04 (GCC 7.3)
* Download/Build gtest on the fly rather than using the version from the OS
* Fixed documentation of RoadArea LaneSegment ordering (left -> right)
* Fixed isSafe flags of the resolved response
* Renamed some internal files from 'RSS...' -> 'Rss...' to have camel-case everywhere
* Added ResponseInformation to provide more insight into intermediate result calculation

## Release 1.2.0
* Added support for Clang 5 and Clang 6
* Added checks to enforce increasing time indices
* Consider timeIndex=0 as error
* Reduced maximum vector input sizes to more feasible numbers (20 lane segments, 50 road segments, 100 scenes)

## Release 1.1.0
* Made generated files and tests more explicit by moving into respective folders
* Extended documentation
* Increase test coverage
* Fixed calculateLateralDimensions()
* Extended extractSituation() by timeIndex parameter
* Support for GCC 4.8
* Harmonized library and git repo name by renaming ad_rss_lib -> ad-rss-lib

## Release 1.0.0
* Initial release
