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
 * Generator Version : 10.6.0-1878
 */

#pragma once

#include <iostream>
#include <limits>
#include <memory>
#include "ad/rss/situation/RelativePosition.hpp"
#include "ad/rss/situation/SituationId.hpp"
#include "ad/rss/situation/SituationType.hpp"
#include "ad/rss/situation/VehicleState.hpp"
#include "ad/rss/world/ObjectId.hpp"
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
 * \brief DataType Situation
 *
 * Describes a RSS situation.
 * A situation always considers the relative relation between two objects: the ego
 * vehicle and one other vehicle. The situation coordinate system is unique for one
 * specific situation. As a consequence the vehicle state of the ego vehicle in different
 * RSS situations cannot be compared to each other. Consists of a situation id and
 * type, the VehicleState of the ego vehicle, the VehicleState of the other vehicle
 * and the RelativePosition between ego vehicle and other vehicle.
 */
struct Situation
{
  using Ptr = std::shared_ptr<Situation>;
  using ConstPtr = std::shared_ptr<Situation const>;

  /*!
   * \brief standard constructor
   */
  Situation() = default;

  /*!
   * \brief standard destructor
   */
  ~Situation() = default;

  /*!
   * \brief standard copy constructor
   */
  Situation(const Situation &other) = default;

  /*!
   * \brief standard move constructor
   */
  Situation(Situation &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other Situation
   *
   * \returns Reference to this Situation.
   */
  Situation &operator=(const Situation &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other Situation
   *
   * \returns Reference to this Situation.
   */
  Situation &operator=(Situation &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Situation
   *
   * \returns \c true if both Situation are equal
   */
  bool operator==(const Situation &other) const
  {
    return (situationId == other.situationId) && (objectId == other.objectId) && (situationType == other.situationType)
      && (egoVehicleState == other.egoVehicleState) && (otherVehicleState == other.otherVehicleState)
      && (relativePosition == other.relativePosition);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Situation.
   *
   * \returns \c true if both Situation are different
   */
  bool operator!=(const Situation &other) const
  {
    return !operator==(other);
  }

  /*!
   * The unique id of the situation.
   * The situation id has to be constant over time for a pair of ego vehicle and specific
   * other vehicle.
   * E.g. might be filled with an id identifying the other vehicle unambiguously.
   */
  ::ad::rss::situation::SituationId situationId;

  /*!
   * Defines the unique id of an object. This id has to be constant over time for the same object.
   */
  ::ad::rss::world::ObjectId objectId;

  /*!
   * The type of the current situation.
   */
  ::ad::rss::situation::SituationType situationType;

  /*!
   * The vehicle state of the ego vehicle
   */
  ::ad::rss::situation::VehicleState egoVehicleState;

  /*!
   * The vehicle state of the other vehicle within the situation.
   */
  ::ad::rss::situation::VehicleState otherVehicleState;

  /*!
   * The relative position between the ego vehicle and the other vehicle within this situation.
   */
  ::ad::rss::situation::RelativePosition relativePosition;
};

} // namespace situation
} // namespace rss
} // namespace ad

// protect the definition of ostream operator from duplicates by typedef usage within other data types
#ifndef OSTREAM_AD_RSS_SITUATION_SITUATION
#define OSTREAM_AD_RSS_SITUATION_SITUATION
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
 * \param[in] value Situation value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, Situation const &_value)
{
  os << "Situation(";
  os << "situationId:";
  os << _value.situationId;
  os << ",";
  os << "objectId:";
  os << _value.objectId;
  os << ",";
  os << "situationType:";
  os << _value.situationType;
  os << ",";
  os << "egoVehicleState:";
  os << _value.egoVehicleState;
  os << ",";
  os << "otherVehicleState:";
  os << _value.otherVehicleState;
  os << ",";
  os << "relativePosition:";
  os << _value.relativePosition;
  os << ")";
  return os;
}

} // namespace situation
} // namespace rss
} // namespace ad
#endif // OSTREAM_AD_RSS_SITUATION_SITUATION
