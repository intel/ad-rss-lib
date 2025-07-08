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
#include "ad/rss/state/LateralResponse.hpp"
#include "ad/rss/state/RssStateInformation.hpp"
#include "ad/rss/world/LateralRssAccelerationValues.hpp"
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
 * \brief DataType LateralRssState
 *
 * Struct to store the lateral RSS state.
 */
struct LateralRssState
{
  /*!
   * \brief Smart pointer on LateralRssState
   */
  typedef std::shared_ptr<LateralRssState> Ptr;

  /*!
   * \brief Smart pointer on constant LateralRssState
   */
  typedef std::shared_ptr<LateralRssState const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  LateralRssState() = default;

  /*!
   * \brief standard destructor
   */
  ~LateralRssState() = default;

  /*!
   * \brief standard copy constructor
   */
  LateralRssState(const LateralRssState &other) = default;

  /*!
   * \brief standard move constructor
   */
  LateralRssState(LateralRssState &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other LateralRssState
   *
   * \returns Reference to this LateralRssState.
   */
  LateralRssState &operator=(const LateralRssState &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other LateralRssState
   *
   * \returns Reference to this LateralRssState.
   */
  LateralRssState &operator=(LateralRssState &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other LateralRssState
   *
   * \returns \c true if both LateralRssState are equal
   */
  bool operator==(const LateralRssState &other) const
  {
    return (is_safe == other.is_safe) && (response == other.response) && (alpha_lat == other.alpha_lat)
      && (rss_state_information == other.rss_state_information);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other LateralRssState.
   *
   * \returns \c true if both LateralRssState are different
   */
  bool operator!=(const LateralRssState &other) const
  {
    return !operator==(other);
  }

  /*!
   * Flag to indicate if the state is lateral safe.
   */
  bool is_safe{false};

  /*!
   * required response in lateral direction
   */
  ::ad::rss::state::LateralResponse response;

  /*!
   * RSS dynamics values along lateral coordinate system axis.
   */
  ::ad::rss::world::LateralRssAccelerationValues alpha_lat;

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
#ifndef GEN_GUARD_AD_RSS_STATE_LATERALRSSSTATE
#define GEN_GUARD_AD_RSS_STATE_LATERALRSSSTATE
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
 * \param[in] _value LateralRssState value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, LateralRssState const &_value)
{
  os << "LateralRssState(";
  os << "is_safe:";
  os << _value.is_safe;
  os << ",";
  os << "response:";
  os << _value.response;
  os << ",";
  os << "alpha_lat:";
  os << _value.alpha_lat;
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
 * \brief overload of the std::to_string for LateralRssState
 */
inline std::string to_string(::ad::rss::state::LateralRssState const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::state::LateralRssState> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::state::LateralRssState const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_STATE_LATERALRSSSTATE
