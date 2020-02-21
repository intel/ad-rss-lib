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
 * @brief class providing support to create and append RSS Scenes
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
   * @param[in/out] worldModel the world model where the newly created scenes are appended
   */
  RssSceneCreator(RssSceneCreation::RestrictSpeedLimitMode const &restrictSpeedLimitMode,
                  ::ad::map::landmark::LandmarkIdSet const &greenTrafficLights,
                  ::ad::rss::world::WorldModel &worldModel);

  /*!
   * @brief overloaded constructor using default values
   *
   * @param[in/out] worldModel the world model where the newly created scenes are appended
   */
  explicit RssSceneCreator(::ad::rss::world::WorldModel &worldModel);

  /*!
   * \brief standard destructor
   */
  ~RssSceneCreator() = default;

  /*!
   * @brief append a not relevant scene
   *
   * @param[in] route the full route of the ego object (allowed to be empty)
   * @param[in] egoObject the ego object basic information
   * @param[in] otherObject the other object basic information
   *
   * @returns \c true if appending of the scene succeeded.
   */
  bool appendNotRelevantScene(::ad::map::route::FullRoute const &route,
                              RssObjectConversion::ConstPtr egoObject,
                              RssObjectConversion::ConstPtr otherObject);

  /*!
   * @brief append a non intersection scene
   *
   * @param[in] connectingRoute the connectingRoute route between the ego and the other object
   * @param[in] situationType the concrete situation type (SituationType::SameDirection or
   * SituationType::OppositeDirection)
   * @param[in] egoObject the ego object basic information
   * @param[in] otherObject the other object basic information
   *
   * @returns \c true if appending of the scene succeeded.
   */
  bool appendNonIntersectionScene(::ad::map::route::ConnectingRoute const &connectingRoute,
                                  ::ad::rss::situation::SituationType const &situationType,
                                  RssObjectConversion::ConstPtr egoObject,
                                  RssObjectConversion::ConstPtr otherObject);

  /*!
   * @brief append a merging scene
   *
   * @param[in] connectingRoute the merging connectingRoute route of the ego and the other object
   * @param[in] situationType the concrete situation type (usually one of the SituationType::Intersection*)
   * @param[in] egoObject the ego object basic information
   * @param[in] otherObject the other object basic information
   *
   * @returns \c true if appending of the scene succeeded.
   */
  bool appendMergingScene(::ad::map::route::ConnectingRoute const &connectingRoute,
                          ::ad::rss::situation::SituationType const &situationType,
                          RssObjectConversion::ConstPtr egoObject,
                          RssObjectConversion::ConstPtr otherObject);

  /*!
   * @brief append an intersection scene
   *
   * @param[in] intersection the relevant intersection to consider
   * @param[in] egoRoute the object route used to create the intersection object
   * @param[in] obectRoute the object route interacting with the ego route in the intersection
   * @param[in] egoObject the ego object basic information
   * @param[in] otherObject the other object basic information
   *
   * @returns \c true if appending of the scene succeeded.
   */
  bool appendIntersectionScene(::ad::map::intersection::IntersectionPtr intersection,
                               ::ad::map::route::FullRoute const &egoRoute,
                               ::ad::map::route::FullRoute const &objectRoute,
                               RssObjectConversion::ConstPtr egoObject,
                               RssObjectConversion::ConstPtr otherObject);

  /*!
   * @brief append a road boundary scene
   *
   * @param[in] egoRoute the object route used to create the intersection object
   * @param[in] egoObject the ego object basic information
   *
   * @returns \c true if appending of the scene succeeded.
   */
  bool appendRoadBoundaryScenes(::ad::map::route::FullRoute const &egoRoute, RssObjectConversion::ConstPtr egoObject);

private:
  /**
   * @brief helper function to actually create the road area
   *
   * @param[in] route The route the road area is created from
   * @param[in] minLaneOffset The minimum lane offset to be taken into account
   * @param[in] maxLaneOffset The maximum lane offset to be taken into account
   * @param[in] intersectionLanes The lanes to be marked as intersection (the road area creation stops when intersection
   * is left)
   * @param[in] objects The objects to be updated while creating the route.
   */
  ::ad::rss::world::RoadArea createRoadArea(::ad::map::route::FullRoute const &route,
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
