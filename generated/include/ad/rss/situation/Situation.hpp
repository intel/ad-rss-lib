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
