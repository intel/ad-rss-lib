// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include <ad/rss/map/test_support/RssWorldModelCreationTest.hpp>

struct RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North
  : public ad::rss::map::test_support::RssWorldModelCreationTestWithRoute
{
  /*
   *    |          |
   *    |     O4   |
   *    |          |
   *    |     O3   |___________
   *    |
   *    |     O2
   *    |     E2    E3   E4
   *    |           ____________
   *    |    E1/O1  |
   *    |           |
   *    |    E0/O0  |
   */
};

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North, e0_o0)
{
  performConstellationTest(
    locationSouthIncoming(),
    locationSouthIncoming(),
    // same position
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North, e0_o1)
{
  performConstellationTest(
    locationSouthIncoming(),
    locationSouthEntering(),
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North, e0_o2)
{
  performConstellationTest(locationSouthIncoming(),
                           locationSouth2North(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North, e0_o3)
{
  performConstellationTest(locationSouthIncoming(),
                           locationNorthExiting(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North, e0_o4)
{
  performConstellationTest(locationSouthIncoming(),
                           locationNorthOutgoing(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North, e1_o0)
{
  performConstellationTest(
    locationSouthEntering(),
    locationSouthIncoming(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North, e1_o1)
{
  performConstellationTest(
    locationSouthEntering(),
    locationSouthEntering(),
    // same position
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North, e1_o2)
{
  performConstellationTest(locationSouthEntering(),
                           locationSouth2North(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North, e1_o3)
{
  performConstellationTest(locationSouthEntering(),
                           locationNorthExiting(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North, e1_o4)
{
  performConstellationTest(locationSouthEntering(),
                           locationNorthOutgoing(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North, e2_o0)
{
  performConstellationTest(
    locationSouth2East(),
    locationSouthIncoming(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North, e2_o1)
{
  performConstellationTest(
    locationSouth2East(),
    locationSouthEntering(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North, e2_o2)
{
  performConstellationTest(locationSouth2East(),
                           locationSouth2North(),
                           // other
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North, e2_o3)
{
  performConstellationTest(locationSouth2East(),
                           locationNorthExiting(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North, e2_o4)
{
  performConstellationTest(locationSouth2East(),
                           locationNorthOutgoing(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North, e3_o0)
{
  performConstellationTest(
    locationEastExiting(),
    locationSouthIncoming(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North, e3_o1)
{
  performConstellationTest(
    locationEastExiting(),
    locationSouthEntering(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North, e3_o2)
{
  performConstellationTest(locationEastExiting(),
                           locationSouth2North(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North, e3_o3)
{
  performConstellationTest(locationEastExiting(),
                           locationNorthExiting(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North, e3_o4)
{
  performConstellationTest(locationEastExiting(),
                           locationNorthOutgoing(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North, e4_o0)
{
  performConstellationTest(
    locationEastOutgoing(),
    locationSouthIncoming(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 3u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North, e4_o1)
{
  performConstellationTest(
    locationEastOutgoing(),
    locationSouthEntering(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North, e4_o2)
{
  performConstellationTest(locationEastOutgoing(),
                           locationSouth2North(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::NotRelevant, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North, e4_o3)
{
  performConstellationTest(locationEastOutgoing(),
                           locationNorthExiting(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::NotRelevant, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2North, e4_o4)
{
  performConstellationTest(locationEastOutgoing(),
                           locationNorthOutgoing(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::NotRelevant, 1u, 0u, ::ad::physics::Speed(100.))});
}

struct RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North
  : public ad::rss::map::test_support::RssWorldModelCreationTestWithoutRoute
{
  /*
   *    |          |
   *    |     O4   |
   *    |          |
   *    |     O3   |___________
   *    |
   *    |     O2
   *    |     E2    E3   E4
   *    |           ____________
   *    |    E1/O1  |
   *    |           |
   *    |    O0     |
   *    |    E0     |
   */
};

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e0_o0)
{
  performConstellationTest(locationSouthIncoming(),
                           locationSouthIncoming(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e0_o1)
{
  performConstellationTest(
    locationSouthIncoming(),
    locationSouthEntering(),
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e0_o2)
{
  performConstellationTest(locationSouthIncoming(),
                           locationSouth2North(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e0_o3)
{
  performConstellationTest(locationSouthIncoming(),
                           locationNorthExiting(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e0_o4)
{
  performConstellationTest(locationSouthIncoming(),
                           locationNorthOutgoing(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 4u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e1_o0)
{
  performConstellationTest(
    locationSouthEntering(),
    locationSouthIncoming(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e1_o1)
{
  performConstellationTest(
    locationSouthEntering(),
    locationSouthEntering(),
    // same position
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e1_o2)
{
  performConstellationTest(locationSouthEntering(),
                           locationSouth2North(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e1_o3)
{
  performConstellationTest(locationSouthEntering(),
                           locationNorthExiting(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e1_o4)
{
  performConstellationTest(locationSouthEntering(),
                           locationNorthOutgoing(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e2_o0)
{
  performConstellationTest(
    locationSouth2East(),
    locationSouthIncoming(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.)),

      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e2_o1)
{
  performConstellationTest(
    locationSouth2East(),
    locationSouthEntering(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e2_o2)
{
  performConstellationTest(locationSouth2East(),
                           locationSouth2North(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e2_o3)
{
  performConstellationTest(locationSouth2East(),
                           locationNorthExiting(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e2_o4)
{
  performConstellationTest(locationSouth2East(),
                           locationNorthOutgoing(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e3_o0)
{
  performConstellationTest(locationEastExiting(),
                           locationSouthIncoming(),
                           // other behind, potentially following us
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e3_o1)
{
  performConstellationTest(locationEastExiting(),
                           locationSouthEntering(),
                           // other behind, potentially following us
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e3_o2)
{
  performConstellationTest(locationEastExiting(),
                           locationSouth2North(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::NotRelevant, 0u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e3_o3)
{
  performConstellationTest(locationEastExiting(),
                           locationNorthExiting(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::NotRelevant, 0u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e3_o4)
{
  performConstellationTest(locationEastExiting(),
                           locationNorthOutgoing(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::NotRelevant, 0u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e4_o0)
{
  performConstellationTest(locationEastOutgoing(),
                           locationSouthIncoming(),
                           // other behind, potentially following us
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e4_o1)
{
  performConstellationTest(locationEastOutgoing(),
                           locationSouthEntering(),
                           // other behind, potentially following us
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e4_o2)
{
  performConstellationTest(locationEastOutgoing(),
                           locationSouth2North(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::NotRelevant, 0u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e4_o3)
{
  performConstellationTest(locationEastOutgoing(),
                           locationNorthExiting(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::NotRelevant, 0u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e4_o4)
{
  performConstellationTest(locationEastOutgoing(),
                           locationNorthOutgoing(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::NotRelevant, 0u, 0u, ::ad::physics::Speed(100.))});
}
