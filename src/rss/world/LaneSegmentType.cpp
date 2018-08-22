/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * INTEL CONFIDENTIAL
 *
 * Copyright (c) 2018 Intel Corporation
 *
 * This software and the related documents are Intel copyrighted materials, and
 * your use of them is governed by the express license under which they were
 * provided to you (License). Unless the License provides otherwise, you may not
 * use, modify, copy, publish, distribute, disclose or transmit this software or
 * the related documents without Intel's prior written permission.
 *
 * This software and the related documents are provided as is, with no express or
 * implied warranties, other than those that are expressly stated in the License.
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * @file
 *
 */

#include "rss/world/LaneSegmentType.hpp"
#include <unordered_map>

std::string toString(::rss::world::LaneSegmentType const e)
{
  struct EnumClassHash
  {
    std::size_t operator()(::rss::world::LaneSegmentType t) const
    {
      return static_cast<std::size_t>(t);
    }
  };

  static std::unordered_map<::rss::world::LaneSegmentType, std::string, EnumClassHash> enumToStringMap{
    {::rss::world::LaneSegmentType::Normal, "::rss::world::LaneSegmentType::Normal"},
    {::rss::world::LaneSegmentType::Intersection, "::rss::world::LaneSegmentType::Intersection"}};
  return enumToStringMap.at(e);
}

template <>::rss::world::LaneSegmentType fromString(std::string const &str)
{
  static std::unordered_map<std::string, ::rss::world::LaneSegmentType> stringToEnumMap{
    {"::rss::world::LaneSegmentType::Normal", ::rss::world::LaneSegmentType::Normal},
    {"::rss::world::LaneSegmentType::Intersection", ::rss::world::LaneSegmentType::Intersection},
    {"Normal", ::rss::world::LaneSegmentType::Normal},
    {"Intersection", ::rss::world::LaneSegmentType::Intersection}};
  return stringToEnumMap.at(str);
}
