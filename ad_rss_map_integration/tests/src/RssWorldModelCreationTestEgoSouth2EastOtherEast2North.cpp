// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include <ad/rss/map/test_support/RssWorldModelCreationTest.hpp>

struct RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North
  : public ad::rss::map::test_support::RssWorldModelCreationTestWithRoute
{
  /*
   *    |    O4  |
   *    |        |
   *    |        |
   *    |    O3  |___________
   *    |
   *    |     O2 O1    O0
   *    |
   *    |     E2 E3    E4
   *    |         ____________
   *    |    E1  |
   *    |        |
   *    |        |
   *    |    E0  |
   */
};

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North, e0_o0)
{
  performConstellationTest(
    locationSouthIncoming(),
    locationEastIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      // here we get 2 object predictions, all leading to the opposite direction case
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North, e0_o1)
{
  performConstellationTest(
    locationSouthIncoming(),
    locationEastEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // here we get 2 object predictions, all leading to the opposite direction case
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North, e0_o2)
{
  performConstellationTest(
    locationSouthIncoming(),
    locationEast2North(),
    std::initializer_list<ExpectedResultTuple>{
      // here we still get 2 object predictions, leading to the opposite direction case
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North, e0_o3)
{
  performConstellationTest(
    locationSouthIncoming(),
    locationNorthExiting(),
    std::initializer_list<ExpectedResultTuple>{
      // here we identify that the other drives in front not on our route
      std::make_tuple(::ad::rss::world::ConstellationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North, e0_o4)
{
  performConstellationTest(
    locationSouthIncoming(),
    locationNorthOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      // here we identify that the other drives in front not on our route
      std::make_tuple(::ad::rss::world::ConstellationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North, e1_o0)
{
  performConstellationTest(
    locationSouthEntering(),
    locationEastIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      // because of the shorter connecting route, we get only 2 object predictions
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North, e1_o1)
{
  performConstellationTest(
    locationSouthEntering(),
    locationEastEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // because of progressed object, now getting 3 object predictions
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North, e1_o2)
{
  performConstellationTest(
    locationSouthEntering(),
    locationEast2North(),
    std::initializer_list<ExpectedResultTuple>{
      // here we still get 2 object predictions, leading to the opposite direction case
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North, e1_o3)
{
  performConstellationTest(
    locationSouthEntering(),
    locationNorthExiting(),
    std::initializer_list<ExpectedResultTuple>{
      // here we identify that the other drives in front not on our route
      std::make_tuple(::ad::rss::world::ConstellationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North, e1_o4)
{
  performConstellationTest(
    locationSouthEntering(),
    locationNorthOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      // here we identify that the other drives in front not on our route
      std::make_tuple(::ad::rss::world::ConstellationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North, e2_o0)
{
  performConstellationTest(
    locationSouth2East(),
    locationEastIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      // because of the shorter connecting route, we get only 2 object predictions
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North, e2_o1)
{
  performConstellationTest(
    locationSouth2East(),
    locationEastEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // because of progressed object, now getting 3 object predictions
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North, e2_o2)
{
  performConstellationTest(
    locationSouth2East(),
    locationEast2North(),
    std::initializer_list<ExpectedResultTuple>{
      // here we still get 2 object predictions, leading to the opposite direction case
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North, e2_o3)
{
  performConstellationTest(
    locationSouth2East(),
    locationNorthExiting(),
    std::initializer_list<ExpectedResultTuple>{
      // here we identify that the other drives in front not on our route
      std::make_tuple(::ad::rss::world::ConstellationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North, e2_o4)
{
  performConstellationTest(
    locationSouth2East(),
    locationNorthOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      // here we identify that the other drives in front not on our route
      std::make_tuple(::ad::rss::world::ConstellationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North, e3_o0)
{
  performConstellationTest(
    locationEastExiting(),
    locationEastIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      // only one constellation left
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North, e3_o1)
{
  performConstellationTest(
    locationEastExiting(),
    locationEastEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // since the other is besides us, we still find the route from within the intersection
      // we get 5 connecting route candidates: 4 with each 2 object predictions inside intersection and 1 outside
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(12.2936)),
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North, e3_o2)
{
  performConstellationTest(
    locationEastExiting(),
    locationEast2North(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::world::ConstellationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North, e3_o3)
{
  performConstellationTest(
    locationEastExiting(),
    locationNorthExiting(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::world::ConstellationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North, e3_o4)
{
  performConstellationTest(
    locationEastExiting(),
    locationNorthOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::world::ConstellationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North, e4_o0)
{
  performConstellationTest(
    locationEastOutgoing(),
    locationEastIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      // only one constellation left
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North, e4_o1)
{
  performConstellationTest(
    locationEastOutgoing(),
    locationEastEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::world::ConstellationType::NotRelevant, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North, e4_o2)
{
  performConstellationTest(
    locationEastOutgoing(),
    locationEast2North(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::world::ConstellationType::NotRelevant, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North, e4_o3)
{
  performConstellationTest(
    locationEastOutgoing(),
    locationNorthExiting(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::world::ConstellationType::NotRelevant, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherEast2North, e4_o4)
{
  performConstellationTest(
    locationEastOutgoing(),
    locationNorthOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::world::ConstellationType::NotRelevant, 1u, 0u, ::ad::physics::Speed(100.))});
}

struct RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherEast2North
  : public ad::rss::map::test_support::RssWorldModelCreationTestWithoutRoute
{
  /*
   *    |    O4  |
   *    |        |
   *    |        |
   *    |    O3  |___________
   *    |
   *    |     O2 O1    O0
   *    |
   *    |     E2 E3    E4
   *    |         ____________
   *    |    E1  |
   *    |        |
   *    |        |
   *    |    E0  |
   */
};

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherEast2North, e0_o0)
{
  performConstellationTest(
    locationSouthIncoming(),
    locationEastIncoming(),
    // here we get 2 object predictions and 3 ego predictions:
    std::initializer_list<ExpectedResultTuple>{
      // ego-turn-right: all 2 object predictions lead to the opposite direction case
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(100.)),
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(100.)),
      // ego-straight: object prediction 1
      // object coming from right has prio
      std::make_tuple(
        ::ad::rss::world::ConstellationType::IntersectionObjectHasPriority, 3u, 2u, ::ad::physics::Speed(100.)),
      // ego-straight: object prediction 2
      // object coming from right has prio
      std::make_tuple(
        ::ad::rss::world::ConstellationType::IntersectionObjectHasPriority, 3u, 2u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherEast2North, e2_o0)
{
  performConstellationTest(
    locationSouth2East(),
    locationEastIncoming(),
    // here we get 2 object predictions and 2 ego predictions:
    std::initializer_list<ExpectedResultTuple>{
      // ego-turn-right: all 2 object predictions lead to the opposite direction case
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(100.)),
      std::make_tuple(::ad::rss::world::ConstellationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(100.)),
      // ego-straight: object prediction 1
      // first intersection not present; works because no other intersection in prediction and objects intersection is
      // taken (@todo: to be fixed)
      // object coming from right has prio
      std::make_tuple(
        ::ad::rss::world::ConstellationType::IntersectionObjectHasPriority, 2u, 2u, ::ad::physics::Speed(100.)),
      // ego-straight: object prediction 2
      // object coming from right has prio
      std::make_tuple(
        ::ad::rss::world::ConstellationType::IntersectionObjectHasPriority, 2u, 2u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherEast2North, e0_o4)
{
  performConstellationTest(locationSouthIncoming(),
                           locationNorthOutgoing(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 4u, 0u, ::ad::physics::Speed(100.))});
}

//@TODO fill in between steps of RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherEast2North
