// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include <ad/map/landmark/Types.hpp>
#include <ad/map/route/Types.hpp>
#include <ad/rss/map/RssObjectData.hpp>
#include <ad/rss/world/WorldModel.hpp>
#include <mutex>
#include <ostream>
#include <string>

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

class RssSceneCreator;
class RssObjectConversion;

/*!
 * @brief Specifies the scene mode
 */
enum class RssMode
{
  NotRelevant, //!< the scene is not relevant (but should be visible as NotRelvant scene)
  Structured,  //!< the scene requires structured analysis
  Unstructured //!< the scene requires unstructured analysis
};

/*!
 * @brief class providing supporting functions to create a world model and its scenes.
 *
 * The appendScenes() and appendRoadBoundaries() are multi-thread safe
 */
class RssSceneCreation
{
public:
  /**
   * @brief create a scene creation object
   *
   * A world model object is created and initialized with given timeIndex and default ego dynamics
   *
   * @param[in] timeIndex the time index to be applied
   * @param[in] defaultEgoRssDynamics the default ego vehicles' RssDynamics to be applied
   */
  RssSceneCreation(::ad::rss::world::TimeIndex const &timeIndex,
                   ::ad::rss::world::RssDynamics const &defaultEgoRssDynamics);

  /**
   * @brief enumeration defining the modes of speed limit consideration within RSS accelerated movement.
   *
   * Depending on this mode the objectRssDynamics are calculated dynamically or not.
   */
  enum class RestrictSpeedLimitMode
  {
    /**
     * Do not change the objects maxSpeedOnAcceleration parameter of objectRssDynamics.
     */
    None,
    /**
     * Set the objects maxSpeedOnAcceleration parameter of objectRssDynamics to the maximal allowed speed of the
     * relevant road section
     */
    ExactSpeedLimit,

    /**
     * Set the objects maxSpeedOnAcceleration parameter of objectRssDynamics to the maximal allowed speed of the
     * relevant road section
     * +
     * 5 percent
     */
    IncreasedSpeedLimit5,

    /**
     * Set the objects maxSpeedOnAcceleration parameter of objectRssDynamics to the maximal allowed speed of the
     * relevant road section
     * +
     * 10 percent
     */
    IncreasedSpeedLimit10,
  };

  /**
   * @brief create possible scenes between ego vehicle and the object
   *
   * Based on the map information a connecting route between ego vehicle and the object is created.
   *
   * @param[in] egoObjectData the ego vehicle's data
   * @param[in] egoRoute the route the ego vehicle intends to take.
   *   If the given route is empty, all potential route predictions of the ego vehicle are taken into account if
   * required.
   * @param[in] otherObjectData the other object's data
   * @param[in] restrictSpeedLimitMode the mode to select the behavior of objectRssDynamics.maxSpeedOnAcceleration and
   * egoRssDynamics.maxSpeedOnAcceleration
   * parameter
   * @param[in] greenTrafficLights the list of known green traffic lights.
   *   Required to derive the correct priority rule for the ego vehicle when approaching a traffic light intersection.
   * @param[in] mode the mode of this scene
   *
   * @returns \c true if the operation succeeded.
   */
  bool appendScenes(RssObjectData const &egoObjectData,
                    ::ad::map::route::FullRoute const &egoRoute,
                    RssObjectData const &otherObjectData,
                    RestrictSpeedLimitMode const &restrictSpeedLimitMode,
                    ::ad::map::landmark::LandmarkIdSet const &greenTrafficLights,
                    ::ad::rss::map::RssMode const &mode);

  /**
   * @brief enumeration defining the operation modes of appendRoadBoundaries() function.
   */
  enum class AppendRoadBoundariesMode
  {
    /** The borders are created at the left border of the leftmost and
     *  the right border righmost lane of the provided route.
     */
    RouteOnly,
    /** the incoming route is expanded with all parallel
     * lanes of the opposite direction to ensure the whole driveable road is within the boundaries
     */
    ExpandRouteToOppositeLanes,
    /** the incoming route is expanded with all parallel neighbor
     * lanes including the opposite direction and shoulder lanes to ensure the whole road is within the boundaries
     */
    ExpandRouteToAllNeighbors,
  };

