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
#include <ad/geometry/GeometryOperation.hpp>
#include "ad/rss/state/ProperResponse.hpp"
#include "ad/rss/state/RssStateSnapshot.hpp"

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
 * @brief RssResponseResolving
 *
 * Class to resolve the responseStateVector of the different constellation specific responses
 * into a single responseState. This class tracks the RSS response state of every
 * constellation id over time and especially stores the respective response state before
 * the danger threshold time. This requires that the id of a RSS constellation remains constant over
 * time in case it refers to the same object; otherwise tracking over time will fail.
 */
class RssResponseResolving
{
public:
  /*!
   * \brief Smart pointer on RssResponseResolving
   */
  typedef std::shared_ptr<RssResponseResolving> Ptr;

  /*!
   * \brief Smart pointer on constant RssResponseResolving
   */
  typedef std::shared_ptr<RssResponseResolving const> ConstPtr;

  /**
   * @brief constructor
   */
  RssResponseResolving() = default;

  /**
   * @brief destructor
   */
  ~RssResponseResolving() = default;

  /**
   * @brief Calculate the proper response out of the current responses
   *
   * @param[in]  currentStateSnapshot all the rss states gathered for the constellations of the current situation
   * @param[out] response the proper overall response state
   *
   * @return true if response and acceleration restriction could be calculated, false otherwise
   * If false is returned the internal state has not been updated
   */
  bool provideProperResponse(state::RssStateSnapshot const &currentStateSnapshot, state::ProperResponse &response);
};

} // namespace core
} // namespace rss
} // namespace ad
