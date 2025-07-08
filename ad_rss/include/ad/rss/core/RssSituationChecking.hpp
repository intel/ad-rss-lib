// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2022 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include "ad/rss/core/RssSituationSnapshot.hpp"
#include "ad/rss/state/RssStateSnapshot.hpp"
#include "ad/rss/structured/RssIntersectionConstellationChecker.hpp"
#include "ad/rss/structured/RssNonIntersectionConstellationChecker.hpp"
#include "ad/rss/unstructured/RssUnstructuredConstellationChecker.hpp"

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
 * @brief class RssSituationChecking
 *
 * class providing functions required for the RSS checks of the RSS situation snapshot
 */
class RssSituationChecking
{
public:
  /*!
   * \brief Smart pointer on RssSituationChecking
   */
  typedef std::shared_ptr<RssSituationChecking> Ptr;

  /*!
   * \brief Smart pointer on constant RssSituationChecking
   */
  typedef std::shared_ptr<RssSituationChecking const> ConstPtr;

  /*!
   * @brief constructor
   */
  RssSituationChecking() = default;

  /*!
   * @brief destructor
   */
  ~RssSituationChecking() = default;

  /*!
   * @brief Checks if the current situation is safe.
   *
   * @param [in] situationSnapshot the situation snapshot in time that should be analyzed
   * @param[out] rssStateSnapshot the RSS state snapshot of this situation
   *
   * @return true if the situation could be analyzed, false if an error occurred during evaluation.
   */
  bool checkSituation(RssSituationSnapshot const &situationSnapshot, state::RssStateSnapshot &rssStateSnapshot);

  /*!
   * @brief Register a callback for unstructured trajectory set calculation
   *
   * @param[in] objectType The object type this trajectory set calculation should be applied
   * @param[in] calculateTrajectorySetsCallback The actual callback function to perform the trajectory set calculation
   */
  void registerCalculateTrajectorySetsCallback(
    world::ObjectType objectType,
    unstructured::RssUnstructuredConstellationChecker::CalculateTrajectorySetsCallbackFunctionType
      calculateTrajectorySetsCallback)
  {
    mUnstructuredConstellationChecker.registerCalculateTrajectorySetsCallback(objectType,
                                                                              calculateTrajectorySetsCallback);
  }

private:
  /*!
   * @brief Check if the current relative constellation is safe.
   *
   * @param[in] constellation      the relative constellation that should be analyzed
   * @param[out] rssStateSnapshot the rss state snapshot the current state has to be appended
   *
   * @return true if the constellation could be analyzed, false if there was an error during evaluation
   */
  bool checkConstellationInputRangeChecked(RelativeConstellation const &constellation,
                                           state::RssStateSnapshot &rssStateSnapshot);

  /*!
   * @brief check to ensure time index is consistent
   *
   * @param[in] nextTimeIndex   the new time index
   *
   * @return true if the time is constantly increasing
   */
  bool checkTimeIncreasingConsistently(world::TimeIndex const &nextTimeIndex);

  structured::RssIntersectionConstellationChecker mIntersectionChecker;
  structured::RssNonIntersectionConstellationChecker mNonIntersectionChecker;
  unstructured::RssUnstructuredConstellationChecker mUnstructuredConstellationChecker;
  world::TimeIndex mCurrentTimeIndex{0u};
};
} // namespace core
} // namespace rss
} // namespace ad
