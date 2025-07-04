/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2022 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-2046
 */

#pragma once

#include <iostream>
#include <memory>
#include <sstream>
#include "ad/rss/core/RssSituationSnapshot.hpp"
#include "ad/rss/map/RssRoute.hpp"
#include "ad/rss/map/RssRouteCheckResultAnalysis.hpp"
#include "ad/rss/state/ProperResponse.hpp"
#include "ad/rss/state/RssStateSnapshot.hpp"
#include "ad/rss/world/WorldModel.hpp"
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

/*!
 * \brief DataType RssRouteCheckResult
 *
 * Struct collecting the RSS states in respect to a route for a vehicle
 */
struct RssRouteCheckResult
{
  /*!
   * \brief Smart pointer on RssRouteCheckResult
   */
  typedef std::shared_ptr<RssRouteCheckResult> Ptr;

  /*!
   * \brief Smart pointer on constant RssRouteCheckResult
   */
  typedef std::shared_ptr<RssRouteCheckResult const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  RssRouteCheckResult() = default;

  /*!
   * \brief standard destructor
   */
  ~RssRouteCheckResult() = default;

  /*!
   * \brief standard copy constructor
   */
  RssRouteCheckResult(const RssRouteCheckResult &other) = default;

  /*!
   * \brief standard move constructor
   */
  RssRouteCheckResult(RssRouteCheckResult &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RssRouteCheckResult
   *
   * \returns Reference to this RssRouteCheckResult.
   */
  RssRouteCheckResult &operator=(const RssRouteCheckResult &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RssRouteCheckResult
   *
   * \returns Reference to this RssRouteCheckResult.
   */
  RssRouteCheckResult &operator=(RssRouteCheckResult &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssRouteCheckResult
   *
   * \returns \c true if both RssRouteCheckResult are equal
   */
  bool operator==(const RssRouteCheckResult &other) const
  {
    return (rss_route == other.rss_route) && (is_valid == other.is_valid) && (world_model == other.world_model)
      && (rss_situation_snapshot == other.rss_situation_snapshot) && (rss_state_snapshot == other.rss_state_snapshot)
      && (proper_response == other.proper_response) && (result_analysis == other.result_analysis);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssRouteCheckResult.
   *
   * \returns \c true if both RssRouteCheckResult are different
   */
  bool operator!=(const RssRouteCheckResult &other) const
  {
    return !operator==(other);
  }

  /*!
   * The route this result belongs to.
   */
  ::ad::rss::map::RssRoute rss_route;

  /*!
   * Flag indicating if the RssRouteResult is valid.
   */
  bool is_valid{false};

  /*!
   * The RSS world model as input to the RSS check on the route.
   */
  ::ad::rss::world::WorldModel world_model;

  /*!
   * The RSS situation snapshot as output of the RSS check on the route.
   */
  ::ad::rss::core::RssSituationSnapshot rss_situation_snapshot;

  /*!
   * The RSS state snapshot as output of the RSS check on the route.
   */
  ::ad::rss::state::RssStateSnapshot rss_state_snapshot;

  /*!
   * The RSS proper response as output of the RSS check on the route.
   */
  ::ad::rss::state::ProperResponse proper_response;

  /*!
   * Basic analysis of the RSS route check results.
   */
  ::ad::rss::map::RssRouteCheckResultAnalysis result_analysis;
};

} // namespace map
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_MAP_RSSROUTECHECKRESULT
#define GEN_GUARD_AD_RSS_MAP_RSSROUTECHECKRESULT
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

/**
 * \brief standard ostream operator
 *
 * \param[in] os The output stream to write to
 * \param[in] _value RssRouteCheckResult value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RssRouteCheckResult const &_value)
{
  os << "RssRouteCheckResult(";
  os << "rss_route:";
  os << _value.rss_route;
  os << ",";
  os << "is_valid:";
  os << _value.is_valid;
  os << ",";
  os << "world_model:";
  os << _value.world_model;
  os << ",";
  os << "rss_situation_snapshot:";
  os << _value.rss_situation_snapshot;
  os << ",";
  os << "rss_state_snapshot:";
  os << _value.rss_state_snapshot;
  os << ",";
  os << "proper_response:";
  os << _value.proper_response;
  os << ",";
  os << "result_analysis:";
  os << _value.result_analysis;
  os << ")";
  return os;
}

} // namespace map
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RssRouteCheckResult
 */
inline std::string to_string(::ad::rss::map::RssRouteCheckResult const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::map::RssRouteCheckResult> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::map::RssRouteCheckResult const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_MAP_RSSROUTECHECKRESULT
