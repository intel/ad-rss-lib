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

#include <ad/rss/map/RssObjectData.hpp>

#include <ad/map/route/FullRoute.hpp>
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
   * @param[in] objectData the object data
   */
  explicit RssObjectConversion(RssObjectData const &objectData);

  /*!
   * @brief constructor with explicit occupied regions
   *
   * @param[in] objectData the object data
   * @param[in] objectOccupiedRegions the object's occupied regions explicitly
   */
  RssObjectConversion(RssObjectData const &objectData,
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
   * If updateSpeedLimit() was called in between the maxSpeedOnAcceleration value of the dynamics will be adapted to
   * these.
   */
  ::ad::rss::world::RssDynamics getRssDynamics() const;

  /** @returns RSS Object description
   *
   * If laneIntervalAdded() or fillNotRelevantSceneBoundingBox() was called in between the
   * occupied regions have been filled accordingly. If not, these are empty (which is an invalid object!)
   */
  ::ad::rss::world::Object const &getRssObject() const;

  /** @returns Object id */
  ::ad::rss::world::ObjectId getId() const;

  /** @returns the minimum distance for the object to stop
   *  This is an estimate, that can be used to calculate the connecting route calculation distance to be taken into
   * account.
   */
  bool calculateMinStoppingDistance(::ad::physics::Distance &minStoppingDistance) const;

  /** @brief update the max speed content
   */
  void updateSpeedLimit(::ad::physics::Speed const &maxSpeedOnAcceleration);

  /** @brief lane interval was added to the object route, so append relevant occupied regions
   */
  void laneIntervalAdded(::ad::map::route::LaneInterval const &laneInterval);

  /** @brief update the objects current velocity on the route
   */
  void updateVelocityOnRoute(::ad::map::route::FullRoute const &route);

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
  ::ad::physics::Speed const &getOriginalObjectSpeed() const
  {
    return mOriginalObjectSpeed;
  }

private:
  ::ad::rss::world::Object mRssObject;
  ::ad::map::match::Object const *mObjectMapMatchedPosition;
  ::ad::physics::Speed mMaxSpeedOnAcceleration;
  ::ad::physics::Speed const mOriginalObjectSpeed;
  ::ad::rss::world::RssDynamics const &mRssDynamics;

  void initializeRssObject(::ad::rss::world::ObjectId const &objectId,
                           ::ad::rss::world::ObjectType const &objectType,
                           ::ad::rss::world::OccupiedRegionVector const &objectOccupiedRegions,
                           ::ad::map::match::ENUObjectPosition const &objectEnuPosition,
                           ::ad::physics::Speed const &objectSpeed,
                           ::ad::physics::AngularVelocity const &objectYawRate,
                           ::ad::physics::Angle const &objectSteeringAngle);

  void addRestrictedOccupiedRegion(::ad::map::match::LaneOccupiedRegion const &laneOccupiedRegion,
                                   ::ad::map::route::LaneInterval const &laneInterval);
};

} // namespace map
} // namespace rss
} // namespace ad
