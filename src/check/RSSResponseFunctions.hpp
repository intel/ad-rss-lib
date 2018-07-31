// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// INTEL CONFIDENTIAL
//
// Copyright (c) 2018 Intel Corporation
//
// This software and the related documents are Intel copyrighted materials, and
// your use of them is governed by the express license under which they were
// provided to you (License). Unless the License provides otherwise, you may not
// use, modify, copy, publish, distribute, disclose or transmit this software or
// the related documents without Intel's prior written permission.
//
// This software and the related documents are provided as is, with no express or
// implied warranties, other than those that are expressly stated in the License.
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include "rss/check/Response.hpp"
#include "rss/lane/VehicleState.hpp"

/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace for RSS check datatypes and operations
 */
namespace check {

/**
 * @brief is response longitudinal safe
 *
 * @param[in] response to check
 *
 * true if safe, false if not
 */
inline bool isLongitudinalSafe(Response const &response)
{
  return response.longitudinalResponse == LongitudinalResponse::Safe;
}

/**
 * @brief is response lateral safe to the left
 *
 * @param[in] response to check
 *
 * true if safe, false if not
 */
inline bool isLateralSafeLeft(Response const &response)
{
  return response.lateralResponseLeft == LateralResponse::Safe;
}

/**
 * @brief is response lateral safe to the right
 *
 * @param[in] response to check
 *
 * true if safe, false if not
 */
inline bool isLateralSafeRight(Response const &response)
{
  return response.lateralResponseRight == LateralResponse::Safe;
}

/**
 * @brief is response lateral safe
 * @param[in] response to check
 *
 * true if safe, false if not
 */
inline bool isLateralSafe(Response const &response)
{
  return isLateralSafeRight(response) && isLateralSafeLeft(response);
}

/**
 * @brief is response safe
 *
 * @param[in] response to check
 *
 * true if safe, false if not
 */
inline bool isDangerous(Response const &response)
{
  return !isLongitudinalSafe(response) && !isLateralSafe(response);
}

/**
 * @brief determine the resulting response
 *
 * @param[in] previousResponse the previous value of the response
 * @param[in] newResponse the additionalResponse
 *
 * Check will be performed on the enum values of the LongitudinalResponse. Therefore, these values need to be in the
 * right order
 *
 * @returns the resulting response
 */
inline LongitudinalResponse combineLongitudinalResponse(LongitudinalResponse previousResponse,
                                                        LongitudinalResponse newResponse)
{
  if (previousResponse > newResponse)
  {
    return previousResponse;
  }

  return newResponse;
}

/**
 * @brief determine the resulting response
 *
 * @param[in] previousResponse the previous value of the response
 * @param[in] newResponse the additionalResponse
 *
 * Check will be performed on the enum values of the LateralResponse. Therefore, these values need to be in the right
 * order
 *
 * @returns the resulting response
 */
inline LateralResponse combineLateralResponse(LateralResponse previousResponse, LateralResponse newResponse)
{
  if (previousResponse > newResponse)
  {
    return previousResponse;
  }

  return newResponse;
}

/**
 * @brief Calculate safety checks and determine required response for longitudinal direction for non intersection
 * scenario
 *
 * @param[in] egoVehicle state of ego vehicle
 * @param[in] otherVehicle state of other vehicle
 * @param[out] response required response of the ego vehicle
 *
 * @returns false if a failure occured during calculations, true otherwise
 *
 */
bool calculateLongitudinalResponseNonIntersection(lane::VehicleState const &egoVehicle,
                                                  lane::VehicleState const &otherVehicle,
                                                  LongitudinalResponse &response);

/**
 * @brief Calculate safety checks and determine required response for longitudinal direction for
 * non intersection scenario when both vehicles are driving in same direction
 *
 * @param[in] egoVehicle state of ego vehicle
 * @param[in] otherVehicle state of other vehicle
 * @param[out] response required response of the ego vehicle
 *
 * @returns false if a failure occured during calculations, true otherwise
 *
 */
bool calculateLongitudinalResponseNonIntersectionSameDirection(lane::VehicleState const &egoVehicle,
                                                               lane::VehicleState const &otherVehicle,
                                                               LongitudinalResponse &response);

/**
 * @brief Calculate safety checks and determine required response for longitudinal direction for
 * non intersection scenario when vehicles are driving in opposite direction
 *
 * @param[in] egoVehicle state of ego vehicle
 * @param[in] otherVehicle state of other vehicle
 * @param[out] response required response of the ego vehicle
 *
 * @returns false if a failure occured during calculations, true otherwise
 *
 */
bool calculateLongitudinalResponseNonIntersectionOppositeDirection(lane::VehicleState const &egoVehicle,
                                                                   lane::VehicleState const &otherVehicle,
                                                                   LongitudinalResponse &response);

/**
 * @brief Calculate safety checks and determine required response for lateral direction
 *
 * @param[in] egoVehicle state of ego vehicle
 * @param[in] otherVehicle state of other vehicle
 * @param[out] responseLeft required response of the ego vehicle to avoid collision to the left
 * @param[out] responseRight required response of the ego vehicle to avoid collision to the right
 *
 * @returns false if a failure occured during calculations, true otherwise
 *
 */
bool calculateLateralResponse(lane::VehicleState const &egoVehicle,
                              lane::VehicleState const &otherVehicle,
                              LateralResponse &responseLeft,
                              LateralResponse &responseRight);

} // namespace check
} // namespace rss
