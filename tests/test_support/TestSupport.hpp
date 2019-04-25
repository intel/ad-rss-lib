// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors
//    may be used to endorse or promote products derived from this software without
//    specific prior written permission.
//
//    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
//    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
//    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
//    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
//    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//    POSSIBILITY OF SUCH DAMAGE.
//
// ----------------- END LICENSE BLOCK -----------------------------------
#pragma once

#include <cmath>
#include <gtest/gtest.h>
#include <limits>
#include "RssTestParameters.hpp"
#include "ad_rss/physics/Operations.hpp"
#include "ad_rss/situation/RelativePosition.hpp"
#include "ad_rss/situation/Situation.hpp"
#include "ad_rss/situation/VehicleState.hpp"
#include "ad_rss/state/ResponseState.hpp"
#include "ad_rss/world/Object.hpp"
#include "physics/Math.hpp"

namespace ad_rss {

// make the code more readable
using physics::Acceleration;
using physics::Distance;
using physics::Duration;
using physics::ParametricValue;
using physics::Speed;

const double cDoubleNear(0.01);

#define ARRAYLEN(a) (sizeof(a) / sizeof(a[0]))

/**
 * @brief resets the RSS state to it's safe state
 *
 * @param[in/out] state the longitudinal RSS state to be reset
 */
void resetRssState(state::LongitudinalRssState &state);

/**
 * @brief resets the RSS state to it's safe state
 *
 * @param[in/out] state the lateral RSS state to be reset
 */
void resetRssState(state::LateralRssState &state);

/**
 * @brief resets the RSS state within the ResponseState to it's safe state
 *
 * @param[in/out] responseState the response state to be reset
 * @param[in] situationId the situation id to be set within the ResponseState
 */
void resetRssState(state::ResponseState &responseState, situation::SituationId const situationId);

/**
 * @brief sets the RSS state to a specific unsafe state
 *
 * @param[in/out] state the lateral/longitudinal RSS state to be set
 * @param[in] literal the response literal of the respective RSS state to be set
 */
template <typename RSSState, typename RSSStateLiteral>
void setRssStateUnsafe(RSSState &state, RSSStateLiteral const literal)
{
  state.response = literal;
  state.isSafe = false;
}

/**
 * @brief converts km/h to m/sec
 *
 * @param[in] speed the speed provided in km/h
 *
 * @returns the speed as physics::Speed
 */
inline physics::Speed kmhToMeterPerSec(double const speed)
{
  return Speed(speed / 3.6);
}

/**
 * @brief convert an object into an ego vehicle object
 *
 * @param[in] iObject the object to be taken as basis
 *
 * @returns a copy of the object with object type EgoVehicle
 */
inline world::Object objectAsEgo(world::Object const &iObject)
{
  world::Object object(iObject);
  object.objectType = world::ObjectType::EgoVehicle;
  return object;
}

/**
 * @return RssDynamics used within tests
 *
 */
world::RssDynamics getObjectRssDynamics();

/**
 * @return RssDynamics used within tests
 *
 */
world::RssDynamics getEgoRssDynamics();

/**
 * @brief create an object
 *
 * @param[in] lonVelocity the longitudinal velocity to be applied
 * @param[in] latVelocity the lateral velocity to be applied
 *
 * @returns an object with applied lon/lat velocities
 */
world::Object createObject(double const lonVelocity, double const latVelocity);

/**
 * @brief create a vehicle state
 *
 * @param[in] lonVelocity the longitudinal velocity to be applied
 * @param[in] latVelocity the lateral velocity to be applied
 *
 * @returns a vehicle state with applied lon/lat velocities
 */
situation::VehicleState createVehicleState(double const lonVelocity, double const latVelocity);

/**
 * @brief create a vehicle state for longitudianl motion
 *
 * lateral velocity becomes 0.
 *
 * @param[in] lonVelocity the longitudinal velocity to be applied
 *
 * @returns a vehicle state with applied lon velocity
 */
inline situation::VehicleState createVehicleStateForLongitudinalMotion(double const lonVelocity)
{
  return createVehicleState(lonVelocity, 0.);
}

/**
 * @brief create a vehicle state for longitudianl motion
 *
 * longitudinal velocity becomes 0.
 *
 * @param[in] latVelocity the lateral velocity to be applied
 *
 * @returns a vehicle state with applied lat velocity
 */
inline situation::VehicleState createVehicleStateForLateralMotion(double const latVelocity)
{
  return createVehicleState(0., latVelocity);
}

/**
 * @brief create a relative longitudinal position object
 *
 * @param[in] position the longitudinal relative position to be applied
 * @param[in] distance the distance to be applied
 *
 * @returns a relative longitudinal position object
 */
situation::RelativePosition createRelativeLongitudinalPosition(situation::LongitudinalRelativePosition const &position,
                                                               Distance const &distance = Distance(0.));

/**
 * @brief create a relative lateral position object
 *
 * @param[in] position the lateral relative position to be applied
 * @param[in] distance the distance to be applied
 *
 * @returns a relative lateral position object
 */
situation::RelativePosition createRelativeLateralPosition(situation::LateralRelativePosition const &position,
                                                          Distance const &distance = Distance(0.));

/**
 * @brief calculate the longitudinal stopping distance
 *
 * @param[in] objectVelocity the objectVelocity used for the calculation
 * @param[in] acceleration the acceleration to be applied for acceleration within response time
 * @param[in] deceleration the deceleration to be applied for braking
 * @param[in] responseTime the responseTime to be applied before braking
 *
 * @returns the distance required to stop when applying accelMax during the responseTime and then brake to the full stop
 */
Distance calculateLongitudinalStoppingDistance(world::Velocity const &objectVelocity,
                                               Acceleration const &acceleration,
                                               Acceleration const &deceleration,
                                               Duration const &responseTime);

/**
 * @brief calculate the longitudinal min safe distance in following >>> leading configuration
 *
 * @param[in] followingObjectVelocity the object following at back: velocity
 * @param[in] followingObjectRssDynamics the object following at back: RSS dynamics
 * @param[in] leadingObjectVelocity the object leading in front: velocity
 * @param[in] leadingObjectRssDynamics the object leading in front: RSS dynamics
 *
 * @returns the minimum safe distance required that the following object does not crash into the leading object
 *  in case the leading object performs a brake with brakeMax and following object performs a stated braking pattern
 *  with (see calculateLongitudinalStoppingDistance) with brakeMin
 */
Distance calculateLongitudinalMinSafeDistance(world::Velocity const &followingObjectVelocity,
                                              world::RssDynamics const &followingObjectRssDynamics,
                                              world::Velocity const &leadingObjectVelocity,
                                              world::RssDynamics const &leadingObjectRssDynamics);

/**
 * @brief calculate the longitudinal min safe distance in opposite direction configuration with
 *   one object in correct lane and the other in the wrong
 *
 * @param[in] objectInCorrectLaneVelocity the object driving in the correct lane direction: velocity
 * @param[in] objectInCorrectLaneRssDynamics the object driving in the correct lane direction: RSS dynamics
 * @param[in] objectNotInCorrectLaneVelocity the object driving in the wrong lane: velocity
 * @param[in] objectNotInCorrectLaneRssDynamics the object driving in the wrong lane: RSS dynamics
 *
 * @returns the minimum safe distance required that both objects are still able to break and not crash into each other.
 *  The object in correct lane performs a stated braking pattern (see calculateLongitudinalStoppingDistance) with
 * brakeMinCorrect;
 *  the object in wrong lane performs a stated braking pattern with brakeMin.
 */
Distance
calculateLongitudinalMinSafeDistanceOppositeDirection(world::Velocity const &objectInCorrectLaneVelocity,
                                                      world::RssDynamics const &objectInCorrectLaneRssDynamics,
                                                      world::Velocity const &objectNotInCorrectLaneVelocity,
                                                      world::RssDynamics const &objectNotInCorrectLaneRssDynamics);

/**
 * @brief calculate the lateral min safe distance of two objects
 *
 * @param[in] leftObjectVelocity the object driving on the left side: velocity
 * @param[in] leftObjectRssDynamics the object driving on the left side: RSS dynamics
 * @param[in] rightObjectVelocity the object driving on the right side: velocity
 * @param[in] rightObjectRssDynamics the object driving on the right side: RSS dynamics
 *
 * @returns the minimum safe distance required that both objects are still able to break and not crash into each other.
 *  Both objects perform a stated braking pattern with brakeMin in lateral direction.
 */
Distance calculateLateralMinSafeDistance(world::Velocity const &leftObjectVelocity,
                                         world::RssDynamics const &leftObjectRssDynamics,
                                         world::Velocity const &rightObjectVelocity,
                                         world::RssDynamics const &rightObjectRssDynamics);

/**
 * @brief class providing constants for longitudinal/lateral RSS states
 *
 * The respective states can be augmented with expected situation specific ResponseInformation data (see
 * stateWithInformation() calls).
 */
class TestSupport
{
public:
  /**
   * @brief constructor
   */
  TestSupport();

