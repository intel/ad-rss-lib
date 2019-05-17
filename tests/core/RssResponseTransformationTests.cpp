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

#include "ad_rss/core/RssResponseTransformation.hpp"

#include "RssCheckTestBaseT.hpp"

namespace ad_rss {
namespace core {

class RssResponseTransformationTests : public RssCheckTestBaseT<testing::Test>
{
public:
  void SetUp() override
  {
    RssCheckTestBaseT<testing::Test>::SetUp();
    resetRssState(properResponse);
  }
  state::ProperResponse properResponse;
};

TEST_F(RssResponseTransformationTests, validateTestSetup)
{
  world::AccelerationRestriction accelerationRestriction;

  ASSERT_TRUE(::ad_rss::core::RssResponseTransformation::transformProperResponse(
    worldModel, properResponse, accelerationRestriction));
  testRestrictions(accelerationRestriction);
}

TEST_F(RssResponseTransformationTests, invalidTimeStamp)
{
  world::AccelerationRestriction accelerationRestriction;

  worldModel.timeIndex = 1u;
  properResponse.timeIndex = 0u;

  ASSERT_FALSE(::ad_rss::core::RssResponseTransformation::transformProperResponse(
    worldModel, properResponse, accelerationRestriction));

  worldModel.timeIndex = 0u;
  properResponse.timeIndex = 1u;

  ASSERT_FALSE(::ad_rss::core::RssResponseTransformation::transformProperResponse(
    worldModel, properResponse, accelerationRestriction));

  worldModel.timeIndex = 1u;
  properResponse.timeIndex = 2u;

  ASSERT_FALSE(::ad_rss::core::RssResponseTransformation::transformProperResponse(
    worldModel, properResponse, accelerationRestriction));
}

TEST_F(RssResponseTransformationTests, invalidLongitudinalRssState)
{
  world::AccelerationRestriction accelerationRestriction;

  properResponse.longitudinalResponse = state::LongitudinalResponse(-1);

  ASSERT_FALSE(::ad_rss::core::RssResponseTransformation::transformProperResponse(
    worldModel, properResponse, accelerationRestriction));
}

TEST_F(RssResponseTransformationTests, invalidLateralRssStateLeft)
{
  world::AccelerationRestriction accelerationRestriction;

  properResponse.lateralResponseLeft = state::LateralResponse(-1);

  ASSERT_FALSE(::ad_rss::core::RssResponseTransformation::transformProperResponse(
    worldModel, properResponse, accelerationRestriction));
}

TEST_F(RssResponseTransformationTests, invalidLateralRssStateRight)
{
  world::AccelerationRestriction accelerationRestriction;

  properResponse.lateralResponseRight = state::LateralResponse(-1);

  ASSERT_FALSE(::ad_rss::core::RssResponseTransformation::transformProperResponse(
    worldModel, properResponse, accelerationRestriction));
}

} // namespace core
} // namespace ad_rss
