// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/map/RssObjectConversion.hpp"

#include <ad/map/point/HeadingOperation.hpp>
#include <ad/map/route/RouteOperation.hpp>
#include <ad/physics/Operation.hpp>
#include <ad/rss/structured/RssFormulas.hpp>
#include <algorithm>
#include "ad/rss/map/Logging.hpp"
#include "ad/rss/map/RssWorldModelCreator.hpp"

namespace ad {
namespace rss {
namespace map {

RssObjectConversion::RssObjectConversion(RssObjectData const &object_data)
  : mObjectMapMatchedPosition(&object_data.match_object)
  , mMaxSpeedOnAcceleration(0.)
  , mOriginalObjectSpeed(object_data.speed_range)
  , mRssDynamics(object_data.rss_dynamics)
{
  initializeRssObject(object_data.id,
                      object_data.type,
                      ::ad::rss::world::OccupiedRegionVector(),
                      object_data.match_object.enu_position,
                      object_data.speed_range,
                      object_data.yaw_rate,
                      object_data.steering_angle);
}

RssObjectConversion::RssObjectConversion(RssObjectData const &object_data,
                                         ::ad::rss::world::OccupiedRegionVector const &objectOccupiedRegions)
  : mObjectMapMatchedPosition(nullptr)
  , mMaxSpeedOnAcceleration(0.)
  , mOriginalObjectSpeed(object_data.speed_range)
  , mRssDynamics(object_data.rss_dynamics)
{
  initializeRssObject(object_data.id,
                      object_data.type,
                      objectOccupiedRegions,
                      object_data.match_object.enu_position,
                      object_data.speed_range,
                      object_data.yaw_rate,
                      object_data.steering_angle);
}

void RssObjectConversion::initializeRssObject(::ad::rss::world::ObjectId const &object_id,
                                              ::ad::rss::world::ObjectType const &object_type,
                                              ::ad::rss::world::OccupiedRegionVector const &objectOccupiedRegions,
                                              ::ad::map::match::ENUObjectPosition const &objectEnuPosition,
                                              ::ad::physics::SpeedRange const &objectSpeed,
                                              ::ad::physics::AngularVelocity const &objectYawRate,
                                              ::ad::physics::Angle const &objectSteeringAngle)
{
  mRssObject.object_id = object_id;
  mRssObject.object_type = object_type;
  mRssObject.velocity.speed_lon_min = ::ad::physics::Speed(0.);
  mRssObject.velocity.speed_lon_max = ::ad::physics::Speed(0.);
  mRssObject.velocity.speed_lat_min = ::ad::physics::Speed(0.);
  mRssObject.velocity.speed_lat_max = ::ad::physics::Speed(0.);
  mRssObject.occupied_regions = objectOccupiedRegions;

  mRssObject.state.yaw = ::ad::physics::Angle(objectEnuPosition.heading.mENUHeading);
  mRssObject.state.center_point.x = ::ad::physics::Distance(objectEnuPosition.center_point.x.mENUCoordinate);
  mRssObject.state.center_point.y = ::ad::physics::Distance(objectEnuPosition.center_point.y.mENUCoordinate);
  mRssObject.state.dimension.width = objectEnuPosition.dimension.width;
  mRssObject.state.dimension.length = objectEnuPosition.dimension.length;
  mRssObject.state.steering_angle = objectSteeringAngle;

  // restrict to positive speeds
  mRssObject.state.speed_range.minimum = std::max(::ad::physics::Speed(0.), objectSpeed.minimum);
  mRssObject.state.speed_range.maximum = std::max(::ad::physics::Speed(0.), objectSpeed.maximum);
  if (mRssObject.state.speed_range.maximum == ::ad::physics::Speed(0.))
  {
    // ensure angular speed is also zero if speed is zero
    mRssObject.state.yaw_rate = ::ad::physics::AngularVelocity(0.);
  }
  else
  {
    mRssObject.state.yaw_rate = objectYawRate;
  }
}

bool RssObjectConversion::isOriginalSpeedAcceptable(::ad::physics::Speed const acceptableNegativeSpeed) const
{
  if (mRssObject.state.speed_range == mOriginalObjectSpeed)
  {
    return true;
  }
  if (mOriginalObjectSpeed.minimum >= acceptableNegativeSpeed)
  {
    return true;
  }
  return false;
}

::ad::rss::world::Object const &RssObjectConversion::getRssObject() const
{
  return mRssObject;
}

::ad::rss::world::ObjectId RssObjectConversion::getId() const
{
  return mRssObject.object_id;
}

::ad::rss::world::RssDynamics RssObjectConversion::getRssDynamics() const
{
  ::ad::rss::world::RssDynamics resultDynamics(mRssDynamics);
  if (mMaxSpeedOnAcceleration != ::ad::physics::Speed(0.))
  {
    resultDynamics.max_speed_on_acceleration = mMaxSpeedOnAcceleration;
  }
  return resultDynamics;
}

bool RssObjectConversion::calculateConservativeMinStoppingDistance(
  ::ad::rss::world::ObjectId const &object_id,
  ::ad::physics::Speed const &current_max_speed,
  ::ad::rss::world::RssDynamics const &rss_dynamics,
  ::ad::physics::Distance &conservativeMinStoppingDistance)
{
  auto const result
    = structured::calculateLongitudinalDistanceOffsetAfterStatedBrakingPattern(current_max_speed,
                                                                               physics::Speed::getMax(),
                                                                               rss_dynamics.response_time,
                                                                               rss_dynamics.alpha_lon.accel_max,
                                                                               rss_dynamics.alpha_lon.brake_min_correct,
                                                                               conservativeMinStoppingDistance);

  if (!result)
  {
    getLogger()->error(
      "RssObjectConversion::calculateConservativeMinStoppingDistance[ {} ]>> error calculating longitudinal "
      "distance offset after stated braking pattern {} {}",
      object_id,
      current_max_speed,
      rss_dynamics);
  }
  return result;
}

bool RssObjectConversion::calculateConservativeMinStoppingDistance(
  ::ad::physics::Distance &conservativeMinStoppingDistance) const
{
  return calculateConservativeMinStoppingDistance(
    mRssObject.object_id, mRssObject.state.speed_range.maximum, mRssDynamics, conservativeMinStoppingDistance);
}

void RssObjectConversion::updateSpeedLimit(::ad::physics::Speed const &max_speed_on_acceleration)
{
  if (withinValidInputRange(max_speed_on_acceleration, false))
  {
    mMaxSpeedOnAcceleration = std::max(mMaxSpeedOnAcceleration, max_speed_on_acceleration);
  }
}

void RssObjectConversion::addRestrictedOccupiedRegion(::ad::map::match::LaneOccupiedRegion const &laneOccupiedRegion,
                                                      ::ad::map::route::LaneInterval const &lane_interval)
{
  ::ad::rss::world::OccupiedRegion occupiedRegion;
  occupiedRegion.segment_id = ::ad::rss::world::LaneSegmentId(laneOccupiedRegion.lane_id.mLaneId);

  ::ad::physics::ParametricValue cutAtStart;
  if (::ad::map::route::isRouteDirectionNegative(lane_interval))
  {
    occupiedRegion.lon_range.maximum
      = ::ad::physics::ParametricValue(1.) - laneOccupiedRegion.longitudinal_range.minimum;
    occupiedRegion.lon_range.minimum
      = ::ad::physics::ParametricValue(1.) - laneOccupiedRegion.longitudinal_range.maximum;

    occupiedRegion.lat_range.maximum = ::ad::physics::ParametricValue(1.) - laneOccupiedRegion.lateral_range.minimum;
    occupiedRegion.lat_range.minimum = ::ad::physics::ParametricValue(1.) - laneOccupiedRegion.lateral_range.maximum;
    cutAtStart = ::ad::physics::ParametricValue(1.) - lane_interval.start;
  }
  else
  {
    occupiedRegion.lon_range = laneOccupiedRegion.longitudinal_range;
    occupiedRegion.lat_range = laneOccupiedRegion.lateral_range;
    cutAtStart = lane_interval.start;
  }

  // scale region to the lane interval sizes
  auto const intervalLength = calcParametricLength(lane_interval);
  if (intervalLength == ::ad::physics::ParametricValue(0.))
  {
    occupiedRegion.lon_range.minimum = ::ad::physics::ParametricValue(0.);
    occupiedRegion.lon_range.maximum = ::ad::physics::ParametricValue(1.);
  }
  else
  {
    // move region
    occupiedRegion.lon_range.minimum -= cutAtStart;
    occupiedRegion.lon_range.maximum -= cutAtStart;
    // scale region
    occupiedRegion.lon_range.minimum = occupiedRegion.lon_range.minimum / intervalLength.mParametricValue;
    occupiedRegion.lon_range.maximum = occupiedRegion.lon_range.maximum / intervalLength.mParametricValue;
    // restrict to segment
    occupiedRegion.lon_range.minimum
      = std::min(std::max(occupiedRegion.lon_range.minimum, ::ad::physics::ParametricValue(0.)),
                 ::ad::physics::ParametricValue(1.));
    occupiedRegion.lon_range.maximum
      = std::min(std::max(occupiedRegion.lon_range.maximum, ::ad::physics::ParametricValue(0.)),
                 ::ad::physics::ParametricValue(1.));
  }
  getLogger()->trace(
    "RssObjectConversion::addRestrictedOccupiedRegion[ {} ]>>laneOccupiedRegion {} lane_interval {} -> "
    "occupiedRegion {}",
    getId(),
    laneOccupiedRegion,
    lane_interval,
    occupiedRegion);

  mRssObject.occupied_regions.push_back(occupiedRegion);
}

void RssObjectConversion::laneIntervalAdded(::ad::map::route::LaneInterval const &lane_interval)
{
  if (mObjectMapMatchedPosition != nullptr)
  {
    auto findLaneIntervalResult
      = std::find_if(mObjectMapMatchedPosition->map_matched_bounding_box.lane_occupied_regions.begin(),
                     mObjectMapMatchedPosition->map_matched_bounding_box.lane_occupied_regions.end(),
                     [lane_interval](::ad::map::match::LaneOccupiedRegion const &occupiedRegion) {
                       return lane_interval.lane_id == occupiedRegion.lane_id;
                     });
    if (findLaneIntervalResult != mObjectMapMatchedPosition->map_matched_bounding_box.lane_occupied_regions.end())
    {
      addRestrictedOccupiedRegion(*findLaneIntervalResult, lane_interval);
    }
  }
}

void RssObjectConversion::updateVelocityOnRoute(::ad::map::point::ENUHeading const &route_heading)
{
  if (mRssObject.object_type == ::ad::rss::world::ObjectType::ArtificialVehicle)
  {
    // artificial vehicles are expected to drive along the respective route
    // otherwhise in intersection areas they get -- depending on the route constellation --
    // non reasonalbe lateral speeds
    // @todo: if this is required to become possible in future, each route would desire its own
    // artificial vehicle placed with the appropriate route heading
    mRssObject.velocity.speed_lon_min = mRssObject.state.speed_range.minimum;
    mRssObject.velocity.speed_lon_max = mRssObject.state.speed_range.maximum;
    mRssObject.velocity.speed_lat_min = ::ad::physics::Speed(0.);
    mRssObject.velocity.speed_lat_max = ::ad::physics::Speed(0.);
  }
  else
  {
    double headingDiff
      = physics::normalizeAngleSigned(
          physics::Angle(route_heading.mENUHeading - mObjectMapMatchedPosition->enu_position.heading.mENUHeading))
          .mAngle;

    auto const headingDiffLonFactor = std::fabs(std::cos(headingDiff));
    mRssObject.velocity.speed_lon_min = headingDiffLonFactor * mRssObject.state.speed_range.minimum;
    mRssObject.velocity.speed_lon_max = headingDiffLonFactor * mRssObject.state.speed_range.maximum;

    auto const headingDiffLatFactor = std::sin(headingDiff);
    if (headingDiffLatFactor < 0.)
    {
      mRssObject.velocity.speed_lat_min = headingDiffLatFactor * mRssObject.state.speed_range.maximum;
      mRssObject.velocity.speed_lat_max = headingDiffLatFactor * mRssObject.state.speed_range.minimum;
    }
    else
    {
      mRssObject.velocity.speed_lat_min = headingDiffLatFactor * mRssObject.state.speed_range.minimum;
      mRssObject.velocity.speed_lat_max = headingDiffLatFactor * mRssObject.state.speed_range.maximum;
    }
  }
}

bool RssObjectConversion::updateVelocityOnRoute(::ad::map::route::FullRoute const &route)
{
  if (mObjectMapMatchedPosition == nullptr)
  {
    getLogger()->error(
      "RssObjectConversion::updateVelocityOnRoute[ {} ] No map matched position of the object available. "
      "Cannot calculate the orientation of the route at the object position",
      getId());
    return false;
  }
  ::ad::map::point::ENUHeading route_heading;
  if (mRssObject.object_type == ::ad::rss::world::ObjectType::ArtificialVehicle)
  {
    // artificial vehicles are expected to drive along the respective route
    // otherwhise in intersection areas they get -- depending on the route constellation --
    // non reasonalbe lateral speeds
    // @todo: if this is required to become possible in future, each route would desire its own
    // artificial vehicle placed with the appropriate route heading
    route_heading = mObjectMapMatchedPosition->enu_position.heading;
  }
  else
  {
    route_heading = getENUHeadingOfRoute(*mObjectMapMatchedPosition, route);
    if (std::fabs(route_heading) >= ad::map::point::ENUHeading(2 * M_PI))
    {
      // if the map matched bounding box is outside, getENUHeadingOfRoute() returns 2*M_PI
      // this should not happen
      // - if the route input is derived from a connecting route,
      //   the updateVelocityOnRoute() function with the provided route_heading from the connected route
      //   should be taken as on creation of the ConnectedRoute the bounding boxes of the two vehicles are
      //   are removed from the routes to ensure the connected route is actually in between the two vehicles
      // - otherwise, the route should come either from an actually planned or predicted route of this vehicles.
      //   In such case the
      getLogger()->error(
        "RssObjectConversion::updateVelocityOnRoute[ {} ] object seems to be located outside the route,"
        "so calculating route heading seems to be impossible. {} {}",
        getId(),
        *mObjectMapMatchedPosition,
        route);
      return false;
    }
  }

  updateVelocityOnRoute(route_heading);
  return true;
}

::ad::physics::Distance RssObjectConversion::getDistanceEstimate(RssObjectConversion::ConstPtr other) const
{
  auto const d_x = (mRssObject.state.center_point.x - other->mRssObject.state.center_point.x);
  auto const d_y = (mRssObject.state.center_point.y - other->mRssObject.state.center_point.y);
  return std::sqrt(d_x * d_x + d_y * d_y);
}

} // namespace map
} // namespace rss
} // namespace ad
