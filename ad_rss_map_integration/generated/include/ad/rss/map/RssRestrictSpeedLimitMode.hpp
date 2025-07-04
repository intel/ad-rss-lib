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
 * \brief DataType RssRestrictSpeedLimitMode
 *
 * The modes of speed limit consideration within RSS accelerated movement.
 */
enum class RssRestrictSpeedLimitMode : int32_t
{
  /*!
   * Do not change the objects max_speed_on_acceleration parameter of object_rss_dynamics.
   */
  None = 0,

  /*!
   * Set the objects max_speed_on_acceleration parameter of object_rss_dynamics to the maximal allowed speed of the
   * relevant road section
   */
  ExactSpeedLimit = 1,

  /*!
   * Set the objects max_speed_on_acceleration parameter of object_rss_dynamics
   * to the maximal allowed speed of the relevant road section +5 percent
   */
  IncreasedSpeedLimit5 = 2,

  /*!
   * Set the objects max_speed_on_acceleration parameter of object_rss_dynamics
   * to the maximal allowed speed of the relevant road section +10 percent
   */
  IncreasedSpeedLimit10 = 3
};

} // namespace map
} // namespace rss
} // namespace ad
/*!
 * \brief Conversion of ::ad::rss::map::RssRestrictSpeedLimitMode to std::string helper.
 */
std::string toString(::ad::rss::map::RssRestrictSpeedLimitMode const e);

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
template <>::ad::rss::map::RssRestrictSpeedLimitMode fromString(std::string const &str);

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_MAP_RSSRESTRICTSPEEDLIMITMODE
#define GEN_GUARD_AD_RSS_MAP_RSSRESTRICTSPEEDLIMITMODE
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
 * \param[in] value RssRestrictSpeedLimitMode value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RssRestrictSpeedLimitMode const &value)
{
  return os << toString(value);
}

} // namespace map
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RssRestrictSpeedLimitMode
 */
inline std::string to_string(::ad::rss::map::RssRestrictSpeedLimitMode const &value)
{
  return ::toString(value);
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::map::RssRestrictSpeedLimitMode> : formatter<string_view>
{
  template <typename FormatContext>
  auto format(::ad::rss::map::RssRestrictSpeedLimitMode const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_MAP_RSSRESTRICTSPEEDLIMITMODE
