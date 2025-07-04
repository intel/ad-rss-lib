// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include <map>
#include <set>
#include "ad/rss/core/RelativeConstellationId.hpp"
#include "ad/rss/world/Constellation.hpp"
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
 * @brief namespace structured
 */
namespace structured {

/*!
 * @brief class supporting to keep track of unique constellation ids
 *
 * Constellation id's have to be constant over time.
 */
class RssConstellationIdProvider
{
public:
  /*!
   * @brief default constructor
   */
  RssConstellationIdProvider() = default;

  /*!
   * @brief default destructor
   */
  ~RssConstellationIdProvider() = default;

  /*!
   * @brief get the constellation id of the given constellation
   *
   * @param[in] time_index the time index the constellation refers to
   * @param[in] constellation the relevant constellation
   *
   * @return the constellation id assigned to the given constellation
   */
  core::RelativeConstellationId getConstellationId(world::TimeIndex const &time_index,
                                                   world::Constellation const &constellation);

  /*!
   * @brief drop all constallation ids associated with a given object_id
   *
   * This function might be used to drop previous states referred to a certain object id in case the object id is reused
   *
   * @param[in] object_id the object_id all previous constallations should be dropped
   */
  void dropConstellationIds(world::ObjectId const &object_id);

private:
  struct ConstellationData
  {
    ConstellationData(world::TimeIndex time_index,
                      core::RelativeConstellationId const constellation_id,
                      world::Constellation const &constellation);
    /*!
     * @brief update the current constellation data in case the constellation matches the constellation data
     *
     * @return \c true if the update succeeded, \c false if the constellation doesn't match the constellation
     */
    bool updateConstellation(world::TimeIndex time_index, world::Constellation const &constellation);

    typedef std::set<world::LaneSegmentId> IntersectionArea;

    /*!
     * Most of the time the intersection areas are identical
     * If a vehicle has already entered the intersection, the areas are shrinking,
     * but still have to be identical from end on
     * As a consequence the whole new areas have to be within the old ones.
     *
     * @return \c true if the left intersection area is fully contained in the right one.
     */
    bool isSmallerOrEqual(IntersectionArea const &left, IntersectionArea const &right) const;

    /*!
     * @brief extract the intersection area from the RoadArea
     */
    IntersectionArea getIntersectionArea(world::RoadArea roadArea);

    world::TimeIndex mTimeIndex;
    world::ConstellationType mConstellationType;
    core::RelativeConstellationId mConstellationId;
    IntersectionArea mEgoVehicleIntersectionArea;
    IntersectionArea mObjectIntersectionArea;
  };

  /*!
   * Update the time and free outdated data.
   *
   * @param[in] time_index the current time index
   */
  void updateTime(world::TimeIndex const &time_index);

  /*!
   * @brief get the next free constellation id
   */
  core::RelativeConstellationId getFreeConstellationId();

  typedef std::multimap<world::ObjectId, ConstellationData> ConstellationDataMap;

  world::TimeIndex mCurrentTime{0};
  world::TimeIndex mLastTime{0};
  core::RelativeConstellationId mNextConstellationId{0};
  ConstellationDataMap mConstellationData;
};

} // namespace structured
} // namespace rss
} // namespace ad
