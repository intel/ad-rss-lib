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
 * @brief namespace world
 */
namespace world {

/*!
 * \brief DataType ConstellationType
 *
 * Enumeration describing the type of constellation.
 */
enum class ConstellationType : int32_t
{
  /*!
   * The other vehicle cannot conflict with the ego vehicle. This kind of constellations are always considered to be
   * safe. Use this constellation type to make the object visible in the result vector to be a known object, but not
   * relevant for RSS (e.g. object in opposite direction, but already passed by).
   */
  NotRelevant = 0,

  /*!
   * Both drive on the same road in the same direction.
   */
  SameDirection = 1,

  /*!
   * Both drive on the same road in the opposite direction.
   */
  OppositeDirection = 2,

  /*!
   * Both drive on individual roads which intersect at the end. Ego vehicle has priority over object.
   */
  IntersectionEgoHasPriority = 3,

  /*!
   * Both drive on individual roads which intersect at the end. Object has priority over ego vehicle.
   */
  IntersectionObjectHasPriority = 4,

  /*!
   * Both drive on individual roads which intersect at the end. Object and ego vehicle have same priority.
   */
  IntersectionSamePriority = 5,

  /*!
   * An unstructured constellation.
   */
  Unstructured = 6
};

} // namespace world
} // namespace rss
} // namespace ad
/*!
 * \brief Conversion of ::ad::rss::world::ConstellationType to std::string helper.
 */
std::string toString(::ad::rss::world::ConstellationType const e);

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
template <>::ad::rss::world::ConstellationType fromString(std::string const &str);

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_WORLD_CONSTELLATIONTYPE
#define GEN_GUARD_AD_RSS_WORLD_CONSTELLATIONTYPE
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
 * \param[in] value ConstellationType value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, ConstellationType const &value)
{
  return os << toString(value);
}

} // namespace world
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for ConstellationType
 */
inline std::string to_string(::ad::rss::world::ConstellationType const &value)
{
  return ::toString(value);
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::world::ConstellationType> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::world::ConstellationType const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_WORLD_CONSTELLATIONTYPE
