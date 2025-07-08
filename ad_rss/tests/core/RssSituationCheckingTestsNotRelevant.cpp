// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/core/RssSituationChecking.hpp"

namespace ad {
namespace rss {
namespace core {

class RssSituationCheckingTestsNotRelevant : public testing::Test
{
protected:
  virtual void SetUp()
  {
    constellation.constellation_type = world::ConstellationType::NotRelevant;
  }

  virtual void TearDown()
  {
  }
  RelativeObjectState correctVehicle;
  RelativeObjectState oppositeVehicle;
  RelativeConstellation constellation;
  state::RssStateSnapshot rssStateSnapshot;
  world::TimeIndex time_index{1u};
};

TEST_F(RssSituationCheckingTestsNotRelevant, notRelevantConstellation)
{
  RssSituationChecking situationChecking;
  correctVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  oppositeVehicle = createRelativeVehicleStateForLongitudinalMotion(50);
  oppositeVehicle.structured_object_state.is_in_correct_lane = false;

  constellation.ego_state = correctVehicle;
  constellation.other_state = oppositeVehicle;
  constellation.relative_position
    = createRelativeLongitudinalPosition(LongitudinalRelativePosition::AtBack, Distance(1.));

  ASSERT_TRUE(situationChecking.checkTimeIncreasingConsistently(time_index++));
  ASSERT_TRUE(situationChecking.checkConstellationInputRangeChecked(constellation, rssStateSnapshot));
  ASSERT_EQ(rssStateSnapshot.individual_responses.size(), 1u);
  ASSERT_EQ(rssStateSnapshot.individual_responses.back().longitudinal_state,
            TestSupport::stateWithInformation(cTestSupport.cLongitudinalSafe, constellation));
  ASSERT_EQ(rssStateSnapshot.individual_responses.back().lateral_state_left,
            TestSupport::stateWithInformation(cTestSupport.cLateralSafe, constellation));
  ASSERT_EQ(rssStateSnapshot.individual_responses.back().lateral_state_right,
            TestSupport::stateWithInformation(cTestSupport.cLateralSafe, constellation));
}

} // namespace core
} // namespace rss
} // namespace ad
