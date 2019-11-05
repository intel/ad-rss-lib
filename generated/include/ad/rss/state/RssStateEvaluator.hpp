/*
 * Copyright (C) 2019 Intel Corporation
 */

/**
 * Generated file
 * @file
 *
 * Model Library     : RSS.ad_rss_data_type_lib
 * Model Version     : 0.0.0
 * Generator         : mo2ive_generator_mockup
 * Generator Version : @GENERATOR_VERSION@
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
} // namespace rss
} // namespace ad
/*!
 * \brief Conversion of ::ad::rss::state::RssStateEvaluator to std::string helper.
 */
std::string toString(::ad::rss::state::RssStateEvaluator const e);

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
template <>::ad::rss::state::RssStateEvaluator fromString(std::string const &str);

// protect the definition of ostream operator from duplicates by typedef usage within other data types
#ifndef OSTREAM_AD_RSS_STATE_RSSSTATEEVALUATOR
#define OSTREAM_AD_RSS_STATE_RSSSTATEEVALUATOR
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace state
 */
namespace state {

/**
 * \brief standard ostream operator
 *
 * \param[in] stream The output stream to write to
 * \param[in] value RssStateEvaluator value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RssStateEvaluator const &value)
{
  std::string valueString;
  try
  {
    valueString = toString(value);
  }
  catch (std::exception &e)
  {
    valueString = "INVALID";
  }
  return os << valueString;
}

} // namespace state
} // namespace rss
} // namespace ad
#endif // OSTREAM_AD_RSS_STATE_RSSSTATEEVALUATOR
