// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "RssSceneCreationTest.hpp"

struct RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South : public RssSceneCreationTestWithRoute
{
  /*
   *    |          |
   *    |          |
   *    |          |
   *    |          |___________
   *    |
   *    |          O1    O0
   *    |   O2
   *    |       E2 E3    E4
   *    |           ____________
   *    |  O3  E1  |
   *    |          |
   *    |          |
   *    |  O4  E0  |
   */
};

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South, e0_o0)
{
  performSceneTest(
    locationSouthIncoming(),
    locationEastIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      // here we get 2 object predictions, all leading to the opposite direction case
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South, e0_o1)
{
  performSceneTest(
    locationSouthIncoming(),
    locationEastEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // here we get 2 object predictions, all leading to the opposite direction case
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South, e0_o2)
{
  performSceneTest(
    locationSouthIncoming(),
    locationEast2South(),
    std::initializer_list<ExpectedResultTuple>{
      // because the two right turn predictions have been gone, we get
      // only left turning prediction and since already touching the lane coming from straight
      // another opposite case is added on top
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South, e0_o3)
{
  performSceneTest(
    locationSouthIncoming(),
    locationSouthExiting(),
    std::initializer_list<ExpectedResultTuple>{
      // more or less outside only single opposite case
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South, e0_o4)
{
  performSceneTest(
    locationSouthIncoming(),
    locationSouthOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      // outside only single opposite case
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South, e1_o0)
{
  performSceneTest(
    locationSouthEntering(),
    locationEastIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      // because of the shorter connecting route, we get only 2 object predictions
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South, e1_o1)
{
  performSceneTest(
    locationSouthEntering(),
    locationEastEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // because of the shorter connecting route, we get only 2 object predictions
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South, e1_o2)
{
  performSceneTest(
    locationSouthEntering(),
    locationEast2South(),
    std::initializer_list<ExpectedResultTuple>{
      // because of the shorter connecting route, we get only 2 object predictions
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South, e1_o3)
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

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South, e1_o4)
{
  performSceneTest(
    locationSouthEntering(),
    locationSouthOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      // the other passed our route
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South, e2_o0)
{
  performSceneTest(
    locationSouth2East(),
    locationEastIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      // because of the shorter connecting route, we get only 2 object predictions
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South, e2_o1)
{
  performSceneTest(
    locationSouth2East(),
    locationEastEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // because of the shorter connecting route, we get only 2 object predictions
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South, e2_o2)
{
  performSceneTest(
    locationSouth2East(),
    locationEast2South(),
    std::initializer_list<ExpectedResultTuple>{
      // because of the shorter connecting route (directly opposite to us), we get only 2 object predictions
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South, e2_o3)
{
  performSceneTest(
    locationSouth2East(),
    locationSouthExiting(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South, e2_o4)
{
  performSceneTest(
    locationSouth2East(),
    locationSouthOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South, e3_o0)
{
  performSceneTest(
    locationEastExiting(),
    locationEastIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      // only one situation left
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South, e3_o1)
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

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South, e3_o2)
{
  performSceneTest(
    locationEastExiting(),
    locationEast2South(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South, e3_o3)
{
  performSceneTest(
    locationEastExiting(),
    locationSouthExiting(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South, e3_o4)
{
  performSceneTest(
    locationEastExiting(),
    locationSouthOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South, e4_o0)
{
  performSceneTest(
    locationEastOutgoing(),
    locationEastIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      // only one situation left
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South, e4_o1)
{
  performSceneTest(
    locationEastOutgoing(),
    locationEastEntering(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 0u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South, e4_o2)
{
  performSceneTest(
    locationEastOutgoing(),
    locationEast2South(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 0u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South, e4_o3)
{
  performSceneTest(
    locationEastOutgoing(),
    locationSouthExiting(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 0u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherEast2South, e4_o4)
{
  performSceneTest(
    locationEastOutgoing(),
    locationSouthOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      // here the other is behind us
      std::make_tuple(::ad::rss::situation::SituationType::NotRelevant, 0u, 0u, ::ad::physics::Speed(100.))});
}

struct RssSceneCreationTestWithoutRouteEgoSouth2EastOtherEast2South : public RssSceneCreationTestWithoutRoute
{
  /*
   *    |          |
   *    |          |
   *    |          |
   *    |          |___________
   *    |
   *    |          O1    O0
   *    |   O2
   *    |       E2 E3    E4
   *    |           ____________
   *    |  O3  E1  |
   *    |          |
   *    |          |
   *    |  O4  E0  |
   */
};

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherEast2South, e0_o0)
{
  performSceneTest(
    locationSouthIncoming(),
    locationEastIncoming(),
    // here we get 2 object predictions and 3 ego predictions:
    std::initializer_list<ExpectedResultTuple>{
      // ego-turn-right: all 2 object predictions lead to the opposite direction case
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(100.)),
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 3u, 0u, ::ad::physics::Speed(100.)),
      // ego-straight-then-right: object prediction 1: in first intersection:
      // object coming form right has prio
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionObjectHasPriority, 3u, 2u, ::ad::physics::Speed(100.)),
      // ego-straight-then-right: object prediction 2: first intersection:
      // object coming form right has prio
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionObjectHasPriority, 3u, 2u, ::ad::physics::Speed(100.)),
      // ego-straight-then-right: object prediction 2: second intersection:
      // object prediction comes from the same intersection arm
      // @todo: should lead to a different route, since this route is actually from the connecting route within the
      // first
      // intersection!!! AND THEREFORE WRONG HERE!!!
      std::make_tuple(::ad::rss::situation::SituationType::SameDirection, 3u, 0u, ::ad::physics::Speed(100.)),
      // ego-straight-then-straight: object prediction 1: in first intersection:
      // object coming form right has prio
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionObjectHasPriority, 3u, 2u, ::ad::physics::Speed(100.)),
      // ego-straight-then-straight: object prediction 2: in first intersection:
      std::make_tuple(
        ::ad::rss::situation::SituationType::IntersectionObjectHasPriority, 3u, 2u, ::ad::physics::Speed(100.)),
      // ego-straight-then-straight: object prediction 2: in second intersection:
      // object prediction comes from the same intersection arm
      // @todo: should lead to a different route, since this route is actually from the connecting route within the
      // first
      // intersection!!! AND THEREFORE WRONG HERE!!!
      std::make_tuple(::ad::rss::situation::SituationType::SameDirection, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherEast2South, e2_o0)
{
  performSceneTest(
    locationSouth2East(),
    locationEastIncoming(),
    // here we get 2 object predictions and 3 ego predictions:
    // but because ego predictions start within current (first) intersection
    // the first intersection uses the object is totally ignored
    // Furthermore, because of the shorter connecting route, none of the object predictions enter the 2nd
    // intersection (so that is also not present in the results)
    // @todo: intersection creation has to support also creation of already entered intersections
    // to get the current intersection also considered appropriate!!
    //
    std::initializer_list<ExpectedResultTuple>{
      // ego-turn-right: only these ego predictions lead to the opposite direction case
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(100.)),
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 2u, 0u, ::ad::physics::Speed(100.)),
      // ego-straight-then-right: first intersection not present (@todo: to be fixed)
      // ego-straight-then-right: second intersection leads to same direction use-case (@todo: to be fixed)
      std::make_tuple(::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.)),
      // ego-straight-then-straight: first intersection not present (@todo: to be fixed)
      // ego-straight-then-straight: second intersection leads to same direction use-case (@todo: to be fixed)
      std::make_tuple(::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherEast2South, e0_o4)
{
  performSceneTest(
    locationSouthIncoming(),
    locationSouthOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      // outside only single opposite case
      std::make_tuple(::ad::rss::situation::SituationType::OppositeDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

//@TODO fill in between steps of RssSceneCreationTestWithoutRouteEgoSouth2EastOtherEast2South
