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

#include "ad/rss/state/LongitudinalResponse.hpp"
#include <stdexcept>

std::string toString(::ad::rss::state::LongitudinalResponse const e)
{
  switch (e)
  {
    case ::ad::rss::state::LongitudinalResponse::None:
      return std::string("::ad::rss::state::LongitudinalResponse::None"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::state::LongitudinalResponse::BrakeMinCorrect:
      return std::string("::ad::rss::state::LongitudinalResponse::BrakeMinCorrect"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::state::LongitudinalResponse::BrakeMin:
      return std::string("::ad::rss::state::LongitudinalResponse::BrakeMin"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad::rss::state::LongitudinalResponse fromString(std::string const &str)
{
  if (str == std::string("::ad::rss::state::LongitudinalResponse::None")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::LongitudinalResponse::None;
  }
  if (str == std::string("None")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::LongitudinalResponse::None;
  }
  if (str == std::string("::ad::rss::state::LongitudinalResponse::BrakeMinCorrect")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::LongitudinalResponse::BrakeMinCorrect;
  }
  if (str == std::string("BrakeMinCorrect")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::LongitudinalResponse::BrakeMinCorrect;
  }
  if (str == std::string("::ad::rss::state::LongitudinalResponse::BrakeMin")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::LongitudinalResponse::BrakeMin;
  }
  if (str == std::string("BrakeMin")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::LongitudinalResponse::BrakeMin;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
