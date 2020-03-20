// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include "ad/rss/situation/SituationSnapshot.hpp"
#include "ad/rss/world/WorldModel.hpp"

/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
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
   * @param [out] situationSnapshot - the vector of situations to be analyzed with RSS
   *
   * @return true if the situations could be created, false if there was an error during the operation.
   */
  bool extractSituations(world::WorldModel const &worldModel, situation::SituationSnapshot &situationSnapshot);

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
   * @param [in] currentScene the information on the current scene with the object to be checked
   * @param [out] situation the situation to be analyzed with RSS
   *
   * @return true if the situation could be created, false if there was an error during the operation.
   */
  bool extractSituationInputRangeChecked(world::TimeIndex const &timeIndex,
                                         world::Scene const &currentScene,
                                         situation::Situation &situation);
  enum class MergeMode
  {
    EgoVehicle,
    OtherVehicle
  };
  bool mergeVehicleStates(MergeMode const &mergeMode,
                          situation::VehicleState const &otherVehicleState,
                          situation::VehicleState &mergedVehicleState);
  bool mergeSituations(situation::Situation const &otherSituation, situation::Situation &mergedSituation);

  std::unique_ptr<ad::rss::world::RssSituationIdProvider> mSituationIdProvider;
};

} // namespace core
} // namespace rss
} // namespace ad
