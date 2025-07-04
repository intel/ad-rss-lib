// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2022 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include <ad/rss/map/RssRouteChecker.hpp>
#include <ad/rss/map/RssWorldModelCreation.hpp>
#include <ad/rss/map/test_support/RssWorldModelCreationTest.hpp>
#include <ad/rss/unstructured/TrajectoryPedestrian.hpp>
#include <ad/rss/unstructured/TrajectoryVehicle.hpp>
#include <functional>

using namespace ad::rss::map::test_support;

struct RssRouteCheckerTests : public virtual RssMapIntegrationTestBase
{
  void SetUp() override
  {
    RssMapIntegrationTestBase::SetUp();

    mRouteChecker = std::make_shared<::ad::rss::map::RssRouteChecker<void *>>(::ad::physics::Duration(2.));
    mRouteChecker->registerArtificialObjectInjectionCallback(
      ad::physics::Distance(1.),
      std::bind(&RssRouteCheckerTests::injectArtificialObjectsCallback,
                this,
                std::placeholders::_1,
                std::placeholders::_2,
                std::placeholders::_3));
    mMinConnectedRouteLengthOriginal = ::ad::rss::map::RssWorldModelCreation::cMinConnectedRouteLength;
    // enforce shorter connected route length to be enable route expansion with parent handling
    *const_cast<ad::physics::Distance *>(&::ad::rss::map::RssWorldModelCreation::cMinConnectedRouteLength)
      = ad::physics::Distance(20.);

    mRouteChecker->registerCalculateTrajectorySetsCallback(
      ad::rss::world::ObjectType::EgoVehicle,
      std::bind(&RssRouteCheckerTests::calculateTrajectorySetsCallbackEgoVehicle,
                this,
                std::placeholders::_1,
                std::placeholders::_2,
                std::placeholders::_3,
                std::placeholders::_4,
                std::placeholders::_5,
                std::placeholders::_6,
                std::placeholders::_7));
    mRouteChecker->registerCalculateTrajectorySetsCallback(
      ad::rss::world::ObjectType::ArtificialPedestrian,
      std::bind(&RssRouteCheckerTests::calculateTrajectorySetsCallbackPedestrian,
                this,
                std::placeholders::_1,
                std::placeholders::_2,
                std::placeholders::_3,
                std::placeholders::_4,
                std::placeholders::_5,
                std::placeholders::_6,
                std::placeholders::_7));
  }

  void TearDown() override
  {
    mRouteChecker.reset();
    *const_cast<ad::physics::Distance *>(&::ad::rss::map::RssWorldModelCreation::cMinConnectedRouteLength)
      = mMinConnectedRouteLengthOriginal;
  }

  void addObject(RssEgoVehicleAdapterTest::Ptr const ego_vehicle)
  {
    mEgoVehicles.push_back(ego_vehicle);
  }
  void addObject(RssVehicleAdapterTest::Ptr const vehicle)
  {
    mOtherVehicles.push_back(vehicle);
  }
  void addObject(RssPedestrianAdapterTest::Ptr const pedestrian)
  {
    mPedestrians.push_back(pedestrian);
  }
  void addVehicleAsArtificialVehicle(RssVehicleAdapterTest::Ptr const vehicle)
  {
    ::ad::rss::map::RssObjectAdapterData artificial_vehicle_data = *vehicle;
    artificial_vehicle_data.object_type = ::ad::rss::world::ObjectType::ArtificialVehicle;
    auto artificial_vehicle = std::make_shared<::ad::rss::map::RssArtificialObjectAdapter<void *>>(
      artificial_vehicle_data, vehicle->getDefaultRssDynamics(), mCheckerControlTest);
    mArtificialObjects.push_back(artificial_vehicle);
  }

  void addPedestrianAsArtificialPedestrian(RssPedestrianAdapterTest::Ptr const pedestrian)
  {
    ::ad::rss::map::RssObjectAdapterData artificial_pedestrian_data = *pedestrian;
    artificial_pedestrian_data.object_type = ::ad::rss::world::ObjectType::ArtificialPedestrian;
    auto artificial_pedestrian = std::make_shared<::ad::rss::map::RssArtificialObjectAdapter<void *>>(
      artificial_pedestrian_data, pedestrian->getDefaultRssDynamics(), mCheckerControlTest);
    mArtificialObjects.push_back(artificial_pedestrian);
  }

