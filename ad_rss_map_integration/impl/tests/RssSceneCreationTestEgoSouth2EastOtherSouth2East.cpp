// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "RssSceneCreationTest.hpp"

struct RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East : public RssSceneCreationTestWithRoute
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

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East, e0_o0)
{
  performSceneTest(locationSouthIncoming(),
                   locationSouthIncoming(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East, e0_o1)
{
  performSceneTest(locationSouthIncoming(),
                   locationSouthEntering(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East, e0_o2)
{
  performSceneTest(locationSouthIncoming(),
                   locationSouth2East(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East, e0_o3)
{
  performSceneTest(locationSouthIncoming(),
                   locationEastExiting(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East, e0_o4)
{
  performSceneTest(locationSouthIncoming(),
                   locationEastOutgoing(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 3u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East, e1_o0)
{
  performSceneTest(locationSouthEntering(),
                   locationSouthIncoming(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East, e1_o1)
{
  performSceneTest(locationSouthEntering(),
                   locationSouthEntering(),
                   // same position
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East, e1_o2)
{
  performSceneTest(locationSouthEntering(),
                   locationSouth2East(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East, e1_o3)
{
  performSceneTest(locationSouthEntering(),
                   locationEastExiting(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East, e1_o4)
{
  performSceneTest(locationSouthEntering(),
                   locationEastOutgoing(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East, e2_o0)
{
  performSceneTest(locationSouth2East(),
                   locationSouthIncoming(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East, e2_o1)
{
  performSceneTest(locationSouth2East(),
                   locationSouthEntering(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East, e2_o2)
{
  performSceneTest(locationSouth2East(),
                   locationSouth2East(),
                   // same position
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East, e2_o3)
{
  performSceneTest(locationSouth2East(),
                   locationEastExiting(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East, e2_o4)
{
  performSceneTest(locationSouth2East(),
                   locationEastOutgoing(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.2778))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East, e3_o0)
{
  performSceneTest(locationEastExiting(),
                   locationSouthIncoming(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East, e3_o1)
{
  performSceneTest(locationEastExiting(),
                   locationSouthEntering(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East, e3_o2)
{
  performSceneTest(locationEastExiting(),
                   locationSouth2East(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East, e3_o3)
{
  performSceneTest(locationEastExiting(),
                   locationEastExiting(),
                   // same position
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East, e3_o4)
{
  performSceneTest(locationEastExiting(),
                   locationEastOutgoing(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East, e4_o0)
{
  performSceneTest(locationEastOutgoing(),
                   locationSouthIncoming(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 3u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East, e4_o1)
{
  performSceneTest(locationEastOutgoing(),
                   locationSouthEntering(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East, e4_o2)
{
  performSceneTest(locationEastOutgoing(),
                   locationSouth2East(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East, e4_o3)
{
  performSceneTest(locationEastOutgoing(),
                   locationEastExiting(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2East, e4_o4)
{
  performSceneTest(locationEastOutgoing(),
                   locationEastOutgoing(),
                   // same position
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

struct RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East : public RssSceneCreationTestWithoutRoute
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

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e0_o0)
{
  performSceneTest(locationSouthIncoming(),
                   locationSouthIncoming(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e0_o1)
{
  performSceneTest(locationSouthIncoming(),
                   locationSouthEntering(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e0_o2)
{
  performSceneTest(locationSouthIncoming(),
                   locationSouth2East(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e0_o3)
{
  performSceneTest(locationSouthIncoming(),
                   locationEastExiting(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e0_o4)
{
  performSceneTest(locationSouthIncoming(),
                   locationEastOutgoing(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e1_o0)
{
  performSceneTest(locationSouthEntering(),
                   locationSouthIncoming(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e1_o1)
{
  performSceneTest(locationSouthEntering(),
                   locationSouthEntering(),
                   // same position
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e1_o2)
{
  performSceneTest(locationSouthEntering(),
                   locationSouth2East(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e1_o3)
{
  performSceneTest(locationSouthEntering(),
                   locationEastExiting(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e1_o4)
{
  performSceneTest(locationSouthEntering(),
                   locationEastOutgoing(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e2_o0)
{
  performSceneTest(locationSouth2East(),
                   locationSouthIncoming(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e2_o1)
{
  performSceneTest(locationSouth2East(),
                   locationSouthEntering(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e2_o2)
{
  performSceneTest(locationSouth2East(),
                   locationSouth2East(),
                   // same position
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e2_o3)
{
  performSceneTest(locationSouth2East(),
                   locationEastExiting(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e2_o4)
{
  performSceneTest(locationSouth2East(),
                   locationEastOutgoing(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e3_o0)
{
  performSceneTest(locationEastExiting(),
                   locationSouthIncoming(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e3_o1)
{
  performSceneTest(locationEastExiting(),
                   locationSouthEntering(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e3_o2)
{
  performSceneTest(locationEastExiting(),
                   locationSouth2East(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e3_o3)
{
  performSceneTest(locationEastExiting(),
                   locationEastExiting(),
                   // same position
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e3_o4)
{
  performSceneTest(locationEastExiting(),
                   locationEastOutgoing(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e4_o0)
{
  performSceneTest(locationEastOutgoing(),
                   locationSouthIncoming(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e4_o1)
{
  performSceneTest(locationEastOutgoing(),
                   locationSouthEntering(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e4_o2)
{
  performSceneTest(locationEastOutgoing(),
                   locationSouth2East(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e4_o3)
{
  performSceneTest(locationEastOutgoing(),
                   locationEastExiting(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2East, e4_o4)
{
  performSceneTest(locationEastOutgoing(),
                   locationEastOutgoing(),
                   // same position
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}
