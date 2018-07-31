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

#include "TestSupport.hpp"
#include "rss/core/RSSChecker.hpp"

namespace rss {
namespace core {
namespace RSSChecker {

using check::Response;
using check::LateralResponse;
using check::LongitudinalResponse;

TEST(RSSCheckerTests, same_direction_leading_ego_safe_distance)
{
  lane::VehicleState leadingVehicle = createVehicleState(100);
  leadingVehicle.position.lonInterval.minimum = 100;
  leadingVehicle.position.lonInterval.maximum = 106;
  lane::VehicleState followingVehicle = createVehicleState(10);
  followingVehicle.position.lonInterval.minimum = 0;
  followingVehicle.position.lonInterval.maximum = 5;
  Response response;

  lane::Situation situation;
  situation.egoVehicleState = leadingVehicle;
  situation.otherVehicleState = followingVehicle;

  ASSERT_TRUE(checkSituation(situation, response));
  ASSERT_EQ(response.longitudinalResponse, LongitudinalResponse::Safe);
}

} // namespace RSSChecker
} // namespace core
} // namespace rss
