// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2024 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

/**
 * @file
 */
#pragma once

#include <ad/rss/map/RssRouteCheckResult.hpp>

/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace map
 */
namespace map {

struct RssCheckResult
{
  RssCheckResult() = default;

  RssCheckResult(RssCheckResult const &other) = default;

  RssCheckResult(ad::rss::map::RssRouteCheckResult const &route_check_result, ad::physics::Duration const &v2x_latency)
    : v2x_latency(v2x_latency)
    , proper_response(route_check_result.proper_response)
    , result_analysis(route_check_result.result_analysis)
    , rss_route(route_check_result.rss_route)
  {
  }

  RssCheckResult &operator=(RssCheckResult const &other) = default;

  bool operator==(RssCheckResult const &other) const
  {
    return v2x_latency == other.v2x_latency && proper_response == other.proper_response
      && result_analysis == other.result_analysis && rss_route == other.rss_route;
  }

  ad::physics::Duration v2x_latency;
  ad::rss::state::ProperResponse proper_response;
  ad::rss::map::RssRouteCheckResultAnalysis result_analysis;
  ad::rss::map::RssRoute rss_route;
};

using RssCheckResults = std::vector<RssCheckResult>;

/**
 * \brief standard ostream operator
 *
 * \param[in] os The output stream to write to
 * \param[in] _value RssCheckResult value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RssCheckResult const &_value)
{
  os << "RssCheckResult(";
  os << "v2x_latency:";
  os << _value.v2x_latency;
  os << ",";
  os << "proper_response:";
  os << _value.proper_response;
  os << ",";
  os << "result_analysis:";
  os << _value.result_analysis;
  os << ",";
  os << "rss_route:";
  os << _value.rss_route;
  os << ")";
  return os;
}

} // namespace map
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RssCheckResult
 */
inline std::string to_string(ad::rss::map::RssCheckResult const &vehicle_result)
{
  stringstream sstream;
  sstream << vehicle_result.v2x_latency << vehicle_result.proper_response << vehicle_result.result_analysis
          << vehicle_result.rss_route;
  return sstream.str();
}

} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::map::RssCheckResult> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::map::RssCheckResult const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};
