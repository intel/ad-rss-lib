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

#include "rss/world/LaneDrivingDirection.hpp"
#include <unordered_map>

std::string toString(::rss::world::LaneDrivingDirection const e)
{
  struct EnumClassHash
  {
    std::size_t operator()(::rss::world::LaneDrivingDirection t) const
    {
      return static_cast<std::size_t>(t);
    }
  };

  static std::unordered_map<::rss::world::LaneDrivingDirection, std::string, EnumClassHash> enumToStringMap{
    {::rss::world::LaneDrivingDirection::Bidirectional, "::rss::world::LaneDrivingDirection::Bidirectional"},
    {::rss::world::LaneDrivingDirection::Positive, "::rss::world::LaneDrivingDirection::Positive"},
    {::rss::world::LaneDrivingDirection::Negative, "::rss::world::LaneDrivingDirection::Negative"}};
  return enumToStringMap.at(e);
}

template <>::rss::world::LaneDrivingDirection fromString(std::string const &str)
{
  static std::unordered_map<std::string, ::rss::world::LaneDrivingDirection> stringToEnumMap{
    {"::rss::world::LaneDrivingDirection::Bidirectional", ::rss::world::LaneDrivingDirection::Bidirectional},
    {"::rss::world::LaneDrivingDirection::Positive", ::rss::world::LaneDrivingDirection::Positive},
    {"::rss::world::LaneDrivingDirection::Negative", ::rss::world::LaneDrivingDirection::Negative},
    {"Bidirectional", ::rss::world::LaneDrivingDirection::Bidirectional},
    {"Positive", ::rss::world::LaneDrivingDirection::Positive},
    {"Negative", ::rss::world::LaneDrivingDirection::Negative}};
  return stringToEnumMap.at(str);
}
