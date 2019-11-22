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
 * \brief DataType LateralRelativePosition
 *
 * Enumeration describing the relative lateral position between two objects, a and b, within their situation coordinate
 * system.
 */
enum class LateralRelativePosition : int32_t
{
  /*!
   * The object a is completely left of object b. This means there is an actual lateral space between them.
   */
  AtLeft = 0,

  /*!
   * The objects overlap. The left border of object a is left of the left border of object b AND the right border of
   * object a is left of the right border of object b.
   */
  OverlapLeft = 1,

  /*!
   * The objects overlap, but neither the conditions for OverlapLeft nor OverlapRight are applicable.
   */
  Overlap = 2,

  /*!
   * The objects overlap. The left border of object a is right of the left border of object b AND the right border of
   * object a is right of the right border of object b.
   */
  OverlapRight = 3,

  /*!
   * The object a is completely right of object b. This means there is an actual lateral space between them.
   */
  AtRight = 4
};

} // namespace situation
} // namespace ad_rss
/*!
 * \brief Conversion of ::ad_rss::situation::LateralRelativePosition to std::string helper.
 */
std::string toString(::ad_rss::situation::LateralRelativePosition const e);

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
template <>::ad_rss::situation::LateralRelativePosition fromString(std::string const &str);
