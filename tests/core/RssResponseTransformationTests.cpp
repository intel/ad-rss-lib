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
#include "rss/core/RssResponseTransformation.hpp"

namespace rss {
namespace core {

using state::LateralResponse;
using state::LongitudinalResponse;

TEST(RssResponseTransformationTests, invalidTimeStamp)
{
  ::rss::world::WorldModel worldModel;
  ::rss::state::ResponseState responseState;
  ::rss::world::AccelerationRestriction accelerationRestriction;

  worldModel.timeIndex = 1u;
  responseState.timeIndex = 0u;

  ASSERT_FALSE(::rss::core::RssResponseTransformation::transformProperResponse(
    worldModel, responseState, accelerationRestriction));
}

} // namespace core
} // namespace rss
