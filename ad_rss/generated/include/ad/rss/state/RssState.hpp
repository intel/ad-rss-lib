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
 * Generator Version : 11.0.0-1917
 */

#pragma once

#include <iostream>
#include <limits>
#include <memory>
#include <sstream>
#include "ad/rss/situation/SituationId.hpp"
#include "ad/rss/state/LateralRssState.hpp"
#include "ad/rss/state/LongitudinalRssState.hpp"
#include "ad/rss/world/ObjectId.hpp"
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
 * \brief DataType RssState
 *
 * Struct defining the RSS state of a single object.
 */
struct RssState
{
  /*!
   * \brief Smart pointer on RssState
   */
  typedef std::shared_ptr<RssState> Ptr;

  /*!
   * \brief Smart pointer on constant RssState
   */
  typedef std::shared_ptr<RssState const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  RssState() = default;

  /*!
   * \brief standard destructor
   */
  ~RssState() = default;

  /*!
   * \brief standard copy constructor
   */
  RssState(const RssState &other) = default;

  /*!
   * \brief standard move constructor
   */
  RssState(RssState &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RssState
   *
   * \returns Reference to this RssState.
   */
  RssState &operator=(const RssState &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RssState
   *
   * \returns Reference to this RssState.
   */
  RssState &operator=(RssState &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssState
   *
   * \returns \c true if both RssState are equal
   */
  bool operator==(const RssState &other) const
  {
    return (objectId == other.objectId) && (situationId == other.situationId)
      && (longitudinalState == other.longitudinalState) && (lateralStateRight == other.lateralStateRight)
      && (lateralStateLeft == other.lateralStateLeft);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssState.
   *
   * \returns \c true if both RssState are different
   */
  bool operator!=(const RssState &other) const
  {
    return !operator==(other);
  }

  /*!
   * Defines the unique id of an object. This id has to be constant over time for the same object.
   */
  ::ad::rss::world::ObjectId objectId;

  /*!
   * Id of the situation this state refers to.
   * The id has to remain unique over time representing the situation (ego-vehicle /
   * object pair) under investigation.
   * It is used to track the state of the ego-vehicle / object constellation i.e. at
   * point of danger threshold time.
   */
  ::ad::rss::situation::SituationId situationId{0u};

  /*!
   * The current longitudinal rss state.
   */
  ::ad::rss::state::LongitudinalRssState longitudinalState;

  /*!
   * The current lateral rss state at right side in respect to ego-vehicle driving direction.
   */
  ::ad::rss::state::LateralRssState lateralStateRight;

  /*!
   * The current lateral rss state at left side in respect to ego-vehicle driving direction.
   */
  ::ad::rss::state::LateralRssState lateralStateLeft;
};

} // namespace state
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_STATE_RSSSTATE
#define GEN_GUARD_AD_RSS_STATE_RSSSTATE
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
 * \param[in] _value RssState value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RssState const &_value)
{
  os << "RssState(";
  os << "objectId:";
  os << _value.objectId;
  os << ",";
  os << "situationId:";
  os << _value.situationId;
  os << ",";
  os << "longitudinalState:";
  os << _value.longitudinalState;
  os << ",";
  os << "lateralStateRight:";
  os << _value.lateralStateRight;
  os << ",";
  os << "lateralStateLeft:";
  os << _value.lateralStateLeft;
  os << ")";
  return os;
}

} // namespace state
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RssState
 */
inline std::string to_string(::ad::rss::state::RssState const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std
#endif // GEN_GUARD_AD_RSS_STATE_RSSSTATE
