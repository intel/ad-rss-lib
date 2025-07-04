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

#include <gtest/gtest.h>

#include <limits>

#include "ad/rss/map/RssVehicleRestrictionsValidInputRange.hpp"

TEST(RssVehicleRestrictionsValidInputRangeTests, testValidInputRange)
{
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
  valueVehicle_acceleration_restrictions.longitudinal_range = valueVehicle_acceleration_restrictionsLongitudinal_range;
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
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssVehicleRestrictionsValidInputRangeTests, testValidInputRangeRoute_accelerationsTooSmall)
{
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
  valueVehicle_acceleration_restrictions.longitudinal_range = valueVehicle_acceleration_restrictionsLongitudinal_range;
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

  // override member with data type value below input range minimum
  ::ad::rss::map::RouteAccelerations invalidInitializedMember;
  ::ad::map::point::ENUHeading invalidInitializedMemberRoute_heading(-3.141592655 * 1.1);
  invalidInitializedMember.route_heading = invalidInitializedMemberRoute_heading;
  value.route_accelerations = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssVehicleRestrictionsValidInputRangeTests, testValidInputRangeRoute_accelerationsTooBig)
{
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
  valueVehicle_acceleration_restrictions.longitudinal_range = valueVehicle_acceleration_restrictionsLongitudinal_range;
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

  // override member with data type value above input range maximum
  ::ad::rss::map::RouteAccelerations invalidInitializedMember;
  ::ad::map::point::ENUHeading invalidInitializedMemberRoute_heading(3.141592655 * 1.1);
  invalidInitializedMember.route_heading = invalidInitializedMemberRoute_heading;
  value.route_accelerations = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssVehicleRestrictionsValidInputRangeTests, testValidInputRangeVehicle_acceleration_restrictionsTooSmall)
{
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
  valueVehicle_acceleration_restrictions.longitudinal_range = valueVehicle_acceleration_restrictionsLongitudinal_range;
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

  // override member with data type value below input range minimum
  ::ad::rss::map::RssVehicleAccelerationRestrictions invalidInitializedMember;
  ::ad::physics::AccelerationRange invalidInitializedMemberLongitudinal_range;
  ::ad::physics::Acceleration invalidInitializedMemberLongitudinal_rangeMinimum(-1e2 * 1.1);
  invalidInitializedMemberLongitudinal_range.minimum = invalidInitializedMemberLongitudinal_rangeMinimum;
  invalidInitializedMember.longitudinal_range = invalidInitializedMemberLongitudinal_range;
  value.vehicle_acceleration_restrictions = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssVehicleRestrictionsValidInputRangeTests, testValidInputRangeVehicle_acceleration_restrictionsTooBig)
{
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
  valueVehicle_acceleration_restrictions.longitudinal_range = valueVehicle_acceleration_restrictionsLongitudinal_range;
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

  // override member with data type value above input range maximum
  ::ad::rss::map::RssVehicleAccelerationRestrictions invalidInitializedMember;
  ::ad::physics::AccelerationRange invalidInitializedMemberLongitudinal_range;
  ::ad::physics::Acceleration invalidInitializedMemberLongitudinal_rangeMinimum(1e2 * 1.1);
  invalidInitializedMemberLongitudinal_range.minimum = invalidInitializedMemberLongitudinal_rangeMinimum;
  invalidInitializedMember.longitudinal_range = invalidInitializedMemberLongitudinal_range;
  value.vehicle_acceleration_restrictions = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
