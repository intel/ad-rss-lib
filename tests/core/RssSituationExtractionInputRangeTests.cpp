// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors
//    may be used to endorse or promote products derived from this software without
//    specific prior written permission.
//
//    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
//    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
//    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
//    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
//    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//    POSSIBILITY OF SUCH DAMAGE.
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
