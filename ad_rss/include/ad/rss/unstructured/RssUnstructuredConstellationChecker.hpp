// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2020-2022 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

/**
 * @file
 */

#pragma once

#include <ad/geometry/GeometryOperation.hpp>
#include <cstdint>
#include <map>
#include "ad/rss/core/RelativeConstellation.hpp"
#include "ad/rss/core/shared_lock_guard.hpp"
#include "ad/rss/state/RssState.hpp"
#include "ad/rss/world/TimeIndex.hpp"

/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace unstructured
 */
namespace unstructured {

/**
 * @brief Class to check whether an unstructured constellation is safe and to determine the proper response for the
 * constellation
 *
 * Note: Implements the checks and responses given by the definitions 19-22 of the RSS paper (arXiv:1708.06374v6)
 *
 * Class performs required check if constellation is safe
 * Class will maintain the previous state of the constellation in order to provide the proper response.
 */
class RssUnstructuredConstellationChecker
{
public:
  enum class SafeState
  {
    safe,
    unsafeBrakeOtherHasPrio,
    unsafeBrakeEgoHasPrio,
    unsafeBrakeBoth
  };

  enum class DrivingMode
  {
    DriveAway,
    ContinueForward,
    Brake,
    Invalid
  };

  /**
   * @brief Constructor
   */
  RssUnstructuredConstellationChecker();

  /**
   * @brief Copy constructor
   */
  RssUnstructuredConstellationChecker(RssUnstructuredConstellationChecker const &other);

  /**
   * @brief Destructor
   */
  ~RssUnstructuredConstellationChecker() = default;

  /**
   * @brief Assignment operator
   */
  RssUnstructuredConstellationChecker &operator=(RssUnstructuredConstellationChecker const &other);

  /**
   * @brief Calculate safety checks and determine required rssState for unstructured constellations
   *
   * @param[in]  time_index the time index of the constellation
   * @param[in]  constellation constellation to analyze
   * @param[out] egoStateInfo  rssState of the ego vehicle (Be aware: only calculated/updated once per timestep)
   * @param[out] rssState  rssState of the vehicle
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateRssStateUnstructured(world::TimeIndex const &time_index,
                                     core::RelativeConstellation const &constellation,
                                     state::UnstructuredConstellationStateInformation &egoStateInfo,
                                     state::RssState &rssState);

  /*!
   * @brief Function callback type for unstructured trajectory set calculation
   *
   * @param[in] constellation The relative constellation the calculation is based on
   * @param[in] objectId The id of the object the calculation is based on (one of the two constellation objects)
   * @param[in] vehicleState The relative object state of the object the calculation is based on (one of the two
   * constellation vehicle states)
   * @param[out] brakePolygon The calculated brake polygon
   * @param[out] continueForwardPolygon The calculated continue forward polygon
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  using CalculateTrajectorySetsCallbackFunctionType
    = std::function<bool(::ad::rss::core::RelativeConstellation const &constellation,
                         ::ad::rss::world::ObjectId const &objectId,
                         ::ad::rss::core::RelativeObjectState const &vehicleState,
                         ::ad::geometry::Polygon &brakePolygon,
                         ::ad::geometry::Polygon &continueForwardPolygon)>;

  /*!
   * @brief Register a callback for unstructured trajectory set calculation
   *
   * @param[in] objectType The object type this trajectory set calculation should be applied
   * @param[in] calculateTrajectorySetsCallback The actual callback function to perform the trajectory set calculation
   */
  void
  registerCalculateTrajectorySetsCallback(world::ObjectType objectType,
                                          CalculateTrajectorySetsCallbackFunctionType calculateTrajectorySetsCallback)
  {
    std::lock_guard<std::shared_timed_mutex> const lock(mCallbackRwLock);
    mCalculateTrajectorySetsCallbackMap[objectType] = calculateTrajectorySetsCallback;
  }

private:
  /**
   * @brief Calculate the unstructured constellation state info
   *
   * @param[in] constellation The relative constellation the calculation is based on
   * @param[in] objectId The id of the object the calculation is based on (one of the two constellation objects)
   * @param[in]  objectState state of the object
   * @param[out] stateInfo the calculated state info
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateUnstructuredConstellationStateInfo(::ad::rss::core::RelativeConstellation const &constellation,
                                                   ::ad::rss::world::ObjectId const &objectId,
                                                   core::RelativeObjectState const &objectState,
                                                   state::UnstructuredConstellationStateInformation &stateInfo) const;

  /**
   * @brief Calculate the unstructured constellation state
   *
   * @param[in]  constellation constellation to analyze
   * @param[in]  egoStateInfo the trajectory sets of the ego vehicle
   * @param[in]  otherStateInfo the trajectory sets of the other traffic participant
   * @param[out] rssState the calculated rss state
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateState(core::RelativeConstellation const &constellation,
                      state::UnstructuredConstellationStateInformation const &egoStateInfo,
                      state::UnstructuredConstellationStateInformation const &otherStateInfo,
                      state::UnstructuredConstellationRssState &rssState);

  /**
   * @brief calculate the angle range that is allowed to drive away
   *
   * @param[in]  egoVehicleLocation the location of the ego vehicle
   * @param[in]  otherVehicleLocation the location of the other vehicle
   * @param[in]  maxAllowedAngleWhenBothStopped the maximum angle for calculation
   * @param[out] range resulting heading range
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateDriveAwayAngle(::ad::geometry::Point const &egoVehicleLocation,
                               ::ad::geometry::Point const &otherVehicleLocation,
                               physics::Angle const &maxAllowedAngleWhenBothStopped,
                               ::ad::geometry::HeadingRange &range) const;

  /**
   * @brief typedef for the mapping of constellation id to the corresponding otherMustBrake value before the danger
   * threshold time
   */
  typedef std::map<core::RelativeConstellationId, bool> OtherMustBrakeStateBeforeDangerThresholdTimeMap;

  /**
   * @brief the state of each constellation before the danger threshold time
   *
   * Needs to be stored to check which is the required behaviour to solve the constellation
   */
  OtherMustBrakeStateBeforeDangerThresholdTimeMap mOtherMustBrakeStatesBeforeDangerThresholdTime;

  /**
   * @brief the new states to be considered in next time step
   */
  OtherMustBrakeStateBeforeDangerThresholdTimeMap mNewOtherMustBrakeStatesBeforeDangerThresholdTime;

  /**
   * @brief time index of the current processing step
   * If time index increases we need to update the state maps
   */
  world::TimeIndex mCurrentTimeIndex{0u};

  /**
   * @brief Store required data for drive away calculations between timesteps
   */
  struct DriveAwayState
  {
    ::ad::geometry::HeadingRange allowedHeadingRange;
    physics::Distance2D otherPosition;
  };

  /**
   * @brief map to state drive-away data for constellations
   */
  std::map<core::RelativeConstellationId, DriveAwayState> mDriveAwayStateMap;

  // one writer mutex for the callbacks of the class should be sufficient
  // vast majority of concurrent access is of shared nature
  mutable std::shared_timed_mutex mCallbackRwLock;

  std::map<world::ObjectType, CalculateTrajectorySetsCallbackFunctionType> mCalculateTrajectorySetsCallbackMap;
};

} // namespace unstructured
} // namespace rss
} // namespace ad
