/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-1988
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
 * \brief DataType UnstructuredSceneResponse
 */
enum class UnstructuredSceneResponse : int32_t
{
  /*!
   * No response.
   */
  None = 0,

  /*!
   * The object is allowed to continue forward.
   */
  ContinueForward = 1,

  /*!
   * The object is allowed to drive away within the calculated heading range.
   */
  DriveAway = 2,

  /*!
   * The vehicle has to brake.
   */
  Brake = 3
};

} // namespace state
} // namespace rss
} // namespace ad
/*!
 * \brief Conversion of ::ad::rss::state::UnstructuredSceneResponse to std::string helper.
 */
std::string toString(::ad::rss::state::UnstructuredSceneResponse const e);

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
template <>::ad::rss::state::UnstructuredSceneResponse fromString(std::string const &str);

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_STATE_UNSTRUCTUREDSCENERESPONSE
#define GEN_GUARD_AD_RSS_STATE_UNSTRUCTUREDSCENERESPONSE
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
 * \param[in] os The output stream to write to
 * \param[in] value UnstructuredSceneResponse value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, UnstructuredSceneResponse const &value)
{
  return os << toString(value);
}

} // namespace state
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for UnstructuredSceneResponse
 */
inline std::string to_string(::ad::rss::state::UnstructuredSceneResponse const &value)
{
  return ::toString(value);
}
} // namespace std
#endif // GEN_GUARD_AD_RSS_STATE_UNSTRUCTUREDSCENERESPONSE