  ad::rss::map::RssArtificialObjectAdapterList<void *>
  injectArtificialObjectsCallback(ad::rss::map::RssRouteCheckerEgoVehicleDataMap<void *> const &egoVehicleMap,
                                  ad::rss::map::RssRouteCheckerVehicleDataMap<void *> const &vehicleMap,
                                  ad::rss::map::RssRouteCheckerPedestrianDataMap<void *> const &pedestrianMap)
  {
    (void)egoVehicleMap;
    (void)vehicleMap;
    (void)pedestrianMap;
    return mArtificialObjects;
  }

  bool
  calculateTrajectorySetsCallbackEgoVehicle(::ad::rss::map::RssRouteCheckerEgoVehicleData<void *> const &egoVehicle,
                                            ::ad::rss::map::RssRouteId const &routeId,
                                            ::ad::rss::core::RelativeConstellation const &constellation,
                                            ::ad::rss::world::ObjectId const &objectId,
                                            ::ad::rss::core::RelativeObjectState const &vehicleState,
                                            ::ad::geometry::Polygon &brakePolygon,
                                            ::ad::geometry::Polygon &continueForwardPolygon)
  {
    bool routeFound = false;
    for (auto const &route : egoVehicle.mRoutes)
    {
      if (route.route_id == routeId)
      {
        routeFound = true;
      }
    }
    EXPECT_TRUE(routeFound);
    EXPECT_EQ(egoVehicle.mRssObjectData.id, objectId);
    EXPECT_EQ(egoVehicle.mRssObjectData.id, constellation.ego_id);
    EXPECT_EQ(ad::rss::world::ObjectType::EgoVehicle, vehicleState.object_type);
    ::ad::rss::unstructured::TrajectoryVehicle trajectoryVehicle;
    bool result = trajectoryVehicle.calculateTrajectorySets(vehicleState, brakePolygon, continueForwardPolygon);
    return result;
  }

  bool
  calculateTrajectorySetsCallbackPedestrian(::ad::rss::map::RssRouteCheckerEgoVehicleData<void *> const &egoVehicle,
                                            ::ad::rss::map::RssRouteId const &routeId,
                                            ::ad::rss::core::RelativeConstellation const &constellation,
                                            ::ad::rss::world::ObjectId const &objectId,
                                            ::ad::rss::core::RelativeObjectState const &vehicleState,
                                            ::ad::geometry::Polygon &brakePolygon,
                                            ::ad::geometry::Polygon &continueForwardPolygon)
  {
    bool routeFound = false;
    for (auto const &route : egoVehicle.mRoutes)
    {
      if (route.route_id == routeId)
      {
        routeFound = true;
      }
    }
    EXPECT_TRUE(routeFound);
    EXPECT_NE(egoVehicle.mRssObjectData.id, objectId);
    EXPECT_EQ(objectId, constellation.object_id);
    EXPECT_EQ(ad::rss::world::ObjectType::ArtificialPedestrian, vehicleState.object_type);
    ::ad::rss::unstructured::TrajectoryPedestrian trajectoryPedestrian;
    bool result = trajectoryPedestrian.calculateTrajectorySets(vehicleState, brakePolygon, continueForwardPolygon);
    return result;
  }

  struct ExpectedResult
  {
    ExpectedResult(uint32_t iRouteId,
                   uint32_t iParentRouteId = 0u,
                   std::vector<uint32_t> iDangerousObjects = std::vector<uint32_t>())
      : route_id(iRouteId)
      , parent_route_id(iParentRouteId)
    {
      dangerous_state = false;
      for (auto dangerousObject : iDangerousObjects)
      {
        dangerous_state = true;
        dangerous_objects.push_back(ad::rss::world::ObjectId(dangerousObject));
      }
    }

    ad::rss::map::RssRouteId route_id;
    bool dangerous_state;
    ad::rss::map::RssRouteId parent_route_id;
    std::vector<ad::rss::world::ObjectId> dangerous_objects;
  };

