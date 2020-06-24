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

TEST(RssSituationCheckingTestsUnstructuredSceneChecker, calculateDriveAwayAngle)
{
  ::ad::rss::state::HeadingRange range;
  RssUnstructuredSceneChecker unstructuredSceneChecker;
  ASSERT_TRUE(unstructuredSceneChecker.calculateDriveAwayAngle(
    unstructured::Point(0, 0), unstructured::Point(1, 0), physics::cPI / 4., range));
  ASSERT_EQ(range.begin, 3. / 4. * physics::cPI);
  ASSERT_EQ(range.end, -3. / 4. * physics::cPI);

  ASSERT_TRUE(unstructuredSceneChecker.calculateDriveAwayAngle(
    unstructured::Point(0, 0), unstructured::Point(0, 1), physics::cPI / 4., range));
  ASSERT_EQ(range.begin, -3. / 4. * physics::cPI);
  ASSERT_EQ(range.end, -1. / 4. * physics::cPI);

  ASSERT_TRUE(unstructuredSceneChecker.calculateDriveAwayAngle(
    unstructured::Point(0, 0), unstructured::Point(-1, 0), physics::cPI / 4., range));
  ASSERT_EQ(range.begin, -1. / 4. * physics::cPI);
  ASSERT_EQ(range.end, 1. / 4. * physics::cPI);

  ASSERT_TRUE(unstructuredSceneChecker.calculateDriveAwayAngle(
    unstructured::Point(0, 0), unstructured::Point(0, -1), physics::cPI / 4., range));
  ASSERT_EQ(range.begin, 1. / 4. * physics::cPI);
  ASSERT_EQ(range.end, 3. / 4. * physics::cPI);

  ASSERT_TRUE(unstructuredSceneChecker.calculateDriveAwayAngle(
    unstructured::Point(0, 0), unstructured::Point(1, 1), physics::cPI / 4., range));
  ASSERT_EQ(range.begin, physics::cPI);
  ASSERT_EQ(range.end, -physics::cPI_2);

  ASSERT_TRUE(unstructuredSceneChecker.calculateDriveAwayAngle(
    unstructured::Point(0, 0), unstructured::Point(0, 1), 3. / 4. * physics::cPI, range));
  ASSERT_EQ(range.begin, 3. / 4. * physics::cPI);
  ASSERT_EQ(range.end, 1. / 4. * physics::cPI);

  ASSERT_TRUE(unstructuredSceneChecker.calculateDriveAwayAngle(
    unstructured::Point(0, 0), unstructured::Point(0, 1), physics::cPI / 2., range));
  ASSERT_EQ(range.begin, physics::cPI);
  ASSERT_EQ(range.end, physics::Angle(0.0));

  ASSERT_TRUE(unstructuredSceneChecker.calculateDriveAwayAngle(
    unstructured::Point(0, 0), unstructured::Point(0, -1), physics::cPI / 2., range));
  ASSERT_EQ(range.begin, physics::Angle(0.0));
  ASSERT_EQ(range.end, physics::cPI);
}

TEST(RssSituationCheckingTestsUnstructuredSceneChecker, calculateState_emptyTrajectorySets)
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

TEST(RssSituationCheckingTestsUnstructuredSceneChecker, calculateState_frontal_stopped)
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
  ASSERT_EQ(unstructuredSceneState.headingRange.begin, -3. / 4. * physics::cPI);
  ASSERT_EQ(unstructuredSceneState.headingRange.end, -1. / 4. * physics::cPI);
}

} // namespace unstructured
} // namespace rss
} // namespace ad
