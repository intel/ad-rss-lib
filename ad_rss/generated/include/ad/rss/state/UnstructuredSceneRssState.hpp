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
#include <memory>
#include <sstream>
#include "ad/rss/state/HeadingRange.hpp"
#include "ad/rss/state/UnstructuredSceneResponse.hpp"
#include "ad/rss/state/UnstructuredSceneStateInformation.hpp"
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
 * \brief DataType UnstructuredSceneRssState
 */
struct UnstructuredSceneRssState
{
  /*!
   * \brief Smart pointer on UnstructuredSceneRssState
   */
  typedef std::shared_ptr<UnstructuredSceneRssState> Ptr;

  /*!
   * \brief Smart pointer on constant UnstructuredSceneRssState
   */
  typedef std::shared_ptr<UnstructuredSceneRssState const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  UnstructuredSceneRssState() = default;

  /*!
   * \brief standard destructor
   */
  ~UnstructuredSceneRssState() = default;

  /*!
   * \brief standard copy constructor
   */
  UnstructuredSceneRssState(const UnstructuredSceneRssState &other) = default;

  /*!
   * \brief standard move constructor
   */
  UnstructuredSceneRssState(UnstructuredSceneRssState &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other UnstructuredSceneRssState
   *
   * \returns Reference to this UnstructuredSceneRssState.
   */
  UnstructuredSceneRssState &operator=(const UnstructuredSceneRssState &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other UnstructuredSceneRssState
   *
   * \returns Reference to this UnstructuredSceneRssState.
   */
  UnstructuredSceneRssState &operator=(UnstructuredSceneRssState &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other UnstructuredSceneRssState
   *
   * \returns \c true if both UnstructuredSceneRssState are equal
   */
  bool operator==(const UnstructuredSceneRssState &other) const
  {
    return (isSafe == other.isSafe) && (response == other.response) && (headingRange == other.headingRange)
      && (rssStateInformation == other.rssStateInformation) && (alphaLon == other.alphaLon);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other UnstructuredSceneRssState.
   *
   * \returns \c true if both UnstructuredSceneRssState are different
   */
  bool operator!=(const UnstructuredSceneRssState &other) const
  {
    return !operator==(other);
  }

  bool isSafe;
  ::ad::rss::state::UnstructuredSceneResponse response;
  ::ad::rss::state::HeadingRange headingRange;
  ::ad::rss::state::UnstructuredSceneStateInformation rssStateInformation;

  /*!
   * RSS dynamics values along longitudinal coordinate system axis.
   */
  ::ad::rss::world::LongitudinalRssAccelerationValues alphaLon;
};

} // namespace state
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_STATE_UNSTRUCTUREDSCENERSSSTATE
#define GEN_GUARD_AD_RSS_STATE_UNSTRUCTUREDSCENERSSSTATE
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
 * \param[in] _value UnstructuredSceneRssState value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, UnstructuredSceneRssState const &_value)
{
  os << "UnstructuredSceneRssState(";
  os << "isSafe:";
  os << _value.isSafe;
  os << ",";
  os << "response:";
  os << _value.response;
  os << ",";
  os << "headingRange:";
  os << _value.headingRange;
  os << ",";
  os << "rssStateInformation:";
  os << _value.rssStateInformation;
  os << ",";
  os << "alphaLon:";
  os << _value.alphaLon;
  os << ")";
  return os;
}

} // namespace state
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for UnstructuredSceneRssState
 */
inline std::string to_string(::ad::rss::state::UnstructuredSceneRssState const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std
#endif // GEN_GUARD_AD_RSS_STATE_UNSTRUCTUREDSCENERSSSTATE
