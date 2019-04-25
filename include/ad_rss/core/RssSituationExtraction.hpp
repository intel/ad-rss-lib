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
/**
 * @file
 */

#pragma once

#include "ad_rss/situation/SituationVector.hpp"
#include "ad_rss/world/WorldModel.hpp"

/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {

/*!
 * @brief namespace world
 */
namespace world {
/*!
 * @brief forward declaration of class RssSituationIdProvider
 */
class RssSituationIdProvider;
} // namespace world

/*!
 * @brief namespace core
 */
namespace core {

/*!
 * @brief class RssSituationExtraction
 *
 * Class providing functions required for the extraction of the RSS situations from the RSS world model.
 */
class RssSituationExtraction
{
public:
  /*!
   * @brief constructor
   */
  RssSituationExtraction();

  /*!
   * @brief destructor
   */
  ~RssSituationExtraction();

  /**
   * @brief Extract all RSS situations to be checked from the world model.
   *
   * @param [in] worldModel - the current world model information
   * @param [out] situationVector - the vector of situations to be analyzed with RSS
   *
   * @return true if the situations could be created, false if there was an error during the operation.
   */
  bool extractSituations(world::WorldModel const &worldModel, situation::SituationVector &situationVector);

private:
  void calcluateRelativeLongitudinalPosition(physics::MetricRange const &egoMetricRange,
                                             physics::MetricRange const &otherMetricRange,
                                             situation::LongitudinalRelativePosition &longitudinalPosition,
                                             physics::Distance &longitudinalDistance);
  void calcluateRelativeLongitudinalPositionIntersection(physics::MetricRange const &egoMetricRange,
                                                         physics::MetricRange const &otherMetricRange,
                                                         situation::LongitudinalRelativePosition &longitudinalPosition,
                                                         physics::Distance &longitudinalDistance);
  void calcluateRelativeLateralPosition(physics::MetricRange const &egoMetricRange,
                                        physics::MetricRange const &otherMetricRange,
                                        situation::LateralRelativePosition &lateralPosition,
                                        physics::Distance &lateralDistance);
  bool convertObjectsNonIntersection(world::Scene const &currentScene, situation::Situation &situation);
  void convertToIntersectionCentric(physics::MetricRange const &objectDimension,
                                    physics::MetricRange const &intersectionPosition,
                                    physics::MetricRange &dimensionsIntersection);
  bool convertObjectsIntersection(world::Scene const &currentScene, situation::Situation &situation);
  /**
   * @brief Extract the RSS situation of the ego vehicle and the object to be checked.
   *
   * @param [in] timeIndex the time index of the current situation
   * @param [in] egoVehicleRssDynamics the RSS dynamics of the ego vehicle
   * @param [in] currentScene the information on the current scene with the object to be checked
   * @param [out] situation the situation to be analyzed with RSS
   *
   * @return true if the situation could be created, false if there was an error during the operation.
   */
  bool extractSituationInputRangeChecked(physics::TimeIndex const &timeIndex,
                                         world::RssDynamics const &egoVehicleRssDynamics,
                                         world::Scene const &currentScene,
                                         situation::Situation &situation);
  bool mergeVehicleStates(situation::VehicleState const &otherVehicleState,
                          situation::VehicleState &mergedVehicleState);
  bool mergeSituations(situation::Situation const &otherSituation, situation::Situation &mergedSituation);

  std::unique_ptr<ad_rss::world::RssSituationIdProvider> mSituationIdProvider;
};

} // namespace core
} // namespace ad_rss
