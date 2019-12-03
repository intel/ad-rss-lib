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
 * Generator Version : 10.6.0-1882
 */

#pragma once

#include <iostream>
#include <limits>
#include <memory>
#include "ad/physics/Distance.hpp"
#include "ad/rss/situation/LateralRelativePosition.hpp"
#include "ad/rss/situation/LongitudinalRelativePosition.hpp"
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
 * \brief DataType RelativePosition
 *
 * Describes the relative position between two objects within their situation coordinate system.
 */
struct RelativePosition
{
  using Ptr = std::shared_ptr<RelativePosition>;
  using ConstPtr = std::shared_ptr<RelativePosition const>;

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
    return (longitudinalPosition == other.longitudinalPosition) && (longitudinalDistance == other.longitudinalDistance)
      && (lateralPosition == other.lateralPosition) && (lateralDistance == other.lateralDistance);
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
   * The longitudinal relative position between to objects within their situation coordinate system.
   */
  ::ad::rss::situation::LongitudinalRelativePosition longitudinalPosition{
    ::ad::rss::situation::LongitudinalRelativePosition::Overlap};

  /*!
   * The longitudinal distance between the two objects within their situation coordinate system.
   */
  ::ad::physics::Distance longitudinalDistance{0.0};

  /*!
   * The lateral relative position between to objects within their situation coordinate system.
   */
  ::ad::rss::situation::LateralRelativePosition lateralPosition{::ad::rss::situation::LateralRelativePosition::Overlap};

  /*!
   * The lateral distance between the two objects within their situation coordinate system.
   */
  ::ad::physics::Distance lateralDistance{0.0};
};

} // namespace situation
} // namespace rss
} // namespace ad

// protect the definition of ostream operator from duplicates by typedef usage within other data types
#ifndef OSTREAM_AD_RSS_SITUATION_RELATIVEPOSITION
#define OSTREAM_AD_RSS_SITUATION_RELATIVEPOSITION
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
 * \param[in] value RelativePosition value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RelativePosition const &_value)
{
  os << "RelativePosition(";
  os << "longitudinalPosition:";
  os << _value.longitudinalPosition;
  os << ",";
  os << "longitudinalDistance:";
  os << _value.longitudinalDistance;
  os << ",";
  os << "lateralPosition:";
  os << _value.lateralPosition;
  os << ",";
  os << "lateralDistance:";
  os << _value.lateralDistance;
  os << ")";
  return os;
}

} // namespace situation
} // namespace rss
} // namespace ad
#endif // OSTREAM_AD_RSS_SITUATION_RELATIVEPOSITION
