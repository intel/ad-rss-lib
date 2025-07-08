/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2022 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-2046
 */

#pragma once

#include <iostream>
#include <limits>
#include <memory>
#include <sstream>
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
  /*!
   * \brief Smart pointer on RssStateInformation
   */
  typedef std::shared_ptr<RssStateInformation> Ptr;

  /*!
   * \brief Smart pointer on constant RssStateInformation
   */
  typedef std::shared_ptr<RssStateInformation const> ConstPtr;

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
    return (safe_distance == other.safe_distance) && (current_distance == other.current_distance)
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
  ::ad::physics::Distance safe_distance{-1.};

  /*!
   * current longitudinal distance
   */
  ::ad::physics::Distance current_distance{-1.};

  /*!
   * The response information in respect to safe_distance and current_distance are in respect to the given evaluation
   * method.
   */
  ::ad::rss::state::RssStateEvaluator evaluator{::ad::rss::state::RssStateEvaluator::None};
};

} // namespace state
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_STATE_RSSSTATEINFORMATION
#define GEN_GUARD_AD_RSS_STATE_RSSSTATEINFORMATION
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
 * \param[in] os The output stream to write to
 * \param[in] _value RssStateInformation value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RssStateInformation const &_value)
{
  os << "RssStateInformation(";
  os << "safe_distance:";
  os << _value.safe_distance;
  os << ",";
  os << "current_distance:";
  os << _value.current_distance;
  os << ",";
  os << "evaluator:";
  os << _value.evaluator;
  os << ")";
  return os;
}

} // namespace state
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RssStateInformation
 */
inline std::string to_string(::ad::rss::state::RssStateInformation const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::state::RssStateInformation> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::state::RssStateInformation const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_STATE_RSSSTATEINFORMATION
