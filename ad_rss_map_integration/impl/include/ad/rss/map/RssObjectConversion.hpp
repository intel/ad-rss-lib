// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include <ad/map/match/Object.hpp>
#include <ad/map/route/FullRoute.hpp>
#include <ad/rss/world/Object.hpp>
#include <ad/rss/world/RssDynamics.hpp>
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
   * @param[in] objectId the object id
   * @param[in] objectType the object type
   * @param[in] objectMapMatchedPosition the object's position described by its map matched bounding box and position
   * @param[in] objectSpeed the object's speed
   * @param[in] objectYawRate the object's yaw rate
   * @param[in] rssDynamics the object's (initial) RSS dynamics
   */
  RssObjectConversion(::ad::rss::world::ObjectId const &objectId,
                      ::ad::rss::world::ObjectType const &objectType,
                      ::ad::map::match::Object const &objectMapMatchedPosition,
                      ::ad::physics::Speed const &objectSpeed,
                      ::ad::physics::AngularVelocity const &objectYawRate,
                      ::ad::rss::world::RssDynamics const &rssDynamics);

  /*!
   * @brief constructor with explicit occupied regions
   *
   * @param[in] objectId the object id
   * @param[in] objectType the object type
   * @param[in] objectOccupiedRegions the object's occupied regions explicitly
   * @param[in] objectEnuPosition the object's enu position
   * @param[in] objectSpeed the object's speed
   * @param[in] objectYawRate the object's yaw rate
   * @param[in] rssDynamics the object's (initial) RSS dynamics
   */
  RssObjectConversion(::ad::rss::world::ObjectId const &objectId,
                      ::ad::rss::world::ObjectType const &objectType,
                      ::ad::rss::world::OccupiedRegionVector const &objectOccupiedRegions,
                      ::ad::map::match::ENUObjectPosition const &objectEnuPosition,
                      ::ad::physics::Speed const &objectSpeed,
                      ::ad::physics::AngularVelocity const &objectYawRate,
                      ::ad::rss::world::RssDynamics const &rssDynamics);

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

  /** @returns RssDynamics of the object
   *
   * If updateSpeedLimit() was called in between the maxSpeed value of the dynamics will be adapted to these.
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
  void updateSpeedLimit(::ad::physics::Speed const &maxSpeed);

  /** @brief lane interval was added to the object route, so append relevant occupied regions
   */
  void laneIntervalAdded(::ad::map::route::LaneInterval const &laneInterval);

  /** @brief update the objects current velocity on the route
   */
  void updateVelocityOnRoute(::ad::map::route::FullRoute const &route);

  /** @brief fill occupied regions with all dummy regions from the map::match::LaneOccupiedRegionList
   */
  void fillNotRelevantSceneBoundingBox();

  /** @brief return the map matched position object this was created with (might be nullptr)
   */
  ::ad::map::match::Object const *getObjectMapMatchedPosition() const
  {
    return mObjectMapMatchedPosition;
  }

private:
  ::ad::rss::world::Object mRssObject;
  ::ad::map::match::Object const *mObjectMapMatchedPosition;
  ::ad::physics::Speed mMaxSpeed;
  ::ad::rss::world::RssDynamics const &mRssDynamics;

  void addRestrictedOccupiedRegion(::ad::map::match::LaneOccupiedRegion const &laneOccupiedRegion,
                                   ::ad::map::route::LaneInterval const &laneInterval);
};

} // namespace map
} // namespace rss
} // namespace ad