  /**
   * @brief augment a lateral RSS state with situation specific ResponseInformation data
   *
   * @param[in] lateralState the lateral RSS state to be augmented by ResponseInformation
   * @param[in] situation the situation used as basis for calculation of expected ResponseInformation data
   *
   * @returns the augmented RSS state is returned
   */
  static state::LateralRssState stateWithInformation(state::LateralRssState const &lateralState,
                                                     situation::Situation const &situation);

  /**
   * @brief augment a longitudinal RSS state with situation specific ResponseInformation data
   *
   * @param[in] longitudinalState the longitudinal RSS state to be augmented by ResponseInformation
   * @param[in] situation the situation used as basis for calculation of expected ResponseInformation data
   *
   * @returns the augmented RSS state is returned
   */
  static state::LongitudinalRssState stateWithInformation(state::LongitudinalRssState const &longitudinalState,
                                                          situation::Situation const &situation);

  state::LongitudinalRssState cLongitudinalSafe;
  state::LongitudinalRssState cLongitudinalNone;
  state::LongitudinalRssState cLongitudinalBrakeMin;
  state::LongitudinalRssState cLongitudinalBrakeMinCorrect;
  state::LateralRssState cLateralSafe;
  state::LateralRssState cLateralNone;
  state::LateralRssState cLateralBrakeMin;
};

extern const TestSupport cTestSupport;

} // namespace ad_rss
