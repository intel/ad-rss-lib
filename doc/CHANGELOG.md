## Latest changes


## Release 2.0.0
#### :rocket: New Features
* Added Integrating RSS with automated driving maps (ad_rss_map_integration)
* Added logging support with spdlog
* Introduced maxSpeed to RssDynamics and RSS calculations to support speed limits
  [for details see](https://intel.github.io/ad-rss-lib/ad_rss_map_integration/ConstructRSSScenes/index.html#considerspeedlimits)
* world::Velocity supports speed range input to be able to cope with speed fluctuations (i.e. in curves)

#### :ghost: Maintenance
* Refactored types and namespaces
  - renamed ad_rss::physics::TimeIndex -> ad::world::TimeIndex
  - renamed ad_rss::physics::CoordinateSystemAxis -> ad::situation::CoordinateSystemAxis
  - renamed ad_rss::physics -> ad::physics and replaced by separate library (ad_physics)
    to ensure map and rss are using the same base types
  - renamed ad_rss -> ad::rss
* Renamed actual shared library ad-rss-lib -> ad_rss
* Refactored folder layout
* Introduced colcon build [for details see](https://intel.github.io/ad-rss-lib/BUILDING/index.html)
* Fix unit tests for gcc 7.4.0 (shipped with ubuntu 18.04)
* Added ObjectIDVector support to Python binding

## Release 1.6.0
#### :rocket: New Features
* Added Python binding

## Release 1.5.0
#### :ghost: Maintenance
* License change to LGPL v2.1

## Release 1.4.0
* Introduced more straight forward interface on intermediate functions to support better integration of the single calls into an external
  framework: SituationSnapshot, RssStateSnapshot, ProperResponse. Moved the timeIndex from the individual elements into these high level
  types to support the propagation of the timeIndex even if there are no other vehicles in the surrounding.
* Did some renaming (e.g. ResponseState->RssState, ResponseStateVector->RssStateVector, ResponseInformation->RssStateInformation,
  ResponseEvaluator->RssStateEvaluator) to clarify by naming that the individual calcuated states only consider a snapshot in time without
  analysis of the dangerous threshold. The ProperResponse became its own type and got an own overall isSafe flag and a list of dangerousObjects.
* Added ObjectId to Situation and RssState to preserve the mapping to the originating object which was lost with the introduction of multiple
  situations per object.
* Increase amount of allowed situations because with multiple  situations per object the amount of 100 might be hit too fast.
* Improved merge of input scenarios to facilitate scene variations of the same situation
* RssIntersectionChecker: since new situations may pop up when e.g. a previously occluded object is entering the field of view, one cannot guarantee that a previous safe state can be found. In this case, we have to brake instead of returning false.
* Made some RssState operations available via public interface
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
