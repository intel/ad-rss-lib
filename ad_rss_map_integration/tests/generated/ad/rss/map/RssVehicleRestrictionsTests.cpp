/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2022 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/*
 * Generated file
 */

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wself-assign-overloaded"
#endif

#include <gtest/gtest.h>
#include <limits>
#include "ad/rss/map/RssVehicleRestrictions.hpp"

class RssVehicleRestrictionsTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::map::RssVehicleRestrictions value;
    ::ad::rss::map::RouteAccelerations valueRoute_accelerations;
    ::ad::rss::map::RssRouteId valueRoute_accelerationsRoute_id(
      std::numeric_limits<::ad::rss::map::RssRouteId>::lowest());
    valueRoute_accelerations.route_id = valueRoute_accelerationsRoute_id;
    ::ad::map::point::ENUHeading valueRoute_accelerationsRoute_heading(-3.141592655);
    valueRoute_accelerations.route_heading = valueRoute_accelerationsRoute_heading;
    ::ad::physics::Distance valueRoute_accelerationsRoute_radius(-1e9);
    valueRoute_accelerations.route_radius = valueRoute_accelerationsRoute_radius;
    ::ad::physics::Speed valueRoute_accelerationsRoute_speed_lon(-100.);
    valueRoute_accelerations.route_speed_lon = valueRoute_accelerationsRoute_speed_lon;
    ::ad::physics::Speed valueRoute_accelerationsRoute_speed_lat(-100.);
    valueRoute_accelerations.route_speed_lat = valueRoute_accelerationsRoute_speed_lat;
    ::ad::physics::Angle valueRoute_accelerationsRoute_heading_delta(-6.283185308);
    valueRoute_accelerations.route_heading_delta = valueRoute_accelerationsRoute_heading_delta;
    ::ad::physics::Acceleration valueRoute_accelerationsRoute_centripetal_acceleration(-1e2);
    valueRoute_accelerations.route_centripetal_acceleration = valueRoute_accelerationsRoute_centripetal_acceleration;
    value.route_accelerations = valueRoute_accelerations;
    ::ad::rss::map::RssVehicleAccelerationRestrictions valueVehicle_acceleration_restrictions;
    ::ad::physics::AccelerationRange valueVehicle_acceleration_restrictionsLongitudinal_range;
    ::ad::physics::Acceleration valueVehicle_acceleration_restrictionsLongitudinal_rangeMinimum(-1e2);
    valueVehicle_acceleration_restrictionsLongitudinal_range.minimum
      = valueVehicle_acceleration_restrictionsLongitudinal_rangeMinimum;
    ::ad::physics::Acceleration valueVehicle_acceleration_restrictionsLongitudinal_rangeMaximum(-1e2);
    valueVehicle_acceleration_restrictionsLongitudinal_range.maximum
      = valueVehicle_acceleration_restrictionsLongitudinal_rangeMaximum;
    valueVehicle_acceleration_restrictionsLongitudinal_range.maximum
      = valueVehicle_acceleration_restrictionsLongitudinal_range.minimum;
    valueVehicle_acceleration_restrictionsLongitudinal_range.minimum
      = valueVehicle_acceleration_restrictionsLongitudinal_range.maximum;
    valueVehicle_acceleration_restrictions.longitudinal_range
      = valueVehicle_acceleration_restrictionsLongitudinal_range;
    ::ad::physics::AccelerationRange valueVehicle_acceleration_restrictionsLateral_combined_range;
    ::ad::physics::Acceleration valueVehicle_acceleration_restrictionsLateral_combined_rangeMinimum(-1e2);
    valueVehicle_acceleration_restrictionsLateral_combined_range.minimum
      = valueVehicle_acceleration_restrictionsLateral_combined_rangeMinimum;
    ::ad::physics::Acceleration valueVehicle_acceleration_restrictionsLateral_combined_rangeMaximum(-1e2);
    valueVehicle_acceleration_restrictionsLateral_combined_range.maximum
      = valueVehicle_acceleration_restrictionsLateral_combined_rangeMaximum;
    valueVehicle_acceleration_restrictionsLateral_combined_range.maximum
      = valueVehicle_acceleration_restrictionsLateral_combined_range.minimum;
    valueVehicle_acceleration_restrictionsLateral_combined_range.minimum
      = valueVehicle_acceleration_restrictionsLateral_combined_range.maximum;
    valueVehicle_acceleration_restrictions.lateral_combined_range
      = valueVehicle_acceleration_restrictionsLateral_combined_range;
    value.vehicle_acceleration_restrictions = valueVehicle_acceleration_restrictions;
    mValue = value;
  }

  ::ad::rss::map::RssVehicleRestrictions mValue;
};

