// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include "ad/rss/core/RssSituationSnapshot.hpp"
#include "ad/rss/structured/RssConstellationIdProvider.hpp"
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
 * @brief namespace core
 */
namespace core {

/*!
 * @brief class RssSituationExtraction
 *
 * Class providing functions required for the extraction of the RSS situation from the RSS world model.
 */
class RssSituationExtraction
{
public:
  /*!
   * \brief Smart pointer on RssSituationExtraction
   */
  typedef std::shared_ptr<RssSituationExtraction> Ptr;

  /*!
   * \brief Smart pointer on constant RssSituationExtraction
   */
  typedef std::shared_ptr<RssSituationExtraction const> ConstPtr;

  /*!
   * @brief constructor
   */
  RssSituationExtraction() = default;

  /*!
   * @brief destructor
   */
  ~RssSituationExtraction() = default;

  /**
   * @brief Transform all RSS constellations from the world model into relative constellations within their
   * constellation lane coordinate system.
   *
   * @param [in] worldModel - the current world model information
   * @param [out] situationSnapshot - the situation to be analyzed by RSS with its vector of constellations
   *
   * @return true if the situation snapshot could be extracted, false if there was an error during the operation.
   */
  bool extractSituation(world::WorldModel const &worldModel, core::RssSituationSnapshot &situationSnapshot);

  /*!
   * @brief drop the history associated with a given object_id
   *
   * This function might be used to drop previous states referred to a certain object id in case the object id is reused
   *
   * @param[in] object_id the object_id previous history should be dropped
   */
  void dropObjectHistory(world::ObjectId const &object_id);

private:
  void calcluateRelativeLongitudinalPosition(physics::MetricRange const &egoMetricRange,
                                             physics::MetricRange const &otherMetricRange,
                                             LongitudinalRelativePosition &longitudinal_position,
                                             physics::Distance &longitudinal_distance);
  void calcluateRelativeLongitudinalPositionIntersection(physics::MetricRange const &egoMetricRange,
                                                         physics::MetricRange const &otherMetricRange,
                                                         LongitudinalRelativePosition &longitudinal_position,
                                                         physics::Distance &longitudinal_distance);
  void calcluateRelativeLateralPosition(physics::MetricRange const &egoMetricRange,
                                        physics::MetricRange const &otherMetricRange,
                                        LateralRelativePosition &lateral_position,
                                        physics::Distance &lateral_distance);
  bool convertObjectsNonIntersection(world::Constellation const &currentConstellation,
                                     core::RelativeConstellation &constellation);
  void convertToIntersectionCentric(physics::MetricRange const &objectDimension,
                                    physics::MetricRange const &intersectionPosition,
                                    physics::MetricRange &dimensionsIntersection);
  bool convertObjectsIntersection(world::Constellation const &currentConstellation,
                                  core::RelativeConstellation &constellation);

  /**
   * @brief Transform the RSS constellation of the ego vehicle and the object to be checked.
   *
   * @param [in] time_index the time index of the current constellation
   * @param [in] worldConstellation the information on the current constellation with the object to be checked in
   * outside world format
   * @param [out] relativeConstellation the relative constellation to be analyzed by RSS in internal relative format
   *
   * @return true if the constellation could be created, false if there was an error during the operation.
   */
  bool extractConstellationInputRangeChecked(world::TimeIndex const &time_index,
                                             world::Constellation const &worldConstellation,
                                             RelativeConstellation &relativeConstellation);
  enum class MergeMode
  {
    EgoVehicle,
    OtherVehicle
  };
  bool mergeVehicleStates(MergeMode const &mergeMode,
                          RelativeObjectState const &other_state,
                          RelativeObjectState &mergedVehicleState);
  bool mergeConstellations(core::RelativeConstellation const &otherConstellation,
                           core::RelativeConstellation &mergedConstellation);

  structured::RssConstellationIdProvider mConstellationIdProvider;
};

} // namespace core
} // namespace rss
} // namespace ad
