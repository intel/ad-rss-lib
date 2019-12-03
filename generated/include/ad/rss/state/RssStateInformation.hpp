/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 10.6.0-1882
 */

#pragma once

#include <iostream>
#include <limits>
#include <memory>
#include "ad/physics/Distance.hpp"
#include "ad/rss/state/RssStateEvaluator.hpp"
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
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
  using Ptr = std::shared_ptr<RssStateInformation>;
  using ConstPtr = std::shared_ptr<RssStateInformation const>;

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
  ::ad::physics::Distance safeDistance{-1.};

  /*!
   * current longitudinal distance
   */
  ::ad::physics::Distance currentDistance{-1.};

  /*!
   * The response information in respect to safeDistance and currentDistance are in respect to the given evaluation
   * method.
   */
  ::ad::rss::state::RssStateEvaluator evaluator{::ad::rss::state::RssStateEvaluator::None};
};

} // namespace state
} // namespace rss
} // namespace ad

// protect the definition of ostream operator from duplicates by typedef usage within other data types
#ifndef OSTREAM_AD_RSS_STATE_RSSSTATEINFORMATION
#define OSTREAM_AD_RSS_STATE_RSSSTATEINFORMATION
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace state
 */
namespace state {

/**
 * \brief standard ostream operator
 *
 * \param[in] stream The output stream to write to
 * \param[in] value RssStateInformation value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RssStateInformation const &_value)
{
  os << "RssStateInformation(";
  os << "safeDistance:";
  os << _value.safeDistance;
  os << ",";
  os << "currentDistance:";
  os << _value.currentDistance;
  os << ",";
  os << "evaluator:";
  os << _value.evaluator;
  os << ")";
  return os;
}

} // namespace state
} // namespace rss
} // namespace ad
#endif // OSTREAM_AD_RSS_STATE_RSSSTATEINFORMATION
