// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "RssSceneCreator.hpp"
#include <ad/rss/world/SceneValidInputRange.hpp>
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

RssSceneCreator::RssSceneCreator(RssSceneCreation::RestrictSpeedLimitMode const &restrictSpeedLimitMode,
                                 ::ad::map::landmark::LandmarkIdSet const &greenTrafficLights,
                                 RssSceneCreation &sceneCreation)
  : mGreenTrafficLights(greenTrafficLights)
  , mSceneCreation(sceneCreation)
{
  switch (restrictSpeedLimitMode)
  {
    case RssSceneCreation::RestrictSpeedLimitMode::ExactSpeedLimit:
      mSpeedLimitFactor = 1.;
      break;
    case RssSceneCreation::RestrictSpeedLimitMode::IncreasedSpeedLimit5:
      mSpeedLimitFactor = 1.05;
      break;
    case RssSceneCreation::RestrictSpeedLimitMode::IncreasedSpeedLimit10:
      mSpeedLimitFactor = 1.1;
      break;
    case RssSceneCreation::RestrictSpeedLimitMode::None:
    default:
      mSpeedLimitFactor = 0.;
      break;
  }
}
RssSceneCreator::RssSceneCreator(RssSceneCreation &sceneCreation)
  : mSpeedLimitFactor(0.)
  , mGreenTrafficLights()
  , mSceneCreation(sceneCreation)
{
}

::ad::rss::world::RoadArea RssSceneCreator::createRoadArea(::ad::map::route::FullRoute const &route,
                                                           ::ad::map::route::RouteLaneOffset const minLaneOffset,
                                                           ::ad::map::route::RouteLaneOffset const maxLaneOffset,
                                                           ::ad::map::lane::LaneIdSet const &intersectionLanes,
                                                           std::vector<RssObjectConversion::Ptr> objects)
{
  ::ad::rss::world::RoadArea area;
  bool intersectionEntered = false;
  bool intersectionLeft = false;
  for (auto roadSegmentIter = route.roadSegments.begin(); roadSegmentIter != route.roadSegments.end();
       roadSegmentIter++)
  {
    ::ad::rss::world::RoadSegment rssRoadSegment;
    // RoadSegments are in strict order from right to left
    // RSS order is vice-versa
    for (auto laneSegmentIter = roadSegmentIter->drivableLaneSegments.crbegin();
         laneSegmentIter != roadSegmentIter->drivableLaneSegments.crend();
         laneSegmentIter++)
    {
      if ((laneSegmentIter->routeLaneOffset >= minLaneOffset) && (laneSegmentIter->routeLaneOffset <= maxLaneOffset))
      {
        ::ad::rss::world::LaneSegment rssLaneSegment;
        rssLaneSegment.id = ::ad::rss::world::LaneSegmentId(laneSegmentIter->laneInterval.laneId);
        if (intersectionLanes.count(laneSegmentIter->laneInterval.laneId) > 0)
        {
          rssLaneSegment.type = ::ad::rss::world::LaneSegmentType::Intersection;
          intersectionEntered = true;
        }
        else
        {
          if (intersectionEntered)
          {
            // route is leaving the intersection again, stop
            intersectionLeft = true;
            break;
          }
          rssLaneSegment.type = ::ad::rss::world::LaneSegmentType::Normal;
        }
        if (laneSegmentIter->laneInterval.wrongWay)
        {
          rssLaneSegment.drivingDirection = ::ad::rss::world::LaneDrivingDirection::Negative;
        }
        else
        {
          rssLaneSegment.drivingDirection = ::ad::rss::world::LaneDrivingDirection::Positive;
        }
        getMetricRanges(laneSegmentIter->laneInterval, rssLaneSegment.length, rssLaneSegment.width);

        auto const speedLimitRestrictions = getSpeedLimits(laneSegmentIter->laneInterval);
        for (auto object : objects)
        {
          for (auto const &speedLimitRestriction : speedLimitRestrictions)
          {
            object->updateSpeedLimit(speedLimitRestriction.speedLimit * mSpeedLimitFactor);
          }
          object->laneIntervalAdded(laneSegmentIter->laneInterval);
        }

        rssRoadSegment.push_back(rssLaneSegment);
      }
    }
    if (intersectionLeft)
    {
      break;
    }
    area.push_back(rssRoadSegment);
  }
  for (auto object : objects)
  {
    object->updateVelocityOnRoute(route);
  }
  return area;
}

