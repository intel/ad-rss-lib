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

// protect the definition of ostream operator from duplicates by typedef usage within other data types
#ifndef OSTREAM_AD_RSS_WORLD_LANEDRIVINGDIRECTION
#define OSTREAM_AD_RSS_WORLD_LANEDRIVINGDIRECTION
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
 * \param[in] stream The output stream to write to
 * \param[in] value LaneDrivingDirection value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, LaneDrivingDirection const &value)
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

} // namespace world
} // namespace rss
} // namespace ad
#endif // OSTREAM_AD_RSS_WORLD_LANEDRIVINGDIRECTION
