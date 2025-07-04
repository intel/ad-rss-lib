// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2022 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/map/RssObjectDataOperation.hpp"
#include <ad/map/lane/Operation.hpp>
#include <ad/map/match/AdMapMatching.hpp>
#include <ad/map/match/MapMatchedOperation.hpp>
#include <ad/map/route/Operation.hpp>
#include "ad/rss/map/Logging.hpp"

namespace ad {
namespace rss {
namespace map {

RssObjectDataOnRoute calculateRssObjectDataOnRoute(ad::map::route::FullRoute const &route,
                                                   RssObjectData const &object_data)
{
  RssObjectDataOnRoute object_data_on_route;
  object_data_on_route.object_within_route = false;
  object_data_on_route.object_center_within_route = false;
  object_data_on_route.is_valid = false;

  if (route.road_segments.empty())
  {
    getLogger()->info("calculateRssObjectDataOnRoute() route empty {}.", object_data);
    return object_data_on_route;
  }
  ad::map::route::FindWaypointResult centerPointOnRoute(route);
  if (object_data.match_object.map_matched_bounding_box.reference_point_positions.size()
      > static_cast<std::size_t>(ad::map::match::ObjectReferencePoints::Center))
  {
    ad::map::point::ParaPointList inLaneMatches;
    ad::map::point::ParaPointList outLaneMatches;
    for (auto &matchPosition : object_data.match_object.map_matched_bounding_box
                                 .reference_point_positions[int32_t(ad::map::match::ObjectReferencePoints::Center)])
    {
      // consider only longitudinal in lane matches here; we are not interrested in points in upcoming lanes in front
      if (ad::map::match::isLongitudinalInLaneMatch(matchPosition))
      {
        if (matchPosition.type == ad::map::match::MapMatchedPositionType::LANE_IN)
        {
          inLaneMatches.push_back(matchPosition.lane_point.para_point);
        }
        else
        {
          outLaneMatches.push_back(matchPosition.lane_point.para_point);
        }
      }
    }

    // check if object is on the route
    auto const objectOnRouteResult
      = ad::map::route::objectOnRoute(object_data.match_object.map_matched_bounding_box, route);
    if (objectOnRouteResult.isValid())
    {
      object_data_on_route.object_within_route = true;

      centerPointOnRoute = ad::map::route::findNearestWaypoint(inLaneMatches, route);
      if (centerPointOnRoute.isValid())
      {
        object_data_on_route.object_center_within_route = true;
        object_data_on_route.object_center_position_projected_on_route
          = object_data.match_object.enu_position.center_point;
        object_data_on_route.object_center_distance_to_route = physics::Distance(0.);
        object_data_on_route.is_valid = true;
        getLogger()->trace("calculateRssObjectDataOnRoute() object center in lane match ({}) {}:{} route: {}",
                           inLaneMatches,
                           centerPointOnRoute.laneSegmentIterator->lane_interval.lane_id,
                           centerPointOnRoute.queryPosition.parametric_offset,
                           route);
      }
    }

    if (!object_data_on_route.is_valid)
    {
      centerPointOnRoute = ad::map::route::findNearestWaypoint(outLaneMatches, route);
      if (centerPointOnRoute.isValid())
      {
        object_data_on_route.object_center_position_projected_on_route
          = ad::map::lane::getENULanePoint(centerPointOnRoute.queryPosition);
        object_data_on_route.object_center_distance_to_route
          = ad::map::point::distance(object_data_on_route.object_center_position_projected_on_route,
                                     object_data.match_object.enu_position.center_point);
        object_data_on_route.is_valid = true;
        getLogger()->trace("calculateRssObjectDataOnRoute() object center out lane match ({}) {}:{} route: {}",
                           outLaneMatches,
                           centerPointOnRoute.laneSegmentIterator->lane_interval.lane_id,
                           centerPointOnRoute.queryPosition.parametric_offset,
                           route);
      }
    }
  }
  else
  {
    getLogger()->warn(
      "calculateRssObjectDataOnRoute() object match_object {} not valid. Try to apply fall-back calculation.",
      object_data);
  }

  if (!object_data_on_route.is_valid)
  {
    getLogger()->debug(
      "calculateRssObjectDataOnRoute() Fall-back calculation: matched object center {} too far away from route {}.",
      object_data,
      route);
    auto mapMatchedPositionConfidenceList = ad::map::match::AdMapMatching::findRouteLanes(
      ad::map::point::toECEF(object_data.match_object.enu_position.center_point), route);
    if (mapMatchedPositionConfidenceList.empty())
    {
      getLogger()->warn(
        "calculateRssObjectDataOnRoute() object center point not matched against any lane of the route {} {}.",
        object_data,
        route);
      return object_data_on_route;
    }
    centerPointOnRoute
      = ad::map::route::findWaypoint(mapMatchedPositionConfidenceList.front().lane_point.para_point, route);
    if (!centerPointOnRoute.isValid())
    {
      getLogger()->error("calculateRssObjectDataOnRoute() nearest matched point {} not found in route unexpectedly {}.",
                         mapMatchedPositionConfidenceList.front().lane_point.para_point,
                         route);
      return object_data_on_route;
    }
    getLogger()->trace("calculateRssObjectDataOnRoute() nearest individual map match result {} from all {}.",
                       mapMatchedPositionConfidenceList.front(),
                       mapMatchedPositionConfidenceList);

    object_data_on_route.object_center_position_projected_on_route
      = ad::map::point::toENU(mapMatchedPositionConfidenceList.front().matched_point);
    object_data_on_route.object_center_distance_to_route
      = mapMatchedPositionConfidenceList.front().matched_point_distance;
    object_data_on_route.is_valid = true;
  }

  if (!centerPointOnRoute.isValid())
  {
    getLogger()->error("calculateRssObjectDataOnRoute() FindWaypointResult unexpectedly invalid.");
    object_data_on_route.is_valid = false;
    return object_data_on_route;
  }

  object_data_on_route.object_center_distance_along_route = ad::map::route::calcLength(centerPointOnRoute);

  object_data_on_route.object_center_position_projected_on_lane_in_nominal_route_direction
    = object_data_on_route.object_center_position_projected_on_route;
  auto laneInNominalRouteDirection = centerPointOnRoute.queryPosition;
  if (centerPointOnRoute.laneSegmentIterator->lane_interval.wrong_way)
  {
    // driving on the wrong lane, so we have to project to nominal route direction
    ad::map::lane::projectPositionToLaneInHeadingDirection(
      laneInNominalRouteDirection, object_data_on_route.route_heading, laneInNominalRouteDirection);
    object_data_on_route.object_center_position_projected_on_lane_in_nominal_route_direction
      = ad::map::lane::getENULanePoint(laneInNominalRouteDirection);
  }
  laneInNominalRouteDirection.parametric_offset = physics::ParametricValue(0.5);
  object_data_on_route.nominal_center_position_of_lane_in_nominal_route_direction
    = ad::map::lane::getENULanePoint(laneInNominalRouteDirection);

  // object center data is now filled correctly now getting to the orientation measures
  auto const routeSectionAroundObject = getRouteSection(centerPointOnRoute,
                                                        object_data.match_object.enu_position.dimension.length,
                                                        object_data.match_object.enu_position.dimension.length,
                                                        route,
                                                        ad::map::route::RouteSectionCreationMode::AllRouteLanes);
  auto const routeSectionBorders = ad::map::route::getENUBorderOfRoute(routeSectionAroundObject);
  object_data_on_route.route_heading
    = ad::map::lane::getENUHeading(routeSectionBorders,
                                   object_data_on_route.object_center_position_projected_on_route,
                                   object_data.match_object.enu_position.dimension.length / 2.);

  object_data_on_route.route_radius = ad::physics::Distance::getMax();
  object_data_on_route.object_route_section_front_right
    = object_data_on_route.object_center_position_projected_on_route;
  object_data_on_route.object_route_section_front_left = object_data_on_route.object_center_position_projected_on_route;
  object_data_on_route.object_route_section_back_right = object_data_on_route.object_center_position_projected_on_route;
  object_data_on_route.object_route_section_back_left = object_data_on_route.object_center_position_projected_on_route;
  object_data_on_route.object_turning_center = object_data_on_route.object_center_position_projected_on_route;
  if (!routeSectionBorders.empty() && !routeSectionBorders.front().right.points.empty()
      && !routeSectionBorders.front().left.points.empty() && !routeSectionBorders.back().right.points.empty()
      && !routeSectionBorders.back().left.points.empty())
  {
    // now we calculate the current radius of the route based on the routeSectionBorders (ignoring z-component)
    // the front left and right of the borders provide two points P1, P2 of one line
    // the back left and right of the borders provide two points P3, P4 of second line
    // the intersection point of this line is the imaginary cicle center the route is turning around
    // Formular from https://en.wikipedia.org/wiki/Line%E2%80%93line_intersection#Given_two_points_on_each_line
    object_data_on_route.object_route_section_front_right = routeSectionBorders.front().right.points.front();
    object_data_on_route.object_route_section_front_left = routeSectionBorders.front().left.points.front();
    object_data_on_route.object_route_section_back_right = routeSectionBorders.back().right.points.back();
    object_data_on_route.object_route_section_back_left = routeSectionBorders.back().left.points.back();

    auto const x1 = object_data_on_route.object_route_section_front_left.x;
    auto const y1 = object_data_on_route.object_route_section_front_left.y;
    auto const x2 = object_data_on_route.object_route_section_front_right.x;
    auto const y2 = object_data_on_route.object_route_section_front_right.y;
    auto const x3 = object_data_on_route.object_route_section_back_left.x;
    auto const y3 = object_data_on_route.object_route_section_back_left.y;
    auto const x4 = object_data_on_route.object_route_section_back_right.x;
    auto const y4 = object_data_on_route.object_route_section_back_right.y;

    auto denominator = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
    if (denominator != ad::map::point::ENUCoordinate(0.))
    {
      auto const a = x1 * y2 - y1 * x2;
      auto const b = x3 * y4 - y3 * x4;
      auto const px = (a * (x3 - x4) - b * (x1 - x2)) / denominator;
      auto const py = (a * (y3 - y4) - b * (y1 - y2)) / denominator;
      object_data_on_route.object_turning_center
        = ad::map::point::createENUPoint(ad::map::point::ENUCoordinate(px),
                                         ad::map::point::ENUCoordinate(py),
                                         object_data_on_route.object_center_position_projected_on_route.z);
      object_data_on_route.route_radius = ad::map::point::distance(
        object_data_on_route.object_turning_center, object_data_on_route.object_center_position_projected_on_route);
      // determine the sign of the radius
      auto const headingTowardsTurningCenter = ad::map::point::createENUHeading(
        object_data_on_route.object_center_position_projected_on_route, object_data_on_route.object_turning_center);
      auto const headingDiff = physics::normalizeAngleSigned(
        physics::Angle(headingTowardsTurningCenter.mENUHeading - object_data_on_route.route_heading.mENUHeading));
      if (headingDiff < ad::physics::Angle(0.))
      {
        object_data_on_route.route_radius = -object_data_on_route.route_radius;
      }
    }
  }

  if (std::fabs(object_data_on_route.route_heading) >= ad::map::point::ENUHeading(2 * M_PI))
  {
    // if the projected center point is outside, lane::getENUHeading() returns 2*M_PI
    // this should not happen since the projection should be within or at the borders
    getLogger()->warn("calculateRssObjectDataOnRoute() projected object center point {} not part of route section "
                      "around object at {}\n object_data {}, route {} and extracted section borders {}.",
                      object_data_on_route.object_center_position_projected_on_route,
                      centerPointOnRoute.queryPosition,
                      object_data,
                      route,
                      routeSectionBorders);
    object_data_on_route.is_valid = false;
  }

  object_data_on_route.route_heading_delta = physics::normalizeAngleSigned(physics::Angle(
    object_data_on_route.route_heading.mENUHeading - object_data.match_object.enu_position.heading.mENUHeading));

  object_data_on_route.route_speed_lon
    = std::cos(object_data_on_route.route_heading_delta) * object_data.speed_range.maximum;
  object_data_on_route.route_speed_lat
    = std::sin(object_data_on_route.route_heading_delta) * object_data.speed_range.maximum;

  return object_data_on_route;
}

} // namespace map
} // namespace rss
} // namespace ad
