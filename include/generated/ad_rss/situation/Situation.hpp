/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 */

#pragma once

#include <cstdint>
#include <limits>
#include <memory>
#include "ad_rss/situation/RelativePosition.hpp"
#include "ad_rss/situation/SituationId.hpp"
#include "ad_rss/situation/SituationType.hpp"
#include "ad_rss/situation/VehicleState.hpp"
#include "ad_rss/world/ObjectId.hpp"
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
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
  ::ad_rss::situation::SituationId situationId;

  /*!
   * Defines the unique id of an object. This id has to be constant over time for the same object.
   */
  ::ad_rss::world::ObjectId objectId;

  /*!
   * The type of the current situation.
   */
  ::ad_rss::situation::SituationType situationType;

  /*!
   * The vehicle state of the ego vehicle
   */
  ::ad_rss::situation::VehicleState egoVehicleState;

  /*!
   * The vehicle state of the other vehicle within the situation.
   */
  ::ad_rss::situation::VehicleState otherVehicleState;

  /*!
   * The relative position between the ego vehicle and the other vehicle within this situation.
   */
  ::ad_rss::situation::RelativePosition relativePosition;
};

} // namespace situation
} // namespace ad_rss
