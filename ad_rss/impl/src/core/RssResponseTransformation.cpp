// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/core/RssResponseTransformation.hpp"
#include "ad/rss/state/ProperResponseValidInputRange.hpp"
#include "ad/rss/world/WorldModelValidInputRange.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

namespace ad {
namespace rss {
namespace core {
namespace RssResponseTransformation {

bool transformProperResponse(state::ProperResponse const &response,
                             world::AccelerationRestriction &accelerationRestriction)
{
  if (!withinValidInputRange(response))
  {
    spdlog::error("RssResponseTransformation::transformProperResponse>> Invalid input {}", response);
    return false;
  }
  accelerationRestriction.timeIndex = response.timeIndex;
  /**
   * If there is no action required RssResponseTransformation should send the maximum allowed acceleration/brake values
   * given by the world model
   */
  // LCOV_EXCL_BR_START: unreachable exceptions due to valid input range checks
  accelerationRestriction.longitudinalRange.minimum = response.alphaLon.brakeMax;
  switch (response.longitudinalResponse)
  {
    case ::ad::rss::state::LongitudinalResponse::BrakeMin:
      accelerationRestriction.longitudinalRange.maximum = response.alphaLon.brakeMin;
      break;
    case ::ad::rss::state::LongitudinalResponse::BrakeMinCorrect:
      accelerationRestriction.longitudinalRange.maximum = response.alphaLon.brakeMinCorrect;
      break;
    case ::ad::rss::state::LongitudinalResponse::None:
      accelerationRestriction.longitudinalRange.maximum = response.alphaLon.accelMax;
      break;
    default:
      spdlog::error("RssResponseTransformation::transformProperResponse>> Invalid longitudinal response state {}",
                    response.longitudinalResponse);
      return false; // LCOV_EXCL_LINE: unreachable code, keep to be on the safe side
      break;
  }

  switch (response.lateralResponseLeft)
  {
    case ::ad::rss::state::LateralResponse::BrakeMin:
      accelerationRestriction.lateralLeftRange.maximum = response.alphaLatLeft.brakeMin;
      accelerationRestriction.lateralLeftRange.minimum = std::numeric_limits<physics::Acceleration>::lowest();
      break;
    case ::ad::rss::state::LateralResponse::None:
      accelerationRestriction.lateralLeftRange.maximum = response.alphaLatLeft.accelMax;
      accelerationRestriction.lateralLeftRange.minimum = response.alphaLatLeft.brakeMin;
      break;
    default:
      spdlog::error("RssResponseTransformation::transformProperResponse>> Invalid lateral left response state {}",
                    response.lateralResponseLeft);
      return false; // LCOV_EXCL_LINE: unreachable code, keep to be on the safe side
      break;
  }

  switch (response.lateralResponseRight)
  {
    case ::ad::rss::state::LateralResponse::BrakeMin:
      accelerationRestriction.lateralRightRange.maximum = response.alphaLatRight.brakeMin;
      accelerationRestriction.lateralRightRange.minimum = std::numeric_limits<physics::Acceleration>::lowest();
      break;
    case ::ad::rss::state::LateralResponse::None:
      accelerationRestriction.lateralRightRange.maximum = response.alphaLatRight.accelMax;
      accelerationRestriction.lateralRightRange.minimum = response.alphaLatRight.brakeMin;
      break;
    default:
      spdlog::error("RssResponseTransformation::transformProperResponse>> Invalid lateral right response state {}",
                    response.lateralResponseRight);
      return false; // LCOV_EXCL_LINE: unreachable code, keep to be on the safe side
      break;
  }
  // LCOV_EXCL_BR_STOP

  return true;
}

} // namespace RssResponseTransformation
} // namespace core
} // namespace rss
} // namespace ad