  void runCheck(std::vector<std::vector<ExpectedResult>> const &expectedDangerousStates)
  {
    auto const checkResultList = mRouteChecker->checkObjects(
      std::chrono::system_clock::now(),
      ad::physics::Distance(2.),
      mEgoVehicles,
      mOtherVehicles,
      ad::physics::Distance(1.),
      mPedestrians,
      ad::rss::map::RssRouteCheckerEgoVehicleData<void *>::RouteExtensionMode::eAllowMultipleRoutes);

    // one result per object
    ASSERT_EQ(mEgoVehicles.size() + mOtherVehicles.size() + mPedestrians.size() + mArtificialObjects.size(),
              checkResultList.size());
    // one actual check result per ego vehicle
    ASSERT_EQ(mEgoVehicles.size(), expectedDangerousStates.size());

    for (auto const &checkResult : checkResultList)
    {
      ::ad::rss::map::RssEgoVehicleAdapterList<void *>::iterator egoVehicleIter = mEgoVehicles.end();
      switch (checkResult.object_data.type)
      {
        case ::ad::rss::world::ObjectType::EgoVehicle:
        {
          egoVehicleIter
            = std::find_if(mEgoVehicles.begin(),
                           mEgoVehicles.end(),
                           [&checkResult](ad::rss::map::RssEgoVehicleAdapter<void *>::ConstPtr ego_vehicle) {
                             return ego_vehicle->getObjectId() == checkResult.object_data.id;
                           });
          ASSERT_TRUE(egoVehicleIter != mEgoVehicles.end());
          break;
        }
        case ::ad::rss::world::ObjectType::OtherVehicle:
        case ::ad::rss::world::ObjectType::Bicycle:
        case ::ad::rss::world::ObjectType::OtherObject:
        {
          auto vehicleIter
            = std::find_if(mOtherVehicles.begin(),
                           mOtherVehicles.end(),
                           [&checkResult](ad::rss::map::RssVehicleAdapter<void *>::ConstPtr otherVehicle) {
                             return otherVehicle->getObjectId() == checkResult.object_data.id;
                           });
          ASSERT_TRUE(vehicleIter != mOtherVehicles.end());
          break;
        }
        case ::ad::rss::world::ObjectType::Pedestrian:
        {
          auto pedestrianIter
            = std::find_if(mPedestrians.begin(),
                           mPedestrians.end(),
                           [&checkResult](ad::rss::map::RssPedestrianAdapter<void *>::ConstPtr pedestrian) {
                             return pedestrian->getObjectId() == checkResult.object_data.id;
                           });
          ASSERT_TRUE(pedestrianIter != mPedestrians.end());
          break;
        }
        case ::ad::rss::world::ObjectType::ArtificialObject:
        case ::ad::rss::world::ObjectType::ArtificialVehicle:
        case ::ad::rss::world::ObjectType::ArtificialPedestrian:
        {
          auto artificialObjectIter
            = std::find_if(mArtificialObjects.begin(),
                           mArtificialObjects.end(),
                           [&checkResult](ad::rss::map::RssArtificialObjectAdapter<void *>::ConstPtr artificialObject) {
                             return artificialObject->getObjectId() == checkResult.object_data.id;
                           });
          ASSERT_TRUE(artificialObjectIter != mArtificialObjects.end());
          break;
        }
        default:
        {
          ASSERT_TRUE(false) << "Invalid object type";
        }
      }

      if (egoVehicleIter != mEgoVehicles.end())
      {
        auto vehicleIndexSigned = std::distance(mEgoVehicles.begin(), egoVehicleIter);
        ASSERT_LE(0, vehicleIndexSigned);
        auto vehicleIndex = static_cast<std::size_t>(vehicleIndexSigned);
        auto expectedDangerousRoutes = expectedDangerousStates[vehicleIndex];
        ASSERT_EQ(expectedDangerousRoutes.size(), checkResult.situation_check_results.size())
          << egoVehicleIter->get()->getObjectId();
        for (auto j = 0u; j < expectedDangerousRoutes.size(); ++j)
        {
          EXPECT_TRUE(checkResult.situation_check_results[j].is_valid);
          EXPECT_EQ(expectedDangerousRoutes[j].route_id, checkResult.situation_check_results[j].rss_route.route_id)
            << egoVehicleIter->get()->getObjectId();
          EXPECT_EQ(expectedDangerousRoutes[j].parent_route_id,
                    checkResult.situation_check_results[j].rss_route.parent_route_id)
            << egoVehicleIter->get()->getObjectId();
          EXPECT_EQ(expectedDangerousRoutes[j].dangerous_state,
                    checkResult.situation_check_results[j].result_analysis.dangerous_state)
            << egoVehicleIter->get()->getObjectId();
          EXPECT_EQ(expectedDangerousRoutes[j].dangerous_objects,
                    checkResult.situation_check_results[j].proper_response.dangerous_objects)
            << egoVehicleIter->get()->getObjectId();
        }
      }
    }
  }

  ::ad::rss::map::RssRouteChecker<void *>::Ptr mRouteChecker;

  ::ad::rss::map::RssPedestrianAdapterList<void *> mPedestrians;
  ::ad::rss::map::RssArtificialObjectAdapterList<void *> mArtificialObjects;
  ::ad::rss::map::RssVehicleAdapterList<void *> mOtherVehicles;
  ::ad::rss::map::RssEgoVehicleAdapterList<void *> mEgoVehicles;
  ::ad::physics::Distance mMinConnectedRouteLengthOriginal;
};

