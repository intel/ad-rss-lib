// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "RssCheckTestBaseT.hpp"
#include "ad_rss/core/RssSituationExtraction.hpp"

namespace ad_rss {
namespace core {

class RssSituationExtractionInputRangeTests : public RssCheckTestBase
{
protected:
  situation::Situation situation;
  RssSituationExtraction situationExtraction;

  void performTestRun()
  {
    EXPECT_FALSE(situationExtraction.extractSituationInputRangeChecked(
      worldModel.timeIndex, worldModel.egoVehicleRssDynamics, worldModel.scenes[0], situation));
  }
};

TEST_F(RssSituationExtractionInputRangeTests, validateTestSetup)
{
  ASSERT_TRUE(situationExtraction.extractSituationInputRangeChecked(
    worldModel.timeIndex, worldModel.egoVehicleRssDynamics, worldModel.scenes[0], situation));
}

TEST_F(RssSituationExtractionInputRangeTests, egoVehicleDataInvalid)
{
  worldModel.scenes[0].egoVehicle.occupiedRegions[0].lonRange.minimum = physics::ParametricValue();
  performTestRun();
}

TEST_F(RssSituationExtractionInputRangeTests, objectDataInvalid)
{
  worldModel.scenes[0].object.occupiedRegions[0].lonRange.minimum = physics::ParametricValue();
  performTestRun();
}

TEST_F(RssSituationExtractionInputRangeTests, egoVehicleAsObject)
{
  worldModel.scenes[0].object.objectType = world::ObjectType::EgoVehicle;
  performTestRun();
}

TEST_F(RssSituationExtractionInputRangeTests, objectAsEgoVehicle)
{
  worldModel.scenes[0].egoVehicle.objectType = world::ObjectType::OtherVehicle;
  performTestRun();
}

TEST_F(RssSituationExtractionInputRangeTests, situationNotRelevant)
{
  worldModel.scenes[0].situationType = situation::SituationType::NotRelevant;
  ASSERT_TRUE(situationExtraction.extractSituationInputRangeChecked(
    worldModel.timeIndex, worldModel.egoVehicleRssDynamics, worldModel.scenes[0], situation));
}

TEST_F(RssSituationExtractionInputRangeTests, situationTypeInvalid)
{
  worldModel.scenes[0].situationType = situation::SituationType(-1);
  performTestRun();
}

} // namespace core
} // namespace ad_rss
