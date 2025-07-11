// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/core/RssResponseResolving.hpp"

namespace ad {
namespace rss {
namespace core {

using state::LateralResponse;
using state::LongitudinalResponse;

class RssResponseResolvingTests : public testing::Test
{
protected:
  void SetUp() override
  {
    state::RssState rssStateT1O1;
    state::RssState rssStateT1O2;
    state::RssState rssStateT2O1;
    state::RssState rssStateT2O2;
    state::RssState rssStateT3O1;
    state::RssState rssStateT3O2;
    resetRssState(rssStateT1O1, 1u, 1u, world::ConstellationType::SameDirection);
    resetRssState(rssStateT1O2, 2u, 2u, world::ConstellationType::SameDirection);
    resetRssState(rssStateT2O1, 1u, 1u, world::ConstellationType::SameDirection);
    resetRssState(rssStateT2O2, 2u, 2u, world::ConstellationType::SameDirection);
    resetRssState(rssStateT3O1, 1u, 1u, world::ConstellationType::SameDirection);
    resetRssState(rssStateT3O2, 2u, 2u, world::ConstellationType::SameDirection);
    rssStateSnapshotT1.time_index = 1u;
    rssStateSnapshotT1.default_ego_vehicle_rss_dynamics = getEgoRssDynamics();
    rssStateSnapshotT1.individual_responses.push_back(rssStateT1O1);
    rssStateSnapshotT1.individual_responses.push_back(rssStateT1O2);

    rssStateSnapshotT2.time_index = 2u;
    rssStateSnapshotT2.default_ego_vehicle_rss_dynamics = getEgoRssDynamics();
    rssStateSnapshotT2.individual_responses.push_back(rssStateT2O1);
    rssStateSnapshotT2.individual_responses.push_back(rssStateT2O2);

    rssStateSnapshotT3.time_index = 3u;
    rssStateSnapshotT3.default_ego_vehicle_rss_dynamics = getEgoRssDynamics();
    rssStateSnapshotT3.individual_responses.push_back(rssStateT3O1);
    rssStateSnapshotT3.individual_responses.push_back(rssStateT3O2);

    resetRssState(resultProperResponseT1);
    resetRssState(resultProperResponseT2);
    resetRssState(resultProperResponseT3);
  }

  void TearDown() override
  {
  }

  void testResultStateNone(state::ProperResponse &resultProperResponse)
  {
    testResultState(
      resultProperResponse, true, LongitudinalResponse::None, LateralResponse::None, LateralResponse::None);
  }

  void testResultState(state::ProperResponse &resultProperResponse,
                       bool is_safe,
                       LongitudinalResponse lonResponse,
                       LateralResponse latResponseLeft,
                       LateralResponse latResponseRight,
                       world::ObjectIdVector dangerous_objects = world::ObjectIdVector())
  {
    EXPECT_EQ(is_safe, resultProperResponse.is_safe);
    EXPECT_EQ(lonResponse, resultProperResponse.longitudinal_response);
    EXPECT_EQ(latResponseLeft, resultProperResponse.lateral_response_left);
    EXPECT_EQ(latResponseRight, resultProperResponse.lateral_response_right);
    EXPECT_EQ(dangerous_objects, resultProperResponse.dangerous_objects);
  }

  void performTest(bool expectedResultT1 = true, bool expectedResultT2 = true, bool expectedResultT3 = true)
  {
    RssResponseResolving provider;

    EXPECT_EQ(expectedResultT1, provider.provideProperResponse(rssStateSnapshotT1, resultProperResponseT1));
    EXPECT_EQ(expectedResultT2, provider.provideProperResponse(rssStateSnapshotT2, resultProperResponseT2));
    EXPECT_EQ(expectedResultT3, provider.provideProperResponse(rssStateSnapshotT3, resultProperResponseT3));
  }

  state::RssStateSnapshot rssStateSnapshotT1;
  state::RssStateSnapshot rssStateSnapshotT2;
  state::RssStateSnapshot rssStateSnapshotT3;

