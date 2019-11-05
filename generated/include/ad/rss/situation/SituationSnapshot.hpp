/*
 * Copyright (C) 2019 Intel Corporation
 */

/**
 * Generated file
 * @file
 *
 * Model Library     : RSS.ad_rss_data_type_lib
 * Model Version     : 0.0.0
 * Generator         : mo2ive_generator_mockup
 * Generator Version : @GENERATOR_VERSION@
 */

#pragma once

#include <iostream>
#include <limits>
#include <memory>
#include "ad/rss/situation/SituationVector.hpp"
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
  using Ptr = std::shared_ptr<SituationSnapshot>;
  using ConstPtr = std::shared_ptr<SituationSnapshot const>;

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
    return (timeIndex == other.timeIndex) && (situations == other.situations);
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
   * The vector of situations at a given time.
   */
  ::ad::rss::situation::SituationVector situations;
};

} // namespace situation
} // namespace rss
} // namespace ad

// protect the definition of ostream operator from duplicates by typedef usage within other data types
#ifndef OSTREAM_AD_RSS_SITUATION_SITUATIONSNAPSHOT
#define OSTREAM_AD_RSS_SITUATION_SITUATIONSNAPSHOT
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
 * \param[in] stream The output stream to write to
 * \param[in] value SituationSnapshot value
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
  os << "situations:";
  os << _value.situations;
  os << ")";
  return os;
}

} // namespace situation
} // namespace rss
} // namespace ad
#endif // OSTREAM_AD_RSS_SITUATION_SITUATIONSNAPSHOT
