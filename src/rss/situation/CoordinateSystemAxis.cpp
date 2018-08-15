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

#include "rss/situation/CoordinateSystemAxis.hpp"
#include <unordered_map>

std::string toString(::rss::situation::CoordinateSystemAxis const e)
{
  struct EnumClassHash
  {
    std::size_t operator()(::rss::situation::CoordinateSystemAxis t) const
    {
      return static_cast<std::size_t>(t);
    }
  };

  static std::unordered_map<::rss::situation::CoordinateSystemAxis, std::string, EnumClassHash> enumToStringMap{
    {::rss::situation::CoordinateSystemAxis::Longitudinal, "::rss::situation::CoordinateSystemAxis::Longitudinal"},
    {::rss::situation::CoordinateSystemAxis::Lateral, "::rss::situation::CoordinateSystemAxis::Lateral"}};
  return enumToStringMap.at(e);
}

template <>::rss::situation::CoordinateSystemAxis fromString(std::string const &str)
{
  static std::unordered_map<std::string, ::rss::situation::CoordinateSystemAxis> stringToEnumMap{
    {"::rss::situation::CoordinateSystemAxis::Longitudinal", ::rss::situation::CoordinateSystemAxis::Longitudinal},
    {"::rss::situation::CoordinateSystemAxis::Lateral", ::rss::situation::CoordinateSystemAxis::Lateral},
    {"Longitudinal", ::rss::situation::CoordinateSystemAxis::Longitudinal},
    {"Lateral", ::rss::situation::CoordinateSystemAxis::Lateral}};
  return stringToEnumMap.at(str);
}
