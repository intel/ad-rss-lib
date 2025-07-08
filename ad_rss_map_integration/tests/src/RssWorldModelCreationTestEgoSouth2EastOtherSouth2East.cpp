// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include <ad/rss/map/test_support/RssWorldModelCreationTest.hpp>

struct RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East
  : public ad::rss::map::test_support::RssWorldModelCreationTestWithRoute
{
  /*
   *    |          |
   *    |          |
   *    |          |
   *    |          |___________
   *    |
   *    |
   *    |     E2/O2 E3/O3   E4/O4
   *    |           ____________
   *    |    E1/O1  |
   *    |           |
   *    |    E0/O0  |
   */
};

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East, e0_o0)
{
  performConstellationTest(
    locationSouthIncoming(),
    locationSouthIncoming(),
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East, e0_o1)
{
  performConstellationTest(
    locationSouthIncoming(),
    locationSouthEntering(),
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East, e0_o2)
{
  performConstellationTest(
    locationSouthIncoming(),
    locationSouth2East(),
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East, e0_o3)
{
  performConstellationTest(
    locationSouthIncoming(),
    locationEastExiting(),
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East, e0_o4)
{
  performConstellationTest(
    locationSouthIncoming(),
    locationEastOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 3u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East, e1_o0)
{
  performConstellationTest(
    locationSouthEntering(),
    locationSouthIncoming(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East, e1_o1)
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

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East, e1_o2)
{
  performConstellationTest(
    locationSouthEntering(),
    locationSouth2East(),
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East, e1_o3)
{
  performConstellationTest(
    locationSouthEntering(),
    locationEastExiting(),
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East, e1_o4)
{
  performConstellationTest(
    locationSouthEntering(),
    locationEastOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East, e2_o0)
{
  performConstellationTest(
    locationSouth2East(),
    locationSouthIncoming(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East, e2_o1)
{
  performConstellationTest(
    locationSouth2East(),
    locationSouthEntering(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East, e2_o2)
{
  performConstellationTest(
    locationSouth2East(),
    locationSouth2East(),
    // same position
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.2778)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East, e2_o3)
{
  performConstellationTest(
    locationSouth2East(),
    locationEastExiting(),
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East, e2_o4)
{
  performConstellationTest(
    locationSouth2East(),
    locationEastOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East, e3_o0)
{
  performConstellationTest(
    locationEastExiting(),
    locationSouthIncoming(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East, e3_o1)
{
  performConstellationTest(
    locationEastExiting(),
    locationSouthEntering(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East, e3_o2)
{
  performConstellationTest(
    locationEastExiting(),
    locationSouth2East(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East, e3_o3)
{
  performConstellationTest(
    locationEastExiting(),
    locationEastExiting(),
    // same position
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.27786)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.277866)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.27786)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East, e3_o4)
{
  performConstellationTest(
    locationEastExiting(),
    locationEastOutgoing(),
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East, e4_o0)
{
  performConstellationTest(
    locationEastOutgoing(),
    locationSouthIncoming(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 3u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East, e4_o1)
{
  performConstellationTest(
    locationEastOutgoing(),
    locationSouthEntering(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East, e4_o2)
{
  performConstellationTest(
    locationEastOutgoing(),
    locationSouth2East(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East, e4_o3)
{
  performConstellationTest(
    locationEastOutgoing(),
    locationEastExiting(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssWorldModelCreationTestWithRouteEgoSouth2EastOtherSouth2East, e4_o4)
{
  performConstellationTest(
    locationEastOutgoing(),
    locationEastOutgoing(),
    // same position
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

struct RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East
  : public ad::rss::map::test_support::RssWorldModelCreationTestWithoutRoute
{
  /*
   *    |          |
   *    |          |
   *    |          |
   *    |          |___________
   *    |
   *    |
   *    |     E2/O2 E3/O3   E4/O4
   *    |           ____________
   *    |    E1/O1  |
   *    |           |
   *    |    E0/O0  |
   */
};

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e0_o0)
{
  performConstellationTest(locationSouthIncoming(),
                           locationSouthIncoming(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e0_o1)
{
  performConstellationTest(
    locationSouthIncoming(),
    locationSouthEntering(),
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e0_o2)
{
  performConstellationTest(
    locationSouthIncoming(),
    locationSouth2East(),
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e0_o3)
{
  performConstellationTest(locationSouthIncoming(),
                           locationEastExiting(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e0_o4)
{
  performConstellationTest(locationSouthIncoming(),
                           locationEastOutgoing(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e1_o0)
{
  performConstellationTest(
    locationSouthEntering(),
    locationSouthIncoming(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e1_o1)
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

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e1_o2)
{
  performConstellationTest(
    locationSouthEntering(),
    locationSouth2East(),
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e1_o3)
{
  performConstellationTest(locationSouthEntering(),
                           locationEastExiting(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e1_o4)
{
  performConstellationTest(locationSouthEntering(),
                           locationEastOutgoing(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e2_o0)
{
  performConstellationTest(
    locationSouth2East(),
    locationSouthIncoming(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e2_o1)
{
  performConstellationTest(
    locationSouth2East(),
    locationSouthEntering(),
    // other behind, potentially following us
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e2_o2)
{
  performConstellationTest(
    locationSouth2East(),
    locationSouth2East(),
    // same position
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e2_o3)
{
  performConstellationTest(locationSouth2East(),
                           locationEastExiting(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e2_o4)
{
  performConstellationTest(locationSouth2East(),
                           locationEastOutgoing(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e3_o0)
{
  performConstellationTest(locationEastExiting(),
                           locationSouthIncoming(),
                           // other behind, potentially following us
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e3_o1)
{
  performConstellationTest(locationEastExiting(),
                           locationSouthEntering(),
                           // other behind, potentially following us
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e3_o2)
{
  performConstellationTest(locationEastExiting(),
                           locationSouth2East(),
                           // other behind, potentially following us
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e3_o3)
{
  performConstellationTest(
    locationEastExiting(),
    locationEastExiting(),
    // same position
    std::initializer_list<ExpectedResultTuple>{
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.)),
      std::make_tuple(::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e3_o4)
{
  performConstellationTest(locationEastExiting(),
                           locationEastOutgoing(),
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e4_o0)
{
  performConstellationTest(locationEastOutgoing(),
                           locationSouthIncoming(),
                           // other behind, potentially following us
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e4_o1)
{
  performConstellationTest(locationEastOutgoing(),
                           locationSouthEntering(),
                           // other behind, potentially following us
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e4_o2)
{
  performConstellationTest(locationEastOutgoing(),
                           locationSouth2East(),
                           // other behind, potentially following us
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e4_o3)
{
  performConstellationTest(locationEastOutgoing(),
                           locationEastExiting(),
                           // other behind, potentially following us
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssWorldModelCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e4_o4)
{
  performConstellationTest(locationEastOutgoing(),
                           locationEastOutgoing(),
                           // same position
                           std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                             ::ad::rss::world::ConstellationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}
