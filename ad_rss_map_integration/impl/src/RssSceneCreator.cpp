// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/map/RssSceneCreator.hpp"
#include <ad/map/lane/LaneOperation.hpp>
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
  if (!bool(iEgoObject) || !bool(iOtherObject))
  {
    getLogger()->error("RssSceneCreator::appendNotRelevantScene[]>> ego/other object input is NULL");
    return false;
  }
  auto egoObject = std::make_shared<RssObjectConversion>(*iEgoObject);
  if (!bool(egoObject))
  {
    getLogger()->error("RssSceneCreator::appendNotRelevantScene[{}]>> failed to create copy of ego RssObjectConversion",
                       iOtherObject->getId());
    return false;
  }
  auto otherObject = std::make_shared<RssObjectConversion>(*iOtherObject);
  if (!bool(otherObject))
  {
    getLogger()->error(
      "RssSceneCreator::appendNotRelevantScene[{}]>> failed to create copy of other RssObjectConversion",
      iOtherObject->getId());
    return false;
  }

  // in the end this scene is only for convenience to get to know that we considered it and e.g. visualize it
  // It could be left out completely

  // ensure occupied regions filled meaningful to provide some means on where the ego and the object are located
  otherObject->fillNotRelevantSceneBoundingBox();
  ::ad::rss::world::RoadArea egoVehicleRoad;
  if (!route.roadSegments.empty())
  {
    // in case the ego route is actually available, we can try to fill the occupied regions as usual
    egoVehicleRoad
      = createRoadArea(route, route.minLaneOffset, route.maxLaneOffset, ::ad::map::lane::LaneIdSet(), {egoObject});
  }

  if (egoObject->getRssObject().occupiedRegions.empty())
  {
    // in case the ego route was actually not available, or the ego vehicle is not driving within the route
    // we fill also the ego object with the dummy occupied regions
    egoObject->fillNotRelevantSceneBoundingBox();
  }

  getLogger()->debug("RssSceneCreator::appendNotRelevantScene[{}]>>situation {}",
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
  if (!bool(iEgoObject) || !bool(iOtherObject))
  {
    getLogger()->error("RssSceneCreator::appendNonIntersectionScene[]>> ego/other object input is NULL");
    return false;
  }
  auto egoObject = std::make_shared<RssObjectConversion>(*iEgoObject);
  if (!bool(egoObject))
  {
    getLogger()->error(
      "RssSceneCreator::appendNonIntersectionScene[{}]>> failed to create copy of ego RssObjectConversion",
      iOtherObject->getId());
    return false;
  }
  auto otherObject = std::make_shared<RssObjectConversion>(*iOtherObject);
  if (!bool(otherObject))
  {
    getLogger()->error(
      "RssSceneCreator::appendNonIntersectionScene[{}]>> failed to create copy of other RssObjectConversion",
      iOtherObject->getId());
    return false;
  }

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
    getLogger()->error("RssSceneCreator::appendNonIntersectionScene[{}]>> situation {} expected either routeA or "
                       "routeB not to be empty {}",
                       otherObject->getId(),
                       situationType,
                       connectingRoute);
    return false;
  }
  getLogger()->debug("RssSceneCreator::appendNonIntersectionScene[{}]>> situation {}\n road area {}",
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
  if (!bool(iEgoObject) || !bool(iOtherObject))
  {
    getLogger()->error("RssSceneCreator::appendMergingScene[]>> ego/other object input is NULL");
    return false;
  }
  if (connectingRoute.routeA.roadSegments.empty() || connectingRoute.routeB.roadSegments.empty())
  {
    getLogger()->error("RssSceneCreator::appendMergingScene[{}]>> situation {} connecting route empty {}",
                       iOtherObject->getId(),
                       situationType,
                       connectingRoute);
    return false;
  }

  auto egoObject = std::make_shared<RssObjectConversion>(*iEgoObject);
  if (!bool(egoObject))
  {
    getLogger()->error("RssSceneCreator::appendMergingScene[{}]>> failed to create copy of ego RssObjectConversion",
                       iOtherObject->getId());
    return false;
  }
  auto otherObject = std::make_shared<RssObjectConversion>(*iOtherObject);
  if (!bool(otherObject))
  {
    getLogger()->error("RssSceneCreator::appendMergingScene[{}]>> failed to create copy of other RssObjectConversion",
                       iOtherObject->getId());
    return false;
  }

  auto const egoVehicleRoad = createMergingRoadArea(connectingRoute.routeA, egoObject);
  auto const intersectingRoad = createMergingRoadArea(connectingRoute.routeB, otherObject);
  getLogger()->debug("RssSceneCreator::appendMergingScene[{}]>> situation {}\n"
                     " ego road area {}\n intersection road area {}",
                     otherObject->getId(),
                     situationType,
                     egoVehicleRoad,
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
  if (!bool(iEgoObject) || !bool(iOtherObject))
  {
    getLogger()->error("RssSceneCreator::appendIntersectionScene[]>> ego/other object input is NULL");
    return false;
  }
  auto egoObject = std::make_shared<RssObjectConversion>(*iEgoObject);
  if (!bool(egoObject))
  {
    getLogger()->error(
      "RssSceneCreator::appendIntersectionScene[{}]>> failed to create copy of ego RssObjectConversion",
      iOtherObject->getId());
    return false;
  }
  auto otherObject = std::make_shared<RssObjectConversion>(*iOtherObject);
  if (!bool(otherObject))
  {
    getLogger()->error(
      "RssSceneCreator::appendIntersectionScene[{}]>> failed to create copy of other RssObjectConversion",
      iOtherObject->getId());
    return false;
  }

  auto situationType = ::ad::rss::situation::SituationType::IntersectionObjectHasPriority;
  if (intersection->intersectionType() == ::ad::map::intersection::IntersectionType::TrafficLight)
  {
    // in case no traffic light actually modeled (map error), we assume others have always priority
    bool intersectionRouteHasGreen = true;
    if (intersection->applicableTrafficLights().empty())
    {
      getLogger()->warn("RssSceneCreation::appendIntersectionScene[{}]>> traffic light intersection has no "
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
    getLogger()->debug("RssSceneCreation::appendIntersectionScene[{}]>> traffic light intersection intersection "
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
    if (intersectionOtherRoute.routePlanningCounter == objectRoute.routePlanningCounter)
    {
      situationType = ::ad::rss::situation::SituationType::IntersectionEgoHasPriority;
    }
    else
    {
      situationType = ::ad::rss::situation::SituationType::IntersectionObjectHasPriority;
    }
  }

  auto const egoVehicleRoad = createIntersectionRoadArea(egoRoute, intersection, egoObject);
  auto const intersectingRoad = createIntersectionRoadArea(objectRoute, intersection, otherObject);
  getLogger()->debug("RssSceneCreation::appendIntersectionScene[{}]>> situation {}\n"
                     " ego road area {}\n intersection road area {}",
                     otherObject->getId(),
                     situationType,
                     egoVehicleRoad,
                     intersectingRoad);

  return appendScene(situationType, egoObject, egoVehicleRoad, otherObject, intersectingRoad);
}

bool RssSceneCreator::appendRoadBoundaryScenes(::ad::map::route::FullRoute const &route,
                                               RssObjectConversion::ConstPtr iEgoObject)
{
  if (!bool(iEgoObject))
  {
    getLogger()->error("RssSceneCreator::appendRoadBoundaryScenes[]>> ego object input is NULL");
    return false;
  }
  auto egoObject = std::make_shared<RssObjectConversion>(*iEgoObject);
  if (!bool(egoObject))
  {
    getLogger()->error("RssSceneCreator::appendRoadBoundaryScenes[]>> failed to create copy of RssObjectConversion");
    return false;
  }

  auto const egoVehicleRoad
    = createRoadArea(route, route.minLaneOffset, route.maxLaneOffset, ::ad::map::lane::LaneIdSet(), {egoObject});

  getLogger()->debug("RssSceneCreator::appendRoadBoundaryScenes[]>> ego road area {}", egoVehicleRoad);

  ::ad::rss::world::RssDynamics staticDynamics;
  staticDynamics.alphaLat.accelMax = ::ad::physics::Acceleration(0.);
  staticDynamics.alphaLat.brakeMin = ::ad::physics::Acceleration(-0.01);
  staticDynamics.alphaLon.accelMax = ::ad::physics::Acceleration(0.);
  staticDynamics.alphaLon.brakeMax = ::ad::physics::Acceleration(-0.01);
  staticDynamics.alphaLon.brakeMin = ::ad::physics::Acceleration(-0.01);
  staticDynamics.alphaLon.brakeMinCorrect = ::ad::physics::Acceleration(-0.01);
  staticDynamics.lateralFluctuationMargin = ::ad::physics::Distance(0.0);
  staticDynamics.responseTime = ::ad::physics::Duration(0.01);
  staticDynamics.unstructuredSettings.pedestrianTurningRadius = ad::physics::Distance(0.);
  staticDynamics.unstructuredSettings.driveAwayMaxAngle = ad::physics::Angle(0.);
  staticDynamics.unstructuredSettings.vehicleYawRateChangePerSecond = ad::physics::ParametricValue(0.);
  staticDynamics.unstructuredSettings.vehicleMinRadius = ad::physics::Distance(0.);
  staticDynamics.unstructuredSettings.vehicleTrajectoryCalculationStep = ad::physics::Duration(0.);

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

  ::ad::map::match::ENUObjectPosition rightBorderPosition;
  ::ad::physics::ParametricValue rightBorderOffsetLat;
  auto const rightBorderInterval = route.roadSegments.front().drivableLaneSegments.front().laneInterval;
  if (::ad::map::route::isRouteDirectionPositive(rightBorderInterval))
  {
    rightBorderOffsetLat = ::ad::physics::ParametricValue(1.);
  }
  else
  {
    rightBorderOffsetLat = ::ad::physics::ParametricValue(0.);
  }
  auto const rightBorderParaPoint = getIntervalStart(rightBorderInterval);
  rightBorderPosition.enuReferencePoint = ::ad::map::access::getENUReferencePoint();
  rightBorderPosition.centerPoint = ::ad::map::lane::getENULanePoint(rightBorderParaPoint, rightBorderOffsetLat);
  rightBorderPosition.heading
    = ::ad::map::lane::getLaneENUHeading(rightBorderParaPoint, rightBorderPosition.enuReferencePoint);
  rightBorderPosition.dimension.height = ::ad::physics::Distance(0.1);
  rightBorderPosition.dimension.length = ::ad::physics::Distance(0.1);
  rightBorderPosition.dimension.width = ::ad::physics::Distance(0.1);

  auto rightBorderObject = std::make_shared<RssObjectConversion>(getRightBorderObjectId(),
                                                                 ::ad::rss::world::ObjectType::ArtificialObject,
                                                                 rightBorderOccupiedRegions,
                                                                 rightBorderPosition,
                                                                 ::ad::physics::Speed(0),
                                                                 ::ad::physics::AngularVelocity(0.),
                                                                 staticDynamics);
  if (!bool(rightBorderObject))
  {
    getLogger()->error(
      "RssSceneCreator::appendRoadBoundaryScenes[]>> failed to create copy of right border RssObjectConversion");
    return false;
  }

  ::ad::map::match::ENUObjectPosition leftBorderPosition;
  ::ad::physics::ParametricValue leftBorderOffsetLat;
  auto const leftBorderInterval = route.roadSegments.front().drivableLaneSegments.back().laneInterval;
  if (::ad::map::route::isRouteDirectionPositive(leftBorderInterval))
  {
    leftBorderOffsetLat = ::ad::physics::ParametricValue(0.);
  }
  else
  {
    leftBorderOffsetLat = ::ad::physics::ParametricValue(1.);
  }
  auto const leftBorderParaPoint = getIntervalStart(leftBorderInterval);
  leftBorderPosition.enuReferencePoint = ::ad::map::access::getENUReferencePoint();
  leftBorderPosition.centerPoint = ::ad::map::lane::getENULanePoint(leftBorderParaPoint, leftBorderOffsetLat);
  leftBorderPosition.heading
    = ::ad::map::lane::getLaneENUHeading(leftBorderParaPoint, leftBorderPosition.enuReferencePoint);
  leftBorderPosition.dimension.height = ::ad::physics::Distance(0.1);
  leftBorderPosition.dimension.length = ::ad::physics::Distance(0.1);
  leftBorderPosition.dimension.width = ::ad::physics::Distance(0.1);

  auto leftBorderObject = std::make_shared<RssObjectConversion>(getLeftBorderObjectId(),
                                                                ::ad::rss::world::ObjectType::ArtificialObject,
                                                                leftBorderOccupiedRegions,
                                                                leftBorderPosition,
                                                                ::ad::physics::Speed(0),
                                                                ::ad::physics::AngularVelocity(0.),
                                                                staticDynamics);
  if (!bool(leftBorderObject))
  {
    getLogger()->error(
      "RssSceneCreator::appendRoadBoundaryScenes[]>> failed to create copy of left border RssObjectConversion");
    return false;
  }

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
  if (!bool(egoObject) || !bool(otherObject))
  {
    getLogger()->error("RssSceneCreator::appendScene[]>> ego/other object input is NULL");
    return false;
  }

  ::ad::rss::world::Scene scene;
  scene.situationType = situationType;
  scene.egoVehicle = egoObject->getRssObject();
  scene.egoVehicleRssDynamics = egoObject->getRssDynamics();
  scene.egoVehicleRoad = egoRoad;
  scene.intersectingRoad = intersectingRoad;
  scene.object = otherObject->getRssObject();
  scene.objectRssDynamics = otherObject->getRssDynamics();

  getLogger()->trace("RssSceneCreator::appendScene[{}]>> object {}", otherObject->getId(), scene.object);
  getLogger()->trace("RssSceneCreator::appendScene[{}]>> ego {}", otherObject->getId(), scene.egoVehicle);

  if (scene.egoVehicle.occupiedRegions.empty())
  {
    ::ad::map::match::Object matchObject;
    if (egoObject->getObjectMapMatchedPosition() != nullptr)
    {
      matchObject = *egoObject->getObjectMapMatchedPosition();
    }
    getLogger()->warn("RssSceneCreator::appendScene[{}]>> dropping scene because ego occupied regions empty {} -> {}",
                      otherObject->getId(),
                      matchObject,
                      scene);
    return false;
  }
  else if (withinValidInputRange(scene))
  {
    return mSceneCreation.appendSceneToWorldModel(scene);
  }
  else
  {
    getLogger()->error("RssSceneCreator::appendScene[{}]>> scene no valid {}", otherObject->getId(), scene);
    return false;
  }
}

bool RssSceneCreator::appendUnstructuredScene(RssObjectConversion::ConstPtr iEgoObject,
                                              RssObjectConversion::ConstPtr iOtherObject)
{
  if (!bool(iEgoObject) || !bool(iOtherObject))
  {
    getLogger()->error("RssSceneCreator::appendUnstructuredScene[]>> ego/other object input is NULL");
    return false;
  }
  auto egoObject = std::make_shared<RssObjectConversion>(*iEgoObject);
  if (!bool(egoObject))
  {
    getLogger()->error(
      "RssSceneCreator::appendUnstructuredScene[{}]>> failed to create copy of ego RssObjectConversion",
      iOtherObject->getId());
    return false;
  }
  auto otherObject = std::make_shared<RssObjectConversion>(*iOtherObject);
  if (!bool(otherObject))
  {
    getLogger()->error(
      "RssSceneCreator::appendUnstructuredScene[{}]>> failed to create copy of other RssObjectConversion",
      iOtherObject->getId());
    return false;
  }

  egoObject->fillNotRelevantSceneBoundingBox();
  otherObject->fillNotRelevantSceneBoundingBox();

  getLogger()->debug("RssSceneCreator::appendUnstructuredScene[{}]>>", otherObject->getId());

  return appendScene(::ad::rss::situation::SituationType::Unstructured,
                     egoObject,
                     ::ad::rss::world::RoadArea(),
                     otherObject,
                     ::ad::rss::world::RoadArea());
}
} // namespace map
} // namespace rss
} // namespace ad
