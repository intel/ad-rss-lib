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
 * @brief namespace state
 */
namespace state {

/*!
 * \brief DataType RssStateEvaluator
 *
 * The method used to evaluate the respone.
 */
enum class RssStateEvaluator : int32_t
{
  /*!
   * Not evaluated.
   */
  None = 0,

  /*!
   * longitudinal, opposite direction, correct lane
   */
  LongitudinalDistanceOppositeDirectionEgoCorrectLane = 1,

  /*!
   * longitudinal, opposite direction
   */
  LongitudinalDistanceOppositeDirection = 2,

  /*!
   * longitudinal, same direction, ego in front
   */
  LongitudinalDistanceSameDirectionEgoFront = 3,

  /*!
   * longitudinal, same direction, ego at back
   */
  LongitudinalDistanceSameDirectionOtherInFront = 4,

  /*!
   * lateral
   */
  LateralDistance = 5,

  /*!
   * intersection, other has prio, ego can stop
   */
  IntersectionOtherPriorityEgoAbleToStop = 6,

  /*!
   * intersection, ego has prio, other can stop
   */
  IntersectionEgoPriorityOtherAbleToStop = 7,

  /*!
   * intersection, ego in front
   */
  IntersectionEgoInFront = 8,

  /*!
   * intersection, other in front
   */
  IntersectionOtherInFront = 9,

  /*!
   * intersection, overlap
   */
  IntersectionOverlap = 10
};

} // namespace state
} // namespace ad_rss
/*!
 * \brief Conversion of ::ad_rss::state::RssStateEvaluator to std::string helper.
 */
std::string toString(::ad_rss::state::RssStateEvaluator const e);

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
template <>::ad_rss::state::RssStateEvaluator fromString(std::string const &str);
