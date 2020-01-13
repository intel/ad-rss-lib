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
 * Generator Version : 11.0.0-1911
 */

#pragma once

#include <iostream>
#include <limits>
#include <memory>
#include <sstream>
#include "ad/physics/ParametricRange.hpp"
#include "ad/rss/world/LaneSegmentId.hpp"
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
 * \brief DataType OccupiedRegion
 *
 * Describes the region that an object covers within a lane segment.
 * An object on a lane is described by the parametric range it spans in each of the
 * two lane segment directions.
 */
struct OccupiedRegion
{
  /*!
   * \brief Smart pointer on OccupiedRegion
   */
  using Ptr = std::shared_ptr<OccupiedRegion>;

  /*!
   * \brief Smart pointer on constant OccupiedRegion
   */
  using ConstPtr = std::shared_ptr<OccupiedRegion const>;

  /*!
   * \brief standard constructor
   */
  OccupiedRegion() = default;

  /*!
   * \brief standard destructor
   */
  ~OccupiedRegion() = default;

  /*!
   * \brief standard copy constructor
   */
  OccupiedRegion(const OccupiedRegion &other) = default;

  /*!
   * \brief standard move constructor
   */
  OccupiedRegion(OccupiedRegion &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other OccupiedRegion
   *
   * \returns Reference to this OccupiedRegion.
   */
  OccupiedRegion &operator=(const OccupiedRegion &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other OccupiedRegion
   *
   * \returns Reference to this OccupiedRegion.
   */
  OccupiedRegion &operator=(OccupiedRegion &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other OccupiedRegion
   *
   * \returns \c true if both OccupiedRegion are equal
   */
  bool operator==(const OccupiedRegion &other) const
  {
    return (segmentId == other.segmentId) && (lonRange == other.lonRange) && (latRange == other.latRange);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other OccupiedRegion.
   *
   * \returns \c true if both OccupiedRegion are different
   */
  bool operator!=(const OccupiedRegion &other) const
  {
    return !operator==(other);
  }

  /*!
   * The id of the lane segment this region refers to.
   */
  ::ad::rss::world::LaneSegmentId segmentId;

  /*!
   * The parametric range an object spans in longitudinal direction within a lane segment.
   */
  ::ad::physics::ParametricRange lonRange;

  /*!
   * The parametric range an object spans in lateral direction within a lane segment.
   */
  ::ad::physics::ParametricRange latRange;
};

} // namespace world
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_WORLD_OCCUPIEDREGION
#define GEN_GUARD_AD_RSS_WORLD_OCCUPIEDREGION
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
 * \param[in] os The output stream to write to
 * \param[in] _value OccupiedRegion value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, OccupiedRegion const &_value)
{
  os << "OccupiedRegion(";
  os << "segmentId:";
  os << _value.segmentId;
  os << ",";
  os << "lonRange:";
  os << _value.lonRange;
  os << ",";
  os << "latRange:";
  os << _value.latRange;
  os << ")";
  return os;
}

} // namespace world
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for OccupiedRegion
 */
inline std::string to_string(::ad::rss::world::OccupiedRegion const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std
#endif // GEN_GUARD_AD_RSS_WORLD_OCCUPIEDREGION
