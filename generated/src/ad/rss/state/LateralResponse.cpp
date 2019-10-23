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

#include "ad/rss/state/LateralResponse.hpp"
#include <stdexcept>

std::string toString(::ad::rss::state::LateralResponse const e)
{
  switch (e)
  {
    case ::ad::rss::state::LateralResponse::None:
      return std::string("::ad::rss::state::LateralResponse::None"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::state::LateralResponse::BrakeMin:
      return std::string("::ad::rss::state::LateralResponse::BrakeMin"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad::rss::state::LateralResponse fromString(std::string const &str)
{
  if (str == std::string("::ad::rss::state::LateralResponse::None")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::LateralResponse::None;
  }
  if (str == std::string("None")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::LateralResponse::None;
  }
  if (str == std::string("::ad::rss::state::LateralResponse::BrakeMin")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::LateralResponse::BrakeMin;
  }
  if (str == std::string("BrakeMin")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::LateralResponse::BrakeMin;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
