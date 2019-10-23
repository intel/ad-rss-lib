/*
 *  @COPYRIGHT_TAG@
 */

/**
 * Generated file
 * @file
 *
 * Model Library     : RSS.ad_rss_data_type_lib
 * Model Version     : 0.0.0
 * Generator         : mo2ive_generator_mockup
 * Generator Version : 10.5.6-1843
 */

#include "ad/rss/world/LaneSegmentType.hpp"
#include <stdexcept>

std::string toString(::ad::rss::world::LaneSegmentType const e)
{
  switch (e)
  {
    case ::ad::rss::world::LaneSegmentType::Normal:
      return std::string("::ad::rss::world::LaneSegmentType::Normal"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::world::LaneSegmentType::Intersection:
      return std::string("::ad::rss::world::LaneSegmentType::Intersection"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad::rss::world::LaneSegmentType fromString(std::string const &str)
{
  if (str == std::string("::ad::rss::world::LaneSegmentType::Normal")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::LaneSegmentType::Normal;
  }
  if (str == std::string("Normal")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::LaneSegmentType::Normal;
  }
  if (str == std::string("::ad::rss::world::LaneSegmentType::Intersection")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::LaneSegmentType::Intersection;
  }
  if (str == std::string("Intersection")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::LaneSegmentType::Intersection;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
