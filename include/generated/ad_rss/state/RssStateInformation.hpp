/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 */

#pragma once

#include <limits>
#include <memory>
#include "ad_rss/physics/Distance.hpp"
#include "ad_rss/state/RssStateEvaluator.hpp"
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace state
 */
namespace state {

/*!
 * \brief DataType RssStateInformation
 *
 * Structure holding additional information on the reason for the response.
 */
struct RssStateInformation
{
  /*!
   * \brief standard constructor
   */
  RssStateInformation() = default;

  /*!
   * \brief standard destructor
   */
  ~RssStateInformation() = default;

  /*!
   * \brief standard copy constructor
   */
  RssStateInformation(const RssStateInformation &other) = default;

  /*!
   * \brief standard move constructor
   */
  RssStateInformation(RssStateInformation &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RssStateInformation
   *
   * \returns Reference to this RssStateInformation.
   */
  RssStateInformation &operator=(const RssStateInformation &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RssStateInformation
   *
   * \returns Reference to this RssStateInformation.
   */
  RssStateInformation &operator=(RssStateInformation &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssStateInformation
   *
   * \returns \c true if both RssStateInformation are equal
   */
  bool operator==(const RssStateInformation &other) const
  {
    return (safeDistance == other.safeDistance) && (currentDistance == other.currentDistance)
      && (evaluator == other.evaluator);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssStateInformation.
   *
   * \returns \c true if both RssStateInformation are different
   */
  bool operator!=(const RssStateInformation &other) const
  {
    return !operator==(other);
  }

  /*!
   * Required safe distance.
   */
  ::ad_rss::physics::Distance safeDistance{-1.};

  /*!
   * current longitudinal distance
   */
  ::ad_rss::physics::Distance currentDistance{-1.};

  /*!
   * The response information in respect to safeDistance and currentDistance are in respect to the given evaluation
   * method.
   */
  ::ad_rss::state::RssStateEvaluator evaluator{::ad_rss::state::RssStateEvaluator::None};
};

} // namespace state
} // namespace ad_rss
