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
#include "ad/physics/Acceleration.hpp"
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
 * \brief DataType LateralRssAccelerationValues
 *
 * Collection of the RSS acceleration values in lateral direction.
 */
struct LateralRssAccelerationValues
{
  using Ptr = std::shared_ptr<LateralRssAccelerationValues>;
  using ConstPtr = std::shared_ptr<LateralRssAccelerationValues const>;

  /*!
   * \brief standard constructor
   */
  LateralRssAccelerationValues() = default;

  /*!
   * \brief standard destructor
   */
  ~LateralRssAccelerationValues() = default;

  /*!
   * \brief standard copy constructor
   */
  LateralRssAccelerationValues(const LateralRssAccelerationValues &other) = default;

  /*!
   * \brief standard move constructor
   */
  LateralRssAccelerationValues(LateralRssAccelerationValues &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other LateralRssAccelerationValues
   *
   * \returns Reference to this LateralRssAccelerationValues.
   */
  LateralRssAccelerationValues &operator=(const LateralRssAccelerationValues &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other LateralRssAccelerationValues
   *
   * \returns Reference to this LateralRssAccelerationValues.
   */
  LateralRssAccelerationValues &operator=(LateralRssAccelerationValues &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other LateralRssAccelerationValues
   *
   * \returns \c true if both LateralRssAccelerationValues are equal
   */
  bool operator==(const LateralRssAccelerationValues &other) const
  {
    return (accelMax == other.accelMax) && (brakeMin == other.brakeMin);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other LateralRssAccelerationValues.
   *
   * \returns \c true if both LateralRssAccelerationValues are different
   */
  bool operator!=(const LateralRssAccelerationValues &other) const
  {
    return !operator==(other);
  }

  /*!
   * Absolute amount of the maximum allowed acceleration. This value has always to be positive, zero is allowed.
   */
  ::ad::physics::Acceleration accelMax{0.0};

  /*!
   * Absolute amount of the minimum allowed breaking deceleration. This value has always to be positive.
   */
  ::ad::physics::Acceleration brakeMin{0.0};
};

} // namespace world
} // namespace rss
} // namespace ad
