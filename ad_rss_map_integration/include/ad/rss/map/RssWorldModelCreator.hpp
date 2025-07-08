// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include <ad/map/geometry/PolygonOperation.hpp>
#include <ad/map/intersection/Intersection.hpp>
#include <ad/map/route/FullRoute.hpp>
#include <ad/rss/structured/RssFormulas.hpp>
#include <ad/rss/world/WorldModel.hpp>
#include "ad/rss/map/RssObjectConversion.hpp"
#include "ad/rss/map/RssWorldModelCreation.hpp"

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
 * @brief class providing support to create the RSS world model and append RSS Constellations
 */
class RssWorldModelCreator
{
public:
  /*!
   * @brief constructor
   *
   * @param[in] restrict_speed_limit_mode the mode to select the behavior of
   * object_rss_dynamics.max_speed_on_acceleration and
   * egoMaxSpeedOnAcceleration
   * parameter
   * @param[in] greenTrafficLights the list of known green traffic lights.
   *   Required to derive the correct priority rule for the ego vehicle when approaching a traffic light intersection.
   * @param[in/out] worldModelCreation the world model creation object managing the world model where the newly
   * created constellations are
   * appended
   */
  RssWorldModelCreator(RssRestrictSpeedLimitMode const &restrict_speed_limit_mode,
                       ::ad::map::landmark::LandmarkIdSet const &greenTrafficLights,
                       RssWorldModelCreation &worldModelCreation);

  /*!
   * @brief overloaded constructor using default values
   *
   * @param[in/out] worldModelCreation the world model creation object managing the world model where the newly
   * created constellations are
   * appended
   */
  explicit RssWorldModelCreator(RssWorldModelCreation &worldModelCreation);

  /*!
   * \brief standard destructor
   */
  ~RssWorldModelCreator() = default;

  /*!
   * @brief append a not relevant constellation
   *
   * @param[in] route the full route of the ego object (allowed to be empty)
   * @param[in] egoObject the ego object basic information
   * @param[in] otherObject the other object basic information
   *
   * @returns \c true if appending of the constellation succeeded.
   */
  bool appendNotRelevantConstellation(::ad::map::route::FullRoute const &route,
                                      RssObjectConversion::ConstPtr egoObject,
                                      RssObjectConversion::ConstPtr otherObject);

  /*!
   * @brief append a non intersection constellation
   *
   * @param[in] connectingRoute the connectingRoute route between the ego and the other object
   * @param[in] constellation_type the concrete constellation type (ConstellationType::SameDirection or
   * ConstellationType::OppositeDirection)
   * @param[in] egoObject the ego object basic information
   * @param[in] otherObject the other object basic information
   *
   * @returns \c true if appending of the constellation succeeded.
   */
  bool appendNonIntersectionConstellation(::ad::map::route::ConnectingRoute const &connectingRoute,
                                          world::ConstellationType const &constellation_type,
                                          RssObjectConversion::ConstPtr egoObject,
                                          RssObjectConversion::ConstPtr otherObject);

  /*!
   * @brief append a merging constellation
   *
   * @param[in] connectingRoute the merging connectingRoute route of the ego and the other object
   * @param[in] constellation_type the concrete constellation type (usually one of the ConstellationType::Intersection*)
   * @param[in] egoObject the ego object basic information
   * @param[in] otherObject the other object basic information
   *
   * @returns \c true if appending of the constellation succeeded.
   */
  bool appendMergingConstellation(::ad::map::route::ConnectingRoute const &connectingRoute,
                                  world::ConstellationType const &constellation_type,
                                  RssObjectConversion::ConstPtr egoObject,
                                  RssObjectConversion::ConstPtr otherObject);

  /*!
   * @brief append an intersection constellation
   *
   * @param[in] intersection the relevant intersection to consider
   * @param[in] egoRoute the object route used to create the intersection object
   * @param[in] objectRoute the object route interacting with the ego route in the intersection
   * @param[in] intersectionOtherRoute the route the intersection was NOT created with (either egoRoute or objectRoute)
   * @param[in] egoObject the ego object basic information
   * @param[in] otherObject the other object basic information
   *
   * @returns \c true if appending of the constellation succeeded.
   */
  bool appendIntersectionConstellation(::ad::map::intersection::IntersectionPtr intersection,
                                       ::ad::map::route::FullRoute const &egoRoute,
                                       ::ad::map::route::FullRoute const &objectRoute,
                                       ::ad::map::route::FullRoute const &intersectionOtherRoute,
                                       RssObjectConversion::ConstPtr egoObject,
                                       RssObjectConversion::ConstPtr otherObject);

