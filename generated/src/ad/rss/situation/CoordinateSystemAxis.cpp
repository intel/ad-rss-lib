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

#include "ad/rss/situation/CoordinateSystemAxis.hpp"
#include <stdexcept>

std::string toString(::ad::rss::situation::CoordinateSystemAxis const e)
{
  switch (e)
  {
    case ::ad::rss::situation::CoordinateSystemAxis::Longitudinal:
      return std::string("::ad::rss::situation::CoordinateSystemAxis::Longitudinal"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::situation::CoordinateSystemAxis::Lateral:
      return std::string("::ad::rss::situation::CoordinateSystemAxis::Lateral"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad::rss::situation::CoordinateSystemAxis fromString(std::string const &str)
{
  if (str == std::string("::ad::rss::situation::CoordinateSystemAxis::Longitudinal")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::CoordinateSystemAxis::Longitudinal;
  }
  if (str == std::string("Longitudinal")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::CoordinateSystemAxis::Longitudinal;
  }
  if (str == std::string("::ad::rss::situation::CoordinateSystemAxis::Lateral")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::CoordinateSystemAxis::Lateral;
  }
  if (str == std::string("Lateral")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::CoordinateSystemAxis::Lateral;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
