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
#include <memory>
#include <sstream>
#include "ad/rss/state/LongitudinalResponse.hpp"
#include "ad/rss/state/RssStateInformation.hpp"
#include "ad/rss/world/LongitudinalRssAccelerationValues.hpp"
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
 * \brief DataType LongitudinalRssState
 *
 * Struct to store the longitudinal RSS state.
 */
struct LongitudinalRssState
{
  /*!
   * \brief Smart pointer on LongitudinalRssState
   */
  typedef std::shared_ptr<LongitudinalRssState> Ptr;

  /*!
   * \brief Smart pointer on constant LongitudinalRssState
   */
  typedef std::shared_ptr<LongitudinalRssState const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  LongitudinalRssState() = default;

  /*!
   * \brief standard destructor
   */
  ~LongitudinalRssState() = default;

  /*!
   * \brief standard copy constructor
   */
  LongitudinalRssState(const LongitudinalRssState &other) = default;

  /*!
   * \brief standard move constructor
   */
  LongitudinalRssState(LongitudinalRssState &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other LongitudinalRssState
   *
   * \returns Reference to this LongitudinalRssState.
   */
  LongitudinalRssState &operator=(const LongitudinalRssState &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other LongitudinalRssState
   *
   * \returns Reference to this LongitudinalRssState.
   */
  LongitudinalRssState &operator=(LongitudinalRssState &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other LongitudinalRssState
   *
   * \returns \c true if both LongitudinalRssState are equal
   */
  bool operator==(const LongitudinalRssState &other) const
  {
    return (is_safe == other.is_safe) && (response == other.response) && (alpha_lon == other.alpha_lon)
      && (rss_state_information == other.rss_state_information);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other LongitudinalRssState.
   *
   * \returns \c true if both LongitudinalRssState are different
   */
  bool operator!=(const LongitudinalRssState &other) const
  {
    return !operator==(other);
  }

  /*!
   * Flag to indicate if the state is longitudinal safe.
   */
  bool is_safe{false};

  /*!
   * required response in longitudinal direction
   */
  ::ad::rss::state::LongitudinalResponse response{::ad::rss::state::LongitudinalResponse::BrakeMin};

  /*!
   * RSS dynamics values along longitudinal coordinate system axis.
   */
  ::ad::rss::world::LongitudinalRssAccelerationValues alpha_lon;

  /*!
   * Information on the evaluation of the Rss state.
   */
  ::ad::rss::state::RssStateInformation rss_state_information;
};

} // namespace state
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_STATE_LONGITUDINALRSSSTATE
#define GEN_GUARD_AD_RSS_STATE_LONGITUDINALRSSSTATE
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
 * \param[in] _value LongitudinalRssState value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, LongitudinalRssState const &_value)
{
  os << "LongitudinalRssState(";
  os << "is_safe:";
  os << _value.is_safe;
  os << ",";
  os << "response:";
  os << _value.response;
  os << ",";
  os << "alpha_lon:";
  os << _value.alpha_lon;
  os << ",";
  os << "rss_state_information:";
  os << _value.rss_state_information;
  os << ")";
  return os;
}

} // namespace state
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for LongitudinalRssState
 */
inline std::string to_string(::ad::rss::state::LongitudinalRssState const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::state::LongitudinalRssState> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::state::LongitudinalRssState const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_STATE_LONGITUDINALRSSSTATE
