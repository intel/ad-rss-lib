// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include <memory>
#include "ad_rss/world/AccelerationRestriction.hpp"
#include "ad_rss/world/WorldModel.hpp"

/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {

/*!
 * @brief namespace core
 */
namespace core {

class RssResponseResolving;
class RssSituationChecking;
class RssSituationExtraction;

/**
 * @brief RssCheck
 *
 * Class providing the functionality of the RSS check sequence at once with the RSS world model as input and
 * restrictions of the acceleration for the actuator control as output. This class internally makes use of the
 * RssSituationExtraction, RssSituationChecking, RssResponseResolving and RssResponseTransformation functionality.
 */
class RssCheck
{
public:
  /**
   * @brief constructor
   */
  RssCheck();

  ~RssCheck();

  /**
   * @brief calculateAccelerationRestriction
   *
   * @param [in] worldModel - the current world model information
   * \param [out] accelerationRestriction - The restrictions on the vehicle acceleration to become RSS safe.
   *
   * @return return true if the acceleration restrictions could be calculated, false otherwise.
   */
  bool calculateAccelerationRestriction(world::WorldModel const &worldModel,
                                        world::AccelerationRestriction &accelerationRestriction);

private:
  std::unique_ptr<RssResponseResolving> mResponseResolving;
  std::unique_ptr<RssSituationChecking> mSituationChecking;
  std::unique_ptr<RssSituationExtraction> mSituationExtraction;
};

} // namespace core
} // namespace ad_rss