struct RssRouteCheckerTestsNoExternalData : public RssRouteCheckerTests,
                                            public ad::rss::map::test_support::RssWorldModelCreationTestWithoutRoute
{
  void run_two_egos_test()
  {
    auto egoVehicleBack = createEgoVehicle(::ad::rss::world::ObjectId(123), getEgoVehicleStartLocation());
    auto egoVehicleFront = createEgoVehicle(::ad::rss::world::ObjectId(124), locationSouthIncoming());

    addObject(egoVehicleBack);
    addObject(egoVehicleFront);
    addObject(createOtherVehicle(::ad::rss::world::ObjectId(10), locationNorthOutgoing()));

    runCheck({// ego back has only one prediction
              {ExpectedResult(1u)},
              // ego front immediately starts with two predictions
              {ExpectedResult(1u), ExpectedResult(2u)}});

    egoVehicleFront->updatePosition(locationSouthEntering());
    egoVehicleBack->updatePosition(locationSouthIncoming());

    runCheck({// ego back now also has two predictions, both times too near to second ego
              {ExpectedResult(1u, 0u, {124}), ExpectedResult(2u, 1u, {124})},
              // ego front state also changes, because front is too near in the back
              {ExpectedResult(1u, 0u, {123}), ExpectedResult(2u, 0u, {123})}});

    egoVehicleFront->updatePosition(locationNorthExiting());

    runCheck({// ego back keeps its predications, but since front is away, it's safe again
              {ExpectedResult(1u, 0u), ExpectedResult(2u, 1u)},
              // ego front route 1 dropped
              // remains dangerous, but now because of the other vehicle in front
              {ExpectedResult(2u, 0u, {10})}});
  }
};

TEST_F(RssRouteCheckerTestsNoExternalData, one_ego_one_vehicle)
{
  auto ego_vehicle = createEgoVehicle(::ad::rss::world::ObjectId(123), getEgoVehicleStartLocation());
  addObject(ego_vehicle);
  addObject(createOtherVehicle(::ad::rss::world::ObjectId(10), locationNorthOutgoing()));
  // not yet at intersection
  runCheck({{ExpectedResult(1u)}});

  // near enough to trigger two route predictions of the ego, second one is extended from first
  ego_vehicle->updatePosition(locationSouthIncoming());
  runCheck({{ExpectedResult(1u), ExpectedResult(2u, 1u)}});

  // leaving the intersection to the north, route 1 dropped
  ego_vehicle->updatePosition(locationNorthExiting());
  runCheck({{ExpectedResult(2u, 1u, {10})}});
}

TEST_F(RssRouteCheckerTestsNoExternalData, one_ego_one_artificial_vehicle)
{
  auto ego_vehicle = createEgoVehicle(::ad::rss::world::ObjectId(123), getEgoVehicleStartLocation());
  addObject(ego_vehicle);
  addVehicleAsArtificialVehicle(createOtherVehicle(::ad::rss::world::ObjectId(15), locationNorthOutgoing()));

  // near enough to trigger two route predictions of the ego
  ego_vehicle->updatePosition(locationSouthIncoming());
  runCheck({{ExpectedResult(1u), ExpectedResult(2u)}});
}

TEST_F(RssRouteCheckerTestsNoExternalData, one_ego_one_artificial_pedestrian)
{
  auto ego_vehicle = createEgoVehicle(::ad::rss::world::ObjectId(123), getEgoVehicleStartLocation());
  addObject(ego_vehicle);
  addPedestrianAsArtificialPedestrian(createPedestrian(::ad::rss::world::ObjectId(15), locationSouthIncoming()));

  // near enough to trigger two route predictions of the ego
  ego_vehicle->updatePosition(locationSouthIncoming());
  runCheck({{ExpectedResult(1u, 0u, {15}), ExpectedResult(2u, 0u, {15})}});
}

TEST_F(RssRouteCheckerTestsNoExternalData, two_egos)
{
  run_two_egos_test();
}

TEST_F(RssRouteCheckerTestsNoExternalData, two_egos_restrict_area)
{
  auto southEnteringENU = RssObjectAdapterTest::getENUPoint(locationSouthEntering());
  mRouteChecker->restrictOperationToIntersectionArea(southEnteringENU, ::ad::physics::Distance(50.));
  run_two_egos_test();
}

//@TODO extend tests by more cases: with external routes, with pedestrians, ensure time jumps are considered correctly,
//...
