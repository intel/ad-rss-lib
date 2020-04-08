/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-1988
 */

#pragma once

#include <iostream>
#include <memory>
#include <string>
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace situation
 */
namespace situation {

/*!
 * \brief DataType CoordinateSystemAxis
 *
 * Enumeration defining the axis of the situation coordinate system.
 */
enum class CoordinateSystemAxis : int32_t
{
  /*!
   * longitudinal axis: ego vehicle is driving in positive direction
   */
  Longitudinal = 0,

  /*!
   * lateral axis: ego vehicle left to right defines the positive direction
   */
  Lateral = 1
};

} // namespace situation
} // namespace rss
} // namespace ad
/*!
 * \brief Conversion of ::ad::rss::situation::CoordinateSystemAxis to std::string helper.
 */
std::string toString(::ad::rss::situation::CoordinateSystemAxis const e);

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
template <>::ad::rss::situation::CoordinateSystemAxis fromString(std::string const &str);

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_SITUATION_COORDINATESYSTEMAXIS
#define GEN_GUARD_AD_RSS_SITUATION_COORDINATESYSTEMAXIS
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace situation
 */
namespace situation {

/**
 * \brief standard ostream operator
 *
 * \param[in] os The output stream to write to
 * \param[in] value CoordinateSystemAxis value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, CoordinateSystemAxis const &value)
{
  return os << toString(value);
}

} // namespace situation
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for CoordinateSystemAxis
 */
inline std::string to_string(::ad::rss::situation::CoordinateSystemAxis const &value)
{
  return ::toString(value);
}
} // namespace std
#endif // GEN_GUARD_AD_RSS_SITUATION_COORDINATESYSTEMAXIS
