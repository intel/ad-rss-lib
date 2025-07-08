// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2020-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include <ad/geometry/GeometryOperation.hpp>
#include <ad/geometry/Types.hpp>
#include "TestSupport.hpp"
#include "ad/rss/unstructured/RssUnstructuredConstellationChecker.hpp"

namespace ad {
namespace rss {
namespace unstructured {

TEST(RssUnstructuredConstellationCheckerTests, calculateDriveAwayAngle)
{
  ::ad::geometry::HeadingRange range;
  RssUnstructuredConstellationChecker unstructuredConstellationChecker;
  ASSERT_TRUE(unstructuredConstellationChecker.calculateDriveAwayAngle(
    ::ad::geometry::Point(0, 0), ::ad::geometry::Point(1, 0), physics::cPI / 4., range));
  ASSERT_EQ(range.begin, 3. / 4. * physics::cPI);
  ASSERT_EQ(range.end, -3. / 4. * physics::cPI);

  ASSERT_TRUE(unstructuredConstellationChecker.calculateDriveAwayAngle(
    ::ad::geometry::Point(0, 0), ::ad::geometry::Point(0, 1), physics::cPI / 4., range));
  ASSERT_EQ(range.begin, -3. / 4. * physics::cPI);
  ASSERT_EQ(range.end, -1. / 4. * physics::cPI);

  ASSERT_TRUE(unstructuredConstellationChecker.calculateDriveAwayAngle(
    ::ad::geometry::Point(0, 0), ::ad::geometry::Point(-1, 0), physics::cPI / 4., range));
  ASSERT_EQ(range.begin, -1. / 4. * physics::cPI);
  ASSERT_EQ(range.end, 1. / 4. * physics::cPI);

  ASSERT_TRUE(unstructuredConstellationChecker.calculateDriveAwayAngle(
    ::ad::geometry::Point(0, 0), ::ad::geometry::Point(0, -1), physics::cPI / 4., range));
  ASSERT_EQ(range.begin, 1. / 4. * physics::cPI);
  ASSERT_EQ(range.end, 3. / 4. * physics::cPI);

  ASSERT_TRUE(unstructuredConstellationChecker.calculateDriveAwayAngle(
    ::ad::geometry::Point(0, 0), ::ad::geometry::Point(1, 1), physics::cPI / 4., range));
  ASSERT_EQ(range.begin, physics::cPI);
  ASSERT_EQ(range.end, -physics::cPI_2);

  ASSERT_TRUE(unstructuredConstellationChecker.calculateDriveAwayAngle(
    ::ad::geometry::Point(0, 0), ::ad::geometry::Point(0, 1), 3. / 4. * physics::cPI, range));
  ASSERT_EQ(range.begin, 3. / 4. * physics::cPI);
  ASSERT_EQ(range.end, 1. / 4. * physics::cPI);

  ASSERT_TRUE(unstructuredConstellationChecker.calculateDriveAwayAngle(
    ::ad::geometry::Point(0, 0), ::ad::geometry::Point(0, 1), physics::cPI / 2., range));
  ASSERT_EQ(range.begin, physics::cPI);
  ASSERT_EQ(range.end, physics::Angle(0.0));

  ASSERT_TRUE(unstructuredConstellationChecker.calculateDriveAwayAngle(
    ::ad::geometry::Point(0, 0), ::ad::geometry::Point(0, -1), physics::cPI / 2., range));
  ASSERT_EQ(range.begin, physics::Angle(0.0));
  ASSERT_EQ(range.end, physics::cPI);
}

TEST(RssUnstructuredConstellationCheckerTests, calculateState_emptyTrajectorySets)
{
  RssUnstructuredConstellationChecker unstructuredConstellationChecker;
  state::UnstructuredConstellationRssState unstructured_constellation_state;
  core::RelativeConstellation constellation;
  constellation.constellation_type = world::ConstellationType::Unstructured;
  constellation.ego_state = createRelativeVehicleState(world::ObjectType::EgoVehicle, 0.0, 0.0);
  constellation.other_state = createRelativeVehicleState(world::ObjectType::OtherVehicle, 0.0, 0.0);
  state::UnstructuredConstellationStateInformation egoStateInfo;
  state::UnstructuredConstellationStateInformation otherStateInfo;
  ASSERT_FALSE(unstructuredConstellationChecker.calculateState(
    constellation, egoStateInfo, otherStateInfo, unstructured_constellation_state));
}

TEST(RssUnstructuredConstellationCheckerTests, calculateState_other_in_front_of_ego_stopped)
{
  RssUnstructuredConstellationChecker unstructuredConstellationChecker;
  state::UnstructuredConstellationRssState unstructured_constellation_state;
  core::RelativeConstellation constellation;
  constellation.constellation_type = world::ConstellationType::Unstructured;
  constellation.ego_state = createRelativeVehicleState(world::ObjectType::EgoVehicle, 0.0, 0.0);
  constellation.other_state = createRelativeVehicleState(world::ObjectType::OtherVehicle, 0.0, 0.0);
  constellation.ego_state.dynamics.unstructured_settings.drive_away_max_angle = physics::cPI / 4.;
  state::UnstructuredConstellationStateInformation egoStateInfo;
  state::UnstructuredConstellationStateInformation otherStateInfo;
  getUnstructuredVehicle(::ad::geometry::Point(0.5, 0.5), true, egoStateInfo, constellation.ego_state);
  getUnstructuredVehicle(::ad::geometry::Point(0.5, 4.5), true, otherStateInfo, constellation.other_state);
  ASSERT_TRUE(unstructuredConstellationChecker.calculateState(
    constellation, egoStateInfo, otherStateInfo, unstructured_constellation_state));
  ASSERT_TRUE(unstructured_constellation_state.is_safe);
  ASSERT_EQ(unstructured_constellation_state.response, state::UnstructuredConstellationResponse::ContinueForward);

  // Drive away
  getUnstructuredVehicle(::ad::geometry::Point(0.5, 0.5), true, egoStateInfo, constellation.ego_state);
  getUnstructuredVehicle(::ad::geometry::Point(0.5, 2.0), true, otherStateInfo, constellation.other_state);
  ASSERT_TRUE(unstructuredConstellationChecker.calculateState(
    constellation, egoStateInfo, otherStateInfo, unstructured_constellation_state));
  ASSERT_FALSE(unstructured_constellation_state.is_safe);
  ASSERT_EQ(unstructured_constellation_state.response,
            state::UnstructuredConstellationResponse::DriveAway); // as both stopped
  ASSERT_EQ(unstructured_constellation_state.heading_range.begin, -3. / 4. * physics::cPI);
  ASSERT_EQ(unstructured_constellation_state.heading_range.end, -1. / 4. * physics::cPI);
}

TEST(RssUnstructuredConstellationCheckerTests, calculateState_frontal_ego_approaching)
{
  RssUnstructuredConstellationChecker unstructuredConstellationChecker;
  state::UnstructuredConstellationRssState unstructured_constellation_state;
  core::RelativeConstellation constellation;
  constellation.constellation_type = world::ConstellationType::Unstructured;
  constellation.ego_state = createRelativeVehicleState(world::ObjectType::EgoVehicle, 1.0, 0.0);
  constellation.other_state = createRelativeVehicleState(world::ObjectType::OtherVehicle, 0.0, 0.0);
  constellation.ego_state.dynamics.unstructured_settings.drive_away_max_angle = physics::cPI / 4.;
  state::UnstructuredConstellationStateInformation egoStateInfo;
  state::UnstructuredConstellationStateInformation otherStateInfo;
  getUnstructuredVehicle(::ad::geometry::Point(0.5, 0.5), true, egoStateInfo, constellation.ego_state);
  getUnstructuredVehicle(::ad::geometry::Point(0.5, 4.5), false, otherStateInfo, constellation.other_state);
  ASSERT_TRUE(unstructuredConstellationChecker.calculateState(
    constellation, egoStateInfo, otherStateInfo, unstructured_constellation_state));
  ASSERT_TRUE(unstructured_constellation_state.is_safe);
  ASSERT_EQ(unstructured_constellation_state.response, state::UnstructuredConstellationResponse::ContinueForward);

  // brake
  getUnstructuredVehicle(::ad::geometry::Point(0.5, 0.5), true, egoStateInfo, constellation.ego_state);
  getUnstructuredVehicle(::ad::geometry::Point(0.5, 1.5), false, otherStateInfo, constellation.other_state);
  ASSERT_TRUE(unstructuredConstellationChecker.calculateState(
    constellation, egoStateInfo, otherStateInfo, unstructured_constellation_state));
  ASSERT_FALSE(unstructured_constellation_state.is_safe);
  ASSERT_EQ(unstructured_constellation_state.response, state::UnstructuredConstellationResponse::Brake);
}

TEST(RssUnstructuredConstellationCheckerTests, calculateState_ego_in_front_driving_continueforward)
{
  RssUnstructuredConstellationChecker unstructuredConstellationChecker;
  core::RelativeConstellation constellation;
  constellation.constellation_type = world::ConstellationType::Unstructured;
  constellation.ego_state = createRelativeVehicleState(world::ObjectType::EgoVehicle, 1.0, 0.0);
  constellation.ego_state.unstructured_object_state.center_point.x = physics::Distance(20.0);
  constellation.other_state = createRelativeVehicleState(world::ObjectType::OtherVehicle, 1.0, 0.0);
  constellation.other_state.unstructured_object_state.center_point.x = physics::Distance(0.0);
  state::UnstructuredConstellationStateInformation egoStateInfo;

  state::RssState rssState;
  ASSERT_TRUE(unstructuredConstellationChecker.calculateRssStateUnstructured(
    world::TimeIndex(1.), constellation, egoStateInfo, rssState));
  ASSERT_TRUE(rssState.unstructured_constellation_state.is_safe);
  ASSERT_EQ(rssState.unstructured_constellation_state.response,
            state::UnstructuredConstellationResponse::ContinueForward);

  // other must brake, ego continue forward
  constellation.other_state.unstructured_object_state.center_point.x = physics::Distance(5.0);
  ASSERT_TRUE(unstructuredConstellationChecker.calculateRssStateUnstructured(
    world::TimeIndex(2.), constellation, egoStateInfo, rssState));
  ASSERT_TRUE(rssState.unstructured_constellation_state.is_safe);
  ASSERT_EQ(rssState.unstructured_constellation_state.response,
            state::UnstructuredConstellationResponse::ContinueForward);
}

TEST(RssUnstructuredConstellationCheckerTests, calculateState_ego_in_front_stopped_drive_away)
{
  RssUnstructuredConstellationChecker unstructuredConstellationChecker;
  core::RelativeConstellation constellation;
  constellation.constellation_type = world::ConstellationType::Unstructured;
  constellation.ego_state = createRelativeVehicleState(world::ObjectType::EgoVehicle, 1.0, 0.0);
  constellation.ego_state.unstructured_object_state.center_point.x = physics::Distance(20.0);
  constellation.ego_state.dynamics.unstructured_settings.drive_away_max_angle = 3. * physics::cPI / 4.;
  constellation.other_state = createRelativeVehicleState(world::ObjectType::OtherVehicle, 1.0, 0.0);
  constellation.other_state.unstructured_object_state.center_point.x = physics::Distance(0.0);
  state::UnstructuredConstellationStateInformation egoStateInfo;

  state::RssState rssState;
  ASSERT_TRUE(unstructuredConstellationChecker.calculateRssStateUnstructured(
    world::TimeIndex(1.), constellation, egoStateInfo, rssState));
  ASSERT_TRUE(rssState.unstructured_constellation_state.is_safe);
  ASSERT_EQ(rssState.unstructured_constellation_state.response,
            state::UnstructuredConstellationResponse::ContinueForward);

  // other must brake, ego drive away
  constellation.other_state.unstructured_object_state.center_point.x = physics::Distance(5.0);
  constellation.ego_state.unstructured_object_state.speed_range.minimum = physics::Speed(0.0);
  constellation.ego_state.unstructured_object_state.speed_range.maximum = physics::Speed(0.0);
  ASSERT_TRUE(unstructuredConstellationChecker.calculateRssStateUnstructured(
    world::TimeIndex(2.), constellation, egoStateInfo, rssState));
  ASSERT_FALSE(rssState.unstructured_constellation_state.is_safe);
  ASSERT_EQ(rssState.unstructured_constellation_state.response, state::UnstructuredConstellationResponse::DriveAway);
}

TEST(RssUnstructuredConstellationCheckerTests, calculateState_other_in_front_stopped_drive_away)
{
  RssUnstructuredConstellationChecker unstructuredConstellationChecker;
  core::RelativeConstellation constellation;
  constellation.constellation_id = 1;
  constellation.constellation_type = world::ConstellationType::Unstructured;
  constellation.ego_state = createRelativeVehicleState(world::ObjectType::EgoVehicle, 1.0, 0.0);
  constellation.ego_state.unstructured_object_state.center_point.x = physics::Distance(0.0);
  constellation.ego_state.dynamics.unstructured_settings.drive_away_max_angle = 3. * physics::cPI / 4.;
  constellation.other_state = createRelativeVehicleState(world::ObjectType::OtherVehicle, 0.0, 0.0);
  constellation.other_state.unstructured_object_state.center_point.x = physics::Distance(20.0);
  state::UnstructuredConstellationStateInformation egoStateInfo;

  state::RssState rssState;
  ASSERT_TRUE(unstructuredConstellationChecker.calculateRssStateUnstructured(
    world::TimeIndex(1.), constellation, egoStateInfo, rssState));
  ASSERT_TRUE(rssState.unstructured_constellation_state.is_safe);
  ASSERT_EQ(rssState.unstructured_constellation_state.response,
            state::UnstructuredConstellationResponse::ContinueForward);

  // other must brake, ego drive away
  constellation.ego_state.unstructured_object_state.center_point.x = physics::Distance(5.0);
  constellation.ego_state.unstructured_object_state.speed_range.minimum = physics::Speed(0.0);
  constellation.ego_state.unstructured_object_state.speed_range.maximum = physics::Speed(0.0);
  ASSERT_TRUE(unstructuredConstellationChecker.calculateRssStateUnstructured(
    world::TimeIndex(2.), constellation, egoStateInfo, rssState));
  ASSERT_FALSE(rssState.unstructured_constellation_state.is_safe);
  ASSERT_EQ(rssState.unstructured_constellation_state.response, state::UnstructuredConstellationResponse::DriveAway);

  // ego drives away with forbidden heading
  constellation.ego_state.unstructured_object_state.center_point.x = physics::Distance(5.0);
  constellation.ego_state.unstructured_object_state.speed_range.minimum = physics::Speed(5.0);
  constellation.ego_state.unstructured_object_state.speed_range.maximum = physics::Speed(5.0);
  constellation.ego_state.unstructured_object_state.steering_angle = physics::cPI / 5.;
  ASSERT_TRUE(unstructuredConstellationChecker.calculateRssStateUnstructured(
    world::TimeIndex(3.), constellation, egoStateInfo, rssState));
  ASSERT_FALSE(rssState.unstructured_constellation_state.is_safe);
  ASSERT_EQ(rssState.unstructured_constellation_state.response, state::UnstructuredConstellationResponse::Brake);

  // ego forced to stop. drive away again possible
  constellation.ego_state.unstructured_object_state.center_point.x = physics::Distance(5.0);
  constellation.ego_state.unstructured_object_state.speed_range.minimum = physics::Speed(0.0);
  constellation.ego_state.unstructured_object_state.speed_range.maximum = physics::Speed(0.0);
  ASSERT_TRUE(unstructuredConstellationChecker.calculateRssStateUnstructured(
    world::TimeIndex(4.), constellation, egoStateInfo, rssState));
  ASSERT_FALSE(rssState.unstructured_constellation_state.is_safe);
  ASSERT_EQ(rssState.unstructured_constellation_state.response, state::UnstructuredConstellationResponse::DriveAway);

  // ego drives away with allowed heading
  constellation.ego_state.unstructured_object_state.center_point.x = physics::Distance(5.0);
  constellation.ego_state.unstructured_object_state.speed_range.minimum = physics::Speed(5.0);
  constellation.ego_state.unstructured_object_state.speed_range.maximum = physics::Speed(5.0);
  constellation.ego_state.unstructured_object_state.steering_angle = physics::cPI / 4.;
  ASSERT_TRUE(unstructuredConstellationChecker.calculateRssStateUnstructured(
    world::TimeIndex(5.), constellation, egoStateInfo, rssState));
  ASSERT_FALSE(rssState.unstructured_constellation_state.is_safe);
  ASSERT_EQ(rssState.unstructured_constellation_state.response, state::UnstructuredConstellationResponse::DriveAway);

  // ego drives away with allowed heading but other started to move again
  constellation.ego_state.unstructured_object_state.center_point.x = physics::Distance(5.0);
  constellation.ego_state.unstructured_object_state.speed_range.minimum = physics::Speed(5.0);
  constellation.ego_state.unstructured_object_state.speed_range.maximum = physics::Speed(5.0);
  constellation.ego_state.unstructured_object_state.steering_angle = physics::cPI / 4.;
  constellation.other_state.unstructured_object_state.center_point.x = physics::Distance(21.0);
  ASSERT_TRUE(unstructuredConstellationChecker.calculateRssStateUnstructured(
    world::TimeIndex(6.), constellation, egoStateInfo, rssState));
  ASSERT_FALSE(rssState.unstructured_constellation_state.is_safe);
  ASSERT_EQ(rssState.unstructured_constellation_state.response, state::UnstructuredConstellationResponse::Brake);
}

} // namespace unstructured
} // namespace rss
} // namespace ad
