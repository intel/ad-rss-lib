## Latest changes
* Small updates to be compliant to clang-tidy-3.8 static code analysis
* Added basic FAQ
* Fixed documentation of RoadArea LaneSegment ordering (left -> right)

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
