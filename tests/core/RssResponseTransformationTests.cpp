// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
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
