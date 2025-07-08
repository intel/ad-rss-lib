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
#include <limits>
#include <memory>
#include <sstream>
#include "ad/physics/Distance.hpp"
#include "ad/rss/core/LateralRelativePosition.hpp"
#include "ad/rss/core/LongitudinalRelativePosition.hpp"
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
 * \brief DataType RelativePosition
 *
 * Describes the relative position between two objects within their constellation specific lane coordinate system.
 */
struct RelativePosition
{
  /*!
   * \brief Smart pointer on RelativePosition
   */
  typedef std::shared_ptr<RelativePosition> Ptr;

  /*!
   * \brief Smart pointer on constant RelativePosition
   */
  typedef std::shared_ptr<RelativePosition const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  RelativePosition() = default;

  /*!
   * \brief standard destructor
   */
  ~RelativePosition() = default;

  /*!
   * \brief standard copy constructor
   */
  RelativePosition(const RelativePosition &other) = default;

  /*!
   * \brief standard move constructor
   */
  RelativePosition(RelativePosition &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RelativePosition
   *
   * \returns Reference to this RelativePosition.
   */
  RelativePosition &operator=(const RelativePosition &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RelativePosition
   *
   * \returns Reference to this RelativePosition.
   */
  RelativePosition &operator=(RelativePosition &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RelativePosition
   *
   * \returns \c true if both RelativePosition are equal
   */
  bool operator==(const RelativePosition &other) const
  {
    return (longitudinal_position == other.longitudinal_position)
      && (longitudinal_distance == other.longitudinal_distance) && (lateral_position == other.lateral_position)
      && (lateral_distance == other.lateral_distance);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RelativePosition.
   *
   * \returns \c true if both RelativePosition are different
   */
  bool operator!=(const RelativePosition &other) const
  {
    return !operator==(other);
  }

  /*!
   * The longitudinal relative position between to objects within their constellation specific lane coordinate system.
   */
  ::ad::rss::core::LongitudinalRelativePosition longitudinal_position{
    ::ad::rss::core::LongitudinalRelativePosition::Overlap};

  /*!
   * The longitudinal distance between the two objects within their constellation specific lane coordinate system.
   */
  ::ad::physics::Distance longitudinal_distance{0.0};

  /*!
   * The lateral relative position between to objects within their constellation specific lane coordinate system.
   */
  ::ad::rss::core::LateralRelativePosition lateral_position{::ad::rss::core::LateralRelativePosition::Overlap};

  /*!
   * The lateral distance between the two objects within their constellation specific lane coordinate system.
   */
  ::ad::physics::Distance lateral_distance{0.0};
};

} // namespace core
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_CORE_RELATIVEPOSITION
#define GEN_GUARD_AD_RSS_CORE_RELATIVEPOSITION
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
 * \param[in] _value RelativePosition value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RelativePosition const &_value)
{
  os << "RelativePosition(";
  os << "longitudinal_position:";
  os << _value.longitudinal_position;
  os << ",";
  os << "longitudinal_distance:";
  os << _value.longitudinal_distance;
  os << ",";
  os << "lateral_position:";
  os << _value.lateral_position;
  os << ",";
  os << "lateral_distance:";
  os << _value.lateral_distance;
  os << ")";
  return os;
}

} // namespace core
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RelativePosition
 */
inline std::string to_string(::ad::rss::core::RelativePosition const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::core::RelativePosition> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::core::RelativePosition const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_CORE_RELATIVEPOSITION
