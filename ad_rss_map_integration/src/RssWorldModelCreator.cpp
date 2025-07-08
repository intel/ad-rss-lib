// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2022 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/map/RssWorldModelCreator.hpp"
#include <ad/map/lane/LaneOperation.hpp>
#include <ad/rss/world/ConstellationValidInputRange.hpp>
#include "ad/rss/map/Logging.hpp"

/*!
 * @brief namespace rss
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

RssWorldModelCreator::RssWorldModelCreator(RssRestrictSpeedLimitMode const &restrict_speed_limit_mode,
                                           ::ad::map::landmark::LandmarkIdSet const &greenTrafficLights,
                                           RssWorldModelCreation &worldModelCreation)
  : mGreenTrafficLights(greenTrafficLights)
  , mWorldModelCreation(worldModelCreation)
{
  switch (restrict_speed_limit_mode)
  {
    case RssRestrictSpeedLimitMode::ExactSpeedLimit:
      mSpeedLimitFactor = 1.;
      break;
    case RssRestrictSpeedLimitMode::IncreasedSpeedLimit5:
      mSpeedLimitFactor = 1.05;
      break;
    case RssRestrictSpeedLimitMode::IncreasedSpeedLimit10:
      mSpeedLimitFactor = 1.1;
      break;
    case RssRestrictSpeedLimitMode::None:
    default:
      mSpeedLimitFactor = 0.;
      break;
  }
}

RssWorldModelCreator::RssWorldModelCreator(RssWorldModelCreation &worldModelCreation)
  : mSpeedLimitFactor(0.)
  , mGreenTrafficLights()
  , mWorldModelCreation(worldModelCreation)
{
}

void RssWorldModelCreator::extractLaneIntervalsAndPolygon(
  std::vector<ad::map::route::RoadSegment> const &intersectionArea,
  std::vector<ad::map::route::LaneInterval> &intersectionLaneIntervals,
  ::ad::geometry::Polygon &polygon)
{
  ::ad::map::lane::ENUBorderList enuBorders;
  for (auto const &roadSegment : intersectionArea)
  {
    enuBorders.push_back(ad::map::route::getENUBorderOfRoadSegment(roadSegment));
    for (auto const &laneSegment : roadSegment.drivable_lane_segments)
    {
      intersectionLaneIntervals.push_back(laneSegment.lane_interval);
    }
  }
  polygon = ad::map::geometry::toPolygon(enuBorders);
}

bool RssWorldModelCreator::updateExactIntersectionArea(
  world::RoadArea &roadArea,
  std::vector<ad::map::route::LaneInterval> const &originalLaneIntervals,
  ad::map::match::LaneOccupiedRegionList const &exactIntersectingRegions)
{
  bool firstActualIntersectionSegmentProcessed = false;
  bool firstAfterIntersectionSegmentProcessed = false;
  for (auto &rssRoadSegment : roadArea)
  {
    if (rssRoadSegment.type == world::RoadSegmentType::Intersection)
    {
      physics::Distance min_length_before_intersecting_area = ad::physics::Distance(-1.);
      physics::Distance min_length_after_intersecting_area = ad::physics::Distance(-1.);
      for (auto const &rssLaneSegment : rssRoadSegment.lane_segments)
      {
        for (auto const &region : exactIntersectingRegions)
        {
          if (region.lane_id.mLaneId == rssLaneSegment.id)
          {
            for (auto const &laneInterval : originalLaneIntervals)
            {
              if (region.lane_id == laneInterval.lane_id)
              {
                if (firstAfterIntersectionSegmentProcessed)
                {
                  getLogger()->warn(
                    "RssWorldModelCreator::updateExactIntersectionArea[:{}]>> additional intersection road segment {} "
                    "with matching exact intersection region {} while previously road segment already shortened. {}",
                    mWorldModelCreation.mRouteId,
                    laneInterval,
                    region,
                    roadArea);
                }
                auto laneIntervalRange = ad::map::route::toParametricRange(laneInterval);
                auto nonIntersectionRanges = ad::physics::subtract(laneIntervalRange, region.longitudinal_range);
                bool updateBefore = false;
                bool updateAfter = false;
                for (auto const &nonIntersectionRange : nonIntersectionRanges)
                {
                  if ((nonIntersectionRange.minimum == laneInterval.start)
                      || (nonIntersectionRange.maximum == laneInterval.start))
                  {
                    ad::map::route::LaneInterval laneIntervalBeforeIntersection = laneInterval;
                    if (nonIntersectionRange.minimum == laneInterval.start)
                    {
                      laneIntervalBeforeIntersection.end = nonIntersectionRange.maximum;
                    }
                    else
                    {
                      laneIntervalBeforeIntersection.end = nonIntersectionRange.minimum;
                    }
                    physics::MetricRange lengthBeforeIntersectingArea;
                    physics::MetricRange width;
                    getMetricRanges(laneIntervalBeforeIntersection, lengthBeforeIntersectingArea, width);
                    if (min_length_before_intersecting_area < ad::physics::Distance(0.))
                    {
                      min_length_before_intersecting_area = lengthBeforeIntersectingArea.minimum;
                    }
                    else
                    {
                      min_length_before_intersecting_area
                        = std::min(min_length_before_intersecting_area, lengthBeforeIntersectingArea.minimum);
                    }
                    updateBefore = true;
                  }
                  else if ((nonIntersectionRange.minimum == laneInterval.end)
                           || (nonIntersectionRange.maximum == laneInterval.end))
                  {
                    ad::map::route::LaneInterval laneIntervalAfterIntersection = laneInterval;
                    if (nonIntersectionRange.minimum == laneInterval.end)
                    {
                      laneIntervalAfterIntersection.start = nonIntersectionRange.maximum;
                    }
                    else
                    {
                      laneIntervalAfterIntersection.start = nonIntersectionRange.minimum;
                    }
                    physics::MetricRange lengthAfterIntersectingArea;
                    physics::MetricRange width;
                    getMetricRanges(laneIntervalAfterIntersection, lengthAfterIntersectingArea, width);
                    if (min_length_after_intersecting_area < ad::physics::Distance(0.))
                    {
                      min_length_after_intersecting_area = lengthAfterIntersectingArea.minimum;
                    }
                    else
                    {
                      min_length_after_intersecting_area
                        = std::min(min_length_after_intersecting_area, lengthAfterIntersectingArea.minimum);
                    }
                    updateAfter = true;
                  }
                }
                if (!updateBefore)
                {
                  // nothing before is outside intersecting area for this lane, have to reset
                  min_length_before_intersecting_area = ad::physics::Distance(0.);
                }
                if (!updateAfter)
                {
                  // nothing after is outside intersecting area for this lane, have to reset
                  min_length_after_intersecting_area = ad::physics::Distance(0.);
                }
              }
            }
          }
        }
      }
      if (!firstActualIntersectionSegmentProcessed)
      {
        // only update before if not yet processed
        if (min_length_before_intersecting_area < ad::physics::Distance(0.))
        {
          // road segment marked as intersection, but no lane segment of this seems actually be part of the area
          // intersecting with the other route reset type to normal
          rssRoadSegment.type = world::RoadSegmentType::Normal;
        }
        else
        {
          rssRoadSegment.minimum_length_before_intersecting_area = min_length_before_intersecting_area;
          firstActualIntersectionSegmentProcessed = true;
        }
      }
      if (firstActualIntersectionSegmentProcessed)
      {
        // only update "after" if already within intersection area processing
        if (!firstAfterIntersectionSegmentProcessed)
        {
          if (min_length_after_intersecting_area > ad::physics::Distance(0.))
          {
            rssRoadSegment.minimum_length_after_intersecting_area = min_length_after_intersecting_area;
            firstAfterIntersectionSegmentProcessed = true;
          }
        }
        else
        {
          if (min_length_after_intersecting_area >= ad::physics::Distance(0.))
          {
            // still some parts of this road segment seem to be part of the intersecting area, note it for correct
            // handling of maximum intersection length
            rssRoadSegment.minimum_length_after_intersecting_area = min_length_after_intersecting_area;
          }
          else
          {
            // road segment marked as intersection, but no lane segment of this seems actually be part of the area
            // intersecting with the other route reset type to normal
            rssRoadSegment.type = world::RoadSegmentType::Normal;
          }
        }
      }
    }
  }
  return firstActualIntersectionSegmentProcessed;
}

bool RssWorldModelCreator::updateExactIntersectionArea(
  world::RoadArea &roadAreaA,
  std::vector<ad::map::route::RoadSegment> const &intersectionAreaA,
  world::RoadArea &roadAreaB,
  std::vector<ad::map::route::RoadSegment> const &intersectionAreaB)
{
  std::vector<ad::map::route::LaneInterval> intersectionLaneIntervalsA;
  ::ad::geometry::Polygon polygonA;
  extractLaneIntervalsAndPolygon(intersectionAreaA, intersectionLaneIntervalsA, polygonA);

  std::vector<ad::map::route::LaneInterval> intersectionLaneIntervalsB;
  ::ad::geometry::Polygon polygonB;
  extractLaneIntervalsAndPolygon(intersectionAreaB, intersectionLaneIntervalsB, polygonB);

  ad::map::match::LaneOccupiedRegionList intersectingRegionA
    = ad::map::geometry::extractInnerRegions(polygonB, intersectionLaneIntervalsA);

  auto actualIntersectingAreaFound
    = updateExactIntersectionArea(roadAreaA, intersectionLaneIntervalsA, intersectingRegionA);

  if (actualIntersectingAreaFound)
  {
    ad::map::match::LaneOccupiedRegionList intersectingRegionB
      = ad::map::geometry::extractInnerRegions(polygonA, intersectionLaneIntervalsB);

    actualIntersectingAreaFound
      = updateExactIntersectionArea(roadAreaB, intersectionLaneIntervalsB, intersectingRegionB);
  }

  return actualIntersectingAreaFound;
}

bool RssWorldModelCreator::createRoadArea(Route const &route,
                                          ::ad::map::lane::LaneIdSet const &intersectionLanes,
                                          std::vector<RssObjectConversion::Ptr> objects,
                                          world::RoadArea &area,
                                          std::vector<ad::map::route::RoadSegment> *intersectingArea)
{
  area.clear();
  bool intersectionEntered = false;
  for (auto roadSegmentIter = route.route.road_segments.begin(); roadSegmentIter != route.route.road_segments.end();
       roadSegmentIter++)
  {
    world::RoadSegment rssRoadSegment;
    rssRoadSegment.minimum_length_before_intersecting_area = ad::physics::Distance(0.);
    rssRoadSegment.minimum_length_after_intersecting_area = ad::physics::Distance(0.);
    rssRoadSegment.type = world::RoadSegmentType::Normal;

    ad::map::route::RoadSegment intersectingRoadSegment;
    // RoadSegments are in strict order from right to left
    // RSS order is vice-versa
    for (auto laneSegmentIter = roadSegmentIter->drivable_lane_segments.crbegin();
         laneSegmentIter != roadSegmentIter->drivable_lane_segments.crend();
         laneSegmentIter++)
    {
      if ((laneSegmentIter->route_lane_offset >= route.min_lane_offset)
          && (laneSegmentIter->route_lane_offset <= route.max_lane_offset))
      {
        world::LaneSegment rssLaneSegment;
        rssLaneSegment.id = world::LaneSegmentId(laneSegmentIter->lane_interval.lane_id.mLaneId);
        if (intersectionLanes.count(laneSegmentIter->lane_interval.lane_id) > 0)
        {
          rssRoadSegment.type = world::RoadSegmentType::Intersection;
        }
        if (laneSegmentIter->lane_interval.wrong_way)
        {
          if (rssRoadSegment.type == world::RoadSegmentType::Intersection)
          {
            // within intersections only positive direction lanes are considered to be more exact
            // on the actual intersecting region (input should not contain such already)
            continue;
          }
          rssLaneSegment.driving_direction = world::LaneDrivingDirection::Negative;
        }
        else
        {
          rssLaneSegment.driving_direction = world::LaneDrivingDirection::Positive;
          if (rssRoadSegment.type == world::RoadSegmentType::Intersection)
          {
            intersectingRoadSegment.drivable_lane_segments.insert(
              intersectingRoadSegment.drivable_lane_segments.begin(), *laneSegmentIter);
          }
        }
        getMetricRanges(laneSegmentIter->lane_interval, rssLaneSegment.length, rssLaneSegment.width);

        auto const speedLimitRestrictions = getSpeedLimits(laneSegmentIter->lane_interval);
        for (auto object : objects)
        {
          for (auto const &speedLimitRestriction : speedLimitRestrictions)
          {
            object->updateSpeedLimit(speedLimitRestriction.speed_limit * mSpeedLimitFactor);
          }
          object->laneIntervalAdded(laneSegmentIter->lane_interval);
        }

        rssRoadSegment.lane_segments.push_back(rssLaneSegment);
      }
    }
    if (rssRoadSegment.type == world::RoadSegmentType::Intersection)
    {
      intersectionEntered = true;
      if (intersectingArea != nullptr)
      {
        intersectingArea->push_back(intersectingRoadSegment);
      }
    }
    else if (intersectionEntered)
    {
      // intersection left, stop processing route
      break;
    }
    if (rssRoadSegment.lane_segments.empty())
    {
      // empty road segment not allowed, restriction on lane offsets too large
      area.clear();
      getLogger()->debug("RssWorldModelCreator::createRoadArea[:{}]>> invalid road segment",
                         mWorldModelCreation.mRouteId);
      return false;
    }
    area.push_back(rssRoadSegment);
  }
  if (route.route_heading_available)
  {
    if (objects.size() == 0u)
    {
      getLogger()->error("RssWorldModelCreator::createRoadArea[:{}]>> no object to update provided. "
                         "Results might be incomplete.",
                         mWorldModelCreation.mRouteId);
      return false;
    }
    objects.front()->updateVelocityOnRoute(route.route_heading_start);
    if (objects.size() == 2u)
    {
      objects.back()->updateVelocityOnRoute(route.route_heading_end);
    }
    if (objects.size() > 2u)
    {
      getLogger()->error("RssWorldModelCreator::createRoadArea[{}->{}:{}]>> more than two objects provided. "
                         "Results might be incomplete.",
                         objects.front()->getId(),
                         objects.back()->getId(),
                         mWorldModelCreation.mRouteId);
      return false;
    }
  }
  else
  {
    for (auto object : objects)
    {
      auto updateResult = object->updateVelocityOnRoute(route.route);
      if (!updateResult)
      {
        getLogger()->error(
          "RssWorldModelCreator::createRoadArea[{}->{}:{}]>> updateVelocityOnRoute for object {} failed.",
          objects.front()->getId(),
          objects.back()->getId(),
          mWorldModelCreation.mRouteId,
          object->getId());
        return false;
      }
    }
  }

  if (!withinValidInputRange(area, false))
  {
    // this mainly happens for ego long routes in NonRelevant scenes
    if (area.size() > 50u)
    {
      area.resize(50u);
    }
    return false;
  }

  return true;
}

bool RssWorldModelCreator::appendNotRelevantConstellation(::ad::map::route::FullRoute const &route,
                                                          RssObjectConversion::ConstPtr iEgoObject,
                                                          RssObjectConversion::ConstPtr iOtherObject)
{
  if (!bool(iEgoObject) || !bool(iOtherObject))
  {
    getLogger()->error("RssWorldModelCreator::appendNotRelevantConstellation[:{}]>> ego/other object input is NULL",
                       mWorldModelCreation.mRouteId);
    return false;
  }
  auto egoObject = std::make_shared<RssObjectConversion>(*iEgoObject);
  if (!bool(egoObject))
  {
    getLogger()->error("RssWorldModelCreator::appendNotRelevantConstellation[{}->{}:{}]>> failed to create copy of ego "
                       "RssObjectConversion",
                       iEgoObject->getId(),
                       iOtherObject->getId(),
                       mWorldModelCreation.mRouteId);
    return false;
  }
  auto otherObject = std::make_shared<RssObjectConversion>(*iOtherObject);
  if (!bool(otherObject))
  {
    getLogger()->error(
      "RssWorldModelCreator::appendNotRelevantConstellation[{}->{}:{}]>> failed to create copy of other "
      "RssObjectConversion",
      iEgoObject->getId(),
      iOtherObject->getId(),
      mWorldModelCreation.mRouteId);
    return false;
  }

  // in the end this constellation is only for convenience to get to know that we considered it and e.g. visualize it
  // It could be left out completely
  world::RoadArea ego_vehicle_road;
  if (!route.road_segments.empty())
  {
    // in case the ego route is actually available, we can try to fill the route as usual to have some hint where the
    // ego is driving
    bool createRoadAreaResult
      = createRoadArea(Route(route), ::ad::map::lane::LaneIdSet(), {egoObject}, ego_vehicle_road);
    if (!createRoadAreaResult)
    {
      getLogger()->info("RssWorldModelCreator::appendNotRelevantConstellation[{}->{}:{}]>> failed to create ego "
                        "vehicle road area from route {}",
                        egoObject->getId(),
                        otherObject->getId(),
                        mWorldModelCreation.mRouteId,
                        route);
    }
  }

  getLogger()->debug("RssWorldModelCreator::appendNotRelevantConstellation[{}->{}:{}]>>constellation {}",
                     egoObject->getId(),
                     otherObject->getId(),
                     mWorldModelCreation.mRouteId,
                     world::ConstellationType::NotRelevant);

  return appendConstellation(
    world::ConstellationType::NotRelevant, egoObject, ego_vehicle_road, otherObject, world::RoadArea());
}

bool RssWorldModelCreator::createNonIntersectionRoadArea(::ad::map::route::FullRoute const &route,
                                                         ::ad::map::point::ENUHeading const &route_heading_start,
                                                         ::ad::map::point::ENUHeading const &route_heading_end,
                                                         std::vector<RssObjectConversion::Ptr> objects,
                                                         world::RoadArea &road_area)
{
  // take only the relevant part of the route, the two vehicles are driving on
  ::ad::map::route::RouteLaneOffset const min_lane_offset = std::min(0, route.destination_lane_offset);
  ::ad::map::route::RouteLaneOffset const max_lane_offset = std::max(0, route.destination_lane_offset);

  // no intersections on route
  bool result = createRoadArea(Route(route, min_lane_offset, max_lane_offset, route_heading_start, route_heading_end),
                               ::ad::map::lane::LaneIdSet(),
                               objects,
                               road_area);
  if (!result)
  {
    // creation leads to invalid road_area; maybe there are some narrowing parts in between
    // retry taking all lane segments
    result = createRoadArea(
      Route(route, route_heading_start, route_heading_end), ::ad::map::lane::LaneIdSet(), objects, road_area);
  }
  return result;
}

bool RssWorldModelCreator::appendNonIntersectionConstellation(::ad::map::route::ConnectingRoute const &connectingRoute,
                                                              world::ConstellationType const &constellation_type,
                                                              RssObjectConversion::ConstPtr iEgoObject,
                                                              RssObjectConversion::ConstPtr iOtherObject)
{
  if (!bool(iEgoObject) || !bool(iOtherObject))
  {
    getLogger()->error("RssWorldModelCreator::appendNonIntersectionConstellation[:{}]>> ego/other object input is NULL",
                       mWorldModelCreation.mRouteId);
    return false;
  }
  auto egoObject = std::make_shared<RssObjectConversion>(*iEgoObject);
  if (!bool(egoObject))
  {
    getLogger()->error(
      "RssWorldModelCreator::appendNonIntersectionConstellation[{}->{}:{}]>> failed to create copy of ego "
      "RssObjectConversion",
      iEgoObject->getId(),
      iOtherObject->getId(),
      mWorldModelCreation.mRouteId);
    return false;
  }
  auto otherObject = std::make_shared<RssObjectConversion>(*iOtherObject);
  if (!bool(otherObject))
  {
    getLogger()->error(
      "RssWorldModelCreator::appendNonIntersectionConstellation[{}->{}:{}]>> failed to create copy of other "
      "RssObjectConversion",
      iEgoObject->getId(),
      iOtherObject->getId(),
      mWorldModelCreation.mRouteId);
    return false;
  }

  world::RoadArea ego_vehicle_road;
  if (!connectingRoute.route_a.road_segments.empty())
  {
    bool const createRoadAreaResult = createNonIntersectionRoadArea(connectingRoute.route_a,
                                                                    connectingRoute.route_a_heading_start,
                                                                    connectingRoute.route_a_heading_end,
                                                                    {egoObject, otherObject},
                                                                    ego_vehicle_road);
    if (!createRoadAreaResult)
    {
      getLogger()->error("RssWorldModelCreator::appendNonIntersectionConstellation[{}->{}:{}]>> error creating ego "
                         "vehicle road area from route_a {}",
                         egoObject->getId(),
                         otherObject->getId(),
                         mWorldModelCreation.mRouteId,
                         connectingRoute.route_a);
      return false;
    }
  }
  else if (!connectingRoute.route_b.road_segments.empty())
  {
    bool const createRoadAreaResult = createNonIntersectionRoadArea(connectingRoute.route_b,
                                                                    connectingRoute.route_b_heading_start,
                                                                    connectingRoute.route_b_heading_end,
                                                                    {egoObject, otherObject},
                                                                    ego_vehicle_road);
    if (!createRoadAreaResult)
    {
      getLogger()->error("RssWorldModelCreator::appendNonIntersectionConstellation[{}->{}:{}]>> error creating ego "
                         "vehicle road area from route_b {}",
                         egoObject->getId(),
                         otherObject->getId(),
                         mWorldModelCreation.mRouteId,
                         connectingRoute.route_b);
      return false;
    }
  }
  else
  {
    getLogger()->error("RssWorldModelCreator::appendNonIntersectionConstellation[{}->{}:{}]>> constellation {} "
                       "expected either route_a or "
                       "route_b not to be empty {}",
                       egoObject->getId(),
                       otherObject->getId(),
                       mWorldModelCreation.mRouteId,
                       constellation_type,
                       connectingRoute);
    return false;
  }

  getLogger()->debug(
    "RssWorldModelCreator::appendNonIntersectionConstellation[{}->{}:{}]>> constellation {}\n road area {}",
    egoObject->getId(),
    otherObject->getId(),
    mWorldModelCreation.mRouteId,
    constellation_type,
    ego_vehicle_road);

  return appendConstellation(constellation_type, egoObject, ego_vehicle_road, otherObject, world::RoadArea());
}

bool RssWorldModelCreator::createMergingRoadArea(::ad::map::route::FullRoute const &route,
                                                 ::ad::map::point::ENUHeading const &route_heading_start,
                                                 ::ad::map::point::ENUHeading const &route_heading_end,
                                                 RssObjectConversion::Ptr object,
                                                 world::RoadArea &road_area)
{
  // the last road segment of the merging road is the intersecting one
  ::ad::map::lane::LaneIdSet intersectionLanes;
  for (auto laneSegmentIter = route.road_segments.back().drivable_lane_segments.begin();
       laneSegmentIter != route.road_segments.back().drivable_lane_segments.end();
       laneSegmentIter++)
  {
    intersectionLanes.insert(laneSegmentIter->lane_interval.lane_id);
  }
  // @todo: there might be more lanes in the merging roads that overlap, so add these also to the intersection lanes!

  // take the whole route
  return createRoadArea(Route(route, route_heading_start, route_heading_end), intersectionLanes, {object}, road_area);
}

bool RssWorldModelCreator::appendMergingConstellation(::ad::map::route::ConnectingRoute const &connectingRoute,
                                                      world::ConstellationType const &constellation_type,
                                                      RssObjectConversion::ConstPtr iEgoObject,
                                                      RssObjectConversion::ConstPtr iOtherObject)
{
  if (!bool(iEgoObject) || !bool(iOtherObject))
  {
    getLogger()->error("RssWorldModelCreator::appendMergingConstellation[:{}]>> ego/other object input is NULL",
                       mWorldModelCreation.mRouteId);
    return false;
  }
  if (connectingRoute.route_a.road_segments.empty() || connectingRoute.route_b.road_segments.empty())
  {
    getLogger()->error(
      "RssWorldModelCreator::appendMergingConstellation[{}->{}:{}]>> constellation {} connecting route empty {}",
      iEgoObject->getId(),
      iOtherObject->getId(),
      mWorldModelCreation.mRouteId,
      constellation_type,
      connectingRoute);
    return false;
  }

  auto egoObject = std::make_shared<RssObjectConversion>(*iEgoObject);
  if (!bool(egoObject))
  {
    getLogger()->error(
      "RssWorldModelCreator::appendMergingConstellation[{}->{}:{}]>> failed to create copy of ego RssObjectConversion",
      iEgoObject->getId(),
      iOtherObject->getId(),
      mWorldModelCreation.mRouteId);
    return false;
  }
  auto otherObject = std::make_shared<RssObjectConversion>(*iOtherObject);
  if (!bool(otherObject))
  {
    getLogger()->error("RssWorldModelCreator::appendMergingConstellation[{}->{}:{}]>> failed to create copy of other "
                       "RssObjectConversion",
                       iEgoObject->getId(),
                       iOtherObject->getId(),
                       mWorldModelCreation.mRouteId);
    return false;
  }

  world::RoadArea ego_vehicle_road;
  bool createMergingRoadAreaResult = createMergingRoadArea(connectingRoute.route_a,
                                                           connectingRoute.route_a_heading_start,
                                                           connectingRoute.route_a_heading_end,
                                                           egoObject,
                                                           ego_vehicle_road);
  if (!createMergingRoadAreaResult)
  {
    getLogger()->error("RssWorldModelCreator::appendMergingConstellation[{}->{}:{}]>> failed to create ego vehicle "
                       "road area from route_a {}",
                       egoObject->getId(),
                       otherObject->getId(),
                       mWorldModelCreation.mRouteId,
                       connectingRoute.route_a);
    return false;
  }
  world::RoadArea intersecting_road;
  createMergingRoadAreaResult = createMergingRoadArea(connectingRoute.route_b,
                                                      connectingRoute.route_b_heading_start,
                                                      connectingRoute.route_b_heading_end,
                                                      otherObject,
                                                      intersecting_road);
  if (!createMergingRoadAreaResult)
  {
    getLogger()->error("RssWorldModelCreator::appendMergingConstellation[{}->{}:{}]>> failed to create intersecting "
                       "road area from route_b {}",
                       egoObject->getId(),
                       otherObject->getId(),
                       mWorldModelCreation.mRouteId,
                       connectingRoute.route_b);
    return false;
  }

  getLogger()->debug("RssWorldModelCreator::appendMergingConstellation[{}->{}:{}]>> constellation {}\n"
                     " ego road area {}\n intersection road area {}",
                     egoObject->getId(),
                     otherObject->getId(),
                     mWorldModelCreation.mRouteId,
                     constellation_type,
                     ego_vehicle_road,
                     intersecting_road);
  return appendConstellation(constellation_type, egoObject, ego_vehicle_road, otherObject, intersecting_road);
}

bool RssWorldModelCreator::createIntersectionRoadArea(::ad::map::route::FullRoute const &route,
                                                      ::ad::map::intersection::IntersectionConstPtr intersection,
                                                      RssObjectConversion::Ptr object,
                                                      world::RoadArea &road_area,
                                                      std::vector<ad::map::route::RoadSegment> &intersectingArea)
{
  // only the lanes of the intersection under consideration are marked as intersection;
  return createRoadArea(Route(route), intersection->internalLanes(), {object}, road_area, &intersectingArea);
}

bool RssWorldModelCreator::appendIntersectionConstellation(::ad::map::intersection::IntersectionPtr intersection,
                                                           ::ad::map::route::FullRoute const &egoRoute,
                                                           ::ad::map::route::FullRoute const &objectRoute,
                                                           ::ad::map::route::FullRoute const &intersectionOtherRoute,
                                                           RssObjectConversion::ConstPtr iEgoObject,
                                                           RssObjectConversion::ConstPtr iOtherObject)
{
  if (!bool(iEgoObject) || !bool(iOtherObject))
  {
    getLogger()->error("RssWorldModelCreator::appendIntersectionConstellation[:{}]>> ego/other object input is NULL",
                       mWorldModelCreation.mRouteId);
    return false;
  }
  auto egoObject = std::make_shared<RssObjectConversion>(*iEgoObject);
  if (!bool(egoObject))
  {
    getLogger()->error("RssWorldModelCreator::appendIntersectionConstellation[{}->{}:{}]>> failed to create copy of "
                       "ego RssObjectConversion",
                       iEgoObject->getId(),
                       iOtherObject->getId(),
                       mWorldModelCreation.mRouteId);
    return false;
  }
  auto otherObject = std::make_shared<RssObjectConversion>(*iOtherObject);
  if (!bool(otherObject))
  {
    getLogger()->error(
      "RssWorldModelCreator::appendIntersectionConstellation[{}->{}:{}]>> failed to create copy of other "
      "RssObjectConversion",
      iEgoObject->getId(),
      iOtherObject->getId(),
      mWorldModelCreation.mRouteId);
    return false;
  }

  auto constellation_type = world::ConstellationType::IntersectionObjectHasPriority;
  if (intersection->intersectionType() == ::ad::map::intersection::IntersectionType::TrafficLight)
  {
    // in case no traffic light actually modeled (map error), we assume others have always priority
    bool intersectionRouteHasGreen = true;
    if (intersection->applicableTrafficLights().empty())
    {
      getLogger()->warn(
        "RssWorldModelCreation::appendIntersectionConstellation[{}->{}:{}]>> traffic light intersection has no "
        "applicable traffic lights {}",
        egoObject->getId(),
        otherObject->getId(),
        mWorldModelCreation.mRouteId,
        std::to_string(intersection->incomingLanesOnRoute()));
      intersectionRouteHasGreen = false;
    }
    for (auto relevantTrafficLight : intersection->applicableTrafficLights())
    {
      if (mGreenTrafficLights.find(relevantTrafficLight) == mGreenTrafficLights.end())
      {
        // if any relevant traffic light is not green, intersection route has no priority
        intersectionRouteHasGreen = false;
        break;
      }
    }

    if (!intersectionRouteHasGreen || intersection->objectRouteCrossesLanesWithHigherPriority(intersectionOtherRoute))
    {
      if (intersectionOtherRoute.route_planning_counter == objectRoute.route_planning_counter)
      {
        constellation_type = world::ConstellationType::IntersectionObjectHasPriority;
      }
      else
      {
        constellation_type = world::ConstellationType::IntersectionEgoHasPriority;
      }
    }
    else
    {
      if (intersectionOtherRoute.route_planning_counter == objectRoute.route_planning_counter)
      {
        constellation_type = world::ConstellationType::IntersectionEgoHasPriority;
      }
      else
      {
        constellation_type = world::ConstellationType::IntersectionObjectHasPriority;
      }
    }
    getLogger()->debug(
      "RssWorldModelCreation::appendIntersectionConstellation[{}->{}:{}]>> traffic light intersection intersection "
      "route has green: {} constellation: {}",
      egoObject->getId(),
      otherObject->getId(),
      mWorldModelCreation.mRouteId,
      intersectionRouteHasGreen,
      constellation_type);
  }
  else if (intersection->objectRouteCrossesLanesWithHigherPriority(intersectionOtherRoute))
  {
    if (intersectionOtherRoute.route_planning_counter == objectRoute.route_planning_counter)
    {
      constellation_type = world::ConstellationType::IntersectionObjectHasPriority;
    }
    else
    {
      constellation_type = world::ConstellationType::IntersectionEgoHasPriority;
    }
  }
  else
  {
    if (intersectionOtherRoute.route_planning_counter == objectRoute.route_planning_counter)
    {
      constellation_type = world::ConstellationType::IntersectionEgoHasPriority;
    }
    else
    {
      constellation_type = world::ConstellationType::IntersectionObjectHasPriority;
    }
  }

  world::RoadArea ego_vehicle_road;
  std::vector<ad::map::route::RoadSegment> egoIntersectingArea;
  bool createIntersectionRoadAreaResult
    = createIntersectionRoadArea(egoRoute, intersection, egoObject, ego_vehicle_road, egoIntersectingArea);
  if (!createIntersectionRoadAreaResult)
  {
    getLogger()->error("RssWorldModelCreator::appendIntersectionConstellation[{}->{}:{}]>> failed to create ego "
                       "vehicle road area from ego route {}",
                       egoObject->getId(),
                       otherObject->getId(),
                       mWorldModelCreation.mRouteId,
                       egoRoute);
    return false;
  }

  world::RoadArea intersecting_road;
  std::vector<ad::map::route::RoadSegment> intersectingIntersectingArea;
  createIntersectionRoadAreaResult = createIntersectionRoadArea(
    objectRoute, intersection, otherObject, intersecting_road, intersectingIntersectingArea);
  if (!createIntersectionRoadAreaResult)
  {
    getLogger()->error("RssWorldModelCreator::appendIntersectionConstellation[{}->{}:{}]>> failed to create "
                       "intersecting road area from object route {}",
                       egoObject->getId(),
                       otherObject->getId(),
                       mWorldModelCreation.mRouteId,
                       objectRoute);
    return false;
  }

  getLogger()->trace("RssWorldModelCreation::appendIntersectionConstellation[{}->{}:{}]>> constellation {} Before "
                     "exact intersection area\n"
                     " ego route {} -> ego road area {} -> ego intersecting area {}\n"
                     " other route {} -> intersection road area {} -> intersecting intersecting area",
                     egoObject->getId(),
                     otherObject->getId(),
                     mWorldModelCreation.mRouteId,
                     constellation_type,
                     egoRoute,
                     ego_vehicle_road,
                     egoIntersectingArea,
                     objectRoute,
                     intersecting_road,
                     intersectingIntersectingArea);

  auto const intersectionAreaActuallyExists = updateExactIntersectionArea(
    ego_vehicle_road, egoIntersectingArea, intersecting_road, intersectingIntersectingArea);
  if (intersectionAreaActuallyExists)
  {
    getLogger()->debug("RssWorldModelCreation::appendIntersectionConstellation[{}->{}:{}]>> constellation {}\n"
                       " ego road area {}\n intersection road area {}",
                       egoObject->getId(),
                       otherObject->getId(),
                       mWorldModelCreation.mRouteId,
                       constellation_type,
                       ego_vehicle_road,
                       intersecting_road);

    return appendConstellation(constellation_type, egoObject, ego_vehicle_road, otherObject, intersecting_road);
  }
  else
  {
    getLogger()->debug(
      "RssWorldModelCreation::appendIntersectionConstellation[{}->{}:{}]>> constellation {}"
      " Detailed road areas dodn't actually intersect with each other. Appending NotRelevant constellation",
      egoObject->getId(),
      otherObject->getId(),
      mWorldModelCreation.mRouteId,
      constellation_type);

    return appendNotRelevantConstellation(egoRoute, egoObject, otherObject);
  }
}

bool RssWorldModelCreator::appendRoadBoundaryConstellations(::ad::map::route::FullRoute const &route,
                                                            RssObjectConversion::ConstPtr iEgoObject)
{
  if (!bool(iEgoObject))
  {
    getLogger()->error("RssWorldModelCreator::appendRoadBoundaryConstellations[:{}]>> ego object input is NULL",
                       mWorldModelCreation.mRouteId);
    return false;
  }
  auto egoObject = std::make_shared<RssObjectConversion>(*iEgoObject);
  if (!bool(egoObject))
  {
    getLogger()->error(
      "RssWorldModelCreator::appendRoadBoundaryConstellations[{}:{}]>> failed to create copy of RssObjectConversion",
      iEgoObject->getId(),
      mWorldModelCreation.mRouteId);
    return false;
  }

  world::RoadArea ego_vehicle_road;
  bool createRoadAreaResult = createRoadArea(Route(route), ::ad::map::lane::LaneIdSet(), {egoObject}, ego_vehicle_road);
  if (!createRoadAreaResult)
  {
    getLogger()->error("RssWorldModelCreator::appendRoadBoundaryConstellations[{}:{}]>> failed to create ego vehicle "
                       "road area from route {}",
                       egoObject->getId(),
                       mWorldModelCreation.mRouteId,
                       route);
    return false;
  }

  getLogger()->debug("RssWorldModelCreator::appendRoadBoundaryConstellations[{}:{}]>> ego road area {}",
                     egoObject->getId(),
                     mWorldModelCreation.mRouteId,
                     ego_vehicle_road);

  world::RssDynamics staticDynamics;
  staticDynamics.alpha_lat.accel_max = ::ad::physics::Acceleration(0.);
  staticDynamics.alpha_lat.brake_min = ::ad::physics::Acceleration(-0.01);
  staticDynamics.alpha_lon.accel_max = ::ad::physics::Acceleration(0.);
  staticDynamics.alpha_lon.brake_max = ::ad::physics::Acceleration(-0.01);
  staticDynamics.alpha_lon.brake_min = ::ad::physics::Acceleration(-0.01);
  staticDynamics.alpha_lon.brake_min_correct = ::ad::physics::Acceleration(-0.01);
  staticDynamics.lateral_fluctuation_margin = ::ad::physics::Distance(0.0);
  staticDynamics.response_time = ::ad::physics::Duration(0.01);
  staticDynamics.unstructured_settings.pedestrian_turning_radius = ad::physics::Distance(0.);
  staticDynamics.unstructured_settings.drive_away_max_angle = ad::physics::Angle(0.);
  staticDynamics.unstructured_settings.vehicle_yaw_rate_change = ad::physics::AngularAcceleration(0.);
  staticDynamics.unstructured_settings.vehicle_min_radius = ad::physics::Distance(0.);
  staticDynamics.unstructured_settings.vehicle_trajectory_calculation_step = ad::physics::Duration(0.);

  world::OccupiedRegionVector rightBorderOccupiedRegions;
  world::OccupiedRegionVector leftBorderOccupiedRegions;

  for (auto const &roadSegment : route.road_segments)
  {
    auto &rightmostLane = roadSegment.drivable_lane_segments.front();

    world::OccupiedRegion region;
    region.lon_range.minimum = ::ad::physics::ParametricValue(0.);
    region.lon_range.maximum = ::ad::physics::ParametricValue(1.);
    region.lat_range.minimum = ::ad::physics::ParametricValue(0.999);
    region.lat_range.maximum = ::ad::physics::ParametricValue(1.);
    region.segment_id = world::LaneSegmentId(rightmostLane.lane_interval.lane_id.mLaneId);
    rightBorderOccupiedRegions.push_back(region);

    auto &leftmostLane = roadSegment.drivable_lane_segments.back();

    region.lon_range.minimum = ::ad::physics::ParametricValue(0.);
    region.lon_range.maximum = ::ad::physics::ParametricValue(1.);
    region.lat_range.minimum = ::ad::physics::ParametricValue(0.);
    region.lat_range.maximum = ::ad::physics::ParametricValue(0.001);
    region.segment_id = world::LaneSegmentId(leftmostLane.lane_interval.lane_id.mLaneId);
    leftBorderOccupiedRegions.push_back(region);
  }

  ::ad::map::match::ENUObjectPosition rightBorderPosition;
  ::ad::physics::ParametricValue rightBorderOffsetLat;
  auto const rightBorderInterval = route.road_segments.front().drivable_lane_segments.front().lane_interval;
  if (::ad::map::route::isRouteDirectionPositive(rightBorderInterval))
  {
    rightBorderOffsetLat = ::ad::physics::ParametricValue(1.);
  }
  else
  {
    rightBorderOffsetLat = ::ad::physics::ParametricValue(0.);
  }
  auto const rightBorderParaPoint = getIntervalStart(rightBorderInterval);
  rightBorderPosition.enu_reference_point = ::ad::map::access::getENUReferencePoint();
  rightBorderPosition.center_point = ::ad::map::lane::getENULanePoint(rightBorderParaPoint, rightBorderOffsetLat);
  rightBorderPosition.heading
    = ::ad::map::lane::getLaneENUHeading(rightBorderParaPoint, rightBorderPosition.enu_reference_point);
  rightBorderPosition.dimension.height = ::ad::physics::Distance(0.1);
  rightBorderPosition.dimension.length = ::ad::physics::Distance(0.1);
  rightBorderPosition.dimension.width = ::ad::physics::Distance(0.1);

  RssObjectData rightBorderObjectData;
  rightBorderObjectData.id = structured::getRightBorderObjectId();
  rightBorderObjectData.type = world::ObjectType::ArtificialObject;
  rightBorderObjectData.match_object.enu_position = rightBorderPosition;
  rightBorderObjectData.speed_range.minimum = ::ad::physics::Speed(0);
  rightBorderObjectData.speed_range.maximum = ::ad::physics::Speed(0);
  rightBorderObjectData.yaw_rate = ::ad::physics::AngularVelocity(0.);
  rightBorderObjectData.steering_angle = ::ad::physics::Angle(0.);
  rightBorderObjectData.rss_dynamics = staticDynamics;

  auto rightBorderObject = std::make_shared<RssObjectConversion>(rightBorderObjectData, rightBorderOccupiedRegions);
  if (!bool(rightBorderObject))
  {
    getLogger()->error("RssWorldModelCreator::appendRoadBoundaryConstellations[{}:{}]>> failed to create copy of right "
                       "border RssObjectConversion",
                       egoObject->getId(),
                       mWorldModelCreation.mRouteId);
    return false;
  }

  ::ad::map::match::ENUObjectPosition leftBorderPosition;
  ::ad::physics::ParametricValue leftBorderOffsetLat;
  auto const leftBorderInterval = route.road_segments.front().drivable_lane_segments.back().lane_interval;
  if (::ad::map::route::isRouteDirectionPositive(leftBorderInterval))
  {
    leftBorderOffsetLat = ::ad::physics::ParametricValue(0.);
  }
  else
  {
    leftBorderOffsetLat = ::ad::physics::ParametricValue(1.);
  }
  auto const leftBorderParaPoint = getIntervalStart(leftBorderInterval);
  leftBorderPosition.enu_reference_point = ::ad::map::access::getENUReferencePoint();
  leftBorderPosition.center_point = ::ad::map::lane::getENULanePoint(leftBorderParaPoint, leftBorderOffsetLat);
  leftBorderPosition.heading
    = ::ad::map::lane::getLaneENUHeading(leftBorderParaPoint, leftBorderPosition.enu_reference_point);
  leftBorderPosition.dimension.height = ::ad::physics::Distance(0.1);
  leftBorderPosition.dimension.length = ::ad::physics::Distance(0.1);
  leftBorderPosition.dimension.width = ::ad::physics::Distance(0.1);

  RssObjectData leftBorderObjectData;
  leftBorderObjectData.id = structured::getLeftBorderObjectId();
  leftBorderObjectData.type = world::ObjectType::ArtificialObject;
  leftBorderObjectData.match_object.enu_position = leftBorderPosition;
  leftBorderObjectData.speed_range.minimum = ::ad::physics::Speed(0);
  leftBorderObjectData.speed_range.maximum = ::ad::physics::Speed(0);
  leftBorderObjectData.yaw_rate = ::ad::physics::AngularVelocity(0.);
  leftBorderObjectData.steering_angle = ::ad::physics::Angle(0.);
  leftBorderObjectData.rss_dynamics = staticDynamics;

  auto leftBorderObject = std::make_shared<RssObjectConversion>(leftBorderObjectData, leftBorderOccupiedRegions);
  if (!bool(leftBorderObject))
  {
    getLogger()->error("RssWorldModelCreator::appendRoadBoundaryConstellations[{}:{}]>> failed to create copy of left "
                       "border RssObjectConversion",
                       egoObject->getId(),
                       mWorldModelCreation.mRouteId);
    return false;
  }

  auto result = appendConstellation(
    world::ConstellationType::SameDirection, egoObject, ego_vehicle_road, rightBorderObject, world::RoadArea());

  result &= appendConstellation(
    world::ConstellationType::SameDirection, egoObject, ego_vehicle_road, leftBorderObject, world::RoadArea());

  return result;
}

bool RssWorldModelCreator::appendConstellation(world::ConstellationType const &constellation_type,
                                               RssObjectConversion::ConstPtr egoObject,
                                               world::RoadArea const &egoRoad,
                                               RssObjectConversion::ConstPtr otherObject,
                                               world::RoadArea const &intersecting_road)
{
  if (!bool(egoObject) || !bool(otherObject))
  {
    getLogger()->error("RssWorldModelCreator::appendConstellation[:{}]>> ego/other object input is NULL",
                       mWorldModelCreation.mRouteId);
    return false;
  }

  world::Constellation constellation;
  constellation.constellation_type = constellation_type;
  constellation.ego_vehicle = egoObject->getRssObject();
  constellation.ego_vehicle_rss_dynamics = egoObject->getRssDynamics();
  constellation.ego_vehicle_road = egoRoad;
  constellation.intersecting_road = intersecting_road;
  constellation.object = otherObject->getRssObject();
  constellation.object_rss_dynamics = otherObject->getRssDynamics();

  getLogger()->trace("RssWorldModelCreator::appendConstellation[{}->{}:{}]>> object {}",
                     egoObject->getId(),
                     otherObject->getId(),
                     mWorldModelCreation.mRouteId,
                     constellation.object);
  getLogger()->trace("RssWorldModelCreator::appendConstellation[{}->{}:{}]>> ego {}",
                     egoObject->getId(),
                     otherObject->getId(),
                     mWorldModelCreation.mRouteId,
                     constellation.ego_vehicle);

  if (constellation_type != world::ConstellationType::NotRelevant)
  {
    // relevant constellations have to consider some more checks to filter out unsupported constellations
    if ((constellation_type != world::ConstellationType::Unstructured)
        && (constellation.ego_vehicle.occupied_regions.empty() || constellation.object.occupied_regions.empty()))
    {
      if (constellation.object.occupied_regions.empty())
      {
        getLogger()->info("RssWorldModelCreator::appendConstellation[{}->{}:{}]>> object not on route. Structured "
                          "constellation not valid. Dropping. {}",
                          egoObject->getId(),
                          otherObject->getId(),
                          mWorldModelCreation.mRouteId,
                          constellation);
      }
      else
      {
        getLogger()->info("RssWorldModelCreator::appendConstellation[{}->{}:{}]>> ego not on route. Structured "
                          "constellation not valid. Dropping. {}",
                          egoObject->getId(),
                          otherObject->getId(),
                          mWorldModelCreation.mRouteId,
                          constellation);
      }
      return false;
    }
    else if (!egoObject->isOriginalSpeedAcceptable())
    {
      getLogger()->error(
        "RssWorldModelCreator::appendConstellation[{}->{}:{}]>> ego original speed {} is not acceptable. Dropping. {}",
        egoObject->getId(),
        otherObject->getId(),
        mWorldModelCreation.mRouteId,
        egoObject->getOriginalObjectSpeed(),
        constellation);
      return false;
    }
    else if (!otherObject->isOriginalSpeedAcceptable())
    {
      getLogger()->error("RssWorldModelCreator::appendConstellation[{}->{}:{}]>> other original speed {} is not "
                         "acceptable. Dropping. {}",
                         egoObject->getId(),
                         otherObject->getId(),
                         mWorldModelCreation.mRouteId,
                         otherObject->getOriginalObjectSpeed(),
                         constellation);
      return false;
    }
  }

  if (withinValidInputRange(constellation))
  {
    return mWorldModelCreation.appendConstellationToWorldModel(constellation);
  }
  else
  {
    getLogger()->error("RssWorldModelCreator::appendConstellation[{}->{}:{}]>> constellation not valid {}",
                       egoObject->getId(),
                       otherObject->getId(),
                       mWorldModelCreation.mRouteId,
                       constellation);
    return false;
  }
}

bool RssWorldModelCreator::appendUnstructuredConstellation(RssObjectConversion::ConstPtr iEgoObject,
                                                           RssObjectConversion::ConstPtr iOtherObject)
{
  if (!bool(iEgoObject) || !bool(iOtherObject))
  {
    getLogger()->error("RssWorldModelCreator::appendUnstructuredConstellation[:{}]>> ego/other object input is NULL",
                       mWorldModelCreation.mRouteId);
    return false;
  }
  auto egoObject = std::make_shared<RssObjectConversion>(*iEgoObject);
  if (!bool(egoObject))
  {
    getLogger()->error("RssWorldModelCreator::appendUnstructuredConstellation[{}->{}:{}]>> failed to create copy of "
                       "ego RssObjectConversion",
                       iEgoObject->getId(),
                       iOtherObject->getId(),
                       mWorldModelCreation.mRouteId);
    return false;
  }
  auto otherObject = std::make_shared<RssObjectConversion>(*iOtherObject);
  if (!bool(otherObject))
  {
    getLogger()->error(
      "RssWorldModelCreator::appendUnstructuredConstellation[{}->{}:{}]>> failed to create copy of other "
      "RssObjectConversion",
      iEgoObject->getId(),
      iOtherObject->getId(),
      mWorldModelCreation.mRouteId);
    return false;
  }

  getLogger()->debug("RssWorldModelCreator::appendUnstructuredConstellation[{}->{}:{}]>>",
                     egoObject->getId(),
                     otherObject->getId(),
                     mWorldModelCreation.mRouteId);

  return appendConstellation(
    world::ConstellationType::Unstructured, egoObject, world::RoadArea(), otherObject, world::RoadArea());
}
} // namespace map
} // namespace rss
} // namespace ad