bool RssSceneCreator::appendNotRelevantScene(::ad::map::route::FullRoute const &route,
                                             RssObjectConversion::ConstPtr iEgoObject,
                                             RssObjectConversion::ConstPtr iOtherObject)
{
  auto egoObject = std::make_shared<RssObjectConversion>(*iEgoObject);
  auto otherObject = std::make_shared<RssObjectConversion>(*iOtherObject);

  // in the end this scene is only for convenience to get to know that we considered it and e.g. visualize it
  // It could be left out completely

  // ensure occupied regions filled meaningful to provide some means on where the ego and the object are located
  otherObject->fillNotRelevantSceneBoundingBox();
  ::ad::rss::world::RoadArea egoVehicleRoad;
  if (route.roadSegments.empty())
  {
    // in case the ego route is actually not available, we fill also the ego object with the dummy occupied regions
    egoObject->fillNotRelevantSceneBoundingBox();
  }
  else
  {
    // in case the ego route is actually available, we can fill the occupied regions as usual
    egoVehicleRoad
      = createRoadArea(route, route.minLaneOffset, route.maxLaneOffset, ::ad::map::lane::LaneIdSet(), {egoObject});
  }
  getLogger()->debug("RssSceneCreator::appendNotRelevantScene[ {} ]>>situation {}",
                     otherObject->getId(),
                     ::ad::rss::situation::SituationType::NotRelevant);
  return appendScene(::ad::rss::situation::SituationType::NotRelevant,
                     egoObject,
                     egoVehicleRoad,
                     otherObject,
                     ::ad::rss::world::RoadArea());
}

::ad::rss::world::RoadArea RssSceneCreator::createNonIntersectionRoadArea(::ad::map::route::FullRoute const &route,
                                                                          std::vector<RssObjectConversion::Ptr> objects)
{
  // take only the relevant part of the route, the two vehicles are driving on
  ::ad::map::route::RouteLaneOffset const minLaneOffset = std::min(0, route.destinationLaneOffset);
  ::ad::map::route::RouteLaneOffset const maxLaneOffset = std::max(0, route.destinationLaneOffset);

  // no intersections on route
  return createRoadArea(route, minLaneOffset, maxLaneOffset, ::ad::map::lane::LaneIdSet(), objects);
}

bool RssSceneCreator::appendNonIntersectionScene(::ad::map::route::ConnectingRoute const &connectingRoute,
                                                 ::ad::rss::situation::SituationType const &situationType,
                                                 RssObjectConversion::ConstPtr iEgoObject,
                                                 RssObjectConversion::ConstPtr iOtherObject)
{
  auto egoObject = std::make_shared<RssObjectConversion>(*iEgoObject);
  auto otherObject = std::make_shared<RssObjectConversion>(*iOtherObject);

  ::ad::rss::world::RoadArea egoVehicleRoad;
  if (!connectingRoute.routeA.roadSegments.empty())
  {
    egoVehicleRoad = createNonIntersectionRoadArea(connectingRoute.routeA, {egoObject, otherObject});
  }
  else if (!connectingRoute.routeB.roadSegments.empty())
  {
    egoVehicleRoad = createNonIntersectionRoadArea(connectingRoute.routeB, {egoObject, otherObject});
  }
  else
  {
    getLogger()->error("RssSceneCreator::appendNonIntersectionScene[ {} ]>> situation {} expected either routeA or "
                       "routeB not to be empty {}",
                       otherObject->getId(),
                       situationType,
                       connectingRoute);
    return false;
  }
  getLogger()->debug("RssSceneCreator::appendNonIntersectionScene[ {} ]>> situation {} road area {}",
                     otherObject->getId(),
                     situationType,
                     egoVehicleRoad);

  return appendScene(situationType, egoObject, egoVehicleRoad, otherObject, ::ad::rss::world::RoadArea());
}

