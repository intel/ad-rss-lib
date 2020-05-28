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
 * \brief DataType SituationType
 *
 * Enumeration describing the type of situation.
 */
enum class SituationType : int32_t
{
  /*!
   * The other vehicle cannot conflict with the ego vehicle. This kind of situations are always considered to be safe.
   * Use this situation state to make the object visible in the result vector to be a known object, but not relevant for
   * RSS (e.g. object in opposite direction, but already passed by).
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
  Unstructured = 6
};

} // namespace situation
} // namespace rss
} // namespace ad
/*!
 * \brief Conversion of ::ad::rss::situation::SituationType to std::string helper.
 */
std::string toString(::ad::rss::situation::SituationType const e);

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
template <>::ad::rss::situation::SituationType fromString(std::string const &str);

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_SITUATION_SITUATIONTYPE
#define GEN_GUARD_AD_RSS_SITUATION_SITUATIONTYPE
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
 * \param[in] value SituationType value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, SituationType const &value)
{
  return os << toString(value);
}

} // namespace situation
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for SituationType
 */
inline std::string to_string(::ad::rss::situation::SituationType const &value)
{
  return ::toString(value);
}
} // namespace std
#endif // GEN_GUARD_AD_RSS_SITUATION_SITUATIONTYPE
