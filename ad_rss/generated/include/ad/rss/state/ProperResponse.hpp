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
#include "ad/geometry/HeadingRangeVector.hpp"
#include "ad/rss/state/AccelerationRestriction.hpp"
#include "ad/rss/state/LateralResponse.hpp"
#include "ad/rss/state/LongitudinalResponse.hpp"
#include "ad/rss/state/UnstructuredConstellationResponse.hpp"
#include "ad/rss/world/ObjectIdVector.hpp"
#include "ad/rss/world/TimeIndex.hpp"
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
 * \brief DataType ProperResponse
 *
 * The overall proper response RSS calculated from the individual responses of the RssStateSnapshot.
 */
struct ProperResponse
{
  /*!
   * \brief Smart pointer on ProperResponse
   */
  typedef std::shared_ptr<ProperResponse> Ptr;

  /*!
   * \brief Smart pointer on constant ProperResponse
   */
  typedef std::shared_ptr<ProperResponse const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  ProperResponse() = default;

  /*!
   * \brief standard destructor
   */
  ~ProperResponse() = default;

  /*!
   * \brief standard copy constructor
   */
  ProperResponse(const ProperResponse &other) = default;

  /*!
   * \brief standard move constructor
   */
  ProperResponse(ProperResponse &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other ProperResponse
   *
   * \returns Reference to this ProperResponse.
   */
  ProperResponse &operator=(const ProperResponse &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other ProperResponse
   *
   * \returns Reference to this ProperResponse.
   */
  ProperResponse &operator=(ProperResponse &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other ProperResponse
   *
   * \returns \c true if both ProperResponse are equal
   */
  bool operator==(const ProperResponse &other) const
  {
    return (time_index == other.time_index) && (is_safe == other.is_safe)
      && (dangerous_objects == other.dangerous_objects) && (longitudinal_response == other.longitudinal_response)
      && (lateral_response_right == other.lateral_response_right)
      && (lateral_response_left == other.lateral_response_left) && (heading_ranges == other.heading_ranges)
      && (acceleration_restrictions == other.acceleration_restrictions)
      && (unstructured_constellation_response == other.unstructured_constellation_response);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other ProperResponse.
   *
   * \returns \c true if both ProperResponse are different
   */
  bool operator!=(const ProperResponse &other) const
  {
    return !operator==(other);
  }

  /*!
   * The time index is required to distinguish different points in time when tracking states or transforming responses
   * back. Each world model referring to another point in time should get another time index. The time index of the
   * world model must not be zero.
   */
  ::ad::rss::world::TimeIndex time_index{0u};

  /*!
   * Flag to indicate if the state is safe. This is true if all of the individual_responses of the RssStateSnapshot have
   * been safe.
   */
  bool is_safe{false};

  /*!
   * List of dangerous objects.
   */
  ::ad::rss::world::ObjectIdVector dangerous_objects;

  /*!
   * The current longitudinal rss state.
   */
  ::ad::rss::state::LongitudinalResponse longitudinal_response;

  /*!
   * The current lateral rss state at right side in respect to ego-vehicle driving direction.
   */
  ::ad::rss::state::LateralResponse lateral_response_right;

  /*!
   * The current lateral rss state at left side in respect to ego-vehicle driving direction.
   */
  ::ad::rss::state::LateralResponse lateral_response_left;

  /*!
   * The vector of allowed heading ranges to be applied in the unstructured drive away case after considering all
   * unstructured constellations.
   */
  ::ad::geometry::HeadingRangeVector heading_ranges;

  /*!
   * The resulting acceleration restrictions after considering all individual RSS constellations.
   */
  ::ad::rss::state::AccelerationRestriction acceleration_restrictions;

  /*!
   * The unstructured constellation response considered within this proper response.
   */
  ::ad::rss::state::UnstructuredConstellationResponse unstructured_constellation_response;
};

} // namespace state
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_STATE_PROPERRESPONSE
#define GEN_GUARD_AD_RSS_STATE_PROPERRESPONSE
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
 * \param[in] _value ProperResponse value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, ProperResponse const &_value)
{
  os << "ProperResponse(";
  os << "time_index:";
  os << _value.time_index;
  os << ",";
  os << "is_safe:";
  os << _value.is_safe;
  os << ",";
  os << "dangerous_objects:";
  os << _value.dangerous_objects;
  os << ",";
  os << "longitudinal_response:";
  os << _value.longitudinal_response;
  os << ",";
  os << "lateral_response_right:";
  os << _value.lateral_response_right;
  os << ",";
  os << "lateral_response_left:";
  os << _value.lateral_response_left;
  os << ",";
  os << "heading_ranges:";
  os << _value.heading_ranges;
  os << ",";
  os << "acceleration_restrictions:";
  os << _value.acceleration_restrictions;
  os << ",";
  os << "unstructured_constellation_response:";
  os << _value.unstructured_constellation_response;
  os << ")";
  return os;
}

} // namespace state
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for ProperResponse
 */
inline std::string to_string(::ad::rss::state::ProperResponse const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::state::ProperResponse> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::state::ProperResponse const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_STATE_PROPERRESPONSE