::ad::rss::world::RoadArea RssSceneCreator::createMergingRoadArea(::ad::map::route::FullRoute const &route,
                                                                  RssObjectConversion::Ptr object)
{
  // the last road segment of the merging road is the intersecting one
  ::ad::map::lane::LaneIdSet intersectionLanes;
  for (auto laneSegmentIter = route.roadSegments.back().drivableLaneSegments.begin();
       laneSegmentIter != route.roadSegments.back().drivableLaneSegments.end();
       laneSegmentIter++)
  {
    intersectionLanes.insert(laneSegmentIter->laneInterval.laneId);
  }
  // @todo: there might be more lanes in the merging roads that overlap, so add these also to the intersection lanes!

  // take the whole route
  return createRoadArea(route, route.minLaneOffset, route.maxLaneOffset, intersectionLanes, {object});
}

bool RssSceneCreator::appendMergingScene(::ad::map::route::ConnectingRoute const &connectingRoute,
                                         ::ad::rss::situation::SituationType const &situationType,
                                         RssObjectConversion::ConstPtr iEgoObject,
                                         RssObjectConversion::ConstPtr iOtherObject)
{
  if (connectingRoute.routeA.roadSegments.empty() || connectingRoute.routeB.roadSegments.empty())
  {
    getLogger()->error("RssSceneCreator::appendMergingScene[ {} ]>> situation {} connecting route empty {}",
                       iOtherObject->getId(),
                       situationType,
                       connectingRoute);
    return false;
  }

  auto egoObject = std::make_shared<RssObjectConversion>(*iEgoObject);
  auto otherObject = std::make_shared<RssObjectConversion>(*iOtherObject);

  auto const egoVehicleRoad = createMergingRoadArea(connectingRoute.routeA, egoObject);
  getLogger()->debug("RssSceneCreator::appendMergingScene[ {} ]>> situation {} ego road area {}",
                     otherObject->getId(),
                     situationType,
                     egoVehicleRoad);

  auto const intersectingRoad = createMergingRoadArea(connectingRoute.routeB, otherObject);
  getLogger()->debug("RssSceneCreator::appendMergingScene[ {} ]>> situation {} intersection road area {}",
                     otherObject->getId(),
                     situationType,
                     intersectingRoad);

  return appendScene(situationType, egoObject, egoVehicleRoad, otherObject, intersectingRoad);
}

::ad::rss::world::RoadArea
RssSceneCreator::createIntersectionRoadArea(::ad::map::route::FullRoute const &route,
                                            ::ad::map::intersection::IntersectionConstPtr intersection,
                                            RssObjectConversion::Ptr object)
{
  // only the lanes of the intersection under consideration are marked as intersection;
  return createRoadArea(route, route.minLaneOffset, route.maxLaneOffset, intersection->internalLanes(), {object});
}

