// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include <ad/map/intersection/Intersection.hpp>
#include <ad/map/route/FullRoute.hpp>
#include <ad/rss/world/WorldModel.hpp>
#include "RssObjectConversion.hpp"
#include "ad/rss/map/RssSceneCreation.hpp"

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
class RssSceneCreator
{
public:
  /*!
   * @brief constructor
   *
   * @param[in] restrictSpeedLimitMode the mode to select the behavior of objectRssDynamics.maxSpeed and egoMaxSpeed
   * parameter
   * @param[in] greenTrafficLights the list of known green traffic lights.
   *   Required to derive the correct priority rule for the ego vehicle when approaching a traffic light intersection.
   * @param[in/out] worldModel the world model where the newly created scenes are appended and
   */
  RssSceneCreator(RssSceneCreation::RestrictSpeedLimitMode const &restrictSpeedLimitMode,
                  ::ad::map::landmark::LandmarkIdSet const &greenTrafficLights,
                  ::ad::rss::world::WorldModel &worldModel);

  /*!
   * @brief constructor
   *
   * @param[in/out] worldModel the world model where the newly created scenes are appended and
   */
  explicit RssSceneCreator(::ad::rss::world::WorldModel &worldModel);

  bool appendNotRelevantScene(RssObjectConversion::ConstPtr egoObject, RssObjectConversion::ConstPtr otherObject);

  bool appendNonIntersectionScene(::ad::map::route::ConnectingRoute const &connectingRoute,
                                  ::ad::rss::situation::SituationType const &situationType,
                                  RssObjectConversion::ConstPtr egoObject,
                                  RssObjectConversion::ConstPtr otherObject);

  bool appendMergingScene(::ad::map::route::ConnectingRoute const &connectingRoute,
                          ::ad::rss::situation::SituationType const &situationType,
                          RssObjectConversion::ConstPtr egoObject,
                          RssObjectConversion::ConstPtr otherObject);

  bool appendIntersectionScene(::ad::map::intersection::IntersectionPtr intersection,
                               ::ad::map::route::FullRoute const &egoRoute,
                               ::ad::map::route::FullRoute const &objectRoute,
                               RssObjectConversion::ConstPtr egoObject,
                               RssObjectConversion::ConstPtr otherObject);

  bool appendRoadBoundaryScenes(RssObjectConversion::ConstPtr egoObject, ::ad::map::route::FullRoute const &egoRoute);

private:
  /**
   * @brief helper function to actually create the road area
   *
   * @param[in] route The route the road area is created from
   * @param[in] roadSegmentIterStart The road segment start iterator
   * @param[in] roadSegmentIterEnd The road segment end iterator
   * @param[in] minLaneOffset The minimum lane offset to be taken into account
   * @param[in] maxLaneOffset The maximum lane offset to be taken into account
   * @param[in] intersectionLanes The lanes to be marked as intersection
   * @param[in] objects The objects to be updated while creating the route.
   */
  ::ad::rss::world::RoadArea createRoadArea(::ad::map::route::FullRoute const &route,
                                            ::ad::map::route::RoadSegmentList::const_iterator roadSegmentIterStart,
                                            ::ad::map::route::RoadSegmentList::const_iterator roadSegmentIterEnd,
                                            ::ad::map::route::RouteLaneOffset const minLaneOffset,
                                            ::ad::map::route::RouteLaneOffset const maxLaneOffset,
                                            ::ad::map::lane::LaneIdSet const &intersectionLanes,
                                            std::vector<RssObjectConversion::Ptr> objects);

  /**
   * @brief helper function to create a road area for non intersection scenes
   *
   * @param[in] route The route the road area should be created from
   * @param[in] objects The objects to be updated while creating the route.
   */
  ::ad::rss::world::RoadArea createNonIntersectionRoadArea(::ad::map::route::FullRoute const &route,
                                                           std::vector<RssObjectConversion::Ptr> objects);

  /**
   * @brief helper function to create a road area for merging scenes
   *
   * @param[in] route The route the road area should be created from
   * @param[in] object The object to be updated while creating the route.
   */
  ::ad::rss::world::RoadArea createMergingRoadArea(::ad::map::route::FullRoute const &route,
                                                   RssObjectConversion::Ptr object);

  /**
   * @brief helper function to create a road area for intersection scenes
   *
   * @param[in] route The route the road area should be created from
   * @param[in] intersection The intersection on the route the road area should be created for
   * @param[in] object The object to be updated while creating the route.
   */
  ::ad::rss::world::RoadArea createIntersectionRoadArea(::ad::map::route::FullRoute const &route,
                                                        ::ad::map::intersection::IntersectionConstPtr intersection,
                                                        RssObjectConversion::Ptr object);

  /**
   * @brief helper function to actually append a new scene to the world model
   *
   * @param[in] situationType The type of situation
   * @param[in] egoObject The ego object of the scene
   * @param[in] egoRoad The ego road of the scene
   * @param[in] otherObject The other object of the scene
   * @param[in] intersectingRoad The intersecting road of the scene
   */
  bool appendScene(::ad::rss::situation::SituationType const &situationType,
                   RssObjectConversion::ConstPtr egoObject,
                   ::ad::rss::world::RoadArea const &egoRoad,
                   RssObjectConversion::ConstPtr otherObject,
                   ::ad::rss::world::RoadArea const &intersectingRoad);

  double mSpeedLimitFactor;
  ::ad::map::landmark::LandmarkIdSet mGreenTrafficLights;
  ::ad::rss::world::WorldModel &mWorldModel;
};

} // namespace map
} // namespace rss
} // namespace ad
