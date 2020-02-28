// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/core/RssResponseTransformation.hpp"

#include "RssCheckTestBaseT.hpp"

namespace ad {
namespace rss {
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

  ASSERT_TRUE(core::RssResponseTransformation::transformProperResponse(properResponse, accelerationRestriction));
  testRestrictions(accelerationRestriction);
}

TEST_F(RssResponseTransformationTests, invalidLongitudinalRssState)
{
  world::AccelerationRestriction accelerationRestriction;

  properResponse.longitudinalResponse = state::LongitudinalResponse(-1);

  ASSERT_FALSE(core::RssResponseTransformation::transformProperResponse(properResponse, accelerationRestriction));
}

TEST_F(RssResponseTransformationTests, invalidLateralRssStateLeft)
{
  world::AccelerationRestriction accelerationRestriction;

  properResponse.lateralResponseLeft = state::LateralResponse(-1);

  ASSERT_FALSE(core::RssResponseTransformation::transformProperResponse(properResponse, accelerationRestriction));
}

TEST_F(RssResponseTransformationTests, invalidLateralRssStateRight)
{
  world::AccelerationRestriction accelerationRestriction;

  properResponse.lateralResponseRight = state::LateralResponse(-1);

  ASSERT_FALSE(core::RssResponseTransformation::transformProperResponse(properResponse, accelerationRestriction));
}

} // namespace core
} // namespace rss
} // namespace ad
