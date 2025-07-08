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
 * \brief DataType LongitudinalRelativePosition
 *
 * Enumeration describing the relative longitudinal position between two objects, a and b, within their constellation
 * specific lane coordinate system.
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

} // namespace core
} // namespace rss
} // namespace ad
/*!
 * \brief Conversion of ::ad::rss::core::LongitudinalRelativePosition to std::string helper.
 */
std::string toString(::ad::rss::core::LongitudinalRelativePosition const e);

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
template <>::ad::rss::core::LongitudinalRelativePosition fromString(std::string const &str);

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_CORE_LONGITUDINALRELATIVEPOSITION
#define GEN_GUARD_AD_RSS_CORE_LONGITUDINALRELATIVEPOSITION
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
 * \param[in] value LongitudinalRelativePosition value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, LongitudinalRelativePosition const &value)
{
  return os << toString(value);
}

} // namespace core
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for LongitudinalRelativePosition
 */
inline std::string to_string(::ad::rss::core::LongitudinalRelativePosition const &value)
{
  return ::toString(value);
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::core::LongitudinalRelativePosition> : formatter<string_view>
{
  template <typename FormatContext>
  auto format(::ad::rss::core::LongitudinalRelativePosition const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_CORE_LONGITUDINALRELATIVEPOSITION
