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
#include "ad/rss/map/RssObjectData.hpp"
#include "ad/rss/map/RssRouteCheckResultList.hpp"
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
 * \brief DataType RssObjectResult
 *
 * Provides information on the RssObjectData of every object considered by the analysis
 * including all types i.e. EgoVehicle, OtherVehicle, Pedestrian and ArtificialObject.
 * In addition, the RSS situation results of every vehicle processed as EgoVehicle
 * is provided.
 */
struct RssObjectResult
{
  /*!
   * \brief Smart pointer on RssObjectResult
   */
  typedef std::shared_ptr<RssObjectResult> Ptr;

  /*!
   * \brief Smart pointer on constant RssObjectResult
   */
  typedef std::shared_ptr<RssObjectResult const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  RssObjectResult() = default;

  /*!
   * \brief standard destructor
   */
  ~RssObjectResult() = default;

  /*!
   * \brief standard copy constructor
   */
  RssObjectResult(const RssObjectResult &other) = default;

  /*!
   * \brief standard move constructor
   */
  RssObjectResult(RssObjectResult &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RssObjectResult
   *
   * \returns Reference to this RssObjectResult.
   */
  RssObjectResult &operator=(const RssObjectResult &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RssObjectResult
   *
   * \returns Reference to this RssObjectResult.
   */
  RssObjectResult &operator=(RssObjectResult &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssObjectResult
   *
   * \returns \c true if both RssObjectResult are equal
   */
  bool operator==(const RssObjectResult &other) const
  {
    return (object_data == other.object_data) && (situation_check_results == other.situation_check_results);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssObjectResult.
   *
   * \returns \c true if both RssObjectResult are different
   */
  bool operator!=(const RssObjectResult &other) const
  {
    return !operator==(other);
  }

  /*!
   * The object this results refer to.
   */
  ::ad::rss::map::RssObjectData object_data;

  /*!
   * The situation results of the object.
   */
  ::ad::rss::map::RssRouteCheckResultList situation_check_results;
};

} // namespace map
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_MAP_RSSOBJECTRESULT
#define GEN_GUARD_AD_RSS_MAP_RSSOBJECTRESULT
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
 * \param[in] _value RssObjectResult value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RssObjectResult const &_value)
{
  os << "RssObjectResult(";
  os << "object_data:";
  os << _value.object_data;
  os << ",";
  os << "situation_check_results:";
  os << _value.situation_check_results;
  os << ")";
  return os;
}

} // namespace map
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RssObjectResult
 */
inline std::string to_string(::ad::rss::map::RssObjectResult const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::map::RssObjectResult> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::map::RssObjectResult const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_MAP_RSSOBJECTRESULT
