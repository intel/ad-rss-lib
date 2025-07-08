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
#include "ad/geometry/HeadingRange.hpp"
#include "ad/rss/state/UnstructuredConstellationResponse.hpp"
#include "ad/rss/state/UnstructuredConstellationStateInformation.hpp"
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
 * \brief DataType UnstructuredConstellationRssState
 *
 * Struct defining the unstructured constellation RSS state of a single object.
 */
struct UnstructuredConstellationRssState
{
  /*!
   * \brief Smart pointer on UnstructuredConstellationRssState
   */
  typedef std::shared_ptr<UnstructuredConstellationRssState> Ptr;

  /*!
   * \brief Smart pointer on constant UnstructuredConstellationRssState
   */
  typedef std::shared_ptr<UnstructuredConstellationRssState const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  UnstructuredConstellationRssState() = default;

  /*!
   * \brief standard destructor
   */
  ~UnstructuredConstellationRssState() = default;

  /*!
   * \brief standard copy constructor
   */
  UnstructuredConstellationRssState(const UnstructuredConstellationRssState &other) = default;

  /*!
   * \brief standard move constructor
   */
  UnstructuredConstellationRssState(UnstructuredConstellationRssState &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other UnstructuredConstellationRssState
   *
   * \returns Reference to this UnstructuredConstellationRssState.
   */
  UnstructuredConstellationRssState &operator=(const UnstructuredConstellationRssState &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other UnstructuredConstellationRssState
   *
   * \returns Reference to this UnstructuredConstellationRssState.
   */
  UnstructuredConstellationRssState &operator=(UnstructuredConstellationRssState &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other UnstructuredConstellationRssState
   *
   * \returns \c true if both UnstructuredConstellationRssState are equal
   */
  bool operator==(const UnstructuredConstellationRssState &other) const
  {
    return (is_safe == other.is_safe) && (response == other.response) && (heading_range == other.heading_range)
      && (rss_state_information == other.rss_state_information) && (alpha_lon == other.alpha_lon);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other UnstructuredConstellationRssState.
   *
   * \returns \c true if both UnstructuredConstellationRssState are different
   */
  bool operator!=(const UnstructuredConstellationRssState &other) const
  {
    return !operator==(other);
  }

  /*!
   * Determines if the unstructured constellation is safe.
   */
  bool is_safe;

  /*!
   * The response resulting from an unstructured constellation.
   */
  ::ad::rss::state::UnstructuredConstellationResponse response;

  /*!
   * The allowed heading range resulting from a unstructured constellation drive away response.
   */
  ::ad::geometry::HeadingRange heading_range;

  /*!
   * Additional information on the creation of the RSS state.
   */
  ::ad::rss::state::UnstructuredConstellationStateInformation rss_state_information;

  /*!
   * RSS dynamics values along longitudinal coordinate system axis.
   */
  ::ad::rss::world::LongitudinalRssAccelerationValues alpha_lon;
};

} // namespace state
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_STATE_UNSTRUCTUREDCONSTELLATIONRSSSTATE
#define GEN_GUARD_AD_RSS_STATE_UNSTRUCTUREDCONSTELLATIONRSSSTATE
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
 * \param[in] _value UnstructuredConstellationRssState value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, UnstructuredConstellationRssState const &_value)
{
  os << "UnstructuredConstellationRssState(";
  os << "is_safe:";
  os << _value.is_safe;
  os << ",";
  os << "response:";
  os << _value.response;
  os << ",";
  os << "heading_range:";
  os << _value.heading_range;
  os << ",";
  os << "rss_state_information:";
  os << _value.rss_state_information;
  os << ",";
  os << "alpha_lon:";
  os << _value.alpha_lon;
  os << ")";
  return os;
}

} // namespace state
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for UnstructuredConstellationRssState
 */
inline std::string to_string(::ad::rss::state::UnstructuredConstellationRssState const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::state::UnstructuredConstellationRssState> : formatter<string_view>
{
  template <typename FormatContext>
  auto format(::ad::rss::state::UnstructuredConstellationRssState const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_STATE_UNSTRUCTUREDCONSTELLATIONRSSSTATE
