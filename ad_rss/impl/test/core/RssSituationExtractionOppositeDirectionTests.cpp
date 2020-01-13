// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/core/RssSituationExtraction.hpp"

namespace ad {
namespace rss {
namespace core {

class RssSituationExtractionOppositeDirectionTests : public testing::Test
{
protected:
  virtual void SetUp()
  {
    worldModel.egoVehicleRssDynamics = getEgoRssDynamics();
    leadingObject = createObject(36., 0.);
    leadingObject.objectId = 0;
    scene.situationType = situation::SituationType::OppositeDirection;
    scene.objectRssDynamics = getObjectRssDynamics();

    {
      world::OccupiedRegion occupiedRegion;
      occupiedRegion.lonRange.minimum = ParametricValue(0.8);
      occupiedRegion.lonRange.maximum = ParametricValue(1.0);
      occupiedRegion.segmentId = 1.;
      occupiedRegion.latRange.minimum = ParametricValue(0.2);
      occupiedRegion.latRange.maximum = ParametricValue(0.4);

      leadingObject.occupiedRegions.push_back(occupiedRegion);
    }

    followingObject = createObject(36., 0.);
    followingObject.objectId = 1;
    {
      world::OccupiedRegion occupiedRegion;
      occupiedRegion.lonRange.minimum = ParametricValue(0.1);
      occupiedRegion.lonRange.maximum = ParametricValue(0.2);
      occupiedRegion.segmentId = 1.;
      occupiedRegion.latRange.minimum = ParametricValue(0.6);
      occupiedRegion.latRange.maximum = ParametricValue(0.8);
      followingObject.occupiedRegions.push_back(occupiedRegion);
    }
  }

  virtual void TearDown()
  {
    followingObject.occupiedRegions.clear();
    leadingObject.occupiedRegions.clear();
    scene.egoVehicleRoad.clear();
  }

  world::Object followingObject;
  world::Object leadingObject;
  world::WorldModel worldModel;
  world::Scene scene;
  RssSituationExtraction situationExtraction;
};

TEST_F(RssSituationExtractionOppositeDirectionTests, noLongitudinalDifference)
{
  situation::SituationSnapshot situationSnapshot;

  scene.egoVehicle = objectAsEgo(leadingObject);
  scene.object = followingObject;
  scene.egoVehicleRoad.push_back(longitudinalNoDifferenceRoadSegment());

  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  ASSERT_TRUE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  ASSERT_EQ(situationSnapshot.timeIndex, worldModel.timeIndex);
  ASSERT_EQ(situationSnapshot.situations.size(), 1u);

  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.longitudinalDistance, Distance(6));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.velocity.speedLon.minimum, Speed(10));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.velocity.speedLon.maximum, Speed(10));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.dynamics.alphaLon.accelMax,
            worldModel.egoVehicleRssDynamics.alphaLon.accelMax);

  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.lateralPosition,
            situation::LateralRelativePosition::AtLeft);
  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.lateralDistance, Distance(1));
}

TEST_F(RssSituationExtractionOppositeDirectionTests, longitudinalDifference)
{
  situation::SituationSnapshot situationSnapshot;

  scene.egoVehicle = objectAsEgo(followingObject);
  scene.object = leadingObject;
  scene.egoVehicleRoad.push_back(longitudinalDifferenceRoadSegment());

  worldModel.scenes.push_back(scene);
  worldModel.timeIndex = 1;

  ASSERT_TRUE(situationExtraction.extractSituations(worldModel, situationSnapshot));
  ASSERT_EQ(situationSnapshot.timeIndex, worldModel.timeIndex);
  ASSERT_EQ(situationSnapshot.situations.size(), 1u);

  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.longitudinalDistance, Distance(2));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.velocity.speedLon.minimum, Speed(10));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.velocity.speedLon.maximum, Speed(10));
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.dynamics.alphaLon.accelMax,
            worldModel.egoVehicleRssDynamics.alphaLon.accelMax);
  ASSERT_EQ(situationSnapshot.situations[0].egoVehicleState.dynamics.alphaLon.brakeMin,
            worldModel.egoVehicleRssDynamics.alphaLon.brakeMin);

  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.lateralPosition,
            situation::LateralRelativePosition::AtRight);
  ASSERT_EQ(situationSnapshot.situations[0].relativePosition.lateralDistance, Distance(1));
}

} // namespace core
} // namespace rss
} // namespace ad
