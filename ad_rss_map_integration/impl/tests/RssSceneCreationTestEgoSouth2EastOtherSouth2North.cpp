// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "RssSceneCreationTest.hpp"

struct RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North : public RssSceneCreationTestWithRoute
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

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North, e0_o0)
{
  performSceneTest(locationSouthIncoming(),
                   locationSouthIncoming(),
                   // same position
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North, e0_o1)
{
  performSceneTest(locationSouthIncoming(),
                   locationSouthEntering(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North, e0_o2)
{
  performSceneTest(locationSouthIncoming(),
                   locationSouth2North(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North, e0_o3)
{
  performSceneTest(locationSouthIncoming(),
                   locationNorthExiting(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North, e0_o4)
{
  performSceneTest(locationSouthIncoming(),
                   locationNorthOutgoing(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North, e1_o0)
{
  performSceneTest(locationSouthEntering(),
                   locationSouthIncoming(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(12.2936))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North, e1_o1)
{
  performSceneTest(locationSouthEntering(),
                   locationSouthEntering(),
                   // same position
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North, e1_o2)
{
  performSceneTest(locationSouthEntering(),
                   locationSouth2North(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North, e1_o3)
{
  performSceneTest(locationSouthEntering(),
                   locationNorthExiting(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North, e1_o4)
{
  performSceneTest(locationSouthEntering(),
                   locationNorthOutgoing(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North, e2_o0)
{
  performSceneTest(locationSouth2East(),
                   locationSouthIncoming(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North, e2_o1)
{
  performSceneTest(locationSouth2East(),
                   locationSouthEntering(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North, e2_o2)
{
  performSceneTest(locationSouth2East(),
                   locationSouth2North(),
                   // other
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North, e2_o3)
{
  performSceneTest(locationSouth2East(),
                   locationNorthExiting(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North, e2_o4)
{
  performSceneTest(locationSouth2East(),
                   locationNorthOutgoing(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North, e3_o0)
{
  performSceneTest(locationEastExiting(),
                   locationSouthIncoming(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North, e3_o1)
{
  performSceneTest(locationEastExiting(),
                   locationSouthEntering(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North, e3_o2)
{
  performSceneTest(locationEastExiting(),
                   locationSouth2North(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North, e3_o3)
{
  performSceneTest(locationEastExiting(),
                   locationNorthExiting(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North, e3_o4)
{
  performSceneTest(locationEastExiting(),
                   locationNorthOutgoing(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::NotRelevant, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North, e4_o0)
{
  performSceneTest(locationEastOutgoing(),
                   locationSouthIncoming(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 3u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North, e4_o1)
{
  performSceneTest(locationEastOutgoing(),
                   locationSouthEntering(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(15.27786))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North, e4_o2)
{
  performSceneTest(locationEastOutgoing(),
                   locationSouth2North(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::NotRelevant, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North, e4_o3)
{
  performSceneTest(locationEastOutgoing(),
                   locationNorthExiting(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::NotRelevant, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithRouteEgoSouth2EastOtherSouth2North, e4_o4)
{
  performSceneTest(locationEastOutgoing(),
                   locationNorthOutgoing(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::NotRelevant, 1u, 0u, ::ad::physics::Speed(100.))});
}

struct RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North : public RssSceneCreationTestWithoutRoute
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

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e0_o0)
{
  performSceneTest(locationSouthIncoming(),
                   locationSouthIncoming(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e0_o1)
{
  performSceneTest(locationSouthIncoming(),
                   locationSouthEntering(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e0_o2)
{
  performSceneTest(locationSouthIncoming(),
                   locationSouth2North(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e0_o3)
{
  performSceneTest(locationSouthIncoming(),
                   locationNorthExiting(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e0_o4)
{
  performSceneTest(locationSouthIncoming(),
                   locationNorthOutgoing(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 4u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e1_o0)
{
  performSceneTest(locationSouthEntering(),
                   locationSouthIncoming(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e1_o1)
{
  performSceneTest(locationSouthEntering(),
                   locationSouthEntering(),
                   // same position
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e1_o2)
{
  performSceneTest(locationSouthEntering(),
                   locationSouth2North(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e1_o3)
{
  performSceneTest(locationSouthEntering(),
                   locationNorthExiting(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e1_o4)
{
  performSceneTest(locationSouthEntering(),
                   locationNorthOutgoing(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e2_o0)
{
  performSceneTest(locationSouth2East(),
                   locationSouthIncoming(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e2_o1)
{
  performSceneTest(locationSouth2East(),
                   locationSouthEntering(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e2_o2)
{
  performSceneTest(locationSouth2East(),
                   locationSouth2North(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e2_o3)
{
  performSceneTest(locationSouth2East(),
                   locationNorthExiting(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e2_o4)
{
  performSceneTest(locationSouth2East(),
                   locationNorthOutgoing(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e3_o0)
{
  performSceneTest(locationEastExiting(),
                   locationSouthIncoming(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e3_o1)
{
  performSceneTest(locationEastExiting(),
                   locationSouthEntering(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 1u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e3_o2)
{
  performSceneTest(locationEastExiting(),
                   locationSouth2North(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::NotRelevant, 0u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e3_o3)
{
  performSceneTest(locationEastExiting(),
                   locationNorthExiting(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::NotRelevant, 0u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e3_o4)
{
  performSceneTest(locationEastExiting(),
                   locationNorthOutgoing(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::NotRelevant, 0u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e4_o0)
{
  performSceneTest(locationEastOutgoing(),
                   locationSouthIncoming(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 3u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e4_o1)
{
  performSceneTest(locationEastOutgoing(),
                   locationSouthEntering(),
                   // other behind, potentially following us
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::SameDirection, 2u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e4_o2)
{
  performSceneTest(locationEastOutgoing(),
                   locationSouth2North(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::NotRelevant, 0u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e4_o3)
{
  performSceneTest(locationEastOutgoing(),
                   locationNorthExiting(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::NotRelevant, 0u, 0u, ::ad::physics::Speed(100.))});
}

TEST_F(RssSceneCreationTestWithoutRouteEgoSouth2EastOtherSouth2North, e4_o4)
{
  performSceneTest(locationEastOutgoing(),
                   locationNorthOutgoing(),
                   std::initializer_list<ExpectedResultTuple>{std::make_tuple(
                     ::ad::rss::situation::SituationType::NotRelevant, 0u, 0u, ::ad::physics::Speed(100.))});
}
