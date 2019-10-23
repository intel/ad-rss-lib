/*
 *  @COPYRIGHT_TAG@
 */

/**
 * Generated file
 * @file
 *
 * Model Library     : RSS.ad_rss_data_type_lib
 * Model Version     : 0.0.0
 * Generator         : mo2ive_generator_mockup
 * Generator Version : 10.5.6-1843
 */

#pragma once

#include <limits>
#include <memory>
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
  using Ptr = std::shared_ptr<OccupiedRegion>;
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