  /*!
   * @brief append a road boundary constellation
   *
   * @param[in] egoRoute the object route used to create the intersection object
   * @param[in] egoObject the ego object basic information
   *
   * @returns \c true if appending of the constellation succeeded.
   */
  bool appendRoadBoundaryConstellations(::ad::map::route::FullRoute const &egoRoute,
                                        RssObjectConversion::ConstPtr egoObject);

  bool appendUnstructuredConstellation(RssObjectConversion::ConstPtr iEgoObject,
                                       RssObjectConversion::ConstPtr iOtherObject);

private:
  struct Route
  {
    explicit Route(::ad::map::route::FullRoute const &route_in)
      : route(route_in)
      , min_lane_offset(route_in.min_lane_offset)
      , max_lane_offset(route_in.max_lane_offset)
    {
    }
    Route(::ad::map::route::FullRoute const &route_in,
          ::ad::map::point::ENUHeading const &route_heading_start_in,
          ::ad::map::point::ENUHeading const &route_heading_end_in)
      : route(route_in)
      , min_lane_offset(route_in.min_lane_offset)
      , max_lane_offset(route_in.max_lane_offset)
      , route_heading_available(true)
      , route_heading_start(route_heading_start_in)
      , route_heading_end(route_heading_end_in)
    {
    }
    Route(::ad::map::route::FullRoute const &route_in,
          ::ad::map::route::RouteLaneOffset const min_lane_offset_in,
          ::ad::map::route::RouteLaneOffset const max_lane_offset_in,
          ::ad::map::point::ENUHeading const &route_heading_start_in,
          ::ad::map::point::ENUHeading const &route_heading_end_in)
      : route(route_in)
      , min_lane_offset(min_lane_offset_in)
      , max_lane_offset(max_lane_offset_in)
      , route_heading_available(true)
      , route_heading_start(route_heading_start_in)
      , route_heading_end(route_heading_end_in)
    {
    }
    ::ad::map::route::FullRoute const &route;
    ::ad::map::route::RouteLaneOffset const min_lane_offset;
    ::ad::map::route::RouteLaneOffset const max_lane_offset;
    bool route_heading_available{false};
    ::ad::map::point::ENUHeading const route_heading_start;
    ::ad::map::point::ENUHeading const route_heading_end;
  };

  /**
   * @brief helper function to actually create the road area
   *
   * @param[in] route The route object the road area is created from
   * @param[in] intersectionLanes The lanes to be marked as intersection (the road area creation stops when intersection
   * is left)
   * @param[in] objects The objects to be updated while creating the route.
   * @param[out] roadArea The road area to create
   *
   * @returns \c true if the operation is successful
   */
  bool createRoadArea(Route const &route,
                      ::ad::map::lane::LaneIdSet const &intersectionLanes,
                      std::vector<RssObjectConversion::Ptr> objects,
                      world::RoadArea &roadArea,
                      std::vector<ad::map::route::RoadSegment> *intersectingArea = nullptr);

  /**
   * @brief helper function to create a road area for non intersection constellations
   *
   * @param[in] route The route the road area should be created from
   * @param[in] objects The objects to be updated while creating the route.
   * @param[out] roadArea The road area to create
   *
   * @returns \c true if the operation is successful
   */
  bool createNonIntersectionRoadArea(::ad::map::route::FullRoute const &route,
                                     ::ad::map::point::ENUHeading const &route_heading_start,
                                     ::ad::map::point::ENUHeading const &route_heading_end,
                                     std::vector<RssObjectConversion::Ptr> objects,
                                     world::RoadArea &roadArea);

