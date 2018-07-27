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
 */
enum class LongitudinalResponse
{
  Safe,           //!< State is longitudinal safe
  None,           //!< State is longitudinal not safe, but no action required. E.g. ego vehicle is the leading vehicle
  BrakeMin,       //!< State is longitudinal not safe, vehicle needs to decelerate at least with brake min
  BrakeMinCorrect //!< State is longitudinal not safe, vehicle needs to decelerate at least with brake min correct
};

/**
 * @brief Possible lateral responses
 *
 */
enum class LateralResponse
{
  Safe, //!< State is lateral safe
  None, //!< State is lateral not safe, but no action required.
  //!< State is lateral not safe, vehicle needs to decelerate at least with brake min its movement to the left
  BrakeMinLeft,
  //!< State is lateral not safe, vehicle needs to decelerate at least with brake min its movement to the  right
  BrakeMinRight,
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
    * @brief Required lateral response
    */
  LateralResponse mLateralResponse{LateralResponse::None};
};

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
 * @param[out] response required response of the ego vehicle
 *
 * @returns false if a failure occured during calculations, true otherwise
 *
 */
bool calculateLateralResponse(lane::VehicleState const &egoVehicle,
                              lane::VehicleState const &otherVehicle,
                              LateralResponse &response);

} // namespace rss_core
