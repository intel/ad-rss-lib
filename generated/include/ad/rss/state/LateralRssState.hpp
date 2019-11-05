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
#include <memory>
#include "ad/rss/state/LateralResponse.hpp"
#include "ad/rss/state/RssStateInformation.hpp"
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
  using Ptr = std::shared_ptr<LateralRssState>;
  using ConstPtr = std::shared_ptr<LateralRssState const>;

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
    return (isSafe == other.isSafe) && (response == other.response)
      && (rssStateInformation == other.rssStateInformation);
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
  bool isSafe{false};

  /*!
   * required response in lateral direction
   */
  ::ad::rss::state::LateralResponse response;

  /*!
   * Information on the evaluation of the Rss state.
   */
  ::ad::rss::state::RssStateInformation rssStateInformation;
};

} // namespace state
} // namespace rss
} // namespace ad

// protect the definition of ostream operator from duplicates by typedef usage within other data types
#ifndef OSTREAM_AD_RSS_STATE_LATERALRSSSTATE
#define OSTREAM_AD_RSS_STATE_LATERALRSSSTATE
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
 * \param[in] stream The output stream to write to
 * \param[in] value LateralRssState value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, LateralRssState const &_value)
{
  os << "LateralRssState(";
  os << "isSafe:";
  os << _value.isSafe;
  os << ",";
  os << "response:";
  os << _value.response;
  os << ",";
  os << "rssStateInformation:";
  os << _value.rssStateInformation;
  os << ")";
  return os;
}

} // namespace state
} // namespace rss
} // namespace ad
#endif // OSTREAM_AD_RSS_STATE_LATERALRSSSTATE
