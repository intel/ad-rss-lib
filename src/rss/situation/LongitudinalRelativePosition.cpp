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

#include "rss/situation/LongitudinalRelativePosition.hpp"
#include <unordered_map>

std::string toString(::rss::situation::LongitudinalRelativePosition const e)
{
  struct EnumClassHash
  {
    std::size_t operator()(::rss::situation::LongitudinalRelativePosition t) const
    {
      return static_cast<std::size_t>(t);
    }
  };

  static std::unordered_map<::rss::situation::LongitudinalRelativePosition, std::string, EnumClassHash> enumToStringMap{
    {::rss::situation::LongitudinalRelativePosition::InFront,
     "::rss::situation::LongitudinalRelativePosition::InFront"},
    {::rss::situation::LongitudinalRelativePosition::OverlapFront,
     "::rss::situation::LongitudinalRelativePosition::OverlapFront"},
    {::rss::situation::LongitudinalRelativePosition::Overlap,
     "::rss::situation::LongitudinalRelativePosition::Overlap"},
    {::rss::situation::LongitudinalRelativePosition::OverlapBack,
     "::rss::situation::LongitudinalRelativePosition::OverlapBack"},
    {::rss::situation::LongitudinalRelativePosition::AtBack, "::rss::situation::LongitudinalRelativePosition::AtBack"}};
  return enumToStringMap.at(e);
}

template <>::rss::situation::LongitudinalRelativePosition fromString(std::string const &str)
{
  static std::unordered_map<std::string, ::rss::situation::LongitudinalRelativePosition> stringToEnumMap{
    {"::rss::situation::LongitudinalRelativePosition::InFront",
     ::rss::situation::LongitudinalRelativePosition::InFront},
    {"::rss::situation::LongitudinalRelativePosition::OverlapFront",
     ::rss::situation::LongitudinalRelativePosition::OverlapFront},
    {"::rss::situation::LongitudinalRelativePosition::Overlap",
     ::rss::situation::LongitudinalRelativePosition::Overlap},
    {"::rss::situation::LongitudinalRelativePosition::OverlapBack",
     ::rss::situation::LongitudinalRelativePosition::OverlapBack},
    {"::rss::situation::LongitudinalRelativePosition::AtBack", ::rss::situation::LongitudinalRelativePosition::AtBack},
    {"InFront", ::rss::situation::LongitudinalRelativePosition::InFront},
    {"OverlapFront", ::rss::situation::LongitudinalRelativePosition::OverlapFront},
    {"Overlap", ::rss::situation::LongitudinalRelativePosition::Overlap},
    {"OverlapBack", ::rss::situation::LongitudinalRelativePosition::OverlapBack},
    {"AtBack", ::rss::situation::LongitudinalRelativePosition::AtBack}};
  return stringToEnumMap.at(str);
}
