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
 * Generator Version : 11.0.0-1997
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
 * @brief namespace world
 */
namespace world {

/*!
 * \brief DataType LaneDrivingDirection
 */
enum class LaneDrivingDirection : int32_t
{
  /*!
   * Traffic flow in this lane segment is in both directions.
   */
  Bidirectional = 0,

  /*!
   * Nominal traffic flow in this lane segment is positive RoadArea direction.
   */
  Positive = 1,

  /*!
   * Nominal traffic flow in this lane segment is negative RoadArea direction.
   */
  Negative = 2
};

} // namespace world
} // namespace rss
} // namespace ad
/*!
 * \brief Conversion of ::ad::rss::world::LaneDrivingDirection to std::string helper.
 */
std::string toString(::ad::rss::world::LaneDrivingDirection const e);

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
template <>::ad::rss::world::LaneDrivingDirection fromString(std::string const &str);

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_WORLD_LANEDRIVINGDIRECTION
#define GEN_GUARD_AD_RSS_WORLD_LANEDRIVINGDIRECTION
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace world
 */
namespace world {

/**
 * \brief standard ostream operator
 *
 * \param[in] os The output stream to write to
 * \param[in] value LaneDrivingDirection value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, LaneDrivingDirection const &value)
{
  return os << toString(value);
}

} // namespace world
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for LaneDrivingDirection
 */
inline std::string to_string(::ad::rss::world::LaneDrivingDirection const &value)
{
  return ::toString(value);
}
} // namespace std
#endif // GEN_GUARD_AD_RSS_WORLD_LANEDRIVINGDIRECTION
