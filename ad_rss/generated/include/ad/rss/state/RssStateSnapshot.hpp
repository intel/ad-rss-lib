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
 * Generator Version : 11.0.0-1997
 */

#pragma once

#include <iostream>
#include <limits>
#include <memory>
#include <sstream>
#include "ad/rss/state/RssStateVector.hpp"
#include "ad/rss/state/UnstructuredSceneStateInformation.hpp"
#include "ad/rss/world/RssDynamics.hpp"
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
 * \brief DataType RssStateSnapshot
 *
 * The current snapshot of individual situation responses RSS calculated from the SituationSnapshot.
 */
struct RssStateSnapshot
{
  /*!
   * \brief Smart pointer on RssStateSnapshot
   */
  typedef std::shared_ptr<RssStateSnapshot> Ptr;

  /*!
   * \brief Smart pointer on constant RssStateSnapshot
   */
  typedef std::shared_ptr<RssStateSnapshot const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  RssStateSnapshot() = default;

  /*!
   * \brief standard destructor
   */
  ~RssStateSnapshot() = default;

  /*!
   * \brief standard copy constructor
   */
  RssStateSnapshot(const RssStateSnapshot &other) = default;

  /*!
   * \brief standard move constructor
   */
  RssStateSnapshot(RssStateSnapshot &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RssStateSnapshot
   *
   * \returns Reference to this RssStateSnapshot.
   */
  RssStateSnapshot &operator=(const RssStateSnapshot &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RssStateSnapshot
   *
   * \returns Reference to this RssStateSnapshot.
   */
  RssStateSnapshot &operator=(RssStateSnapshot &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssStateSnapshot
   *
   * \returns \c true if both RssStateSnapshot are equal
   */
  bool operator==(const RssStateSnapshot &other) const
  {
    return (timeIndex == other.timeIndex) && (defaultEgoVehicleRssDynamics == other.defaultEgoVehicleRssDynamics)
      && (individualResponses == other.individualResponses)
      && (unstructuredSceneEgoInformation == other.unstructuredSceneEgoInformation);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssStateSnapshot.
   *
   * \returns \c true if both RssStateSnapshot are different
   */
  bool operator!=(const RssStateSnapshot &other) const
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
   * Defines the standard ego vehicle dynamics to be applied i.e. when there is no  dangerous
   * scene.
   * This parameters are provided in addtion on a per situation basis to be able to adapt
   * these e.g. in respect to object type or the weather conditions
   */
  ::ad::rss::world::RssDynamics defaultEgoVehicleRssDynamics;

  /*!
   * The vector holding the RSS states of the individual constellations considered.
   */
  ::ad::rss::state::RssStateVector individualResponses;

  /*!
   * Additional information on the ego vehicle unstructured scene calculation.
   */
  ::ad::rss::state::UnstructuredSceneStateInformation unstructuredSceneEgoInformation;
};

} // namespace state
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_STATE_RSSSTATESNAPSHOT
#define GEN_GUARD_AD_RSS_STATE_RSSSTATESNAPSHOT
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
 * \param[in] _value RssStateSnapshot value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RssStateSnapshot const &_value)
{
  os << "RssStateSnapshot(";
  os << "timeIndex:";
  os << _value.timeIndex;
  os << ",";
  os << "defaultEgoVehicleRssDynamics:";
  os << _value.defaultEgoVehicleRssDynamics;
  os << ",";
  os << "individualResponses:";
  os << _value.individualResponses;
  os << ",";
  os << "unstructuredSceneEgoInformation:";
  os << _value.unstructuredSceneEgoInformation;
  os << ")";
  return os;
}

} // namespace state
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RssStateSnapshot
 */
inline std::string to_string(::ad::rss::state::RssStateSnapshot const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std
#endif // GEN_GUARD_AD_RSS_STATE_RSSSTATESNAPSHOT
