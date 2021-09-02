// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2020-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include <ad/map/match/Object.hpp>
#include <ad/rss/world/Object.hpp>
#include <ad/rss/world/RssDynamics.hpp>

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

/**
 * @brief struct describing the object input data
 */
struct RssObjectData
{
  //! the object id
  ::ad::rss::world::ObjectId id;
  //! the object type
  ::ad::rss::world::ObjectType type;
  //! the object's position described by its map matched bounding box and position
  ::ad::map::match::Object matchObject;
  //! the object's speed
  ::ad::physics::Speed speed;
  //! the object's yaw rate
  ::ad::physics::AngularVelocity yawRate;
  //! the object's steering angle (only relevant for vehicles)
  ::ad::physics::Angle steeringAngle;
  //! the object's RssDynamics to be applied
  ::ad::rss::world::RssDynamics rssDynamics;
};

} // namespace map
} // namespace rss
} // namespace ad
