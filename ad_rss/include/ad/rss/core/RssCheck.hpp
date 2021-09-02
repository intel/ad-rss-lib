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

#include <memory>
#include "ad/rss/situation/SituationSnapshot.hpp"
#include "ad/rss/state/ProperResponse.hpp"
#include "ad/rss/state/RssStateSnapshot.hpp"
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

class RssResponseResolving;
class RssSituationChecking;
class RssSituationExtraction;

/**
 * @brief RssCheck
 *
 * Class providing the functionality of the RSS check sequence at once with the RSS world model as input and
 * restrictions of the acceleration for the actuator control as output. This class internally makes use of the
 * RssSituationExtraction, RssSituationChecking, RssResponseResolving functionality.
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
   * @brief calculateProperResponse
   *
   * @param [in] worldModel - the current world model information
   * \param [out] accelerationRestriction - The proper response to become RSS safe.
   *
   * @return return true if the proper response could be calculated, false otherwise.
   */
  bool calculateProperResponse(world::WorldModel const &worldModel, state::ProperResponse &properResponse);

  /**
   * @brief calculateProperResponse
   *
   * @param [in] worldModel - the current world model information
   * \param [out] situationSnapshot - The intermediate situation snapshot
   * \param [out] rssStateSnapshot - The intermediate rss state snapshot
   * \param [out] properResponse - The intermediate proper response
   *
   * @return return true if the proper response could be calculated, false otherwise.
   */
  bool calculateProperResponse(world::WorldModel const &worldModel,
                               situation::SituationSnapshot &situationSnapshot,
                               state::RssStateSnapshot &rssStateSnapshot,
                               state::ProperResponse &properResponse);

private:
  std::unique_ptr<RssResponseResolving> mResponseResolving;
  std::unique_ptr<RssSituationChecking> mSituationChecking;
  std::unique_ptr<RssSituationExtraction> mSituationExtraction;
};

} // namespace core
} // namespace rss
} // namespace ad
