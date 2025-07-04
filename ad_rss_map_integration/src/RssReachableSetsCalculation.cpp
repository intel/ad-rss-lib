// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2020-2022 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/map/RssReachableSetsCalculation.hpp"
#include <ad/map/geometry/PolygonOperation.hpp>
#include <ad/map/route/LaneIntervalOperation.hpp>
#include <ad/map/route/Planning.hpp>
#include <ad/map/route/RouteOperation.hpp>
#include <ad/rss/map/RssObjectConversion.hpp>
#include <ad/rss/unstructured/TrajectoryPedestrian.hpp>
#include <ad/rss/unstructured/TrajectoryVehicle.hpp>
#include "ad/rss/map/RssWorldModelCreation.hpp"

namespace ad {
namespace rss {
namespace map {
namespace RssReachableSetsCalculation {

bool calculateTrajectorySetsRestrictedToRoute(::ad::rss::world::ObjectId const &objectId,
                                              ::ad::map::route::FullRoute const &route,
                                              ::ad::rss::core::RelativeObjectState const &vehicleState,
                                              ::ad::geometry::Polygon &brakePolygon,
                                              ::ad::geometry::Polygon &continueForwardPolygon)
{
  ::ad::map::route::FullRoute shortenedRoute = route;
  ::ad::physics::Distance conservativeMinStoppingDistance;
  if (RssObjectConversion::calculateConservativeMinStoppingDistance(
        objectId,
        vehicleState.unstructured_object_state.speed_range.maximum,
        vehicleState.dynamics,
        conservativeMinStoppingDistance))
  {
    // ensure minimum length to be considered
    // if cut too much, continue forward and brake polygons are cut in front at the same position leading to no reaction
    // of ego at all
    ::ad::map::route::shortenRouteToDistance(
      shortenedRoute,
      std::max(RssWorldModelCreation::cMinConnectedRouteLength, 2.0 * conservativeMinStoppingDistance),
      ::ad::map::route::ShortenRouteToDistanceMode::AllowCutIntersection);
  }
  auto const shortenedRouteSectionBorders = ad::map::route::getENUBorderOfRoute(shortenedRoute);
  auto routePolygon = ad::map::geometry::toPolygon(shortenedRouteSectionBorders);

  bool trajectory_result = false;
  if ((vehicleState.object_type == ::ad::rss::world::ObjectType::Pedestrian)
      || (vehicleState.object_type == ::ad::rss::world::ObjectType::ArtificialPedestrian))
  {
    ::ad::rss::unstructured::TrajectoryPedestrian trajectoryPedestrian;
    trajectory_result
      = trajectoryPedestrian.calculateTrajectorySets(vehicleState, brakePolygon, continueForwardPolygon);
  }
  else
  {
    ::ad::rss::unstructured::TrajectoryVehicle trajectoryVehicle;
    trajectory_result = trajectoryVehicle.calculateTrajectorySets(vehicleState, brakePolygon, continueForwardPolygon);
  }

  if (trajectory_result == true)
  {
    auto reference_point = ad::geometry::toPoint(vehicleState.unstructured_object_state.center_point);
    brakePolygon
      = ad::map::geometry::restrictPolygonToAreaClostestToReferencePoint(brakePolygon, routePolygon, reference_point);
    // Do not cut continue forward, otherwhise at the sides, both polygons are cut at the same position leading to no
    // reaction of ego from that direction at all! (This is comparable with someone else is approaching from behind;
    // then the front vehicle is also not acting.) One could reenable this behavior with the argument: if someone enters
    // the driveway of the ego from the side while ego is driving on the road and the other is entering already within
    // the braking polygon area, then it's in the responsibility of the other traffic participant. But before reanabling
    // this, one should provide a basic evasive maneuver behavior that at least brakes in this kind of situation to
    // prevent from the accident (especially when considering pedestrians; other vehicles entering the road will be
    // treated in a structured way after touching the road). So without detailed analysis of multiple critical
    // scenarios, one should keep the continue forward polygon as is.
    // continueForwardPolygon = ad::map::geometry::restrictPolygonToAreaClostestToReferencePoint(
    //  continueForwardPolygon, routePolygon, reference_point);
  }

  return trajectory_result;
}

} // namespace RssReachableSetsCalculation
} // namespace map
} // namespace rss
} // namespace ad
