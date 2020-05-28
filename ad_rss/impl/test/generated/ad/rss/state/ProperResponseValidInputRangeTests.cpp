/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
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

#include "ad/rss/state/ProperResponseValidInputRange.hpp"

TEST(ProperResponseValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::state::ProperResponse value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::world::ObjectIdVector valueDangerousObjects;
  ::ad::rss::world::ObjectId valueDangerousObjectsElement(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueDangerousObjects.resize(1, valueDangerousObjectsElement);
  value.dangerousObjects = valueDangerousObjects;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalResponse(::ad::rss::state::LongitudinalResponse::None);
  value.longitudinalResponse = valueLongitudinalResponse;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ::ad::rss::state::HeadingRange valueHeadingRange;
  ::ad::physics::AngleRange valueHeadingRangeOuterRange;
  ::ad::physics::Angle valueHeadingRangeOuterRangeMinimum(-6.283185308);
  valueHeadingRangeOuterRange.minimum = valueHeadingRangeOuterRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeOuterRangeMaximum(-6.283185308);
  valueHeadingRangeOuterRange.maximum = valueHeadingRangeOuterRangeMaximum;
  valueHeadingRange.outerRange = valueHeadingRangeOuterRange;
  ::ad::physics::AngleRange valueHeadingRangeInnerRange;
  ::ad::physics::Angle valueHeadingRangeInnerRangeMinimum(-6.283185308);
  valueHeadingRangeInnerRange.minimum = valueHeadingRangeInnerRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeInnerRangeMaximum(-6.283185308);
  valueHeadingRangeInnerRange.maximum = valueHeadingRangeInnerRangeMaximum;
  valueHeadingRange.innerRange = valueHeadingRangeInnerRange;
  value.headingRange = valueHeadingRange;
  ::ad::rss::state::AccelerationRestriction valueAccelerationRestrictions;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLateralLeftRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralLeftRangeMinimum(-1e2);
  valueAccelerationRestrictionsLateralLeftRange.minimum = valueAccelerationRestrictionsLateralLeftRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralLeftRangeMaximum(-1e2);
  valueAccelerationRestrictionsLateralLeftRange.maximum = valueAccelerationRestrictionsLateralLeftRangeMaximum;
  valueAccelerationRestrictionsLateralLeftRange.maximum = valueAccelerationRestrictionsLateralLeftRange.minimum;
  valueAccelerationRestrictionsLateralLeftRange.minimum = valueAccelerationRestrictionsLateralLeftRange.maximum;
  valueAccelerationRestrictions.lateralLeftRange = valueAccelerationRestrictionsLateralLeftRange;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLongitudinalRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLongitudinalRangeMinimum(-1e2);
  valueAccelerationRestrictionsLongitudinalRange.minimum = valueAccelerationRestrictionsLongitudinalRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLongitudinalRangeMaximum(-1e2);
  valueAccelerationRestrictionsLongitudinalRange.maximum = valueAccelerationRestrictionsLongitudinalRangeMaximum;
  valueAccelerationRestrictionsLongitudinalRange.maximum = valueAccelerationRestrictionsLongitudinalRange.minimum;
  valueAccelerationRestrictionsLongitudinalRange.minimum = valueAccelerationRestrictionsLongitudinalRange.maximum;
  valueAccelerationRestrictions.longitudinalRange = valueAccelerationRestrictionsLongitudinalRange;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLateralRightRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralRightRangeMinimum(-1e2);
  valueAccelerationRestrictionsLateralRightRange.minimum = valueAccelerationRestrictionsLateralRightRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralRightRangeMaximum(-1e2);
  valueAccelerationRestrictionsLateralRightRange.maximum = valueAccelerationRestrictionsLateralRightRangeMaximum;
  valueAccelerationRestrictionsLateralRightRange.maximum = valueAccelerationRestrictionsLateralRightRange.minimum;
  valueAccelerationRestrictionsLateralRightRange.minimum = valueAccelerationRestrictionsLateralRightRange.maximum;
  valueAccelerationRestrictions.lateralRightRange = valueAccelerationRestrictionsLateralRightRange;
  value.accelerationRestrictions = valueAccelerationRestrictions;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeLongitudinalResponseTooSmall)
{
  ::ad::rss::state::ProperResponse value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::world::ObjectIdVector valueDangerousObjects;
  ::ad::rss::world::ObjectId valueDangerousObjectsElement(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueDangerousObjects.resize(1, valueDangerousObjectsElement);
  value.dangerousObjects = valueDangerousObjects;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalResponse(::ad::rss::state::LongitudinalResponse::None);
  value.longitudinalResponse = valueLongitudinalResponse;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ::ad::rss::state::HeadingRange valueHeadingRange;
  ::ad::physics::AngleRange valueHeadingRangeOuterRange;
  ::ad::physics::Angle valueHeadingRangeOuterRangeMinimum(-6.283185308);
  valueHeadingRangeOuterRange.minimum = valueHeadingRangeOuterRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeOuterRangeMaximum(-6.283185308);
  valueHeadingRangeOuterRange.maximum = valueHeadingRangeOuterRangeMaximum;
  valueHeadingRange.outerRange = valueHeadingRangeOuterRange;
  ::ad::physics::AngleRange valueHeadingRangeInnerRange;
  ::ad::physics::Angle valueHeadingRangeInnerRangeMinimum(-6.283185308);
  valueHeadingRangeInnerRange.minimum = valueHeadingRangeInnerRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeInnerRangeMaximum(-6.283185308);
  valueHeadingRangeInnerRange.maximum = valueHeadingRangeInnerRangeMaximum;
  valueHeadingRange.innerRange = valueHeadingRangeInnerRange;
  value.headingRange = valueHeadingRange;
  ::ad::rss::state::AccelerationRestriction valueAccelerationRestrictions;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLateralLeftRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralLeftRangeMinimum(-1e2);
  valueAccelerationRestrictionsLateralLeftRange.minimum = valueAccelerationRestrictionsLateralLeftRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralLeftRangeMaximum(-1e2);
  valueAccelerationRestrictionsLateralLeftRange.maximum = valueAccelerationRestrictionsLateralLeftRangeMaximum;
  valueAccelerationRestrictionsLateralLeftRange.maximum = valueAccelerationRestrictionsLateralLeftRange.minimum;
  valueAccelerationRestrictionsLateralLeftRange.minimum = valueAccelerationRestrictionsLateralLeftRange.maximum;
  valueAccelerationRestrictions.lateralLeftRange = valueAccelerationRestrictionsLateralLeftRange;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLongitudinalRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLongitudinalRangeMinimum(-1e2);
  valueAccelerationRestrictionsLongitudinalRange.minimum = valueAccelerationRestrictionsLongitudinalRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLongitudinalRangeMaximum(-1e2);
  valueAccelerationRestrictionsLongitudinalRange.maximum = valueAccelerationRestrictionsLongitudinalRangeMaximum;
  valueAccelerationRestrictionsLongitudinalRange.maximum = valueAccelerationRestrictionsLongitudinalRange.minimum;
  valueAccelerationRestrictionsLongitudinalRange.minimum = valueAccelerationRestrictionsLongitudinalRange.maximum;
  valueAccelerationRestrictions.longitudinalRange = valueAccelerationRestrictionsLongitudinalRange;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLateralRightRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralRightRangeMinimum(-1e2);
  valueAccelerationRestrictionsLateralRightRange.minimum = valueAccelerationRestrictionsLateralRightRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralRightRangeMaximum(-1e2);
  valueAccelerationRestrictionsLateralRightRange.maximum = valueAccelerationRestrictionsLateralRightRangeMaximum;
  valueAccelerationRestrictionsLateralRightRange.maximum = valueAccelerationRestrictionsLateralRightRange.minimum;
  valueAccelerationRestrictionsLateralRightRange.minimum = valueAccelerationRestrictionsLateralRightRange.maximum;
  valueAccelerationRestrictions.lateralRightRange = valueAccelerationRestrictionsLateralRightRange;
  value.accelerationRestrictions = valueAccelerationRestrictions;

  // override member with data type value below input range minimum
  ::ad::rss::state::LongitudinalResponse invalidInitializedMember(
    static_cast<::ad::rss::state::LongitudinalResponse>(-1));
  value.longitudinalResponse = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeLongitudinalResponseTooBig)
{
  ::ad::rss::state::ProperResponse value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::world::ObjectIdVector valueDangerousObjects;
  ::ad::rss::world::ObjectId valueDangerousObjectsElement(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueDangerousObjects.resize(1, valueDangerousObjectsElement);
  value.dangerousObjects = valueDangerousObjects;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalResponse(::ad::rss::state::LongitudinalResponse::None);
  value.longitudinalResponse = valueLongitudinalResponse;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ::ad::rss::state::HeadingRange valueHeadingRange;
  ::ad::physics::AngleRange valueHeadingRangeOuterRange;
  ::ad::physics::Angle valueHeadingRangeOuterRangeMinimum(-6.283185308);
  valueHeadingRangeOuterRange.minimum = valueHeadingRangeOuterRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeOuterRangeMaximum(-6.283185308);
  valueHeadingRangeOuterRange.maximum = valueHeadingRangeOuterRangeMaximum;
  valueHeadingRange.outerRange = valueHeadingRangeOuterRange;
  ::ad::physics::AngleRange valueHeadingRangeInnerRange;
  ::ad::physics::Angle valueHeadingRangeInnerRangeMinimum(-6.283185308);
  valueHeadingRangeInnerRange.minimum = valueHeadingRangeInnerRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeInnerRangeMaximum(-6.283185308);
  valueHeadingRangeInnerRange.maximum = valueHeadingRangeInnerRangeMaximum;
  valueHeadingRange.innerRange = valueHeadingRangeInnerRange;
  value.headingRange = valueHeadingRange;
  ::ad::rss::state::AccelerationRestriction valueAccelerationRestrictions;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLateralLeftRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralLeftRangeMinimum(-1e2);
  valueAccelerationRestrictionsLateralLeftRange.minimum = valueAccelerationRestrictionsLateralLeftRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralLeftRangeMaximum(-1e2);
  valueAccelerationRestrictionsLateralLeftRange.maximum = valueAccelerationRestrictionsLateralLeftRangeMaximum;
  valueAccelerationRestrictionsLateralLeftRange.maximum = valueAccelerationRestrictionsLateralLeftRange.minimum;
  valueAccelerationRestrictionsLateralLeftRange.minimum = valueAccelerationRestrictionsLateralLeftRange.maximum;
  valueAccelerationRestrictions.lateralLeftRange = valueAccelerationRestrictionsLateralLeftRange;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLongitudinalRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLongitudinalRangeMinimum(-1e2);
  valueAccelerationRestrictionsLongitudinalRange.minimum = valueAccelerationRestrictionsLongitudinalRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLongitudinalRangeMaximum(-1e2);
  valueAccelerationRestrictionsLongitudinalRange.maximum = valueAccelerationRestrictionsLongitudinalRangeMaximum;
  valueAccelerationRestrictionsLongitudinalRange.maximum = valueAccelerationRestrictionsLongitudinalRange.minimum;
  valueAccelerationRestrictionsLongitudinalRange.minimum = valueAccelerationRestrictionsLongitudinalRange.maximum;
  valueAccelerationRestrictions.longitudinalRange = valueAccelerationRestrictionsLongitudinalRange;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLateralRightRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralRightRangeMinimum(-1e2);
  valueAccelerationRestrictionsLateralRightRange.minimum = valueAccelerationRestrictionsLateralRightRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralRightRangeMaximum(-1e2);
  valueAccelerationRestrictionsLateralRightRange.maximum = valueAccelerationRestrictionsLateralRightRangeMaximum;
  valueAccelerationRestrictionsLateralRightRange.maximum = valueAccelerationRestrictionsLateralRightRange.minimum;
  valueAccelerationRestrictionsLateralRightRange.minimum = valueAccelerationRestrictionsLateralRightRange.maximum;
  valueAccelerationRestrictions.lateralRightRange = valueAccelerationRestrictionsLateralRightRange;
  value.accelerationRestrictions = valueAccelerationRestrictions;

  // override member with data type value above input range maximum
  ::ad::rss::state::LongitudinalResponse invalidInitializedMember(
    static_cast<::ad::rss::state::LongitudinalResponse>(-1));
  value.longitudinalResponse = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeLateralResponseRightTooSmall)
{
  ::ad::rss::state::ProperResponse value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::world::ObjectIdVector valueDangerousObjects;
  ::ad::rss::world::ObjectId valueDangerousObjectsElement(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueDangerousObjects.resize(1, valueDangerousObjectsElement);
  value.dangerousObjects = valueDangerousObjects;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalResponse(::ad::rss::state::LongitudinalResponse::None);
  value.longitudinalResponse = valueLongitudinalResponse;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ::ad::rss::state::HeadingRange valueHeadingRange;
  ::ad::physics::AngleRange valueHeadingRangeOuterRange;
  ::ad::physics::Angle valueHeadingRangeOuterRangeMinimum(-6.283185308);
  valueHeadingRangeOuterRange.minimum = valueHeadingRangeOuterRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeOuterRangeMaximum(-6.283185308);
  valueHeadingRangeOuterRange.maximum = valueHeadingRangeOuterRangeMaximum;
  valueHeadingRange.outerRange = valueHeadingRangeOuterRange;
  ::ad::physics::AngleRange valueHeadingRangeInnerRange;
  ::ad::physics::Angle valueHeadingRangeInnerRangeMinimum(-6.283185308);
  valueHeadingRangeInnerRange.minimum = valueHeadingRangeInnerRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeInnerRangeMaximum(-6.283185308);
  valueHeadingRangeInnerRange.maximum = valueHeadingRangeInnerRangeMaximum;
  valueHeadingRange.innerRange = valueHeadingRangeInnerRange;
  value.headingRange = valueHeadingRange;
  ::ad::rss::state::AccelerationRestriction valueAccelerationRestrictions;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLateralLeftRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralLeftRangeMinimum(-1e2);
  valueAccelerationRestrictionsLateralLeftRange.minimum = valueAccelerationRestrictionsLateralLeftRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralLeftRangeMaximum(-1e2);
  valueAccelerationRestrictionsLateralLeftRange.maximum = valueAccelerationRestrictionsLateralLeftRangeMaximum;
  valueAccelerationRestrictionsLateralLeftRange.maximum = valueAccelerationRestrictionsLateralLeftRange.minimum;
  valueAccelerationRestrictionsLateralLeftRange.minimum = valueAccelerationRestrictionsLateralLeftRange.maximum;
  valueAccelerationRestrictions.lateralLeftRange = valueAccelerationRestrictionsLateralLeftRange;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLongitudinalRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLongitudinalRangeMinimum(-1e2);
  valueAccelerationRestrictionsLongitudinalRange.minimum = valueAccelerationRestrictionsLongitudinalRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLongitudinalRangeMaximum(-1e2);
  valueAccelerationRestrictionsLongitudinalRange.maximum = valueAccelerationRestrictionsLongitudinalRangeMaximum;
  valueAccelerationRestrictionsLongitudinalRange.maximum = valueAccelerationRestrictionsLongitudinalRange.minimum;
  valueAccelerationRestrictionsLongitudinalRange.minimum = valueAccelerationRestrictionsLongitudinalRange.maximum;
  valueAccelerationRestrictions.longitudinalRange = valueAccelerationRestrictionsLongitudinalRange;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLateralRightRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralRightRangeMinimum(-1e2);
  valueAccelerationRestrictionsLateralRightRange.minimum = valueAccelerationRestrictionsLateralRightRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralRightRangeMaximum(-1e2);
  valueAccelerationRestrictionsLateralRightRange.maximum = valueAccelerationRestrictionsLateralRightRangeMaximum;
  valueAccelerationRestrictionsLateralRightRange.maximum = valueAccelerationRestrictionsLateralRightRange.minimum;
  valueAccelerationRestrictionsLateralRightRange.minimum = valueAccelerationRestrictionsLateralRightRange.maximum;
  valueAccelerationRestrictions.lateralRightRange = valueAccelerationRestrictionsLateralRightRange;
  value.accelerationRestrictions = valueAccelerationRestrictions;

  // override member with data type value below input range minimum
  ::ad::rss::state::LateralResponse invalidInitializedMember(static_cast<::ad::rss::state::LateralResponse>(-1));
  value.lateralResponseRight = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeLateralResponseRightTooBig)
{
  ::ad::rss::state::ProperResponse value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::world::ObjectIdVector valueDangerousObjects;
  ::ad::rss::world::ObjectId valueDangerousObjectsElement(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueDangerousObjects.resize(1, valueDangerousObjectsElement);
  value.dangerousObjects = valueDangerousObjects;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalResponse(::ad::rss::state::LongitudinalResponse::None);
  value.longitudinalResponse = valueLongitudinalResponse;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ::ad::rss::state::HeadingRange valueHeadingRange;
  ::ad::physics::AngleRange valueHeadingRangeOuterRange;
  ::ad::physics::Angle valueHeadingRangeOuterRangeMinimum(-6.283185308);
  valueHeadingRangeOuterRange.minimum = valueHeadingRangeOuterRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeOuterRangeMaximum(-6.283185308);
  valueHeadingRangeOuterRange.maximum = valueHeadingRangeOuterRangeMaximum;
  valueHeadingRange.outerRange = valueHeadingRangeOuterRange;
  ::ad::physics::AngleRange valueHeadingRangeInnerRange;
  ::ad::physics::Angle valueHeadingRangeInnerRangeMinimum(-6.283185308);
  valueHeadingRangeInnerRange.minimum = valueHeadingRangeInnerRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeInnerRangeMaximum(-6.283185308);
  valueHeadingRangeInnerRange.maximum = valueHeadingRangeInnerRangeMaximum;
  valueHeadingRange.innerRange = valueHeadingRangeInnerRange;
  value.headingRange = valueHeadingRange;
  ::ad::rss::state::AccelerationRestriction valueAccelerationRestrictions;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLateralLeftRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralLeftRangeMinimum(-1e2);
  valueAccelerationRestrictionsLateralLeftRange.minimum = valueAccelerationRestrictionsLateralLeftRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralLeftRangeMaximum(-1e2);
  valueAccelerationRestrictionsLateralLeftRange.maximum = valueAccelerationRestrictionsLateralLeftRangeMaximum;
  valueAccelerationRestrictionsLateralLeftRange.maximum = valueAccelerationRestrictionsLateralLeftRange.minimum;
  valueAccelerationRestrictionsLateralLeftRange.minimum = valueAccelerationRestrictionsLateralLeftRange.maximum;
  valueAccelerationRestrictions.lateralLeftRange = valueAccelerationRestrictionsLateralLeftRange;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLongitudinalRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLongitudinalRangeMinimum(-1e2);
  valueAccelerationRestrictionsLongitudinalRange.minimum = valueAccelerationRestrictionsLongitudinalRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLongitudinalRangeMaximum(-1e2);
  valueAccelerationRestrictionsLongitudinalRange.maximum = valueAccelerationRestrictionsLongitudinalRangeMaximum;
  valueAccelerationRestrictionsLongitudinalRange.maximum = valueAccelerationRestrictionsLongitudinalRange.minimum;
  valueAccelerationRestrictionsLongitudinalRange.minimum = valueAccelerationRestrictionsLongitudinalRange.maximum;
  valueAccelerationRestrictions.longitudinalRange = valueAccelerationRestrictionsLongitudinalRange;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLateralRightRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralRightRangeMinimum(-1e2);
  valueAccelerationRestrictionsLateralRightRange.minimum = valueAccelerationRestrictionsLateralRightRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralRightRangeMaximum(-1e2);
  valueAccelerationRestrictionsLateralRightRange.maximum = valueAccelerationRestrictionsLateralRightRangeMaximum;
  valueAccelerationRestrictionsLateralRightRange.maximum = valueAccelerationRestrictionsLateralRightRange.minimum;
  valueAccelerationRestrictionsLateralRightRange.minimum = valueAccelerationRestrictionsLateralRightRange.maximum;
  valueAccelerationRestrictions.lateralRightRange = valueAccelerationRestrictionsLateralRightRange;
  value.accelerationRestrictions = valueAccelerationRestrictions;

  // override member with data type value above input range maximum
  ::ad::rss::state::LateralResponse invalidInitializedMember(static_cast<::ad::rss::state::LateralResponse>(-1));
  value.lateralResponseRight = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeLateralResponseLeftTooSmall)
{
  ::ad::rss::state::ProperResponse value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::world::ObjectIdVector valueDangerousObjects;
  ::ad::rss::world::ObjectId valueDangerousObjectsElement(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueDangerousObjects.resize(1, valueDangerousObjectsElement);
  value.dangerousObjects = valueDangerousObjects;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalResponse(::ad::rss::state::LongitudinalResponse::None);
  value.longitudinalResponse = valueLongitudinalResponse;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ::ad::rss::state::HeadingRange valueHeadingRange;
  ::ad::physics::AngleRange valueHeadingRangeOuterRange;
  ::ad::physics::Angle valueHeadingRangeOuterRangeMinimum(-6.283185308);
  valueHeadingRangeOuterRange.minimum = valueHeadingRangeOuterRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeOuterRangeMaximum(-6.283185308);
  valueHeadingRangeOuterRange.maximum = valueHeadingRangeOuterRangeMaximum;
  valueHeadingRange.outerRange = valueHeadingRangeOuterRange;
  ::ad::physics::AngleRange valueHeadingRangeInnerRange;
  ::ad::physics::Angle valueHeadingRangeInnerRangeMinimum(-6.283185308);
  valueHeadingRangeInnerRange.minimum = valueHeadingRangeInnerRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeInnerRangeMaximum(-6.283185308);
  valueHeadingRangeInnerRange.maximum = valueHeadingRangeInnerRangeMaximum;
  valueHeadingRange.innerRange = valueHeadingRangeInnerRange;
  value.headingRange = valueHeadingRange;
  ::ad::rss::state::AccelerationRestriction valueAccelerationRestrictions;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLateralLeftRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralLeftRangeMinimum(-1e2);
  valueAccelerationRestrictionsLateralLeftRange.minimum = valueAccelerationRestrictionsLateralLeftRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralLeftRangeMaximum(-1e2);
  valueAccelerationRestrictionsLateralLeftRange.maximum = valueAccelerationRestrictionsLateralLeftRangeMaximum;
  valueAccelerationRestrictionsLateralLeftRange.maximum = valueAccelerationRestrictionsLateralLeftRange.minimum;
  valueAccelerationRestrictionsLateralLeftRange.minimum = valueAccelerationRestrictionsLateralLeftRange.maximum;
  valueAccelerationRestrictions.lateralLeftRange = valueAccelerationRestrictionsLateralLeftRange;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLongitudinalRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLongitudinalRangeMinimum(-1e2);
  valueAccelerationRestrictionsLongitudinalRange.minimum = valueAccelerationRestrictionsLongitudinalRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLongitudinalRangeMaximum(-1e2);
  valueAccelerationRestrictionsLongitudinalRange.maximum = valueAccelerationRestrictionsLongitudinalRangeMaximum;
  valueAccelerationRestrictionsLongitudinalRange.maximum = valueAccelerationRestrictionsLongitudinalRange.minimum;
  valueAccelerationRestrictionsLongitudinalRange.minimum = valueAccelerationRestrictionsLongitudinalRange.maximum;
  valueAccelerationRestrictions.longitudinalRange = valueAccelerationRestrictionsLongitudinalRange;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLateralRightRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralRightRangeMinimum(-1e2);
  valueAccelerationRestrictionsLateralRightRange.minimum = valueAccelerationRestrictionsLateralRightRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralRightRangeMaximum(-1e2);
  valueAccelerationRestrictionsLateralRightRange.maximum = valueAccelerationRestrictionsLateralRightRangeMaximum;
  valueAccelerationRestrictionsLateralRightRange.maximum = valueAccelerationRestrictionsLateralRightRange.minimum;
  valueAccelerationRestrictionsLateralRightRange.minimum = valueAccelerationRestrictionsLateralRightRange.maximum;
  valueAccelerationRestrictions.lateralRightRange = valueAccelerationRestrictionsLateralRightRange;
  value.accelerationRestrictions = valueAccelerationRestrictions;

  // override member with data type value below input range minimum
  ::ad::rss::state::LateralResponse invalidInitializedMember(static_cast<::ad::rss::state::LateralResponse>(-1));
  value.lateralResponseLeft = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeLateralResponseLeftTooBig)
{
  ::ad::rss::state::ProperResponse value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::world::ObjectIdVector valueDangerousObjects;
  ::ad::rss::world::ObjectId valueDangerousObjectsElement(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueDangerousObjects.resize(1, valueDangerousObjectsElement);
  value.dangerousObjects = valueDangerousObjects;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalResponse(::ad::rss::state::LongitudinalResponse::None);
  value.longitudinalResponse = valueLongitudinalResponse;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ::ad::rss::state::HeadingRange valueHeadingRange;
  ::ad::physics::AngleRange valueHeadingRangeOuterRange;
  ::ad::physics::Angle valueHeadingRangeOuterRangeMinimum(-6.283185308);
  valueHeadingRangeOuterRange.minimum = valueHeadingRangeOuterRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeOuterRangeMaximum(-6.283185308);
  valueHeadingRangeOuterRange.maximum = valueHeadingRangeOuterRangeMaximum;
  valueHeadingRange.outerRange = valueHeadingRangeOuterRange;
  ::ad::physics::AngleRange valueHeadingRangeInnerRange;
  ::ad::physics::Angle valueHeadingRangeInnerRangeMinimum(-6.283185308);
  valueHeadingRangeInnerRange.minimum = valueHeadingRangeInnerRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeInnerRangeMaximum(-6.283185308);
  valueHeadingRangeInnerRange.maximum = valueHeadingRangeInnerRangeMaximum;
  valueHeadingRange.innerRange = valueHeadingRangeInnerRange;
  value.headingRange = valueHeadingRange;
  ::ad::rss::state::AccelerationRestriction valueAccelerationRestrictions;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLateralLeftRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralLeftRangeMinimum(-1e2);
  valueAccelerationRestrictionsLateralLeftRange.minimum = valueAccelerationRestrictionsLateralLeftRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralLeftRangeMaximum(-1e2);
  valueAccelerationRestrictionsLateralLeftRange.maximum = valueAccelerationRestrictionsLateralLeftRangeMaximum;
  valueAccelerationRestrictionsLateralLeftRange.maximum = valueAccelerationRestrictionsLateralLeftRange.minimum;
  valueAccelerationRestrictionsLateralLeftRange.minimum = valueAccelerationRestrictionsLateralLeftRange.maximum;
  valueAccelerationRestrictions.lateralLeftRange = valueAccelerationRestrictionsLateralLeftRange;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLongitudinalRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLongitudinalRangeMinimum(-1e2);
  valueAccelerationRestrictionsLongitudinalRange.minimum = valueAccelerationRestrictionsLongitudinalRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLongitudinalRangeMaximum(-1e2);
  valueAccelerationRestrictionsLongitudinalRange.maximum = valueAccelerationRestrictionsLongitudinalRangeMaximum;
  valueAccelerationRestrictionsLongitudinalRange.maximum = valueAccelerationRestrictionsLongitudinalRange.minimum;
  valueAccelerationRestrictionsLongitudinalRange.minimum = valueAccelerationRestrictionsLongitudinalRange.maximum;
  valueAccelerationRestrictions.longitudinalRange = valueAccelerationRestrictionsLongitudinalRange;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLateralRightRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralRightRangeMinimum(-1e2);
  valueAccelerationRestrictionsLateralRightRange.minimum = valueAccelerationRestrictionsLateralRightRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralRightRangeMaximum(-1e2);
  valueAccelerationRestrictionsLateralRightRange.maximum = valueAccelerationRestrictionsLateralRightRangeMaximum;
  valueAccelerationRestrictionsLateralRightRange.maximum = valueAccelerationRestrictionsLateralRightRange.minimum;
  valueAccelerationRestrictionsLateralRightRange.minimum = valueAccelerationRestrictionsLateralRightRange.maximum;
  valueAccelerationRestrictions.lateralRightRange = valueAccelerationRestrictionsLateralRightRange;
  value.accelerationRestrictions = valueAccelerationRestrictions;

  // override member with data type value above input range maximum
  ::ad::rss::state::LateralResponse invalidInitializedMember(static_cast<::ad::rss::state::LateralResponse>(-1));
  value.lateralResponseLeft = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeHeadingRangeTooSmall)
{
  ::ad::rss::state::ProperResponse value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::world::ObjectIdVector valueDangerousObjects;
  ::ad::rss::world::ObjectId valueDangerousObjectsElement(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueDangerousObjects.resize(1, valueDangerousObjectsElement);
  value.dangerousObjects = valueDangerousObjects;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalResponse(::ad::rss::state::LongitudinalResponse::None);
  value.longitudinalResponse = valueLongitudinalResponse;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ::ad::rss::state::HeadingRange valueHeadingRange;
  ::ad::physics::AngleRange valueHeadingRangeOuterRange;
  ::ad::physics::Angle valueHeadingRangeOuterRangeMinimum(-6.283185308);
  valueHeadingRangeOuterRange.minimum = valueHeadingRangeOuterRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeOuterRangeMaximum(-6.283185308);
  valueHeadingRangeOuterRange.maximum = valueHeadingRangeOuterRangeMaximum;
  valueHeadingRange.outerRange = valueHeadingRangeOuterRange;
  ::ad::physics::AngleRange valueHeadingRangeInnerRange;
  ::ad::physics::Angle valueHeadingRangeInnerRangeMinimum(-6.283185308);
  valueHeadingRangeInnerRange.minimum = valueHeadingRangeInnerRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeInnerRangeMaximum(-6.283185308);
  valueHeadingRangeInnerRange.maximum = valueHeadingRangeInnerRangeMaximum;
  valueHeadingRange.innerRange = valueHeadingRangeInnerRange;
  value.headingRange = valueHeadingRange;
  ::ad::rss::state::AccelerationRestriction valueAccelerationRestrictions;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLateralLeftRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralLeftRangeMinimum(-1e2);
  valueAccelerationRestrictionsLateralLeftRange.minimum = valueAccelerationRestrictionsLateralLeftRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralLeftRangeMaximum(-1e2);
  valueAccelerationRestrictionsLateralLeftRange.maximum = valueAccelerationRestrictionsLateralLeftRangeMaximum;
  valueAccelerationRestrictionsLateralLeftRange.maximum = valueAccelerationRestrictionsLateralLeftRange.minimum;
  valueAccelerationRestrictionsLateralLeftRange.minimum = valueAccelerationRestrictionsLateralLeftRange.maximum;
  valueAccelerationRestrictions.lateralLeftRange = valueAccelerationRestrictionsLateralLeftRange;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLongitudinalRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLongitudinalRangeMinimum(-1e2);
  valueAccelerationRestrictionsLongitudinalRange.minimum = valueAccelerationRestrictionsLongitudinalRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLongitudinalRangeMaximum(-1e2);
  valueAccelerationRestrictionsLongitudinalRange.maximum = valueAccelerationRestrictionsLongitudinalRangeMaximum;
  valueAccelerationRestrictionsLongitudinalRange.maximum = valueAccelerationRestrictionsLongitudinalRange.minimum;
  valueAccelerationRestrictionsLongitudinalRange.minimum = valueAccelerationRestrictionsLongitudinalRange.maximum;
  valueAccelerationRestrictions.longitudinalRange = valueAccelerationRestrictionsLongitudinalRange;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLateralRightRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralRightRangeMinimum(-1e2);
  valueAccelerationRestrictionsLateralRightRange.minimum = valueAccelerationRestrictionsLateralRightRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralRightRangeMaximum(-1e2);
  valueAccelerationRestrictionsLateralRightRange.maximum = valueAccelerationRestrictionsLateralRightRangeMaximum;
  valueAccelerationRestrictionsLateralRightRange.maximum = valueAccelerationRestrictionsLateralRightRange.minimum;
  valueAccelerationRestrictionsLateralRightRange.minimum = valueAccelerationRestrictionsLateralRightRange.maximum;
  valueAccelerationRestrictions.lateralRightRange = valueAccelerationRestrictionsLateralRightRange;
  value.accelerationRestrictions = valueAccelerationRestrictions;

  // override member with data type value below input range minimum
  ::ad::rss::state::HeadingRange invalidInitializedMember;
  ::ad::physics::AngleRange invalidInitializedMemberOuterRange;
  ::ad::physics::Angle invalidInitializedMemberOuterRangeMinimum(-6.283185308 * 1.1);
  invalidInitializedMemberOuterRange.minimum = invalidInitializedMemberOuterRangeMinimum;
  invalidInitializedMember.outerRange = invalidInitializedMemberOuterRange;
  value.headingRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeHeadingRangeTooBig)
{
  ::ad::rss::state::ProperResponse value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::world::ObjectIdVector valueDangerousObjects;
  ::ad::rss::world::ObjectId valueDangerousObjectsElement(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueDangerousObjects.resize(1, valueDangerousObjectsElement);
  value.dangerousObjects = valueDangerousObjects;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalResponse(::ad::rss::state::LongitudinalResponse::None);
  value.longitudinalResponse = valueLongitudinalResponse;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ::ad::rss::state::HeadingRange valueHeadingRange;
  ::ad::physics::AngleRange valueHeadingRangeOuterRange;
  ::ad::physics::Angle valueHeadingRangeOuterRangeMinimum(-6.283185308);
  valueHeadingRangeOuterRange.minimum = valueHeadingRangeOuterRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeOuterRangeMaximum(-6.283185308);
  valueHeadingRangeOuterRange.maximum = valueHeadingRangeOuterRangeMaximum;
  valueHeadingRange.outerRange = valueHeadingRangeOuterRange;
  ::ad::physics::AngleRange valueHeadingRangeInnerRange;
  ::ad::physics::Angle valueHeadingRangeInnerRangeMinimum(-6.283185308);
  valueHeadingRangeInnerRange.minimum = valueHeadingRangeInnerRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeInnerRangeMaximum(-6.283185308);
  valueHeadingRangeInnerRange.maximum = valueHeadingRangeInnerRangeMaximum;
  valueHeadingRange.innerRange = valueHeadingRangeInnerRange;
  value.headingRange = valueHeadingRange;
  ::ad::rss::state::AccelerationRestriction valueAccelerationRestrictions;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLateralLeftRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralLeftRangeMinimum(-1e2);
  valueAccelerationRestrictionsLateralLeftRange.minimum = valueAccelerationRestrictionsLateralLeftRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralLeftRangeMaximum(-1e2);
  valueAccelerationRestrictionsLateralLeftRange.maximum = valueAccelerationRestrictionsLateralLeftRangeMaximum;
  valueAccelerationRestrictionsLateralLeftRange.maximum = valueAccelerationRestrictionsLateralLeftRange.minimum;
  valueAccelerationRestrictionsLateralLeftRange.minimum = valueAccelerationRestrictionsLateralLeftRange.maximum;
  valueAccelerationRestrictions.lateralLeftRange = valueAccelerationRestrictionsLateralLeftRange;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLongitudinalRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLongitudinalRangeMinimum(-1e2);
  valueAccelerationRestrictionsLongitudinalRange.minimum = valueAccelerationRestrictionsLongitudinalRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLongitudinalRangeMaximum(-1e2);
  valueAccelerationRestrictionsLongitudinalRange.maximum = valueAccelerationRestrictionsLongitudinalRangeMaximum;
  valueAccelerationRestrictionsLongitudinalRange.maximum = valueAccelerationRestrictionsLongitudinalRange.minimum;
  valueAccelerationRestrictionsLongitudinalRange.minimum = valueAccelerationRestrictionsLongitudinalRange.maximum;
  valueAccelerationRestrictions.longitudinalRange = valueAccelerationRestrictionsLongitudinalRange;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLateralRightRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralRightRangeMinimum(-1e2);
  valueAccelerationRestrictionsLateralRightRange.minimum = valueAccelerationRestrictionsLateralRightRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralRightRangeMaximum(-1e2);
  valueAccelerationRestrictionsLateralRightRange.maximum = valueAccelerationRestrictionsLateralRightRangeMaximum;
  valueAccelerationRestrictionsLateralRightRange.maximum = valueAccelerationRestrictionsLateralRightRange.minimum;
  valueAccelerationRestrictionsLateralRightRange.minimum = valueAccelerationRestrictionsLateralRightRange.maximum;
  valueAccelerationRestrictions.lateralRightRange = valueAccelerationRestrictionsLateralRightRange;
  value.accelerationRestrictions = valueAccelerationRestrictions;

  // override member with data type value above input range maximum
  ::ad::rss::state::HeadingRange invalidInitializedMember;
  ::ad::physics::AngleRange invalidInitializedMemberOuterRange;
  ::ad::physics::Angle invalidInitializedMemberOuterRangeMinimum(6.283185308 * 1.1);
  invalidInitializedMemberOuterRange.minimum = invalidInitializedMemberOuterRangeMinimum;
  invalidInitializedMember.outerRange = invalidInitializedMemberOuterRange;
  value.headingRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeAccelerationRestrictionsTooSmall)
{
  ::ad::rss::state::ProperResponse value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::world::ObjectIdVector valueDangerousObjects;
  ::ad::rss::world::ObjectId valueDangerousObjectsElement(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueDangerousObjects.resize(1, valueDangerousObjectsElement);
  value.dangerousObjects = valueDangerousObjects;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalResponse(::ad::rss::state::LongitudinalResponse::None);
  value.longitudinalResponse = valueLongitudinalResponse;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ::ad::rss::state::HeadingRange valueHeadingRange;
  ::ad::physics::AngleRange valueHeadingRangeOuterRange;
  ::ad::physics::Angle valueHeadingRangeOuterRangeMinimum(-6.283185308);
  valueHeadingRangeOuterRange.minimum = valueHeadingRangeOuterRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeOuterRangeMaximum(-6.283185308);
  valueHeadingRangeOuterRange.maximum = valueHeadingRangeOuterRangeMaximum;
  valueHeadingRange.outerRange = valueHeadingRangeOuterRange;
  ::ad::physics::AngleRange valueHeadingRangeInnerRange;
  ::ad::physics::Angle valueHeadingRangeInnerRangeMinimum(-6.283185308);
  valueHeadingRangeInnerRange.minimum = valueHeadingRangeInnerRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeInnerRangeMaximum(-6.283185308);
  valueHeadingRangeInnerRange.maximum = valueHeadingRangeInnerRangeMaximum;
  valueHeadingRange.innerRange = valueHeadingRangeInnerRange;
  value.headingRange = valueHeadingRange;
  ::ad::rss::state::AccelerationRestriction valueAccelerationRestrictions;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLateralLeftRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralLeftRangeMinimum(-1e2);
  valueAccelerationRestrictionsLateralLeftRange.minimum = valueAccelerationRestrictionsLateralLeftRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralLeftRangeMaximum(-1e2);
  valueAccelerationRestrictionsLateralLeftRange.maximum = valueAccelerationRestrictionsLateralLeftRangeMaximum;
  valueAccelerationRestrictionsLateralLeftRange.maximum = valueAccelerationRestrictionsLateralLeftRange.minimum;
  valueAccelerationRestrictionsLateralLeftRange.minimum = valueAccelerationRestrictionsLateralLeftRange.maximum;
  valueAccelerationRestrictions.lateralLeftRange = valueAccelerationRestrictionsLateralLeftRange;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLongitudinalRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLongitudinalRangeMinimum(-1e2);
  valueAccelerationRestrictionsLongitudinalRange.minimum = valueAccelerationRestrictionsLongitudinalRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLongitudinalRangeMaximum(-1e2);
  valueAccelerationRestrictionsLongitudinalRange.maximum = valueAccelerationRestrictionsLongitudinalRangeMaximum;
  valueAccelerationRestrictionsLongitudinalRange.maximum = valueAccelerationRestrictionsLongitudinalRange.minimum;
  valueAccelerationRestrictionsLongitudinalRange.minimum = valueAccelerationRestrictionsLongitudinalRange.maximum;
  valueAccelerationRestrictions.longitudinalRange = valueAccelerationRestrictionsLongitudinalRange;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLateralRightRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralRightRangeMinimum(-1e2);
  valueAccelerationRestrictionsLateralRightRange.minimum = valueAccelerationRestrictionsLateralRightRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralRightRangeMaximum(-1e2);
  valueAccelerationRestrictionsLateralRightRange.maximum = valueAccelerationRestrictionsLateralRightRangeMaximum;
  valueAccelerationRestrictionsLateralRightRange.maximum = valueAccelerationRestrictionsLateralRightRange.minimum;
  valueAccelerationRestrictionsLateralRightRange.minimum = valueAccelerationRestrictionsLateralRightRange.maximum;
  valueAccelerationRestrictions.lateralRightRange = valueAccelerationRestrictionsLateralRightRange;
  value.accelerationRestrictions = valueAccelerationRestrictions;

  // override member with data type value below input range minimum
  ::ad::rss::state::AccelerationRestriction invalidInitializedMember;
  ::ad::physics::AccelerationRange invalidInitializedMemberLateralLeftRange;
  ::ad::physics::Acceleration invalidInitializedMemberLateralLeftRangeMinimum(-1e2 * 1.1);
  invalidInitializedMemberLateralLeftRange.minimum = invalidInitializedMemberLateralLeftRangeMinimum;
  invalidInitializedMember.lateralLeftRange = invalidInitializedMemberLateralLeftRange;
  value.accelerationRestrictions = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ProperResponseValidInputRangeTests, testValidInputRangeAccelerationRestrictionsTooBig)
{
  ::ad::rss::state::ProperResponse value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::world::ObjectIdVector valueDangerousObjects;
  ::ad::rss::world::ObjectId valueDangerousObjectsElement(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueDangerousObjects.resize(1, valueDangerousObjectsElement);
  value.dangerousObjects = valueDangerousObjects;
  ::ad::rss::state::LongitudinalResponse valueLongitudinalResponse(::ad::rss::state::LongitudinalResponse::None);
  value.longitudinalResponse = valueLongitudinalResponse;
  ::ad::rss::state::LateralResponse valueLateralResponseRight(::ad::rss::state::LateralResponse::None);
  value.lateralResponseRight = valueLateralResponseRight;
  ::ad::rss::state::LateralResponse valueLateralResponseLeft(::ad::rss::state::LateralResponse::None);
  value.lateralResponseLeft = valueLateralResponseLeft;
  ::ad::rss::state::HeadingRange valueHeadingRange;
  ::ad::physics::AngleRange valueHeadingRangeOuterRange;
  ::ad::physics::Angle valueHeadingRangeOuterRangeMinimum(-6.283185308);
  valueHeadingRangeOuterRange.minimum = valueHeadingRangeOuterRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeOuterRangeMaximum(-6.283185308);
  valueHeadingRangeOuterRange.maximum = valueHeadingRangeOuterRangeMaximum;
  valueHeadingRange.outerRange = valueHeadingRangeOuterRange;
  ::ad::physics::AngleRange valueHeadingRangeInnerRange;
  ::ad::physics::Angle valueHeadingRangeInnerRangeMinimum(-6.283185308);
  valueHeadingRangeInnerRange.minimum = valueHeadingRangeInnerRangeMinimum;
  ::ad::physics::Angle valueHeadingRangeInnerRangeMaximum(-6.283185308);
  valueHeadingRangeInnerRange.maximum = valueHeadingRangeInnerRangeMaximum;
  valueHeadingRange.innerRange = valueHeadingRangeInnerRange;
  value.headingRange = valueHeadingRange;
  ::ad::rss::state::AccelerationRestriction valueAccelerationRestrictions;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLateralLeftRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralLeftRangeMinimum(-1e2);
  valueAccelerationRestrictionsLateralLeftRange.minimum = valueAccelerationRestrictionsLateralLeftRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralLeftRangeMaximum(-1e2);
  valueAccelerationRestrictionsLateralLeftRange.maximum = valueAccelerationRestrictionsLateralLeftRangeMaximum;
  valueAccelerationRestrictionsLateralLeftRange.maximum = valueAccelerationRestrictionsLateralLeftRange.minimum;
  valueAccelerationRestrictionsLateralLeftRange.minimum = valueAccelerationRestrictionsLateralLeftRange.maximum;
  valueAccelerationRestrictions.lateralLeftRange = valueAccelerationRestrictionsLateralLeftRange;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLongitudinalRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLongitudinalRangeMinimum(-1e2);
  valueAccelerationRestrictionsLongitudinalRange.minimum = valueAccelerationRestrictionsLongitudinalRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLongitudinalRangeMaximum(-1e2);
  valueAccelerationRestrictionsLongitudinalRange.maximum = valueAccelerationRestrictionsLongitudinalRangeMaximum;
  valueAccelerationRestrictionsLongitudinalRange.maximum = valueAccelerationRestrictionsLongitudinalRange.minimum;
  valueAccelerationRestrictionsLongitudinalRange.minimum = valueAccelerationRestrictionsLongitudinalRange.maximum;
  valueAccelerationRestrictions.longitudinalRange = valueAccelerationRestrictionsLongitudinalRange;
  ::ad::physics::AccelerationRange valueAccelerationRestrictionsLateralRightRange;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralRightRangeMinimum(-1e2);
  valueAccelerationRestrictionsLateralRightRange.minimum = valueAccelerationRestrictionsLateralRightRangeMinimum;
  ::ad::physics::Acceleration valueAccelerationRestrictionsLateralRightRangeMaximum(-1e2);
  valueAccelerationRestrictionsLateralRightRange.maximum = valueAccelerationRestrictionsLateralRightRangeMaximum;
  valueAccelerationRestrictionsLateralRightRange.maximum = valueAccelerationRestrictionsLateralRightRange.minimum;
  valueAccelerationRestrictionsLateralRightRange.minimum = valueAccelerationRestrictionsLateralRightRange.maximum;
  valueAccelerationRestrictions.lateralRightRange = valueAccelerationRestrictionsLateralRightRange;
  value.accelerationRestrictions = valueAccelerationRestrictions;

  // override member with data type value above input range maximum
  ::ad::rss::state::AccelerationRestriction invalidInitializedMember;
  ::ad::physics::AccelerationRange invalidInitializedMemberLateralLeftRange;
  ::ad::physics::Acceleration invalidInitializedMemberLateralLeftRangeMinimum(1e2 * 1.1);
  invalidInitializedMemberLateralLeftRange.minimum = invalidInitializedMemberLateralLeftRangeMinimum;
  invalidInitializedMember.lateralLeftRange = invalidInitializedMemberLateralLeftRange;
  value.accelerationRestrictions = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
