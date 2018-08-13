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

#include "rss/lane/LongitudinalRelativePosition.hpp"
#include <unordered_map>

std::string toString(::rss::lane::LongitudinalRelativePosition const e)
{
  struct EnumClassHash
  {
    std::size_t operator()(::rss::lane::LongitudinalRelativePosition t) const
    {
      return static_cast<std::size_t>(t);
    }
  };

  static std::unordered_map<::rss::lane::LongitudinalRelativePosition, std::string, EnumClassHash> enumToStringMap{
    {::rss::lane::LongitudinalRelativePosition::InFront, "::rss::lane::LongitudinalRelativePosition::InFront"},
    {::rss::lane::LongitudinalRelativePosition::OverlapFront,
     "::rss::lane::LongitudinalRelativePosition::OverlapFront"},
    {::rss::lane::LongitudinalRelativePosition::Overlap, "::rss::lane::LongitudinalRelativePosition::Overlap"},
    {::rss::lane::LongitudinalRelativePosition::OverlapBack, "::rss::lane::LongitudinalRelativePosition::OverlapBack"},
    {::rss::lane::LongitudinalRelativePosition::AtBack, "::rss::lane::LongitudinalRelativePosition::AtBack"}};
  return enumToStringMap.at(e);
}

template <>::rss::lane::LongitudinalRelativePosition fromString(std::string const &str)
{
  static std::unordered_map<std::string, ::rss::lane::LongitudinalRelativePosition> stringToEnumMap{
    {"::rss::lane::LongitudinalRelativePosition::InFront", ::rss::lane::LongitudinalRelativePosition::InFront},
    {"::rss::lane::LongitudinalRelativePosition::OverlapFront",
     ::rss::lane::LongitudinalRelativePosition::OverlapFront},
    {"::rss::lane::LongitudinalRelativePosition::Overlap", ::rss::lane::LongitudinalRelativePosition::Overlap},
    {"::rss::lane::LongitudinalRelativePosition::OverlapBack", ::rss::lane::LongitudinalRelativePosition::OverlapBack},
    {"::rss::lane::LongitudinalRelativePosition::AtBack", ::rss::lane::LongitudinalRelativePosition::AtBack},
    {"InFront", ::rss::lane::LongitudinalRelativePosition::InFront},
    {"OverlapFront", ::rss::lane::LongitudinalRelativePosition::OverlapFront},
    {"Overlap", ::rss::lane::LongitudinalRelativePosition::Overlap},
    {"OverlapBack", ::rss::lane::LongitudinalRelativePosition::OverlapBack},
    {"AtBack", ::rss::lane::LongitudinalRelativePosition::AtBack}};
  return stringToEnumMap.at(str);
}
