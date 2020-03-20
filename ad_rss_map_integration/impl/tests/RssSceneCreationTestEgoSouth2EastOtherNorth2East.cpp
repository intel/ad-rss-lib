// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "RssSceneCreationTest.hpp"

struct RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East : public RssSceneCreationTestWithRoute
{
  /*
   *    |  O0      |
   *    |          |
   *    |          |
   *    |  O1      |___________
   *    |
   *    |
   *    |   O2
   *    |      E2  E3/O3   E4/O4
   *    |           ____________
   *    |      E1  |
   *    |          |
   *    |          |
   *    |      E0  |
   */
};

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East, e0_o0)
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

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East, e0_o1)
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

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East, e0_o2)
{
  performSceneTest(
    locationSouthIncoming(),
    locationNorth2East(),
    std::initializer_list<ExpectedResultTuple>{
      // in case the other turns left
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionEgoHasPriority, 2u, 1u, ::ad::physics::Speed(15.2778)),
      // in case the other drives straight
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East, e0_o3)
{
  performSceneTest(locationSouthIncoming(),
                   locationEastExiting(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East, e0_o4)
{
  performSceneTest(locationSouthIncoming(),
                   locationEastOutgoing(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 3u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East, e1_o0)
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

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East, e1_o1)
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

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East, e1_o2)
{
  performSceneTest(
    locationSouthEntering(),
    locationNorth2East(),
    std::initializer_list<ExpectedResultTuple>{
      // in case the other turns left
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionEgoHasPriority, 2u, 1u, ::ad::physics::Speed(15.2778)),
      // in case the other drives straight
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East, e1_o3)
{
  performSceneTest(locationSouthEntering(),
                   locationEastExiting(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East, e1_o4)
{
  performSceneTest(locationSouthEntering(),
                   locationEastOutgoing(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East, e2_o0)
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

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East, e2_o1)
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

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East, e2_o2)
{
  performSceneTest(
    locationSouth2East(),
    locationNorth2East(),
    std::initializer_list<ExpectedResultTuple>{
      // in case the other turns left
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionEgoHasPriority, 2u, 1u, ::ad::physics::Speed(15.2778)),
      // in case the other drives straight
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East, e2_o3)
{
  performSceneTest(locationSouth2East(),
                   locationEastExiting(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East, e2_o4)
{
  performSceneTest(locationSouth2East(),
                   locationEastOutgoing(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East, e3_o0)
{
  performSceneTest(
    locationEastExiting(),
    locationNorthIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      // the other is behind us when turning left leading to same direction case
      std::make_tuple(::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East, e3_o1)
{
  performSceneTest(
    locationEastExiting(),
    locationNorthEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // the other is behind us when turning left leading to same direction case
      std::make_tuple(::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East, e3_o2)
{
  performSceneTest(locationEastExiting(),
                   locationNorth2East(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East, e3_o3)
{
  performSceneTest(locationEastExiting(),
                   locationEastExiting(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East, e3_o4)
{
  performSceneTest(locationEastExiting(),
                   locationEastOutgoing(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East, e4_o0)
{
  performSceneTest(locationEastOutgoing(),
                   locationNorthIncoming(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 3u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East, e4_o1)
{
  performSceneTest(
    locationEastOutgoing(),
    locationNorthEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // the other is behind us when turning left leading to same direction case
      std::make_tuple(::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East, e4_o2)
{
  performSceneTest(locationEastOutgoing(),
                   locationNorth2East(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East, e4_o3)
{
  performSceneTest(locationEastOutgoing(),
                   locationEastExiting(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherNorth2East, e4_o4)
{
  performSceneTest(locationEastOutgoing(),
                   locationEastOutgoing(),
                   // same position
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

struct RssSceneCreationTestWithoutRouteEgoSouth2EastOtherNorth2East : public RssSceneCreationTestWithoutRoute
{
  /*
   *    |  O0      |
   *    |          |
   *    |          |
   *    |  O1      |___________
   *    |
   *    |
   *    |   O2
   *    |      E2  E3/O3   E4/O4
   *    |           ____________
   *    |      E1  |
   *    |          |
   *    |          |
   *    |      E0  |
   */
};

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherNorth2East, e0_o0)
{
  performSceneTest(
    locationSouthIncoming(),
    locationNorthIncoming(),
    // here we get 2 object predictions and 3 ego predictions
    std::initializer_list<ExpectedResultTuple>{
      // ego-turn-right: other-turn-left
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionEgoHasPriority, 2u, 2u, ::ad::physics::Speed(100.)),
      // ego-turn-right: other-straight
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 4u, 0u, ::ad::physics::Speed(100.)),
      // ego-straight-then-right: other-turn-left
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionEgoHasPriority, 3u, 2u, ::ad::physics::Speed(100.)),
      // ego-straight-then-right: other-straight
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 4u, 0u, ::ad::physics::Speed(100.)),
      // ego-straight-then-straight: other-turn-left
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionEgoHasPriority, 3u, 2u, ::ad::physics::Speed(100.)),
      // ego-straight-then-straight: other-straight
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 4u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherNorth2East, e2_o0)
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

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherNorth2East, e0_o4)
{
  performSceneTest(locationSouthIncoming(),
                   locationEastOutgoing(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 3u, 0u, ::ad::physics::Speed(100.))});
}

//@TODO fill in between steps of RssSceneCreationTestWithoutRouteEgoSouth2EastOtherNorth2East
