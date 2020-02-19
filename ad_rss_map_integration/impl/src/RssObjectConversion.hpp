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
   * \brief Smart pointer on FullRoute
   */
  using Ptr = std::shared_ptr<RssObjectConversion>;

  /*!
   * \brief Smart pointer on constant FullRoute
   */
  using ConstPtr = std::shared_ptr<RssObjectConversion const>;

  /*!
   * @brief constructor
   *
   * @param[in] objectId the object id
   * @param[in] objectType the object type
   * @param[in] objectMapMatchedPosition the object's position described by its map matched bounding box and position
   * @param[in] objectSpeed the object's speed
   */
  RssObjectConversion(::ad::rss::world::ObjectId const &objectId,
                      ::ad::rss::world::ObjectType const &objectType,
                      ::ad::map::match::Object const &objectMapMatchedPosition,
                      ::ad::physics::Speed const &objectSpeed,
                      ::ad::rss::world::RssDynamics const &rssDynamics);

  /*!
   * @brief constructor with explicit occupied regions
   *
   * @param[in] objectId the object id
   * @param[in] objectType the object type
   * @param[in] objectMapMatchedPosition the object's position described by its map matched bounding box and position
   * @param[in] objectSpeed the object's speed
   */
  RssObjectConversion(::ad::rss::world::ObjectId const &objectId,
                      ::ad::rss::world::ObjectType const &objectType,
                      ::ad::rss::world::OccupiedRegionVector const &objectOccupiedRegions,
                      ::ad::physics::Speed const &objectSpeed,
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

  ::ad::rss::world::RssDynamics getRssDynamics() const;

  ::ad::rss::world::Object const &getRssObject() const;

  ::ad::rss::world::ObjectId getId() const;

  ::ad::physics::Speed getMaxSpeed() const;

  bool calculateMinStoppingDistance(::ad::physics::Distance &minStoppingDistance) const;

  void updateSpeedLimit(::ad::physics::Speed const &maxSpeed);

  void laneIntervalAdded(::ad::map::route::LaneInterval const &laneInterval);

  void updateVelocityOnRoute(::ad::map::route::FullRoute const &route);

private:
  ::ad::rss::world::Object mRssObject;
  ::ad::map::match::Object const *mObjectMapMatchedPosition;
  ::ad::physics::Speed const mSpeed;
  ::ad::physics::Speed mMaxSpeed;
  ::ad::rss::world::RssDynamics const &mRssDynamics;
};

} // namespace map
} // namespace rss
} // namespace ad
