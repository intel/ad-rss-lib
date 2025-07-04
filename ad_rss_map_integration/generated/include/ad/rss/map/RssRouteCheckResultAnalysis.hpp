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
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"
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
 * \brief DataType RssRouteCheckResultAnalysis
 *
 * Basic RSS route check analysis results.
 */
struct RssRouteCheckResultAnalysis
{
  /*!
   * \brief Smart pointer on RssRouteCheckResultAnalysis
   */
  typedef std::shared_ptr<RssRouteCheckResultAnalysis> Ptr;

  /*!
   * \brief Smart pointer on constant RssRouteCheckResultAnalysis
   */
  typedef std::shared_ptr<RssRouteCheckResultAnalysis const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  RssRouteCheckResultAnalysis() = default;

  /*!
   * \brief standard destructor
   */
  ~RssRouteCheckResultAnalysis() = default;

  /*!
   * \brief standard copy constructor
   */
  RssRouteCheckResultAnalysis(const RssRouteCheckResultAnalysis &other) = default;

  /*!
   * \brief standard move constructor
   */
  RssRouteCheckResultAnalysis(RssRouteCheckResultAnalysis &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RssRouteCheckResultAnalysis
   *
   * \returns Reference to this RssRouteCheckResultAnalysis.
   */
  RssRouteCheckResultAnalysis &operator=(const RssRouteCheckResultAnalysis &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RssRouteCheckResultAnalysis
   *
   * \returns Reference to this RssRouteCheckResultAnalysis.
   */
  RssRouteCheckResultAnalysis &operator=(RssRouteCheckResultAnalysis &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssRouteCheckResultAnalysis
   *
   * \returns \c true if both RssRouteCheckResultAnalysis are equal
   */
  bool operator==(const RssRouteCheckResultAnalysis &other) const
  {
    return (dangerous_state == other.dangerous_state) && (dangerous_vehicle == other.dangerous_vehicle)
      && (dangerous_opposite_state == other.dangerous_opposite_state)
      && (vehicle_crossing_road_boundaries == other.vehicle_crossing_road_boundaries);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssRouteCheckResultAnalysis.
   *
   * \returns \c true if both RssRouteCheckResultAnalysis are different
   */
  bool operator!=(const RssRouteCheckResultAnalysis &other) const
  {
    return !operator==(other);
  }

  /*!
   * Flag indicating if the current state is overall dangerous.
   */
  bool dangerous_state{true};

  /*!
   * Flag indicating if the current state is dangerous because of a vehicle.
   */
  bool dangerous_vehicle{true};

  /*!
   * Flag indicating if the current state is dangerous because of a vehicle in opposite constellation.
   */
  bool dangerous_opposite_state{true};

  /*!
   * Flag indicating if the vehicle is already touching/crossing one of the road boundaries.
   * This is only evaluated if the road boundaries checks are active.
   * It is a hint to oversteer a bit on countersteering to get back into the road area
   * again.
   */
  bool vehicle_crossing_road_boundaries{false};
};

} // namespace map
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_MAP_RSSROUTECHECKRESULTANALYSIS
#define GEN_GUARD_AD_RSS_MAP_RSSROUTECHECKRESULTANALYSIS
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
 * \param[in] _value RssRouteCheckResultAnalysis value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RssRouteCheckResultAnalysis const &_value)
{
  os << "RssRouteCheckResultAnalysis(";
  os << "dangerous_state:";
  os << _value.dangerous_state;
  os << ",";
  os << "dangerous_vehicle:";
  os << _value.dangerous_vehicle;
  os << ",";
  os << "dangerous_opposite_state:";
  os << _value.dangerous_opposite_state;
  os << ",";
  os << "vehicle_crossing_road_boundaries:";
  os << _value.vehicle_crossing_road_boundaries;
  os << ")";
  return os;
}

} // namespace map
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RssRouteCheckResultAnalysis
 */
inline std::string to_string(::ad::rss::map::RssRouteCheckResultAnalysis const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::map::RssRouteCheckResultAnalysis> : formatter<string_view>
{
  template <typename FormatContext>
  auto format(::ad::rss::map::RssRouteCheckResultAnalysis const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_MAP_RSSROUTECHECKRESULTANALYSIS
