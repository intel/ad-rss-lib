// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include <ad/map/route/FullRoute.hpp>
#include <ad/rss/map/RssObjectData.hpp>
#include <ad/rss/world/Object.hpp>
#include <memory>

/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace map
 */
namespace map {

/*!
 * @brief class providing support to convert ad::map objects into ad::rss objects
 */
class RssObjectConversion
{
public:
  /*!
   * \brief Smart pointer on RssObjectConversion
   */
  using Ptr = std::shared_ptr<RssObjectConversion>;

  /*!
   * \brief Smart pointer on constant RssObjectConversion
   */
  using ConstPtr = std::shared_ptr<RssObjectConversion const>;

  /*!
   * @brief constructor
   *
   * @param[in] object_data the object data
   */
  explicit RssObjectConversion(RssObjectData const &object_data);

  /*!
   * @brief constructor with explicit occupied regions
   *
   * @param[in] object_data the object data
   * @param[in] objectOccupiedRegions the object's occupied regions explicitly
   */
  RssObjectConversion(RssObjectData const &object_data,
                      ::ad::rss::world::OccupiedRegionVector const &objectOccupiedRegions);

  /*!
   * \brief standard copy constructor
   */
  RssObjectConversion(const RssObjectConversion &other) = default;

  /*!
   * \brief standard move constructor
   */
  RssObjectConversion(RssObjectConversion &&other) = default;

  /*!
   * \brief standard destructor
   */
  ~RssObjectConversion() = default;

  /*!
   * \brief delete standard assignment operator
   */
  RssObjectConversion &operator=(const RssObjectConversion &other) = delete;

  /*!
   * \brief delete standard move assignment operator
   */
  RssObjectConversion &operator=(RssObjectConversion &&other) = delete;

  /** @returns RssDynamics of the object
   *
   * If updateSpeedLimit() was called in between the max_speed_on_acceleration value of the dynamics will be adapted to
   * these.
   */
  ::ad::rss::world::RssDynamics getRssDynamics() const;

  /** @returns RSS Object description
   *
   * If laneIntervalAdded() or fillNotRelevantConstellationBoundingBox() was called in between the
   * occupied regions have been filled accordingly. If not, these are empty (which is an invalid object!)
   */
  ::ad::rss::world::Object const &getRssObject() const;

  /** @returns Object id */
  ::ad::rss::world::ObjectId getId() const;

  /**
   * This is an estimate, that can be used to calculate the route calculation distances to be taken into account.
   * It uses conservative expectations, i.e. brake_min_correct and no limitation of speed on acceleration.
   *
   * @param[in] object_id the object_id (for debug messages only)
   * @param[in] current_speed the objects current speed
   * @param[in] rss_dynamics the RssDynamics to consider
   * @param[out] conservativeMinStoppingDistance the minimum distance for the object to stop calculated in a
   * conservative way
   *
   * @returns boolean indicating success(\a true)/failure(\a  false) of the calculation
   */
  static bool calculateConservativeMinStoppingDistance(::ad::rss::world::ObjectId const &object_id,
                                                       ::ad::physics::Speed const &current_speed,
                                                       ::ad::rss::world::RssDynamics const &rss_dynamics,
                                                       ::ad::physics::Distance &conservativeMinStoppingDistance);
  /**
   * This is an estimate, that can be used to calculate the route calculation distance to be taken into account.
   * It uses conservative expectations, i.e. brake_min_correct and no limitation of speed on acceleration.
   *
   * @param[out] conservativeMinStoppingDistance the minimum distance for the object to stop calculated in a
   * conservative way
   *
   * @returns boolean indicating success(\a true)/failure(\a  false) of the calculation
   */
  bool calculateConservativeMinStoppingDistance(::ad::physics::Distance &conservativeMinStoppingDistance) const;

  /** @brief update the max speed content
   */
  void updateSpeedLimit(::ad::physics::Speed const &max_speed_on_acceleration);

  /** @brief lane interval was added to the object route, so append relevant occupied regions
   */
  void laneIntervalAdded(::ad::map::route::LaneInterval const &lane_interval);