  /**
   * @brief helper function to create a road area for merging constellations
   *
   * @param[in] route The route the road area should be created from
   * @param[in] object The object to be updated while creating the route.
   * @param[out] roadArea The road area to create
   *
   * @returns \c true if the operation is successful
   */
  bool createMergingRoadArea(::ad::map::route::FullRoute const &route,
                             ::ad::map::point::ENUHeading const &route_heading_start,
                             ::ad::map::point::ENUHeading const &route_heading_end,
                             RssObjectConversion::Ptr object,
                             world::RoadArea &roadArea);

  /**
   * @brief helper function to create a road area for intersection constellations
   *
   * @param[in] route The route the road area should be created from
   * @param[in] intersection The intersection on the route the road area should be created for
   * @param[in] object The object to be updated while creating the route.
   * @param[out] roadArea The road area to create
   *
   * @returns \c true if the operation is successful
   */
  bool createIntersectionRoadArea(::ad::map::route::FullRoute const &route,
                                  ::ad::map::intersection::IntersectionConstPtr intersection,
                                  RssObjectConversion::Ptr object,
                                  world::RoadArea &roadArea,
                                  std::vector<ad::map::route::RoadSegment> &intersectingArea);

  /**
   * @brief helper function to actually append a new constellation to the world model
   *
   * @param[in] constellation_type The type of constellation
   * @param[in] egoObject The ego object of the constellation
   * @param[in] egoRoad The ego road of the constellation
   * @param[in] otherObject The other object of the constellation
   * @param[in] intersecting_road The intersecting road of the constellation
   */
  bool appendConstellation(world::ConstellationType const &constellation_type,
                           RssObjectConversion::ConstPtr egoObject,
                           world::RoadArea const &egoRoad,
                           RssObjectConversion::ConstPtr otherObject,
                           world::RoadArea const &intersecting_road);

  /**
   * @brief helper function to extract the relevant intersection lane intervals and associated polygons from the
   * intersection road segments
   *
   * @param[in] intersectionArea the road segments being part of the intersecting area to process
   * @param[out] intersectionLaneIntervals the list of lane intervals being part of the actual intersecting area
   * @param[out] polygon The polygon of the actual intersecting area
   */
  void extractLaneIntervalsAndPolygon(std::vector<ad::map::route::RoadSegment> const &intersectionArea,
                                      std::vector<ad::map::route::LaneInterval> &intersectionLaneIntervals,
                                      ::ad::geometry::Polygon &polygon);

  /**
   * @brief helper function to update the roadArea to restrict the intersection part to the exact intersecting area
   *
   * @param[in/out] roadArea the road area to update and process
   * @param[in] originalLaneIntervals the original lane intervals used as input for the corresponding roadArea segments
   * @param[in] exactIntersectingRegions the LaneOccupiedRegions defining the exact intersecting area
   *
   * @returns \c true if the roadArea contains an actually intersecting area. Otherwhise \c false is returned indicating
   * that no actual intersecting area is present within the roadArea.
   */
  bool updateExactIntersectionArea(world::RoadArea &roadArea,
                                   std::vector<ad::map::route::LaneInterval> const &originalLaneIntervals,
                                   ad::map::match::LaneOccupiedRegionList const &exactIntersectingRegions);

  /**
   * @brief helper function to update both roadAreas to restrict the intersection part to the exact intersecting area of
   * both
   *
   * @param[in/out] roadAreaA the road area of the vehicle A to update and process
   * @param[in] intersectionAreaA  the source road segments being part of the intersecting area corresponding to vehicle
   * A
   * @param[in/out] roadAreaB the road area of the vehicle B to update and process
   * @param[in] intersectionAreaB  the source road segments being part of the intersecting area corresponding to vehicle
   * B
   *
   * @returns \c true if both roadAreas contain an actually intersecting area. Otherwhise \c false is returned
   * indicating that no actual intersecting area is present within the two roadAreas.
   */
  bool updateExactIntersectionArea(world::RoadArea &roadAreaA,
                                   std::vector<ad::map::route::RoadSegment> const &intersectionAreaA,
                                   world::RoadArea &roadAreaB,
                                   std::vector<ad::map::route::RoadSegment> const &intersectionAreaB);

  double mSpeedLimitFactor;
  ::ad::map::landmark::LandmarkIdSet mGreenTrafficLights;
  RssWorldModelCreation &mWorldModelCreation;
};

} // namespace map
} // namespace rss
} // namespace ad
