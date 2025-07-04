// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/map/test_support/RssObjectAdapterTest.hpp"
#include <functional>

namespace ad {
namespace rss {
namespace map {
namespace test_support {

const ::ad::physics::Duration CheckerControlTest::cResponseTimeEgoVehicle{0.8};
const ::ad::physics::Duration CheckerControlTest::cResponseTimeOtherVehicles{1.0};

const ::ad::physics::Acceleration CheckerControlTest::cMaximumLongitudinalAcceleration{1.5};
const ::ad::physics::Acceleration CheckerControlTest::cMinimumLongitudinalBrakingDeceleleration{-6};
const ::ad::physics::Acceleration CheckerControlTest::cMaximumLongitudinalBrakingDeceleleration{-8};
const ::ad::physics::Acceleration CheckerControlTest::cMinimumLongitudinalBrakingDecelelerationCorrect{-5};

const ::ad::physics::Acceleration CheckerControlTest::cMaximumLateralAcceleration{0.2};
const ::ad::physics::Acceleration CheckerControlTest::cMinimumLateralBrakingDeceleleration{-0.8};

CheckerControlTest::CheckerControlTest()
{
  mRestrictSpeedLimitMode = ::ad::rss::map::RssRestrictSpeedLimitMode::None;
  mPedestrianWorldModelCreationMode = ::ad::rss::map::RssConstellationCreationMode::Unstructured;
  mVehicleWorldModelCreationMode = ::ad::rss::map::RssConstellationCreationMode::Structured;
  mArtificialObjectWorldModelCreationMode = ::ad::rss::map::RssConstellationCreationMode::Unstructured;
  mArtificialPedestrianWorldModelCreationMode = ::ad::rss::map::RssConstellationCreationMode::Unstructured;
  mArtificialVehicleWorldModelCreationMode = ::ad::rss::map::RssConstellationCreationMode::Structured;

  using namespace std::placeholders;
  registerDefaultRssDynamicsCallback(::ad::rss::world::ObjectType::Pedestrian,
                                     std::bind(&CheckerControlTest::defaultPedestrianRssDynamicsCallback, this, _1));
  registerDefaultRssDynamicsCallback(::ad::rss::world::ObjectType::ArtificialPedestrian,
                                     std::bind(&CheckerControlTest::defaultPedestrianRssDynamicsCallback, this, _1));
  registerDefaultRssDynamicsCallback(::ad::rss::world::ObjectType::OtherVehicle,
                                     std::bind(&CheckerControlTest::defaultOtherVehicleRssDynamicsCallback, this, _1));
  registerDefaultRssDynamicsCallback(::ad::rss::world::ObjectType::ArtificialVehicle,
                                     std::bind(&CheckerControlTest::defaultOtherVehicleRssDynamicsCallback, this, _1));
  registerDefaultRssDynamicsCallback(::ad::rss::world::ObjectType::EgoVehicle,
                                     std::bind(&CheckerControlTest::defaultEgoVehicleRssDynamicsCallback, this, _1));
  registerVehicleConstellationCallback(
    std::bind(&CheckerControlTest::vehicleConstellationCallback, this, _1, _2, _3, _4, _5));
  registerPedestrianConstellationCallback(
    std::bind(&CheckerControlTest::pedestrianConstellationCallback, this, _1, _2, _3, _4, _5));
  registerArtificialObjectConstellationCallback(
    std::bind(&CheckerControlTest::artificialObjectConstellationCallback, this, _1, _2, _3, _4));

  // allow 100m jumps
  setPositionJumpTraveledDistance(ad::physics::Distance(100.));
}

::ad::rss::world::UnstructuredSettings CheckerControlTest::getUnstructuredSettings()
{
  ::ad::rss::world::UnstructuredSettings unstructured_settings;
  unstructured_settings.pedestrian_turning_radius = ad::physics::Distance(2.0);
  unstructured_settings.drive_away_max_angle = ad::physics::Angle(2.4);
  unstructured_settings.vehicle_yaw_rate_change = ad::physics::AngularAcceleration(0.3);
  unstructured_settings.vehicle_min_radius = ad::physics::Distance(3.5);
  unstructured_settings.vehicle_trajectory_calculation_step = ad::physics::Duration(0.2);
  unstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps = 8;
  unstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps = 0;
  unstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps = 8;
  unstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps = 0;
  unstructured_settings.vehicle_brake_intermediate_acceleration_steps = 1;
  return unstructured_settings;
}

::ad::rss::world::RssDynamics
CheckerControlTest::getObjectVehicleDynamics(::ad::physics::Speed const max_speed_on_acceleration)
{
  ::ad::rss::world::RssDynamics result;
  result.alpha_lat.accel_max = cMaximumLateralAcceleration;
  result.alpha_lat.brake_min = cMinimumLateralBrakingDeceleleration;

  result.alpha_lon.accel_max = cMaximumLongitudinalAcceleration;
  result.alpha_lon.brake_min_correct = cMinimumLongitudinalBrakingDecelelerationCorrect;
  result.alpha_lon.brake_min = cMinimumLongitudinalBrakingDeceleleration;
  result.alpha_lon.brake_max = cMaximumLongitudinalBrakingDeceleleration;

  result.lateral_fluctuation_margin = ::ad::physics::Distance(0.1);
  result.min_longitudinal_safety_distance = ::ad::physics::Distance(0);

  result.response_time = cResponseTimeOtherVehicles;
  result.max_speed_on_acceleration = max_speed_on_acceleration;

  result.unstructured_settings = getUnstructuredSettings();

  return result;
}

::ad::rss::world::RssDynamics
CheckerControlTest::getEgoVehicleDynamics(::ad::physics::Speed const max_speed_on_acceleration)
{
  ::ad::rss::world::RssDynamics result;
  result.alpha_lat.accel_max = cMaximumLateralAcceleration;
  result.alpha_lat.brake_min = cMinimumLateralBrakingDeceleleration;

  result.alpha_lon.accel_max = cMaximumLongitudinalAcceleration;
  result.alpha_lon.brake_min_correct = cMinimumLongitudinalBrakingDecelelerationCorrect;
  result.alpha_lon.brake_min = cMinimumLongitudinalBrakingDeceleleration;
  result.alpha_lon.brake_max = cMaximumLongitudinalBrakingDeceleleration;

  result.lateral_fluctuation_margin = ::ad::physics::Distance(0.1);
  result.min_longitudinal_safety_distance = ::ad::physics::Distance(0);

  result.response_time = cResponseTimeEgoVehicle;
  result.max_speed_on_acceleration = max_speed_on_acceleration;

  result.unstructured_settings = getUnstructuredSettings();

  return result;
}

} // namespace test_support
} // namespace map
} // namespace rss
} // namespace ad
