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
#include "ad/rss/world/UnstructuredTrajectorySet.hpp"
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
 * \brief DataType UnstructuredSceneStateInformation
 */
struct UnstructuredSceneStateInformation
{
  /*!
   * \brief Smart pointer on UnstructuredSceneStateInformation
   */
  typedef std::shared_ptr<UnstructuredSceneStateInformation> Ptr;

  /*!
   * \brief Smart pointer on constant UnstructuredSceneStateInformation
   */
  typedef std::shared_ptr<UnstructuredSceneStateInformation const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  UnstructuredSceneStateInformation() = default;

  /*!
   * \brief standard destructor
   */
  ~UnstructuredSceneStateInformation() = default;

  /*!
   * \brief standard copy constructor
   */
  UnstructuredSceneStateInformation(const UnstructuredSceneStateInformation &other) = default;

  /*!
   * \brief standard move constructor
   */
  UnstructuredSceneStateInformation(UnstructuredSceneStateInformation &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other UnstructuredSceneStateInformation
   *
   * \returns Reference to this UnstructuredSceneStateInformation.
   */
  UnstructuredSceneStateInformation &operator=(const UnstructuredSceneStateInformation &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other UnstructuredSceneStateInformation
   *
   * \returns Reference to this UnstructuredSceneStateInformation.
   */
  UnstructuredSceneStateInformation &operator=(UnstructuredSceneStateInformation &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other UnstructuredSceneStateInformation
   *
   * \returns \c true if both UnstructuredSceneStateInformation are equal
   */
  bool operator==(const UnstructuredSceneStateInformation &other) const
  {
    return (brakeTrajectorySet == other.brakeTrajectorySet)
      && (continueForwardTrajectorySet == other.continueForwardTrajectorySet);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other UnstructuredSceneStateInformation.
   *
   * \returns \c true if both UnstructuredSceneStateInformation are different
   */
  bool operator!=(const UnstructuredSceneStateInformation &other) const
  {
    return !operator==(other);
  }

  /*!
   * The set of brake trajectories considered on calculation of the RSS state.
   */
  ::ad::rss::world::UnstructuredTrajectorySet brakeTrajectorySet;

  /*!
   * The set of continue forward trajectories considered on calculation of the RSS state.
   */
  ::ad::rss::world::UnstructuredTrajectorySet continueForwardTrajectorySet;
};

} // namespace state
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_STATE_UNSTRUCTUREDSCENESTATEINFORMATION
#define GEN_GUARD_AD_RSS_STATE_UNSTRUCTUREDSCENESTATEINFORMATION
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
 * \param[in] _value UnstructuredSceneStateInformation value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, UnstructuredSceneStateInformation const &_value)
{
  os << "UnstructuredSceneStateInformation(";
  os << "brakeTrajectorySet:";
  os << _value.brakeTrajectorySet;
  os << ",";
  os << "continueForwardTrajectorySet:";
  os << _value.continueForwardTrajectorySet;
  os << ")";
  return os;
}

} // namespace state
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for UnstructuredSceneStateInformation
 */
inline std::string to_string(::ad::rss::state::UnstructuredSceneStateInformation const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std
#endif // GEN_GUARD_AD_RSS_STATE_UNSTRUCTUREDSCENESTATEINFORMATION
