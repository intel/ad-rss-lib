// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "RssSceneCreationTest.hpp"

struct RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South : public RssSceneCreationTestWithRoute
{
  /*
   *    |  O0      |
   *    |          |
   *    |          |
   *    |  O1      |___________
   *    |
   *    |
   *    |  O2
   *    |       E2 E3    E4
   *    |           ____________
   *    |  O3  E1  |
   *    |          |
   *    |          |
   *    |  O4  E0  |
   */
};

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South, e0_o0)
{
  performSceneTest(
    locationSouthIncoming(),
    locationNorthIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      // in case the other turns left
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionEgoHasPriority, 2u, 2u, ::ad::physics::Speed(15.2778)),
      // in case the other drives straight
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 4u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South, e0_o1)
{
  performSceneTest(
    locationSouthIncoming(),
    locationNorthEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // in case the other turns left
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionEgoHasPriority, 2u, 2u, ::ad::physics::Speed(15.2778)),
      // in case the other drives straight
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South, e0_o2)
{
  performSceneTest(
    locationSouthIncoming(),
    locationNorth2South(),
    std::initializer_list<ExpectedResultTuple>{
      // both predictions lead to driving straight at this point in time
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South, e0_o3)
{
  performSceneTest(
    locationSouthIncoming(),
    locationSouthExiting(),
    std::initializer_list<ExpectedResultTuple>{
      // more or less outside only single opposite case
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South, e0_o4)
{
  performSceneTest(
    locationSouthIncoming(),
    locationSouthOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      // outside only single opposite case
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South, e1_o0)
{
  performSceneTest(
    locationSouthEntering(),
    locationNorthIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      // in case the other turns left
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionEgoHasPriority, 2u, 2u, ::ad::physics::Speed(15.2778)),
      // in case the other drives straight
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South, e1_o1)
{
  performSceneTest(
    locationSouthEntering(),
    locationNorthEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // in case the other turns left
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionEgoHasPriority, 2u, 2u, ::ad::physics::Speed(15.2778)),
      // in case the other drives straight
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South, e1_o2)
{
  performSceneTest(
    locationSouthEntering(),
    locationNorth2South(),
    std::initializer_list<ExpectedResultTuple>{
      // both predictions lead to driving straight at this point in time
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South, e1_o3)
{
  performSceneTest(
    locationSouthEntering(),
    locationSouthExiting(),
    std::initializer_list<ExpectedResultTuple>{
      // because of the shorter connecting route, we get only 2 object prediction
      // route length is zero, but consists of 2 segments here
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South, e1_o4)
{
  performSceneTest(
    locationSouthEntering(),
    locationSouthOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      // the other passed our route
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South, e2_o0)
{
  performSceneTest(
    locationSouth2East(),
    locationNorthIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      // in case the other turns left
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionEgoHasPriority, 2u, 2u, ::ad::physics::Speed(15.2778)),
      // in case the other drives straight
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South, e2_o1)
{
  performSceneTest(
    locationSouth2East(),
    locationNorthEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // in case the other turns left
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionEgoHasPriority, 2u, 2u, ::ad::physics::Speed(15.2778)),
      // in case the other drives straight
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South, e2_o2)
{
  performSceneTest(
    locationSouth2East(),
    locationNorth2South(),
    std::initializer_list<ExpectedResultTuple>{
      // both predictions lead to driving straight at this point in time
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South, e2_o3)
{
  performSceneTest(
    locationSouth2East(),
    locationSouthExiting(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South, e2_o4)
{
  performSceneTest(
    locationSouth2East(),
    locationSouthOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South, e3_o0)
{
  performSceneTest(
    locationEastExiting(),
    locationNorthIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      // the other is more or less behind us when turning left leading to same direction case
      std::make_tuple(::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South, e3_o1)
{
  performSceneTest(
    locationEastExiting(),
    locationNorthEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // the other is more or less behind us when turning left leading to same direction case
      std::make_tuple(::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South, e3_o2)
{
  performSceneTest(
    locationEastExiting(),
    locationNorth2South(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South, e3_o3)
{
  performSceneTest(
    locationEastExiting(),
    locationSouthExiting(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South, e3_o4)
{
  performSceneTest(
    locationEastExiting(),
    locationSouthOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South, e4_o0)
{
  performSceneTest(
    locationEastOutgoing(),
    locationNorthIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      // the other is behind us when turning left leading to same direction case
      std::make_tuple(::ad::rss::situation::SituationType::SameDirection, 3u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South, e4_o1)
{
  performSceneTest(
    locationEastOutgoing(),
    locationNorthEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // the other is behind us when turning left leading to same direction case
      std::make_tuple(::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South, e4_o2)
{
  performSceneTest(
    locationEastOutgoing(),
    locationNorth2South(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us, but no possibility to turn left anymore
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South, e4_o3)
{
  performSceneTest(
    locationEastOutgoing(),
    locationSouthExiting(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us, but no possibility to turn left anymore
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2South, e4_o4)
{
  performSceneTest(
    locationEastOutgoing(),
    locationSouthOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us, but no possibility to turn left anymore
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 1u, 0u, ::ad::physics::Speed(100.))});
}

struct RssSceneCreationTestWithoutRouteEgoSouth2EastOtherNorth2South : public RssSceneCreationTestWithoutRoute
{
  /*
   *    |  O0      |
   *    |          |
   *    |          |
   *    |  O1      |___________
   *    |
   *    |
   *    |  O2
   *    |       E2 E3    E4
   *    |           ____________
   *    |  O3  E1  |
   *    |          |
   *    |          |
   *    |  O4  E0  |
   */
};

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherNorth2South, e0_o0)
{
  performSceneTest(
    locationSouthIncoming(),
    locationNorthIncoming(),
    // here we get 2 object predictions and 2 ego predictions
    std::initializer_list<ExpectedResultTuple>{
      // ego-turn-right: other-turn-left
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionEgoHasPriority, 2u, 2u, ::ad::physics::Speed(100.)),
      // ego-turn-right: other-straight
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 4u, 0u, ::ad::physics::Speed(100.)),
      // ego-straight: other-turn-left
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionEgoHasPriority, 3u, 2u, ::ad::physics::Speed(100.)),
      // ego-straight: other-straight
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 4u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherNorth2South, e2_o0)
{
  performSceneTest(
    locationSouth2East(),
    locationNorthIncoming(),
    // here we get 2 object predictions and 2 ego predictions
    std::initializer_list<ExpectedResultTuple>{
      // ego-turn-right: other-turn-left
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionEgoHasPriority, 1u, 2u, ::ad::physics::Speed(100.)),
      // ego-turn-right: other-straight
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(100.)),
      // ego-straight: other-turn-left
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionEgoHasPriority, 2u, 2u, ::ad::physics::Speed(100.)),
      // ego-straight: other-straight
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherNorth2South, e0_o4)
{
  performSceneTest(
    locationSouthIncoming(),
    locationSouthOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      // outside only single opposite case
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

//@TODO fill in between steps of RssSceneCreationTestWithoutRouteEgoSouth2EastOtherNorth2South
