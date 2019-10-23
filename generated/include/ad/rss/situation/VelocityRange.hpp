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

#include <memory>
#include "ad/physics/SpeedRange.hpp"
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
 * \brief DataType VelocityRange
 *
 * Defines the velocity range of an object within its current lane. The velocity range consists of a longitudinal and a
 * lateral component.
 */
struct VelocityRange
{
  using Ptr = std::shared_ptr<VelocityRange>;
  using ConstPtr = std::shared_ptr<VelocityRange const>;

  /*!
   * \brief standard constructor
   */
  VelocityRange() = default;

  /*!
   * \brief standard destructor
   */
  ~VelocityRange() = default;

  /*!
   * \brief standard copy constructor
   */
  VelocityRange(const VelocityRange &other) = default;

  /*!
   * \brief standard move constructor
   */
  VelocityRange(VelocityRange &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other VelocityRange
   *
   * \returns Reference to this VelocityRange.
   */
  VelocityRange &operator=(const VelocityRange &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other VelocityRange
   *
   * \returns Reference to this VelocityRange.
   */
  VelocityRange &operator=(VelocityRange &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other VelocityRange
   *
   * \returns \c true if both VelocityRange are equal
   */
  bool operator==(const VelocityRange &other) const
  {
    return (speedLon == other.speedLon) && (speedLat == other.speedLat);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other VelocityRange.
   *
   * \returns \c true if both VelocityRange are different
   */
  bool operator!=(const VelocityRange &other) const
  {
    return !operator==(other);
  }

  /*!
   * The longitudinal speed component of the velocity vector.
   * The longitudinal component of the velocity is always measured tangential to the
   * center line of the current lane.
   */
  ::ad::physics::SpeedRange speedLon;

  /*!
   * The lateral speed component of the velocity vector.
   * The lateral component of the velocity is always measured orthogonal to the center
   * line of the current lane.
   */
  ::ad::physics::SpeedRange speedLat;
};

} // namespace situation
} // namespace rss
} // namespace ad
