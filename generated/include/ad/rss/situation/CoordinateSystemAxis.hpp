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

// protect the definition of ostream operator from duplicates by typedef usage within other data types
#ifndef OSTREAM_AD_RSS_SITUATION_COORDINATESYSTEMAXIS
#define OSTREAM_AD_RSS_SITUATION_COORDINATESYSTEMAXIS
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
 * \param[in] value CoordinateSystemAxis value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, CoordinateSystemAxis const &value)
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
#endif // OSTREAM_AD_RSS_SITUATION_COORDINATESYSTEMAXIS
