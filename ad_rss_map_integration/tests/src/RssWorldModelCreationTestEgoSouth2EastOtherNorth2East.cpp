// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include <ad/rss/map/test_support/RssWorldModelCreationTest.hpp>

struct RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East
  : public ad::rss::map::test_support::RssWorldModelCreationTestWithRoute
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

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East, e0_o0)
{
  performConstellationTest(
    locationSouthIncoming(),
    locationNorthIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      // in case the other turns left
      std::make_tuple(
        ::ad::rss::world::ConstellationType::IntersectionEgoHasPriority, 2u, 2u, ::ad::physics::Speed(15.2778)),
      // in case the other drives straight
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 4u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East, e0_o1)
{
  performConstellationTest(
    locationSouthIncoming(),
    locationNorthEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // in case the other turns left
      std::make_tuple(
        ::ad::rss::world::ConstellationType::IntersectionEgoHasPriority, 2u, 2u, ::ad::physics::Speed(15.2778)),
      // in case the other drives straight
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East, e0_o2)
{
  performConstellationTest(
    locationSouthIncoming(),
    locationNorth2East(),
    std::initializer_list<ExpectedResultTuple>{
      // in case the other turns left
      std::make_tuple(
        ::ad::rss::world::ConstellationType::IntersectionEgoHasPriority, 2u, 1u, ::ad::physics::Speed(15.2778)),
      // in case the other drives straight
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East, e0_o3)
{
  performConstellationTest(
    locationSouthIncoming(),
    locationEastExiting(),
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East, e0_o4)
{
  performConstellationTest(
    locationSouthIncoming(),
    locationEastOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 3u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East, e1_o0)
{
  performConstellationTest(
    locationSouthEntering(),
    locationNorthIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      // in case the other turns left
      std::make_tuple(
        ::ad::rss::world::ConstellationType::IntersectionEgoHasPriority, 2u, 2u, ::ad::physics::Speed(15.2778)),
      // in case the other drives straight
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East, e1_o1)
{
  performConstellationTest(
    locationSouthEntering(),
    locationNorthEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // in case the other turns left
      std::make_tuple(
        ::ad::rss::world::ConstellationType::IntersectionEgoHasPriority, 2u, 2u, ::ad::physics::Speed(15.2778)),
      // in case the other drives straight
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East, e1_o2)
{
  performConstellationTest(
    locationSouthEntering(),
    locationNorth2East(),
    std::initializer_list<ExpectedResultTuple>{
      // in case the other turns left
      std::make_tuple(
        ::ad::rss::world::ConstellationType::IntersectionEgoHasPriority, 2u, 1u, ::ad::physics::Speed(15.2778)),
      // in case the other drives straight
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East, e1_o3)
{
  performConstellationTest(
    locationSouthEntering(),
    locationEastExiting(),
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East, e1_o4)
{
  performConstellationTest(
    locationSouthEntering(),
    locationEastOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East, e2_o0)
{
  performConstellationTest(
    locationSouth2East(),
    locationNorthIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      // in case the other turns left
      std::make_tuple(
        ::ad::rss::world::ConstellationType::IntersectionEgoHasPriority, 2u, 2u, ::ad::physics::Speed(15.2778)),
      // in case the other drives straight
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East, e2_o1)
{
  performConstellationTest(
    locationSouth2East(),
    locationNorthEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // in case the other turns left
      std::make_tuple(
        ::ad::rss::world::ConstellationType::IntersectionEgoHasPriority, 2u, 2u, ::ad::physics::Speed(15.2778)),
      // in case the other drives straight
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East, e2_o2)
{
  performConstellationTest(
    locationSouth2East(),
    locationNorth2East(),
    std::initializer_list<ExpectedResultTuple>{
      // in case the other turns left
      std::make_tuple(
        ::ad::rss::world::ConstellationType::IntersectionEgoHasPriority, 2u, 1u, ::ad::physics::Speed(15.2778)),
      // in case the other drives straight
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East, e2_o3)
{
  performConstellationTest(
    locationSouth2East(),
    locationEastExiting(),
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East, e2_o4)
{
  performConstellationTest(
    locationSouth2East(),
    locationEastOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East, e3_o0)
{
  performConstellationTest(
    locationEastExiting(),
    locationNorthIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      // the other is behind us when turning left leading to same direction case
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East, e3_o1)
{
  performConstellationTest(
    locationEastExiting(),
    locationNorthEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // the other is behind us when turning left leading to same direction case
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East, e3_o2)
{
  performConstellationTest(
    locationEastExiting(),
    locationNorth2East(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.27786)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East, e3_o3)
{
  performConstellationTest(
    locationEastExiting(),
    locationEastExiting(),
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.27786)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.27786)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.27786)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East, e3_o4)
{
  performConstellationTest(
    locationEastExiting(),
    locationEastOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East, e4_o0)
{
  performConstellationTest(
    locationEastOutgoing(),
    locationNorthIncoming(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 3u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East, e4_o1)
{
  performConstellationTest(
    locationEastOutgoing(),
    locationNorthEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // the other is behind us when turning left leading to same direction case
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East, e4_o2)
{
  performConstellationTest(
    locationEastOutgoing(),
    locationNorth2East(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.27786)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East, e4_o3)
{
  performConstellationTest(
    locationEastOutgoing(),
    locationEastExiting(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherNorth2East, e4_o4)
{
  performConstellationTest(
    locationEastOutgoing(),
    locationEastOutgoing(),
    // same position
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

struct RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherNorth2East
  : public ad::rss::map::test_support::RssWorldModelCreationTestWithoutRoute
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

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherNorth2East, e0_o0)
{
  performConstellationTest(
    locationSouthIncoming(),
    locationNorthIncoming(),
    // here we get 2 object predictions and 2 ego predictions
    std::initializer_list<ExpectedResultTuple>{
      // ego-turn-right: other-turn-left
      std::make_tuple(
        ::ad::rss::world::ConstellationType::IntersectionEgoHasPriority, 2u, 2u, ::ad::physics::Speed(100.)),
      // ego-turn-right: other-straight
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 4u, 0u, ::ad::physics::Speed(100.)),
      // ego-straight: other-turn-left
      std::make_tuple(
        ::ad::rss::world::ConstellationType::IntersectionEgoHasPriority, 3u, 2u, ::ad::physics::Speed(100.)),
      // ego-straight: other-straight
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 4u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherNorth2East, e2_o0)
{
  performConstellationTest(
    locationSouth2East(),
    locationNorthIncoming(),
    // here we get 2 object predictions and 2 ego predictions
    std::initializer_list<ExpectedResultTuple>{
      // ego-turn-right: other-turn-left
      std::make_tuple(
        ::ad::rss::world::ConstellationType::IntersectionEgoHasPriority, 1u, 2u, ::ad::physics::Speed(100.)),
      // ego-turn-right: other-straight
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(100.)),
      // ego-straight: other-turn-left
      std::make_tuple(
        ::ad::rss::world::ConstellationType::IntersectionEgoHasPriority, 2u, 2u, ::ad::physics::Speed(100.)),
      // ego-straight: other-straight
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherNorth2East, e0_o4)
{
  performConstellationTest(locationSouthIncoming(),
                           locationEastOutgoing(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 3u, 0u, ::ad::physics::Speed(100.))});
}

//@TODO fill in between steps of RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherNorth2East
