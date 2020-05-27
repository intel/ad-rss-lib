// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "situation/RssUnstructuredSceneChecker.hpp"

namespace ad {
namespace rss {
namespace situation {

TEST(RssUnstructuredSceneCheckerTests, calculateDriveAwayAngle)
{
  ::ad::physics::AngleRange range;
  RssUnstructuredSceneChecker unstructuredSceneChecker;
  ASSERT_TRUE(unstructuredSceneChecker.calculateDriveAwayAngle(
    unstructured::Point(1, 0), unstructured::Point(0, 0), physics::cPI / 4., range));
  // TODO: FIX!
  // ASSERT_EQ(range.minimum, 1. / 4. * physics::cPI);
  // ASSERT_EQ(range.maximum, 5. / 4. * physics::cPI);
}

TEST(RssUnstructuredSceneCheckerTests, calculateState_emptyTrajectorySets)
{
  RssUnstructuredSceneChecker unstructuredSceneChecker;
  state::UnstructuredSceneRssState unstructuredSceneState;
  Situation situation;
  situation.situationType = SituationType::Unstructured;
  situation.egoVehicleState = createVehicleState(world::ObjectType::EgoVehicle, 0.0, 0.0);
  situation.otherVehicleState = createVehicleState(world::ObjectType::OtherVehicle, 0.0, 0.0);
  state::UnstructuredSceneStateInformation egoStateInfo;
  state::UnstructuredSceneStateInformation otherStateInfo;
  ASSERT_FALSE(
    unstructuredSceneChecker.calculateState(situation, egoStateInfo, otherStateInfo, unstructuredSceneState));
}

TEST(RssUnstructuredSceneCheckerTests, calculateState_frontal_stopped)
{
  RssUnstructuredSceneChecker unstructuredSceneChecker;
  state::UnstructuredSceneRssState unstructuredSceneState;
  Situation situation;
  situation.situationType = SituationType::Unstructured;
  situation.egoVehicleState = createVehicleState(world::ObjectType::EgoVehicle, 0.0, 0.0);
  situation.otherVehicleState = createVehicleState(world::ObjectType::OtherVehicle, 0.0, 0.0);
  situation.egoVehicleState.dynamics.unstructuredSettings.driveAwayMaxAngle = physics::cPI / 4.;
  state::UnstructuredSceneStateInformation egoStateInfo;
  state::UnstructuredSceneStateInformation otherStateInfo;
  getUnstructuredVehicle(unstructured::Point(0., 0.), true, egoStateInfo, situation.egoVehicleState);
  getUnstructuredVehicle(unstructured::Point(0., 4.), true, otherStateInfo, situation.otherVehicleState);
  ASSERT_TRUE(unstructuredSceneChecker.calculateState(situation, egoStateInfo, otherStateInfo, unstructuredSceneState));
  ASSERT_TRUE(unstructuredSceneState.isSafe);

  // Drive away
  getUnstructuredVehicle(unstructured::Point(0., 0.), true, egoStateInfo, situation.egoVehicleState);
  getUnstructuredVehicle(unstructured::Point(0., 1.5), true, otherStateInfo, situation.otherVehicleState);
  ASSERT_TRUE(unstructuredSceneChecker.calculateState(situation, egoStateInfo, otherStateInfo, unstructuredSceneState));
  ASSERT_FALSE(unstructuredSceneState.isSafe);
  ASSERT_EQ(unstructuredSceneState.response, state::UnstructuredSceneResponse::DriveAway); // as both stopped
  ASSERT_EQ(unstructuredSceneState.headingRange.minimum, 5. / 4. * physics::cPI);
  ASSERT_EQ(unstructuredSceneState.headingRange.maximum, 7. / 4. * physics::cPI);
}

} // namespace unstructured
} // namespace rss
} // namespace ad
