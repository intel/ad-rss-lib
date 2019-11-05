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

// protect the definition of ostream operator from duplicates by typedef usage within other data types
#ifndef OSTREAM_AD_RSS_SITUATION_SITUATIONTYPE
#define OSTREAM_AD_RSS_SITUATION_SITUATIONTYPE
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
 * \param[in] stream The output stream to write to
 * \param[in] value SituationType value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, SituationType const &value)
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

} // namespace situation
} // namespace rss
} // namespace ad
#endif // OSTREAM_AD_RSS_SITUATION_SITUATIONTYPE
