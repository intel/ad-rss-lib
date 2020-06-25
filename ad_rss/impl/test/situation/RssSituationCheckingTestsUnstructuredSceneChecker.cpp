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

TEST(RssSituationCheckingTestsUnstructuredSceneChecker, calculateState_other_in_front_of_ego_stopped)
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
  getUnstructuredVehicle(unstructured::Point(0.5, 0.5), true, egoStateInfo, situation.egoVehicleState);
  getUnstructuredVehicle(unstructured::Point(0.5, 4.5), true, otherStateInfo, situation.otherVehicleState);
  ASSERT_TRUE(unstructuredSceneChecker.calculateState(situation, egoStateInfo, otherStateInfo, unstructuredSceneState));
  ASSERT_TRUE(unstructuredSceneState.isSafe);
  ASSERT_EQ(unstructuredSceneState.response, state::UnstructuredSceneResponse::ContinueForward);

  // Drive away
  getUnstructuredVehicle(unstructured::Point(0.5, 0.5), true, egoStateInfo, situation.egoVehicleState);
  getUnstructuredVehicle(unstructured::Point(0.5, 2.0), true, otherStateInfo, situation.otherVehicleState);
  ASSERT_TRUE(unstructuredSceneChecker.calculateState(situation, egoStateInfo, otherStateInfo, unstructuredSceneState));
  ASSERT_FALSE(unstructuredSceneState.isSafe);
  ASSERT_EQ(unstructuredSceneState.response, state::UnstructuredSceneResponse::DriveAway); // as both stopped
  ASSERT_EQ(unstructuredSceneState.headingRange.begin, -3. / 4. * physics::cPI);
  ASSERT_EQ(unstructuredSceneState.headingRange.end, -1. / 4. * physics::cPI);
}

TEST(RssSituationCheckingTestsUnstructuredSceneChecker, calculateState_frontal_ego_approaching)
{
  RssUnstructuredSceneChecker unstructuredSceneChecker;
  state::UnstructuredSceneRssState unstructuredSceneState;
  Situation situation;
  situation.situationType = SituationType::Unstructured;
  situation.egoVehicleState = createVehicleState(world::ObjectType::EgoVehicle, 1.0, 0.0);
  situation.otherVehicleState = createVehicleState(world::ObjectType::OtherVehicle, 0.0, 0.0);
  situation.egoVehicleState.dynamics.unstructuredSettings.driveAwayMaxAngle = physics::cPI / 4.;
  state::UnstructuredSceneStateInformation egoStateInfo;
  state::UnstructuredSceneStateInformation otherStateInfo;
  getUnstructuredVehicle(unstructured::Point(0.5, 0.5), true, egoStateInfo, situation.egoVehicleState);
  getUnstructuredVehicle(unstructured::Point(0.5, 4.5), false, otherStateInfo, situation.otherVehicleState);
  ASSERT_TRUE(unstructuredSceneChecker.calculateState(situation, egoStateInfo, otherStateInfo, unstructuredSceneState));
  ASSERT_TRUE(unstructuredSceneState.isSafe);
  ASSERT_EQ(unstructuredSceneState.response, state::UnstructuredSceneResponse::ContinueForward);

  // brake
  getUnstructuredVehicle(unstructured::Point(0.5, 0.5), true, egoStateInfo, situation.egoVehicleState);
  getUnstructuredVehicle(unstructured::Point(0.5, 1.5), false, otherStateInfo, situation.otherVehicleState);
  ASSERT_TRUE(unstructuredSceneChecker.calculateState(situation, egoStateInfo, otherStateInfo, unstructuredSceneState));
  ASSERT_FALSE(unstructuredSceneState.isSafe);
  ASSERT_EQ(unstructuredSceneState.response, state::UnstructuredSceneResponse::Brake);
}

TEST(RssSituationCheckingTestsUnstructuredSceneChecker, calculateState_ego_in_front_driving_continueforward)
{
  RssUnstructuredSceneChecker unstructuredSceneChecker;
  state::UnstructuredSceneRssState unstructuredSceneState;
  Situation situation;
  situation.situationType = SituationType::Unstructured;
  situation.egoVehicleState = createVehicleState(world::ObjectType::EgoVehicle, 1.0, 0.0);
  situation.egoVehicleState.objectState.centerPoint.x = physics::Distance(20.0);
  situation.otherVehicleState = createVehicleState(world::ObjectType::OtherVehicle, 1.0, 0.0);
  situation.otherVehicleState.objectState.centerPoint.x = physics::Distance(0.0);
  state::UnstructuredSceneStateInformation egoStateInfo;

  state::RssState rssState;
  ASSERT_TRUE(
    unstructuredSceneChecker.calculateRssStateUnstructured(world::TimeIndex(1.), situation, egoStateInfo, rssState));
  ASSERT_TRUE(rssState.unstructuredSceneState.isSafe);
  ASSERT_EQ(rssState.unstructuredSceneState.response, state::UnstructuredSceneResponse::ContinueForward);

  // other must brake, ego continue forward
  situation.otherVehicleState.objectState.centerPoint.x = physics::Distance(5.0);
  ASSERT_TRUE(
    unstructuredSceneChecker.calculateRssStateUnstructured(world::TimeIndex(2.), situation, egoStateInfo, rssState));
  ASSERT_TRUE(rssState.unstructuredSceneState.isSafe);
  ASSERT_EQ(rssState.unstructuredSceneState.response, state::UnstructuredSceneResponse::ContinueForward);
}

TEST(RssSituationCheckingTestsUnstructuredSceneChecker, calculateState_ego_in_front_stopped_drive_away)
{
  RssUnstructuredSceneChecker unstructuredSceneChecker;
  state::UnstructuredSceneRssState unstructuredSceneState;
  Situation situation;
  situation.situationType = SituationType::Unstructured;
  situation.egoVehicleState = createVehicleState(world::ObjectType::EgoVehicle, 1.0, 0.0);
  situation.egoVehicleState.objectState.centerPoint.x = physics::Distance(20.0);
  situation.otherVehicleState = createVehicleState(world::ObjectType::OtherVehicle, 1.0, 0.0);
  situation.otherVehicleState.objectState.centerPoint.x = physics::Distance(0.0);
  state::UnstructuredSceneStateInformation egoStateInfo;

  state::RssState rssState;
  ASSERT_TRUE(
    unstructuredSceneChecker.calculateRssStateUnstructured(world::TimeIndex(1.), situation, egoStateInfo, rssState));
  ASSERT_TRUE(rssState.unstructuredSceneState.isSafe);
  ASSERT_EQ(rssState.unstructuredSceneState.response, state::UnstructuredSceneResponse::ContinueForward);

  // other must brake, ego drive away
  situation.otherVehicleState.objectState.centerPoint.x = physics::Distance(5.0);
  situation.egoVehicleState.objectState.speed = physics::Speed(0.0);
  ASSERT_TRUE(
    unstructuredSceneChecker.calculateRssStateUnstructured(world::TimeIndex(2.), situation, egoStateInfo, rssState));
  ASSERT_FALSE(rssState.unstructuredSceneState.isSafe);
  ASSERT_EQ(rssState.unstructuredSceneState.response, state::UnstructuredSceneResponse::DriveAway);
}

} // namespace unstructured
} // namespace rss
} // namespace ad