  /**
   * @brief create scenes between ego vehicle and road boundaries
   *
   * Based on the map information static object scenes at the borders of the driveable lanes are created.
   * For detailed operation modes see the operation modes at \a AppendRoadBoundariesMode.
   *
   * @param[in] egoObjectData the ego vehicle's data
   * @param[in] egoRoute the route the ego vehicle intends to take.
   * @param[in] operationMode the mode how the road boundaries shall be handled
   *
   * @returns \c true if the operation succeeded.
   */
  bool appendRoadBoundaries(RssObjectData const &egoObjectData,
                            ::ad::map::route::FullRoute const &route,
                            AppendRoadBoundariesMode const operationMode);

  /**
   * @brief get the final world model object
   *
   * After the call of this function the world model is treated as finalized.
   * No further operation will succeed.
   * Successive calls to this will return an empty default initialized world model.
   */
  ::ad::rss::world::WorldModel getWorldModel();

private:
  friend class RssSceneCreator;

  bool appendStructuredScenes(::ad::rss::map::RssSceneCreator &sceneCreator,
                              std::shared_ptr<RssObjectConversion const> const &egoObject,
                              ::ad::map::route::FullRoute const &egoRoute,
                              std::shared_ptr<RssObjectConversion const> const &otherObject);

  bool appendSceneToWorldModel(::ad::rss::world::Scene const &scene);

  ::ad::rss::world::WorldModel mWorldModel;
  bool mFinalized;
  std::mutex mWorldModelLock;
};

} // namespace map
} // namespace rss
} // namespace ad

/*!
 * @brief namespace std
 */
namespace std {

/*!
 * \brief overload of the std::to_string for RestrictSpeedLimitMode
 */
inline string to_string(::ad::rss::map::RssSceneCreation::RestrictSpeedLimitMode const &value)
{
  switch (value)
  {
    case ::ad::rss::map::RssSceneCreation::RestrictSpeedLimitMode::None:
      return string("::ad::rss::map::RssSceneCreation::RestrictSpeedLimitMode::None");
    case ::ad::rss::map::RssSceneCreation::RestrictSpeedLimitMode::ExactSpeedLimit:
      return string("::ad::rss::map::RssSceneCreation::RestrictSpeedLimitMode::ExactSpeedLimit");
    case ::ad::rss::map::RssSceneCreation::RestrictSpeedLimitMode::IncreasedSpeedLimit5:
      return string("::ad::rss::map::RssSceneCreation::RestrictSpeedLimitMode::IncreasedSpeedLimit5");
    case ::ad::rss::map::RssSceneCreation::RestrictSpeedLimitMode::IncreasedSpeedLimit10:
      return string("::ad::rss::map::RssSceneCreation::RestrictSpeedLimitMode::IncreasedSpeedLimit10");
    default:
      return string("::ad::rss::map::RssSceneCreation::RestrictSpeedLimitMode UNKNOWN ENUM VALUE");
  }
}

/**
 * \brief standard ostream operator
 *
 * \param[in] os The output stream to write to
 * \param[in] value RestrictSpeedLimitMode value
 *
 * \returns The stream object.
 *
 */
inline ostream &operator<<(ostream &os, ::ad::rss::map::RssSceneCreation::RestrictSpeedLimitMode const &value)
{
  return os << std::to_string(value);
}

/*!
 * \brief overload of the std::to_string for RssMode
 */
inline string to_string(::ad::rss::map::RssMode const &value)
{
  switch (value)
  {
    case ::ad::rss::map::RssMode::NotRelevant:
      return string("::ad::rss::map::RssMode::NotRelevant");
    case ::ad::rss::map::RssMode::Structured:
      return string("::ad::rss::map::RssMode::Structured");
    case ::ad::rss::map::RssMode::Unstructured:
      return string("::ad::rss::map::RssMode::Unstructured");
    default:
      return string("::ad::rss::map::RssMode UNKNOWN ENUM VALUE");
  }
}

/**
 * \brief standard ostream operator
 *
 * \param[in] os The output stream to write to
 * \param[in] value RssMode value
 *
 * \returns The stream object.
 *
 */
inline ostream &operator<<(ostream &os, ::ad::rss::map::RssMode const &value)
{
  return os << to_string(value);
}

} // namespace std
