/*
 * Copyright (C) 2019 Intel Corporation
 */

/**
 * Generated file
 * @file
 *
 * Model Library     : RSS.ad_rss_data_type_lib
 * Model Version     : 0.0.0
 * Generator         : mo2ive_generator_mockup
 * Generator Version : @GENERATOR_VERSION@
 */

#pragma once

#include <iostream>
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
 * \brief DataType LongitudinalRssAccelerationValues
 *
 * Collection of the RSS acceleration values in longitudinal direction.
 */
struct LongitudinalRssAccelerationValues
{
  using Ptr = std::shared_ptr<LongitudinalRssAccelerationValues>;
  using ConstPtr = std::shared_ptr<LongitudinalRssAccelerationValues const>;

  /*!
   * \brief standard constructor
   */
  LongitudinalRssAccelerationValues() = default;

  /*!
   * \brief standard destructor
   */
  ~LongitudinalRssAccelerationValues() = default;

  /*!
   * \brief standard copy constructor
   */
  LongitudinalRssAccelerationValues(const LongitudinalRssAccelerationValues &other) = default;

  /*!
   * \brief standard move constructor
   */
  LongitudinalRssAccelerationValues(LongitudinalRssAccelerationValues &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other LongitudinalRssAccelerationValues
   *
   * \returns Reference to this LongitudinalRssAccelerationValues.
   */
  LongitudinalRssAccelerationValues &operator=(const LongitudinalRssAccelerationValues &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other LongitudinalRssAccelerationValues
   *
   * \returns Reference to this LongitudinalRssAccelerationValues.
   */
  LongitudinalRssAccelerationValues &operator=(LongitudinalRssAccelerationValues &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other LongitudinalRssAccelerationValues
   *
   * \returns \c true if both LongitudinalRssAccelerationValues are equal
   */
  bool operator==(const LongitudinalRssAccelerationValues &other) const
  {
    return (accelMax == other.accelMax) && (brakeMax == other.brakeMax) && (brakeMin == other.brakeMin)
      && (brakeMinCorrect == other.brakeMinCorrect);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other LongitudinalRssAccelerationValues.
   *
   * \returns \c true if both LongitudinalRssAccelerationValues are different
   */
  bool operator!=(const LongitudinalRssAccelerationValues &other) const
  {
    return !operator==(other);
  }

  /*!
   * Absolute amount of the maximum allowed acceleration.  This value has always to be positive, zero is allowed.
   */
  ::ad::physics::Acceleration accelMax{0.0};

  /*!
   * Absolute amount of the maximum allowed braking deceleration.  This value has always to be positive and not smaller
   * than brakeMin.
   */
  ::ad::physics::Acceleration brakeMax{0.0};

  /*!
   * Absolute amount of the minimum allowed breaking deceleration.  This value has always to be positive and not smaller
   * than brakeMinCorrect.
   */
  ::ad::physics::Acceleration brakeMin{0.0};

  /*!
   * Absolute amount of the minimum allowed breaking deceleration when driving on the correct lane.  This value has
   * always to be positive.
   */
  ::ad::physics::Acceleration brakeMinCorrect{0.0};
};

} // namespace world
} // namespace rss
} // namespace ad

// protect the definition of ostream operator from duplicates by typedef usage within other data types
#ifndef OSTREAM_AD_RSS_WORLD_LONGITUDINALRSSACCELERATIONVALUES
#define OSTREAM_AD_RSS_WORLD_LONGITUDINALRSSACCELERATIONVALUES
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
 * \param[in] stream The output stream to write to
 * \param[in] value LongitudinalRssAccelerationValues value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, LongitudinalRssAccelerationValues const &_value)
{
  os << "LongitudinalRssAccelerationValues(";
  os << "accelMax:";
  os << _value.accelMax;
  os << ",";
  os << "brakeMax:";
  os << _value.brakeMax;
  os << ",";
  os << "brakeMin:";
  os << _value.brakeMin;
  os << ",";
  os << "brakeMinCorrect:";
  os << _value.brakeMinCorrect;
  os << ")";
  return os;
}

} // namespace world
} // namespace rss
} // namespace ad
#endif // OSTREAM_AD_RSS_WORLD_LONGITUDINALRSSACCELERATIONVALUES