TEST_F(RssVehicleRestrictionsTests, copyConstruction)
{
  ::ad::rss::map::RssVehicleRestrictions value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssVehicleRestrictionsTests, moveConstruction)
{
  ::ad::rss::map::RssVehicleRestrictions tmpValue(mValue);
  ::ad::rss::map::RssVehicleRestrictions value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssVehicleRestrictionsTests, copyAssignment)
{
  ::ad::rss::map::RssVehicleRestrictions value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RssVehicleRestrictionsTests, moveAssignment)
{
  ::ad::rss::map::RssVehicleRestrictions tmpValue(mValue);
  ::ad::rss::map::RssVehicleRestrictions value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssVehicleRestrictionsTests, comparisonOperatorEqual)
{
  ::ad::rss::map::RssVehicleRestrictions valueA = mValue;
  ::ad::rss::map::RssVehicleRestrictions valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RssVehicleRestrictionsTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(RssVehicleRestrictionsTests, comparisonOperatorRoute_accelerationsDiffers)
{
  ::ad::rss::map::RssVehicleRestrictions valueA = mValue;
  ::ad::rss::map::RouteAccelerations route_accelerations;
  ::ad::rss::map::RssRouteId route_accelerationsRoute_id(std::numeric_limits<::ad::rss::map::RssRouteId>::max());
  route_accelerations.route_id = route_accelerationsRoute_id;
  ::ad::map::point::ENUHeading route_accelerationsRoute_heading(3.141592655);
  route_accelerations.route_heading = route_accelerationsRoute_heading;
  ::ad::physics::Distance route_accelerationsRoute_radius(1e9);
  route_accelerations.route_radius = route_accelerationsRoute_radius;
  ::ad::physics::Speed route_accelerationsRoute_speed_lon(100.);
  route_accelerations.route_speed_lon = route_accelerationsRoute_speed_lon;
  ::ad::physics::Speed route_accelerationsRoute_speed_lat(100.);
  route_accelerations.route_speed_lat = route_accelerationsRoute_speed_lat;
  ::ad::physics::Angle route_accelerationsRoute_heading_delta(6.283185308);
  route_accelerations.route_heading_delta = route_accelerationsRoute_heading_delta;
  ::ad::physics::Acceleration route_accelerationsRoute_centripetal_acceleration(1e2);
  route_accelerations.route_centripetal_acceleration = route_accelerationsRoute_centripetal_acceleration;
  valueA.route_accelerations = route_accelerations;
  ::ad::rss::map::RssVehicleRestrictions valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssVehicleRestrictionsTests, comparisonOperatorVehicle_acceleration_restrictionsDiffers)
{
  ::ad::rss::map::RssVehicleRestrictions valueA = mValue;
  ::ad::rss::map::RssVehicleAccelerationRestrictions vehicle_acceleration_restrictions;
  ::ad::physics::AccelerationRange vehicle_acceleration_restrictionsLongitudinal_range;
  ::ad::physics::Acceleration vehicle_acceleration_restrictionsLongitudinal_rangeMinimum(1e2);
  vehicle_acceleration_restrictionsLongitudinal_range.minimum
    = vehicle_acceleration_restrictionsLongitudinal_rangeMinimum;
  ::ad::physics::Acceleration vehicle_acceleration_restrictionsLongitudinal_rangeMaximum(1e2);
  vehicle_acceleration_restrictionsLongitudinal_range.maximum
    = vehicle_acceleration_restrictionsLongitudinal_rangeMaximum;
  vehicle_acceleration_restrictionsLongitudinal_range.maximum
    = vehicle_acceleration_restrictionsLongitudinal_range.minimum;
  vehicle_acceleration_restrictionsLongitudinal_range.minimum
    = vehicle_acceleration_restrictionsLongitudinal_range.maximum;
  vehicle_acceleration_restrictions.longitudinal_range = vehicle_acceleration_restrictionsLongitudinal_range;
  ::ad::physics::AccelerationRange vehicle_acceleration_restrictionsLateral_combined_range;
  ::ad::physics::Acceleration vehicle_acceleration_restrictionsLateral_combined_rangeMinimum(1e2);
  vehicle_acceleration_restrictionsLateral_combined_range.minimum
    = vehicle_acceleration_restrictionsLateral_combined_rangeMinimum;
  ::ad::physics::Acceleration vehicle_acceleration_restrictionsLateral_combined_rangeMaximum(1e2);
  vehicle_acceleration_restrictionsLateral_combined_range.maximum
    = vehicle_acceleration_restrictionsLateral_combined_rangeMaximum;
  vehicle_acceleration_restrictionsLateral_combined_range.maximum
    = vehicle_acceleration_restrictionsLateral_combined_range.minimum;
  vehicle_acceleration_restrictionsLateral_combined_range.minimum
    = vehicle_acceleration_restrictionsLateral_combined_range.maximum;
  vehicle_acceleration_restrictions.lateral_combined_range = vehicle_acceleration_restrictionsLateral_combined_range;
  valueA.vehicle_acceleration_restrictions = vehicle_acceleration_restrictions;
  ::ad::rss::map::RssVehicleRestrictions valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
