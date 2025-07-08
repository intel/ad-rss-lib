/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2022 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-2046
 */

#pragma once

#include <iostream>
#include <memory>
#include <string>
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace core
 */
namespace core {

/*!
 * \brief DataType LateralRelativePosition
 *
 * Enumeration describing the relative lateral position between two objects, a and b, within their constellation
 * specific lane coordinate system.
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

} // namespace core
} // namespace rss
} // namespace ad
/*!
 * \brief Conversion of ::ad::rss::core::LateralRelativePosition to std::string helper.
 */
std::string toString(::ad::rss::core::LateralRelativePosition const e);

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
template <>::ad::rss::core::LateralRelativePosition fromString(std::string const &str);

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_CORE_LATERALRELATIVEPOSITION
#define GEN_GUARD_AD_RSS_CORE_LATERALRELATIVEPOSITION
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace core
 */
namespace core {

/**
 * \brief standard ostream operator
 *
 * \param[in] os The output stream to write to
 * \param[in] value LateralRelativePosition value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, LateralRelativePosition const &value)
{
  return os << toString(value);
}

} // namespace core
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for LateralRelativePosition
 */
inline std::string to_string(::ad::rss::core::LateralRelativePosition const &value)
{
  return ::toString(value);
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::core::LateralRelativePosition> : formatter<string_view>
{
  template <typename FormatContext>
  auto format(::ad::rss::core::LateralRelativePosition const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_CORE_LATERALRELATIVEPOSITION
