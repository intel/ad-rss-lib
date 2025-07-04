// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "RssCheckTestBaseT.hpp"
#include "ad/rss/core/RssSituationExtraction.hpp"

namespace ad {
namespace rss {
namespace core {

class RssSituationExtractionInputRangeTests : public RssCheckTestBase
{
protected:
  core::RelativeConstellation constellation;
  RssSituationExtraction constellationExtraction;

  void performTestRun()
  {
    EXPECT_FALSE(constellationExtraction.extractConstellationInputRangeChecked(
      worldModel.time_index, worldModel.constellations[0], constellation));
  }
};

TEST_F(RssSituationExtractionInputRangeTests, validateTestSetup)
{
  ASSERT_TRUE(constellationExtraction.extractConstellationInputRangeChecked(
    worldModel.time_index, worldModel.constellations[0], constellation));
}

TEST_F(RssSituationExtractionInputRangeTests, egoVehicleDataInvalid)
{
  worldModel.constellations[0].ego_vehicle.occupied_regions[0].lon_range.minimum = physics::ParametricValue();
  performTestRun();
}

TEST_F(RssSituationExtractionInputRangeTests, objectDataInvalid)
{
  worldModel.constellations[0].object.occupied_regions[0].lon_range.minimum = physics::ParametricValue();
  performTestRun();
}

TEST_F(RssSituationExtractionInputRangeTests, egoVehicleAsObject)
{
  worldModel.constellations[0].object.object_type = world::ObjectType::EgoVehicle;
  performTestRun();
}

TEST_F(RssSituationExtractionInputRangeTests, objectAsEgoVehicle)
{
  worldModel.constellations[0].ego_vehicle.object_type = world::ObjectType::OtherVehicle;
  performTestRun();
}

TEST_F(RssSituationExtractionInputRangeTests, constellationNotRelevant)
{
  worldModel.constellations[0].constellation_type = world::ConstellationType::NotRelevant;
  ASSERT_TRUE(constellationExtraction.extractConstellationInputRangeChecked(
    worldModel.time_index, worldModel.constellations[0], constellation));
}

TEST_F(RssSituationExtractionInputRangeTests, constellationTypeInvalid)
{
  worldModel.constellations[0].constellation_type = world::ConstellationType(-1);
  performTestRun();
}

} // namespace core
} // namespace rss
} // namespace ad
