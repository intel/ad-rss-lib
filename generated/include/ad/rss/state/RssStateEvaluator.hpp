/*
 *  @COPYRIGHT_TAG@
 */

/**
 * Generated file
 * @file
 *
 * Model Library     : RSS.ad_rss_data_type_lib
 * Model Version     : 0.0.0
 * Generator         : mo2ive_generator_mockup
 * Generator Version : 10.5.6-1843
 */

#pragma once

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
