/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 */

#pragma once

#include <memory>
#include <string>
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
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
  IntersectionSamePriority = 5
};

} // namespace situation
} // namespace ad_rss
/*!
 * \brief Conversion of ::ad_rss::situation::SituationType to std::string helper.
 */
std::string toString(::ad_rss::situation::SituationType const e);

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
template <>::ad_rss::situation::SituationType fromString(std::string const &str);
