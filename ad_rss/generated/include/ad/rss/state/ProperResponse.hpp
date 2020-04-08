/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-1988
 */

#pragma once

#include <iostream>
#include <limits>
#include <memory>
#include <sstream>
#include "ad/rss/state/LateralResponse.hpp"
#include "ad/rss/state/LongitudinalResponse.hpp"
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
 * The proper response, RSS calculated from the RssStateSnapshots received over time, consists of a timeIndex and the
 * resulting Rss responses.
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
    return (timeIndex == other.timeIndex) && (isSafe == other.isSafe) && (dangerousObjects == other.dangerousObjects)
      && (longitudinalResponse == other.longitudinalResponse) && (lateralResponseRight == other.lateralResponseRight)
      && (lateralResponseLeft == other.lateralResponseLeft);
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
  ::ad::rss::world::TimeIndex timeIndex{0u};

  /*!
   * Flag to indicate if the state is longitudinal safe.
   */
  bool isSafe{false};

  /*!
   * List of dangerous objects.
   */
  ::ad::rss::world::ObjectIdVector dangerousObjects;

  /*!
   * The current longitudinal rss state.
   */
  ::ad::rss::state::LongitudinalResponse longitudinalResponse;

  /*!
   * The current lateral rss state at right side in respect to ego-vehicle driving direction.
   */
  ::ad::rss::state::LateralResponse lateralResponseRight;

  /*!
   * The current lateral rss state at left side in respect to ego-vehicle driving direction.
   */
  ::ad::rss::state::LateralResponse lateralResponseLeft;
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
  os << "timeIndex:";
  os << _value.timeIndex;
  os << ",";
  os << "isSafe:";
  os << _value.isSafe;
  os << ",";
  os << "dangerousObjects:";
  os << _value.dangerousObjects;
  os << ",";
  os << "longitudinalResponse:";
  os << _value.longitudinalResponse;
  os << ",";
  os << "lateralResponseRight:";
  os << _value.lateralResponseRight;
  os << ",";
  os << "lateralResponseLeft:";
  os << _value.lateralResponseLeft;
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
#endif // GEN_GUARD_AD_RSS_STATE_PROPERRESPONSE
