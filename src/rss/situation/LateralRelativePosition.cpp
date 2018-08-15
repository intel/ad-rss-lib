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

#include "rss/situation/LateralRelativePosition.hpp"
#include <unordered_map>

std::string toString(::rss::situation::LateralRelativePosition const e)
{
  struct EnumClassHash
  {
    std::size_t operator()(::rss::situation::LateralRelativePosition t) const
    {
      return static_cast<std::size_t>(t);
    }
  };

  static std::unordered_map<::rss::situation::LateralRelativePosition, std::string, EnumClassHash> enumToStringMap{
    {::rss::situation::LateralRelativePosition::AtLeft, "::rss::situation::LateralRelativePosition::AtLeft"},
    {::rss::situation::LateralRelativePosition::OverlapLeft, "::rss::situation::LateralRelativePosition::OverlapLeft"},
    {::rss::situation::LateralRelativePosition::Overlap, "::rss::situation::LateralRelativePosition::Overlap"},
    {::rss::situation::LateralRelativePosition::OverlapRight,
     "::rss::situation::LateralRelativePosition::OverlapRight"},
    {::rss::situation::LateralRelativePosition::AtRight, "::rss::situation::LateralRelativePosition::AtRight"}};
  return enumToStringMap.at(e);
}

template <>::rss::situation::LateralRelativePosition fromString(std::string const &str)
{
  static std::unordered_map<std::string, ::rss::situation::LateralRelativePosition> stringToEnumMap{
    {"::rss::situation::LateralRelativePosition::AtLeft", ::rss::situation::LateralRelativePosition::AtLeft},
    {"::rss::situation::LateralRelativePosition::OverlapLeft", ::rss::situation::LateralRelativePosition::OverlapLeft},
    {"::rss::situation::LateralRelativePosition::Overlap", ::rss::situation::LateralRelativePosition::Overlap},
    {"::rss::situation::LateralRelativePosition::OverlapRight",
     ::rss::situation::LateralRelativePosition::OverlapRight},
    {"::rss::situation::LateralRelativePosition::AtRight", ::rss::situation::LateralRelativePosition::AtRight},
    {"AtLeft", ::rss::situation::LateralRelativePosition::AtLeft},
    {"OverlapLeft", ::rss::situation::LateralRelativePosition::OverlapLeft},
    {"Overlap", ::rss::situation::LateralRelativePosition::Overlap},
    {"OverlapRight", ::rss::situation::LateralRelativePosition::OverlapRight},
    {"AtRight", ::rss::situation::LateralRelativePosition::AtRight}};
  return stringToEnumMap.at(str);
}
