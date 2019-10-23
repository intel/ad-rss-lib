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
  using Ptr = std::shared_ptr<RssState>;
  using ConstPtr = std::shared_ptr<RssState const>;

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
