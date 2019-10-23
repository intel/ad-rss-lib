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

#include "ad/rss/world/LaneDrivingDirection.hpp"
#include <stdexcept>

std::string toString(::ad::rss::world::LaneDrivingDirection const e)
{
  switch (e)
  {
    case ::ad::rss::world::LaneDrivingDirection::Bidirectional:
      return std::string("::ad::rss::world::LaneDrivingDirection::Bidirectional"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::world::LaneDrivingDirection::Positive:
      return std::string("::ad::rss::world::LaneDrivingDirection::Positive"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::world::LaneDrivingDirection::Negative:
      return std::string("::ad::rss::world::LaneDrivingDirection::Negative"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad::rss::world::LaneDrivingDirection fromString(std::string const &str)
{
  if (str == std::string("::ad::rss::world::LaneDrivingDirection::Bidirectional")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::LaneDrivingDirection::Bidirectional;
  }
  if (str == std::string("Bidirectional")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::LaneDrivingDirection::Bidirectional;
  }
  if (str == std::string("::ad::rss::world::LaneDrivingDirection::Positive")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::LaneDrivingDirection::Positive;
  }
  if (str == std::string("Positive")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::LaneDrivingDirection::Positive;
  }
  if (str == std::string("::ad::rss::world::LaneDrivingDirection::Negative")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::LaneDrivingDirection::Negative;
  }
  if (str == std::string("Negative")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::LaneDrivingDirection::Negative;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
