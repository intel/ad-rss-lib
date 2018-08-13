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

#include "rss/lane/CoordinateSystemAxis.hpp"
#include <unordered_map>

std::string toString(::rss::lane::CoordinateSystemAxis const e)
{
  struct EnumClassHash
  {
    std::size_t operator()(::rss::lane::CoordinateSystemAxis t) const
    {
      return static_cast<std::size_t>(t);
    }
  };

  static std::unordered_map<::rss::lane::CoordinateSystemAxis, std::string, EnumClassHash> enumToStringMap{
    {::rss::lane::CoordinateSystemAxis::Longitudinal, "::rss::lane::CoordinateSystemAxis::Longitudinal"},
    {::rss::lane::CoordinateSystemAxis::Lateral, "::rss::lane::CoordinateSystemAxis::Lateral"}};
  return enumToStringMap.at(e);
}

template <>::rss::lane::CoordinateSystemAxis fromString(std::string const &str)
{
  static std::unordered_map<std::string, ::rss::lane::CoordinateSystemAxis> stringToEnumMap{
    {"::rss::lane::CoordinateSystemAxis::Longitudinal", ::rss::lane::CoordinateSystemAxis::Longitudinal},
    {"::rss::lane::CoordinateSystemAxis::Lateral", ::rss::lane::CoordinateSystemAxis::Lateral},
    {"Longitudinal", ::rss::lane::CoordinateSystemAxis::Longitudinal},
    {"Lateral", ::rss::lane::CoordinateSystemAxis::Lateral}};
  return stringToEnumMap.at(str);
}
