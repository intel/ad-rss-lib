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

#include <memory>
#include "ad/rss/core/RssResponseResolving.hpp"
#include "ad/rss/core/RssSituationChecking.hpp"
#include "ad/rss/core/RssSituationExtraction.hpp"

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

/**
 * @brief RssCheck
 *
 * Class providing the functionality of the RSS check sequence at once with the RSS world model as input and
 * the proper response as output. This class internally makes use of the
 * RssSituationExtraction, RssSituationChecking, RssResponseResolving functionality.
 */
class RssCheck
{
public:
  /*!
   * \brief Smart pointer on RssCheck
   */
  typedef std::shared_ptr<RssCheck> Ptr;

  /*!
   * \brief Smart pointer on constant RssCheck
   */
  typedef std::shared_ptr<RssCheck const> ConstPtr;

  /**
   * @brief constructor
   */
  RssCheck() = default;

  /**
   * @brief default copy constructor
   */
  RssCheck(RssCheck const &other) = default;

  /**
   * @brief destructor
   */
  ~RssCheck() = default;

  /**
   * @brief default assignment operator
   */
  RssCheck &operator=(RssCheck const &other) = default;

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
                               RssSituationSnapshot &situationSnapshot,
                               state::RssStateSnapshot &rssStateSnapshot,
                               state::ProperResponse &properResponse);

  /*!
   * @brief Register a callback for unstructured trajectory set calculation
   *
   * @param[in] objectType The object type this trajectory set calculation should be applied
   * @param[in] calculateTrajectorySetsCallback The actual callback function to perform the trajectory set calculation
   */
  void registerCalculateTrajectorySetsCallback(
    world::ObjectType objectType,
    unstructured::RssUnstructuredConstellationChecker::CalculateTrajectorySetsCallbackFunctionType
      calculateTrajectorySetsCallback);

  /*!
   * @brief drop the history associated with a given object_id
   *
   * This function might be used to drop previous states referred to a certain object id in case the object id is reused
   *
   * @param[in] object_id the object_id previous history should be dropped
   */
  void dropObjectHistory(world::ObjectId const &object_id);

  /*!
   * \brief RssResponseResolving member
   */
  RssResponseResolving mResponseResolving;
  /*!
   * \brief RssSituationChecking member
   */
  RssSituationChecking mSituationChecking;
  /*!
   * \brief RssSituationExtraction member
   */
  RssSituationExtraction mSituationExtraction;
};

} // namespace core
} // namespace rss
} // namespace ad
