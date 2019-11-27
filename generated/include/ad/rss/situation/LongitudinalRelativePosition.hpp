/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 10.6.0-1878
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
 * \brief DataType LongitudinalRelativePosition
 *
 * Enumeration describing the relative longitudinal position between two objects, a and b, within their situation
 * coordinate system.
 */
enum class LongitudinalRelativePosition : int32_t
{
  /*!
   * The object a is completely in front of object b. This means there is an actual longitudinal space between them.
   */
  InFront = 0,

  /*!
   * The objects overlap. The front border of object a is in front of the front border of object b AND the back border
   * of object a is in front of the back border of object b.
   */
  OverlapFront = 1,

  /*!
   * The objects overlap, but neither the conditions for OverlapFront nor OverlapBack are applicable.
   */
  Overlap = 2,

  /*!
   * The objects overlap. The front border of object a is at back of the front border of object b AND the back border of
   * object a is at back of the back border of object b.
   */
  OverlapBack = 3,

  /*!
   * The object a is completely at back of object b. This means there is an actual longitudinal space between them.
   */
  AtBack = 4
};

} // namespace situation
} // namespace rss
} // namespace ad
/*!
 * \brief Conversion of ::ad::rss::situation::LongitudinalRelativePosition to std::string helper.
 */
std::string toString(::ad::rss::situation::LongitudinalRelativePosition const e);

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
template <>::ad::rss::situation::LongitudinalRelativePosition fromString(std::string const &str);

// protect the definition of ostream operator from duplicates by typedef usage within other data types
#ifndef OSTREAM_AD_RSS_SITUATION_LONGITUDINALRELATIVEPOSITION
#define OSTREAM_AD_RSS_SITUATION_LONGITUDINALRELATIVEPOSITION
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
 * \param[in] value LongitudinalRelativePosition value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, LongitudinalRelativePosition const &value)
{
  return os << toString(value);
}

} // namespace situation
} // namespace rss
} // namespace ad
#endif // OSTREAM_AD_RSS_SITUATION_LONGITUDINALRELATIVEPOSITION
