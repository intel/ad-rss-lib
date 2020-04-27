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
#include "ad/rss/situation/SituationVector.hpp"
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
 * @brief namespace situation
 */
namespace situation {

/*!
 * \brief DataType SituationSnapshot
 *
 * A snashot in time of the current situations RSS extracted from the WorldModel.
 */
struct SituationSnapshot
{
  /*!
   * \brief Smart pointer on SituationSnapshot
   */
  typedef std::shared_ptr<SituationSnapshot> Ptr;

  /*!
   * \brief Smart pointer on constant SituationSnapshot
   */
  typedef std::shared_ptr<SituationSnapshot const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  SituationSnapshot() = default;

  /*!
   * \brief standard destructor
   */
  ~SituationSnapshot() = default;

  /*!
   * \brief standard copy constructor
   */
  SituationSnapshot(const SituationSnapshot &other) = default;

  /*!
   * \brief standard move constructor
   */
  SituationSnapshot(SituationSnapshot &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other SituationSnapshot
   *
   * \returns Reference to this SituationSnapshot.
   */
  SituationSnapshot &operator=(const SituationSnapshot &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other SituationSnapshot
   *
   * \returns Reference to this SituationSnapshot.
   */
  SituationSnapshot &operator=(SituationSnapshot &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other SituationSnapshot
   *
   * \returns \c true if both SituationSnapshot are equal
   */
  bool operator==(const SituationSnapshot &other) const
  {
    return (timeIndex == other.timeIndex) && (defaultEgoVehicleRssDynamics == other.defaultEgoVehicleRssDynamics)
      && (situations == other.situations);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other SituationSnapshot.
   *
   * \returns \c true if both SituationSnapshot are different
   */
  bool operator!=(const SituationSnapshot &other) const
  {
    return !operator==(other);
  }

  /*!
   * The time index is required to distinguish different points in time when tracking states or transforming responses
   * back.
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
   * The vector of situations at a given time.
   */
  ::ad::rss::situation::SituationVector situations;
};

} // namespace situation
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_SITUATION_SITUATIONSNAPSHOT
#define GEN_GUARD_AD_RSS_SITUATION_SITUATIONSNAPSHOT
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace situation
 */
namespace situation {

/**
 * \brief standard ostream operator
 *
 * \param[in] os The output stream to write to
 * \param[in] _value SituationSnapshot value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, SituationSnapshot const &_value)
{
  os << "SituationSnapshot(";
  os << "timeIndex:";
  os << _value.timeIndex;
  os << ",";
  os << "defaultEgoVehicleRssDynamics:";
  os << _value.defaultEgoVehicleRssDynamics;
  os << ",";
  os << "situations:";
  os << _value.situations;
  os << ")";
  return os;
}

} // namespace situation
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for SituationSnapshot
 */
inline std::string to_string(::ad::rss::situation::SituationSnapshot const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std
#endif // GEN_GUARD_AD_RSS_SITUATION_SITUATIONSNAPSHOT
