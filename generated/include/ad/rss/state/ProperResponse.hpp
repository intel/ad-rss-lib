/*
 *  @COPYRIGHT_TAG@
 */

/**
 * Generated file
 * @file
 *
 * Model Library     : RSS.ad_rss_data_type_lib
 * Model Version     : 0.0.0
 * Generator         : mo2ive_generator_mockup
 * Generator Version : 10.5.6-1843
 */

#pragma once

#include <limits>
#include <memory>
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
  using Ptr = std::shared_ptr<ProperResponse>;
  using ConstPtr = std::shared_ptr<ProperResponse const>;

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