  state::ProperResponse resultProperResponseT1;
  state::ProperResponse resultProperResponseT2;
  state::ProperResponse resultProperResponseT3;
};

TEST_F(RssResponseResolvingTests, validateTestSetup)
{
  performTest(true);
  testResultStateNone(resultProperResponseT1);
  testResultStateNone(resultProperResponseT2);
  testResultStateNone(resultProperResponseT3);
}

TEST_F(RssResponseResolvingTests, invalidState)
{
  rssStateSnapshotT1.individual_responses[0].longitudinal_state.response = LongitudinalResponse(-1);
  performTest(false);
}

TEST_F(RssResponseResolvingTests, provideProperResponseLateralLeft)
{
  setRssStateUnsafe(rssStateSnapshotT1.individual_responses[0].longitudinal_state, LongitudinalResponse::None);
  setRssStateUnsafe(rssStateSnapshotT2.individual_responses[0].longitudinal_state, LongitudinalResponse::None);
  setRssStateUnsafe(rssStateSnapshotT2.individual_responses[0].lateral_state_left, LateralResponse::BrakeMin);

  performTest();
  testResultStateNone(resultProperResponseT1);
  testResultState(
    resultProperResponseT2, false, LongitudinalResponse::None, LateralResponse::BrakeMin, LateralResponse::None, {1});
  testResultStateNone(resultProperResponseT3);
}

TEST_F(RssResponseResolvingTests, provideProperResponseLateralRight)
{
  setRssStateUnsafe(rssStateSnapshotT1.individual_responses[0].longitudinal_state, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT2.individual_responses[0].longitudinal_state, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT2.individual_responses[0].lateral_state_right, LateralResponse::BrakeMin);

  performTest();
  testResultStateNone(resultProperResponseT1);
  testResultState(resultProperResponseT2,
                  false,
                  LongitudinalResponse::BrakeMin,
                  LateralResponse::None,
                  LateralResponse::BrakeMin,
                  {1});
  testResultStateNone(resultProperResponseT3);
}

TEST_F(RssResponseResolvingTests, provideProperResponseLongitudinal)
{
  setRssStateUnsafe(rssStateSnapshotT1.individual_responses[0].lateral_state_right, LateralResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT2.individual_responses[0].longitudinal_state, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT2.individual_responses[0].lateral_state_right, LateralResponse::BrakeMin);

  performTest();
  testResultStateNone(resultProperResponseT1);
  testResultState(resultProperResponseT2,
                  false,
                  LongitudinalResponse::BrakeMin,
                  LateralResponse::None,
                  LateralResponse::BrakeMin,
                  {1});
  testResultStateNone(resultProperResponseT3);
}

TEST_F(RssResponseResolvingTests, provideProperResponseLongitudinal_None)
{
  setRssStateUnsafe(rssStateSnapshotT1.individual_responses[0].lateral_state_right, LateralResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT2.individual_responses[0].longitudinal_state, LongitudinalResponse::None);
  setRssStateUnsafe(rssStateSnapshotT2.individual_responses[0].lateral_state_right, LateralResponse::BrakeMin);

  performTest();
  testResultStateNone(resultProperResponseT1);
  testResultState(
    resultProperResponseT2, false, LongitudinalResponse::None, LateralResponse::None, LateralResponse::BrakeMin, {1});
}

TEST_F(RssResponseResolvingTests, provideProperResponseBothDirections)
{
  setRssStateUnsafe(rssStateSnapshotT1.individual_responses[0].longitudinal_state, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT1.individual_responses[0].lateral_state_right, LateralResponse::BrakeMin);

  performTest();
  testResultState(resultProperResponseT1,
                  false,
                  LongitudinalResponse::BrakeMin,
                  LateralResponse::None,
                  LateralResponse::BrakeMin,
                  {1});
  testResultStateNone(resultProperResponseT2);
  testResultStateNone(resultProperResponseT3);
}

TEST_F(RssResponseResolvingTests, provideProperResponseLongitudinalMoreSevere)
{
  setRssStateUnsafe(rssStateSnapshotT1.individual_responses[0].lateral_state_right, LateralResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT2.individual_responses[0].longitudinal_state,
                    LongitudinalResponse::BrakeMinCorrect);
  setRssStateUnsafe(rssStateSnapshotT2.individual_responses[0].lateral_state_right, LateralResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT3.individual_responses[0].longitudinal_state, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT3.individual_responses[0].lateral_state_right, LateralResponse::BrakeMin);

  performTest();
  testResultStateNone(resultProperResponseT1);
  testResultState(resultProperResponseT2,
                  false,
                  LongitudinalResponse::BrakeMinCorrect,
                  LateralResponse::None,
                  LateralResponse::BrakeMin,
                  {1});
  testResultState(resultProperResponseT3,
                  false,
                  LongitudinalResponse::BrakeMin,
                  LateralResponse::None,
                  LateralResponse::BrakeMin,
                  {1});
}

TEST_F(RssResponseResolvingTests, provideProperResponseDangerousInitialState)
{
  setRssStateUnsafe(rssStateSnapshotT1.individual_responses[0].lateral_state_right, LateralResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT1.individual_responses[0].longitudinal_state, LongitudinalResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT2.individual_responses[0].lateral_state_right, LateralResponse::BrakeMin);
  setRssStateUnsafe(rssStateSnapshotT2.individual_responses[0].longitudinal_state, LongitudinalResponse::BrakeMin);

  performTest();
  testResultState(resultProperResponseT1,
                  false,
                  LongitudinalResponse::BrakeMin,
                  LateralResponse::None,
                  LateralResponse::BrakeMin,
                  {1});
  testResultState(resultProperResponseT2,
                  false,
                  LongitudinalResponse::BrakeMin,
                  LateralResponse::None,
                  LateralResponse::BrakeMin,
                  {1});
  testResultStateNone(resultProperResponseT3);
}

} // namespace core
} // namespace rss
} // namespace ad