bool RssSceneCreator::appendIntersectionScene(::ad::map::intersection::IntersectionPtr intersection,
                                              ::ad::map::route::FullRoute const &egoRoute,
                                              ::ad::map::route::FullRoute const &objectRoute,
                                              ::ad::map::route::FullRoute const &intersectionOtherRoute,
                                              RssObjectConversion::ConstPtr iEgoObject,
                                              RssObjectConversion::ConstPtr iOtherObject)
{
  auto egoObject = std::make_shared<RssObjectConversion>(*iEgoObject);
  auto otherObject = std::make_shared<RssObjectConversion>(*iOtherObject);

  auto situationType = ::ad::rss::situation::SituationType::IntersectionObjectHasPriority;
  if (intersection->intersectionType() == ::ad::map::intersection::IntersectionType::TrafficLight)
  {
    // in case no traffic light actually modeled (map error), we assume others have always priority
    bool intersectionRouteHasGreen = true;
    if (intersection->applicableTrafficLights().empty())
    {
      getLogger()->warn("RssSceneCreation::appendIntersectionScene[ {} ]>> traffic light intersection has no "
                        "applicable traffic lights {}",
                        otherObject->getId(),
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
      if (intersectionOtherRoute.routePlanningCounter == objectRoute.routePlanningCounter)
      {
        situationType = ::ad::rss::situation::SituationType::IntersectionObjectHasPriority;
      }
      else
      {
        situationType = ::ad::rss::situation::SituationType::IntersectionEgoHasPriority;
      }
    }
    else
    {
      if (intersectionOtherRoute.routePlanningCounter == objectRoute.routePlanningCounter)
      {
        situationType = ::ad::rss::situation::SituationType::IntersectionEgoHasPriority;
      }
      else
      {
        situationType = ::ad::rss::situation::SituationType::IntersectionObjectHasPriority;
      }
    }
    getLogger()->debug("RssSceneCreation::appendIntersectionScene[ {} ]>> traffic light intersection intersection "
                       "route has green: {} situation: {}",
                       otherObject->getId(),
                       intersectionRouteHasGreen,
                       situationType);
  }
  else if (intersection->objectRouteCrossesLanesWithHigherPriority(intersectionOtherRoute))
  {
    if (intersectionOtherRoute.routePlanningCounter == objectRoute.routePlanningCounter)
    {
      situationType = ::ad::rss::situation::SituationType::IntersectionObjectHasPriority;
    }
    else
    {
      situationType = ::ad::rss::situation::SituationType::IntersectionEgoHasPriority;
    }
  }
  else
  {
    auto const findWaypointResult = ::ad::map::route::findNearestWaypoint(
      intersection->incomingParaPointsWithLowerPriority(), intersectionOtherRoute);
    if (findWaypointResult.isValid())
    {
      if (intersectionOtherRoute.routePlanningCounter == objectRoute.routePlanningCounter)
      {
        situationType = ::ad::rss::situation::SituationType::IntersectionEgoHasPriority;
      }
      else
      {
        situationType = ::ad::rss::situation::SituationType::IntersectionObjectHasPriority;
      }
    }
    else
    {
      situationType = ::ad::rss::situation::SituationType::IntersectionSamePriority;
    }
  }

  auto const egoVehicleRoad = createIntersectionRoadArea(egoRoute, intersection, egoObject);
  getLogger()->debug("RssSceneCreation::appendIntersectionScene[ {} ]>> situation {} ego road area {}",
                     otherObject->getId(),
                     situationType,
                     egoVehicleRoad);

  auto const intersectingRoad = createIntersectionRoadArea(objectRoute, intersection, otherObject);
  getLogger()->debug("RssSceneCreation::appendIntersectionScene[ {} ]>> situation {} intersection road area {}",
                     otherObject->getId(),
                     situationType,
                     intersectingRoad);

  return appendScene(situationType, egoObject, egoVehicleRoad, otherObject, intersectingRoad);
}

bool RssSceneCreator::appendRoadBoundaryScenes(::ad::map::route::FullRoute const &route,
                                               RssObjectConversion::ConstPtr iEgoObject)
{
  auto egoObject = std::make_shared<RssObjectConversion>(*iEgoObject);

  auto const egoVehicleRoad
    = createRoadArea(route, route.minLaneOffset, route.maxLaneOffset, ::ad::map::lane::LaneIdSet(), {egoObject});

  getLogger()->debug("RssSceneCreator::appendRoadBoundaryScenes[ ]>> ego road area {}", egoVehicleRoad);

  ::ad::rss::world::RssDynamics staticDynamics;
  staticDynamics.alphaLat.accelMax = ::ad::physics::Acceleration(0.);
  staticDynamics.alphaLat.brakeMin = ::ad::physics::Acceleration(0.01);
  staticDynamics.alphaLon.accelMax = ::ad::physics::Acceleration(0.);
  staticDynamics.alphaLon.brakeMax = ::ad::physics::Acceleration(0.01);
  staticDynamics.alphaLon.brakeMin = ::ad::physics::Acceleration(0.01);
  staticDynamics.alphaLon.brakeMinCorrect = ::ad::physics::Acceleration(0.01);
  staticDynamics.lateralFluctuationMargin = ::ad::physics::Distance(0.0);
  staticDynamics.responseTime = ::ad::physics::Duration(0.01);

  ::ad::rss::world::ObjectId const rightBorderId = std::numeric_limits<::ad::rss::world::ObjectId>::max();
  ::ad::rss::world::ObjectId const leftBorderId = std::numeric_limits<::ad::rss::world::ObjectId>::max() - 1;

  ::ad::rss::world::OccupiedRegionVector rightBorderOccupiedRegions;
  ::ad::rss::world::OccupiedRegionVector leftBorderOccupiedRegions;
  for (auto const &roadSegment : route.roadSegments)
  {
    auto &rightmostLane = roadSegment.drivableLaneSegments.front();

    ::ad::rss::world::OccupiedRegion region;
    region.lonRange.minimum = ::ad::physics::ParametricValue(0.);
    region.lonRange.maximum = ::ad::physics::ParametricValue(1.);
    region.latRange.minimum = ::ad::physics::ParametricValue(0.999);
    region.latRange.maximum = ::ad::physics::ParametricValue(1.);
    region.segmentId = ::ad::rss::world::LaneSegmentId(rightmostLane.laneInterval.laneId);
    rightBorderOccupiedRegions.push_back(region);

    auto &leftmostLane = roadSegment.drivableLaneSegments.back();

    region.lonRange.minimum = ::ad::physics::ParametricValue(0.);
    region.lonRange.maximum = ::ad::physics::ParametricValue(1.);
    region.latRange.minimum = ::ad::physics::ParametricValue(0.);
    region.latRange.maximum = ::ad::physics::ParametricValue(0.001);
    region.segmentId = ::ad::rss::world::LaneSegmentId(leftmostLane.laneInterval.laneId);
    leftBorderOccupiedRegions.push_back(region);
  }

  auto rightBorderObject = std::make_shared<RssObjectConversion>(rightBorderId,
                                                                 ::ad::rss::world::ObjectType::ArtificialObject,
                                                                 rightBorderOccupiedRegions,
                                                                 ::ad::physics::Speed(0),
                                                                 staticDynamics);
  auto leftBorderObject = std::make_shared<RssObjectConversion>(leftBorderId,
                                                                ::ad::rss::world::ObjectType::ArtificialObject,
                                                                leftBorderOccupiedRegions,
                                                                ::ad::physics::Speed(0),
                                                                staticDynamics);

  auto result = appendScene(::ad::rss::situation::SituationType::SameDirection,
                            egoObject,
                            egoVehicleRoad,
                            rightBorderObject,
                            ::ad::rss::world::RoadArea());

  result &= appendScene(::ad::rss::situation::SituationType::SameDirection,
                        egoObject,
                        egoVehicleRoad,
                        leftBorderObject,
                        ::ad::rss::world::RoadArea());

  return result;
}

bool RssSceneCreator::appendScene(::ad::rss::situation::SituationType const &situationType,
                                  RssObjectConversion::ConstPtr egoObject,
                                  ::ad::rss::world::RoadArea const &egoRoad,
                                  RssObjectConversion::ConstPtr otherObject,
                                  ::ad::rss::world::RoadArea const &intersectingRoad)
{
  ::ad::rss::world::Scene scene;
  scene.situationType = situationType;
  scene.egoVehicle = egoObject->getRssObject();
  scene.egoVehicleRssDynamics = egoObject->getRssDynamics();
  scene.egoVehicleRoad = egoRoad;
  scene.intersectingRoad = intersectingRoad;
  scene.object = otherObject->getRssObject();
  scene.objectRssDynamics = otherObject->getRssDynamics();

  getLogger()->debug("RssSceneCreator::appendScene[ {} ]>> object {}", otherObject->getId(), scene.object);
  getLogger()->debug("RssSceneCreator::appendScene[ {} ]>> ego {}", otherObject->getId(), scene.egoVehicle);

  if (withinValidInputRange(scene))
  {
    return mSceneCreation.appendSceneToWorldModel(scene);
  }
  else
  {
    getLogger()->error("RssSceneCreator::appendScene[ {} ]>> scene no valid {}", otherObject->getId(), scene);
    return false;
  }
}

} // namespace map
} // namespace rss
} // namespace ad
