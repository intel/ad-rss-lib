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
#include <string>
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
 * \brief DataType RssAppendRoadBoundariesMode
 *
 * The operation modes of appendRoadBoundaries() function.
 */
enum class RssAppendRoadBoundariesMode : int32_t
{
  /*!
   * Road bounaries are not considered at all.
   */
  Off = 0,

  /*!
   * The borders are created at the left border of the leftmost and
   * the right border righmost lane of the provided route.
   */
  RouteOnly = 1,

  /*!
   * The incoming route is expanded with all parallel
   * lanes of the opposite direction to ensure the whole driveable road is within the
   * boundaries
   */
  ExpandRouteToOppositeLanes = 2,

  /*!
   * the incoming route is expanded with all parallel neighbor lanes
   * including the opposite direction and shoulder lanes to ensure the whole road is
   * within the boundaries
   */
  ExpandRouteToAllNeighbors = 3
};

} // namespace map
} // namespace rss
} // namespace ad
/*!
 * \brief Conversion of ::ad::rss::map::RssAppendRoadBoundariesMode to std::string helper.
 */
std::string toString(::ad::rss::map::RssAppendRoadBoundariesMode const e);

/*!
 * \brief Conversion from std::string to enum type T helper.
 *
 * \param [in] str - a fully qualified string name of enum class type
 *
 * \return T enum value
 *
 * \throws std::out_of_range exception if the given string does not match any enum type
 *
 * Example usage:
 * \code
 *   auto value = fromString<SomeEnumType>("SomeEnumType::eValue");
 *   assert(value == SomeEnumType::eValue);
 *   // Or:
 *   auto value = fromString<SomeEnumType>("eValue");
 *   assert(value == SomeEnumType::eValue);
 * \endcode
 */
template <typename EnumType> EnumType fromString(std::string const &str);

/*!
 * \brief Conversion from std::string to enum type T helper.
 *
 * \param [in] str - a fully qualified string name of enum class type
 *
 * \return T enum value
 *
 * \throws std::out_of_range exception if the given string does not match any enum type
 *
 * Example usage:
 * \code
 *   auto value = fromString<SomeEnumType>("SomeEnumType::eValue");
 *   assert(value == SomeEnumType::eValue);
 *   // Or:
 *   auto value = fromString<SomeEnumType>("eValue");
 *   assert(value == SomeEnumType::eValue);
 * \endcode
 */
template <>::ad::rss::map::RssAppendRoadBoundariesMode fromString(std::string const &str);

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_MAP_RSSAPPENDROADBOUNDARIESMODE
#define GEN_GUARD_AD_RSS_MAP_RSSAPPENDROADBOUNDARIESMODE
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
 * \param[in] value RssAppendRoadBoundariesMode value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RssAppendRoadBoundariesMode const &value)
{
  return os << toString(value);
}

} // namespace map
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RssAppendRoadBoundariesMode
 */
inline std::string to_string(::ad::rss::map::RssAppendRoadBoundariesMode const &value)
{
  return ::toString(value);
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::map::RssAppendRoadBoundariesMode> : formatter<string_view>
{
  template <typename FormatContext>
  auto format(::ad::rss::map::RssAppendRoadBoundariesMode const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_MAP_RSSAPPENDROADBOUNDARIESMODE
