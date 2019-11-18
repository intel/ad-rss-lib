/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
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
#include "ad_rss/state/RssStateInformation.hpp"

class RssStateInformationTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::state::RssStateInformation value;
    ::ad_rss::physics::Distance valueSafeDistance(0.);
    value.safeDistance = valueSafeDistance;
    ::ad_rss::physics::Distance valueCurrentDistance(0.);
    value.currentDistance = valueCurrentDistance;
    ::ad_rss::state::RssStateEvaluator valueEvaluator(::ad_rss::state::RssStateEvaluator::None);
    value.evaluator = valueEvaluator;
    mValue = value;
  }

  ::ad_rss::state::RssStateInformation mValue;
};

TEST_F(RssStateInformationTests, copyConstruction)
{
  ::ad_rss::state::RssStateInformation value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateInformationTests, moveConstruction)
{
  ::ad_rss::state::RssStateInformation value(std::move(::ad_rss::state::RssStateInformation(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateInformationTests, copyAssignment)
{
  ::ad_rss::state::RssStateInformation value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateInformationTests, moveAssignment)
{
  ::ad_rss::state::RssStateInformation value;
  value = std::move(::ad_rss::state::RssStateInformation(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateInformationTests, comparisonOperatorEqual)
{
  ::ad_rss::state::RssStateInformation valueA = mValue;
  ::ad_rss::state::RssStateInformation valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RssStateInformationTests, comparisonOperatorSafeDistanceDiffers)
{
  ::ad_rss::state::RssStateInformation valueA = mValue;
  ::ad_rss::physics::Distance safeDistance(1e6);
  valueA.safeDistance = safeDistance;
  ::ad_rss::state::RssStateInformation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateInformationTests, comparisonOperatorCurrentDistanceDiffers)
{
  ::ad_rss::state::RssStateInformation valueA = mValue;
  ::ad_rss::physics::Distance currentDistance(1e6);
  valueA.currentDistance = currentDistance;
  ::ad_rss::state::RssStateInformation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateInformationTests, comparisonOperatorEvaluatorDiffers)
{
  ::ad_rss::state::RssStateInformation valueA = mValue;
  ::ad_rss::state::RssStateEvaluator evaluator(::ad_rss::state::RssStateEvaluator::IntersectionOverlap);
  valueA.evaluator = evaluator;
  ::ad_rss::state::RssStateInformation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
