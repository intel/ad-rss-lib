// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "RssSceneCreationTest.hpp"

struct RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North : public RssSceneCreationTestWithRoute
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

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North, e0_o0)
{
  performSceneTest(
    locationSouthIncoming(),
    locationEastIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      // here we get 2 object predictions, all leading to the opposite direction case
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North, e0_o1)
{
  performSceneTest(
    locationSouthIncoming(),
    locationEastEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // here we get 2 object predictions, all leading to the opposite direction case
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North, e0_o2)
{
  performSceneTest(
    locationSouthIncoming(),
    locationEast2North(),
    std::initializer_list<ExpectedResultTuple>{
      // here we identify that the other drives in front not on our route
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North, e0_o3)
{
  performSceneTest(
    locationSouthIncoming(),
    locationNorthExiting(),
    std::initializer_list<ExpectedResultTuple>{
      // here we identify that the other drives in front not on our route
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North, e0_o4)
{
  performSceneTest(
    locationSouthIncoming(),
    locationNorthOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      // here we identify that the other drives in front not on our route
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North, e1_o0)
{
  performSceneTest(
    locationSouthEntering(),
    locationEastIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      // because of the shorter connecting route, we get only 2 object predictions
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North, e1_o1)
{
  performSceneTest(
    locationSouthEntering(),
    locationEastEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // because of the shorter connecting route, we get only 2 object predictions
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North, e1_o2)
{
  performSceneTest(
    locationSouthEntering(),
    locationEast2North(),
    std::initializer_list<ExpectedResultTuple>{
      // here we identify that the other drives in front not on our route
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North, e1_o3)
{
  performSceneTest(
    locationSouthEntering(),
    locationNorthExiting(),
    std::initializer_list<ExpectedResultTuple>{
      // here we identify that the other drives in front not on our route
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North, e1_o4)
{
  performSceneTest(
    locationSouthEntering(),
    locationNorthOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      // here we identify that the other drives in front not on our route
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North, e2_o0)
{
  performSceneTest(
    locationSouth2East(),
    locationEastIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      // because of the shorter connecting route, we get only 2 object predictions
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North, e2_o1)
{
  performSceneTest(
    locationSouth2East(),
    locationEastEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // because of the shorter connecting route, we get only 2 object predictions
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North, e2_o2)
{
  performSceneTest(
    locationSouth2East(),
    locationEast2North(),
    std::initializer_list<ExpectedResultTuple>{
      // here we identify that the other drives in front not on our route
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North, e2_o3)
{
  performSceneTest(
    locationSouth2East(),
    locationNorthExiting(),
    std::initializer_list<ExpectedResultTuple>{
      // here we identify that the other drives in front not on our route
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North, e2_o4)
{
  performSceneTest(
    locationSouth2East(),
    locationNorthOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      // here we identify that the other drives in front not on our route
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North, e3_o0)
{
  performSceneTest(
    locationEastExiting(),
    locationEastIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      // only one situation left
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North, e3_o1)
{
  performSceneTest(
    locationEastExiting(),
    locationEastEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // since the other is besides us, we still find the route from within the intersection
      // as it is the shortest one
      // we get still 2 object predictions
      // route length is zero, but consists of 2 segments here
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North, e3_o2)
{
  performSceneTest(
    locationEastExiting(),
    locationEast2North(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North, e3_o3)
{
  performSceneTest(
    locationEastExiting(),
    locationNorthExiting(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North, e3_o4)
{
  performSceneTest(
    locationEastExiting(),
    locationNorthOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North, e4_o0)
{
  performSceneTest(
    locationEastOutgoing(),
    locationEastIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      // only one situation left
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North, e4_o1)
{
  performSceneTest(
    locationEastOutgoing(),
    locationEastEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North, e4_o2)
{
  performSceneTest(
    locationEastOutgoing(),
    locationEast2North(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North, e4_o3)
{
  performSceneTest(
    locationEastOutgoing(),
    locationNorthExiting(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2North, e4_o4)
{
  performSceneTest(
    locationEastOutgoing(),
    locationNorthOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 1u, 0u, ::ad::physics::Speed(100.))});
}

struct RssSceneCreationTestWithoutRouteEgoSouth2EastOtherEast2North : public RssSceneCreationTestWithoutRoute
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

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherEast2North, e0_o0)
{
  performSceneTest(
    locationSouthIncoming(),
    locationEastIncoming(),
    // here we get 2 object predictions and 3 ego predictions:
    std::initializer_list<ExpectedResultTuple>{
      // ego-turn-right: all 2 object predictions lead to the opposite direction case
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(100.)),
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(100.)),
      // ego-straight-then-right: object prediction 1
      // object coming from right has prio
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionObjectHasPriority, 3u, 2u, ::ad::physics::Speed(100.)),
      // ego-straight-then-right: object prediction 2
      // object coming from right has prio
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionObjectHasPriority, 3u, 2u, ::ad::physics::Speed(100.)),
      // ego-straight-then-straight: object prediction 1
      // object coming from right has prio
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionObjectHasPriority, 3u, 2u, ::ad::physics::Speed(100.)),
      // ego-straight-then-straight: object prediction 2
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionObjectHasPriority, 3u, 2u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherEast2North, e2_o0)
{
  performSceneTest(
    locationSouth2East(),
    locationEastIncoming(),
    // here we get 2 object predictions and 2 ego predictions:
    std::initializer_list<ExpectedResultTuple>{
      // ego-turn-right: all 2 object predictions lead to the opposite direction case
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(100.)),
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(100.)),
      // ego-straight: object prediction 1
      // first intersection not present; works because no other intersection in prediction and objects intersection is
      // taken (@todo: to be fixed)
      // object coming from right has prio
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionObjectHasPriority, 2u, 2u, ::ad::physics::Speed(100.)),
      // ego-straight: object prediction 2
      // object coming from right has prio
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionObjectHasPriority, 2u, 2u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherEast2North, e0_o4)
{
  performSceneTest(locationSouthIncoming(),
                   locationNorthOutgoing(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 4u, 0u, ::ad::physics::Speed(100.))});
}

//@TODO fill in between steps of RssSceneCreationTestWithoutRouteEgoSouth2EastOtherEast2North
