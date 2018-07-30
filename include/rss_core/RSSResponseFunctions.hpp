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

#include "rss_core/RSSTypes.hpp"

namespace rss_core {

/**
 * @brief Possible longitudinal responses
 *
 * Order of the enum must be according to strictness or response.
 */
enum class LongitudinalResponse
{
  Safe = 0, //!< State is longitudinal safe
  None = 1, //!< State is longitudinal not safe, but no action required. E.g. ego vehicle is the leading vehicle
  BrakeMinCorrect = 2, //!< State is longitudinal not safe, vehicle needs to decelerate at least with brake min correct
  BrakeMin = 3,        //!< State is longitudinal not safe, vehicle needs to decelerate at least with brake min

};

/**
 * @brief Possible lateral responses
 *
 */
enum class LateralResponse
{
  Safe = 0, //!< State is lateral safe
  None = 1, //!< State is lateral not safe, but no action required.
  //!< State is lateral not safe, vehicle needs to decelerate at least with brake min its lateral movement
  BrakeMin = 2,
};

/**
 * @brief Response class
 *
 * @todo move this data type to the model when finally defined
 */
struct Response
{
public:
  /**
   * @brief Required longitudinal response
   */
  LongitudinalResponse mLongitudinalResponse{LongitudinalResponse::BrakeMin};

  /**
    * @brief Required lateral response to the left
    */
  LateralResponse mLateralResponseLeft{LateralResponse::None};

  /**
    * @brief Required lateral response to the right
    */
  LateralResponse mLateralResponseRight{LateralResponse::None};

  /**
   * @brief unique Id of the ego vehicle / object pair the response belongs to
   *
   * This Id must remain unique during the processing as it is used to track the state for the
   * ego vehicle / object constellation
   */
  lane::Id id;
};

/**
 * @brief is response longitudinal safe
 *
 * @param[in] response to check
 *
 * true if safe, false if not
 */
inline bool isLongitudinalSafe(Response const &response)
{
  return response.mLongitudinalResponse == LongitudinalResponse::Safe;
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
  return response.mLateralResponseLeft == LateralResponse::Safe;
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
  return response.mLateralResponseRight == LateralResponse::Safe;
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

} // namespace rss_core
