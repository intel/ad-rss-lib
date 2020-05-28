// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/core/RssSituationChecking.hpp"

namespace ad {
namespace rss {
namespace situation {

class RssSituationCheckingTestsNotRelevant : public testing::Test
{
protected:
  virtual void SetUp()
  {
    situation.situationType = SituationType::NotRelevant;
  }

  virtual void TearDown()
  {
  }
  VehicleState correctVehicle;
  VehicleState oppositeVehicle;
  Situation situation;
  state::RssStateSnapshot rssStateSnapshot;
  world::TimeIndex timeIndex{1u};
};

TEST_F(RssSituationCheckingTestsNotRelevant, notRelevantSituation)
{
  core::RssSituationChecking situationChecking;
  correctVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.isInCorrectLane = false;

  situation.egoVehicleState = correctVehicle;
  situation.otherVehicleState = oppositeVehicle;
  situation.relativePosition = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(1.));

  ASSERT_TRUE(situationChecking.checkTimeIncreasingConsistently(timeIndex++));
  ASSERT_TRUE(situationChecking.checkSituationInputRangeChecked(situation, rssStateSnapshot));
  ASSERT_EQ(rssStateSnapshot.individualResponses.size(), 1u);
  ASSERT_EQ(rssStateSnapshot.individualResponses.back().longitudinalState,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, situation));
  ASSERT_EQ(rssStateSnapshot.individualResponses.back().lateralStateLeft,
            TestSupport::stateWithInformation(cTestSupport.cLateralSafe, situation));
  ASSERT_EQ(rssStateSnapshot.individualResponses.back().lateralStateRight,
            TestSupport::stateWithInformation(cTestSupport.cLateralSafe, situation));
}

} // namespace situation
} // namespace rss
} // namespace ad
