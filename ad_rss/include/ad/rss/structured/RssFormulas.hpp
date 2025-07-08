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

#include "ad/rss/core/RelativeObjectState.hpp"
#include "ad/rss/world/ObjectId.hpp"

/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace structured
 */
namespace structured {

/*!
 * @returns the constant ObjectId of the virtual right border
 */
static inline world::ObjectId getRightBorderObjectId()
{
  return std::numeric_limits<world::ObjectId>::max();
}

/*!
 * @returns the constant ObjectId of the virtual left border
 */
static inline world::ObjectId getLeftBorderObjectId()
{
  return std::numeric_limits<world::ObjectId>::max() - 1;
}

/**
 * @brief Calculate the longitudinal distance offset of a object when applying the \a "stated braking pattern" with
 *        given deceleration
 *
 * @param[in]  currentLongitudinalSpeed      is the current longitudinal object speed
 * @param[in]  max_speed_on_acceleration          is the maximum object speed to be considered in accelerated movement
 * @param[in]  response_time      is the response time of the object
 * @param[in]  acceleration      the acceleration of the object during response_time
 * @param[in]  deceleration      is the applied breaking deceleration
 * @param[out] distanceOffset    is the distance offset of the object from the current position after
 *                               \a "the stated braking pattern"
 *
 * @return true on successful calculation, false otherwise
 */
bool calculateLongitudinalDistanceOffsetAfterStatedBrakingPattern(physics::Speed const &currentLongitudinalSpeed,
                                                                  physics::Speed const &max_speed_on_acceleration,
                                                                  physics::Duration const &response_time,
                                                                  physics::Acceleration const &acceleration,
                                                                  physics::Acceleration const &deceleration,
                                                                  physics::Distance &distanceOffset);

/**
 * @brief Calculate the lateral distance offset of a object when applying the \a "stated braking pattern" with given
 *        deceleration
 *
 * @param[in]  currentLateralSpeed  is the current lateral object speed
 * @param[in]  response_time      is the response time of the object
 * @param[in]  acceleration      the acceleration of the object during response_time
 * @param[in]  deceleration      is the applied breaking deceleration
 * @param[out] distanceOffset    is the distance offset of the object from the current position after
 *                               \a "the stated braking pattern"
 *
 * @return true on successful calculation, false otherwise
 */
bool calculateLateralDistanceOffsetAfterStatedBrakingPattern(physics::Speed const &currentLateralSpeed,
                                                             physics::Duration const &response_time,
                                                             physics::Acceleration const &acceleration,
                                                             physics::Acceleration const &deceleration,
                                                             physics::Distance &distanceOffset);
/**
 * @brief Calculate the \a "safe longitudinal distance" between the two objects,
 *        Assuming: Maximum deceleration for leading object, and \a "stated breaking pattern" for following object
 *
 *        ======================================================
 *
 *             FollowingObject --->          LeadingObject --->
 *
 *        ======================================================
 *
 * @param[in]  leadingObject      is the state of the leading object
 * @param[in]  followingObject    is the state of the following object
 * @param[out] safe_distance        is the calculated safe longitudinal distance
 *
 * @return true on successful calculation, false otherwise
 */
bool calculateSafeLongitudinalDistanceSameDirection(core::RelativeObjectState const &leadingObject,
                                                    core::RelativeObjectState const &followingObject,
                                                    physics::Distance &safe_distance);

/**
 * @brief Check if the longitudinal distance between the two objects is safe.
 *        Assuming: Maximum deceleration for leading object, and \a "stated breaking pattern" for following object
 *
 *        ======================================================
 *
 *             FollowingObject --->          LeadingObject --->
 *
 *        ======================================================
 *
 * @param[in]  leadingObject      is the state of the leading object
 * @param[in]  followingObject    is the state of the following object
 * @param[in]  objectDistance     the (positive) longitudinal distance between the two objects
 * @param[out] safe_distance        is the calculated safe longitudinal distance
 * @param[out] isDistanceSafe      true if the distance is safe, false otherwise
 *
 * @return true on successful calculation, false otherwise
 */
bool checkSafeLongitudinalDistanceSameDirection(core::RelativeObjectState const &leadingObject,
                                                core::RelativeObjectState const &followingObject,
                                                physics::Distance const &objectDistance,
                                                physics::Distance &safe_distance,
                                                bool &isDistanceSafe);

/**
 * @brief Calculate  the safe longitudinal distance between to objects driving in opposite direction
 * The calculation will assume that the correctObject is on the correct lane
 * and oppositeObject on an opposite lane
 *
 * So calculation for the correctObject is performed with brake_min_correct and performed with brake_min
 * for the oppositeObject
 *
 *        ======================================================
 *
 *             correctObject --->        <---  oppositeObject
 *
 *        ======================================================
 *
 * @param[in]  correctObject     is the state of the object driving in the correct lane
 * @param[in]  oppositeObject    is the state of the object driving in the wrong lane
 * @param[out] isDistanceSafe     true if the distance is safe, false otherwise
 *
 * @return true on successful calculation, false otherwise
 */
bool calculateSafeLongitudinalDistanceOppositeDirection(core::RelativeObjectState const &correctObject,
                                                        core::RelativeObjectState const &oppositeObject,
                                                        physics::Distance &safe_distance);

/**
 * @brief Check if the longitudinal distance between to objects driving in opposite direction is safe.
 * The check will assume that the correctObject is on the correct lane
 * and oppositeObject on an opposite lane
 *
 * So check for the correctVehcile is performed with brake_min_correct and performed with brake_min
 * for the oppositeObject
 *
 *        ======================================================
 *
 *             correctObject --->        <---  oppositeObject
 *
 *        ======================================================
 *
 * @param[in]  correctObject     is the state of the object driving in the correct lane
 * @param[in]  oppositeObject    is the state of the object driving in the wrong lane
 * @param[in]  objectDistance    the (positive) longitudinal distance between the two objects
 * @param[out] safe_distance        is the calculated safe longitudinal distance
 * @param[out] isDistanceSafe     true if the distance is safe, false otherwise
 *
 * @return true on successful calculation, false otherwise
 */
bool checkSafeLongitudinalDistanceOppositeDirection(core::RelativeObjectState const &correctObject,
                                                    core::RelativeObjectState const &oppositeObject,
                                                    physics::Distance const &objectDistance,
                                                    physics::Distance &safe_distance,
                                                    bool &isDistanceSafe);

/**
 * @brief Check if the object can safely break longitudinaly in front of the intersection.
 *        Assuming: Using \a "stated breaking pattern" for breaking
 *
 *        ======================================================
 *
 *             object --->             |  Intersection
 *                                      |
 *        ==============================              ===============
 *                                      |            |
 *                                      |            |
 *
 * @param[in]  object      is the state of the object
 * @param[out] safe_distance      the safe distance according to the stated braking pattern
 * @param[out] isDistanceSafe      true if the distance is safe, false otherwise
 *
 * @return true on successful calculation, false otherwise
 */
bool checkStopInFrontIntersection(core::RelativeObjectState const &object,
                                  physics::Distance &safe_distance,
                                  bool &isDistanceSafe);

/**
 * @brief Calculate the \a "safe lateral distance" between the two objects,
 *        Assuming: Both objects apply \a "stated breaking pattern"
 *
 *        ======================================================
 *
 *             Left object  -->
 *                 |
 *                 |
 *                 v
 *
 *                 ^
 *                 |
 *                 |
 *             Right object -->
 *
 *        ======================================================
 *
 * @param[in]  leftObject      is the state of the left object
 * @param[in]  rightObject     is the state of the right object
 * @param[out] safe_distance     is the calculated safe lateral distance
 *
 * @return true on successful calculation, false otherwise
 */
bool calculateSafeLateralDistance(core::RelativeObjectState const &leftObject,
                                  core::RelativeObjectState const &rightObject,
                                  physics::Distance &safe_distance);

/**
 * @brief Check if the lateral distance between to objects is safe
 *        Assuming: Both objects apply \a "stated breaking pattern"
 *
 *        ======================================================
 *
 *             Left object  -->
 *                 |
 *                 |
 *                 v
 *
 *                 ^
 *                 |
 *                 |
 *             Right object -->
 *
 *        ======================================================
 *
 * @param[in]  leftObject      is the state of the left object
 * @param[in]  rightObject     is the state of the right object
 * @param[in]  objectDistance  the (positive) lateral distance between the two objects
 * @param[out] safe_distance     is the calculated safe lateral distance
 * @param[out] isDistanceSafe   is true if the distance is safe, false otherwise
 *
 * @return true on successful calculation, false otherwise
 */
bool checkSafeLateralDistance(core::RelativeObjectState const &leftObject,
                              core::RelativeObjectState const &rightObject,
                              physics::Distance const &objectDistance,
                              physics::Distance &safe_distance,
                              bool &isDistanceSafe);

} // namespace structured
} // namespace rss
} // namespace ad