  /** @brief update the objects current velocity on the route considering the provided route_heading
   *
   *  Use this overload if the route is derived from a ad::map::route::ConnectingRoute by using the heading calculations
   *  from the ConnectingRoute type, as the object bounding boxes are usually removed from the connecting route.
   *  Like this, the object is more or less touching the route and the other overload taking the route as parameter
   *  might not be able to extract the heading.
   */
  void updateVelocityOnRoute(::ad::map::point::ENUHeading const &route_heading);

  /** @brief update the objects current velocity on the route
   *
   *  The bounding box of the object has to be part of the provided route to be able to extract the route heading
   * correctly. Therefore, use this overload if the route was calculated by the ad::map::route::planning::planRoute() or
   * ad::map::route::planning::predictRoute() functions and no heading information is available yet by other means. If
   * the route is derived from a ad::map::route::ConnectingRoute use the overload with the pre-calcuated heading.
   *
   *  @returns \c true if the operation succeeded
   */
  bool updateVelocityOnRoute(::ad::map::route::FullRoute const &route);

  /** @brief return the map matched position object this was created with (might be nullptr)
   */
  ::ad::map::match::Object const *getObjectMapMatchedPosition() const
  {
    return mObjectMapMatchedPosition;
  }

  /** @brief check if the original input speed is in acceptable range
   *
   *  Negative speed is not supported by the RSS implementation; therefore negative input speeds are mapped to zero
   * speed by this class.
   *
   *  But up to a certain small negative speed value, negative speeds still might want to be accepted to account for
   * slowly backward drifting vehicles.
   *  Therefore, the constructor of this class maps all negative speeds to zero, but stores the original provided speed
   * for later analysis.
   *  This function can be used to check for an acceptable speed.
   *
   * @param[in] acceptableNegativeSpeed a small negative speed value that should be allowed to be mapped to zero
   * without error (default -0.5m/s).
   *
   * @returns \c true if the original speed equals the current internal object speed.
   *  It also returns \c true if the original speed is equal or larger than the provided acceptableNegativeSpeed.
   */
  bool isOriginalSpeedAcceptable(::ad::physics::Speed const acceptableNegativeSpeed = ::ad::physics::Speed(-0.5)) const;

  /**
   * @returns the original object speed provided as input
   */
  ::ad::physics::SpeedRange const &getOriginalObjectSpeed() const
  {
    return mOriginalObjectSpeed;
  }

  /**
   * @returns the distance estimate towards the other object
   * The distance uses Euclidian distance of the center points as an estimate.
   */
  ::ad::physics::Distance getDistanceEstimate(RssObjectConversion::ConstPtr other) const;

  /**
   * @returns the length of the vehicle
   */
  ::ad::physics::Distance getVehicleLength() const
  {
    return getRssObject().state.dimension.length;
  }

  /**
   * @returns the width of the vehicle
   */
  ::ad::physics::Distance getVehicleWidth() const
  {
    return getRssObject().state.dimension.width;
  }

private:
  ::ad::rss::world::Object mRssObject;
  ::ad::map::match::Object const *mObjectMapMatchedPosition;
  ::ad::physics::Speed mMaxSpeedOnAcceleration;
  ::ad::physics::SpeedRange const mOriginalObjectSpeed;
  ::ad::rss::world::RssDynamics const &mRssDynamics;

  void initializeRssObject(::ad::rss::world::ObjectId const &object_id,
                           ::ad::rss::world::ObjectType const &object_type,
                           ::ad::rss::world::OccupiedRegionVector const &objectOccupiedRegions,
                           ::ad::map::match::ENUObjectPosition const &objectEnuPosition,
                           ::ad::physics::SpeedRange const &objectSpeed,
                           ::ad::physics::AngularVelocity const &objectYawRate,
                           ::ad::physics::Angle const &objectSteeringAngle);

  void addRestrictedOccupiedRegion(::ad::map::match::LaneOccupiedRegion const &laneOccupiedRegion,
                                   ::ad::map::route::LaneInterval const &lane_interval);
};

} // namespace map
} // namespace rss
} // namespace ad
