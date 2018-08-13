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

#include "rss/lane/LateralRelativePosition.hpp"
#include <unordered_map>

std::string toString(::rss::lane::LateralRelativePosition const e)
{
  struct EnumClassHash
  {
    std::size_t operator()(::rss::lane::LateralRelativePosition t) const
    {
      return static_cast<std::size_t>(t);
    }
  };

  static std::unordered_map<::rss::lane::LateralRelativePosition, std::string, EnumClassHash> enumToStringMap{
    {::rss::lane::LateralRelativePosition::AtLeft, "::rss::lane::LateralRelativePosition::AtLeft"},
    {::rss::lane::LateralRelativePosition::OverlapLeft, "::rss::lane::LateralRelativePosition::OverlapLeft"},
    {::rss::lane::LateralRelativePosition::Overlap, "::rss::lane::LateralRelativePosition::Overlap"},
    {::rss::lane::LateralRelativePosition::OverlapRight, "::rss::lane::LateralRelativePosition::OverlapRight"},
    {::rss::lane::LateralRelativePosition::AtRight, "::rss::lane::LateralRelativePosition::AtRight"}};
  return enumToStringMap.at(e);
}

template <>::rss::lane::LateralRelativePosition fromString(std::string const &str)
{
  static std::unordered_map<std::string, ::rss::lane::LateralRelativePosition> stringToEnumMap{
    {"::rss::lane::LateralRelativePosition::AtLeft", ::rss::lane::LateralRelativePosition::AtLeft},
    {"::rss::lane::LateralRelativePosition::OverlapLeft", ::rss::lane::LateralRelativePosition::OverlapLeft},
    {"::rss::lane::LateralRelativePosition::Overlap", ::rss::lane::LateralRelativePosition::Overlap},
    {"::rss::lane::LateralRelativePosition::OverlapRight", ::rss::lane::LateralRelativePosition::OverlapRight},
    {"::rss::lane::LateralRelativePosition::AtRight", ::rss::lane::LateralRelativePosition::AtRight},
    {"AtLeft", ::rss::lane::LateralRelativePosition::AtLeft},
    {"OverlapLeft", ::rss::lane::LateralRelativePosition::OverlapLeft},
    {"Overlap", ::rss::lane::LateralRelativePosition::Overlap},
    {"OverlapRight", ::rss::lane::LateralRelativePosition::OverlapRight},
    {"AtRight", ::rss::lane::LateralRelativePosition::AtRight}};
  return stringToEnumMap.at(str);
}
