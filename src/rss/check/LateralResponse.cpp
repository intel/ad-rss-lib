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

#include "rss/check/LateralResponse.hpp"
#include <unordered_map>

std::string toString(::rss::check::LateralResponse const e)
{
  struct EnumClassHash
  {
    std::size_t operator()(::rss::check::LateralResponse t) const
    {
      return static_cast<std::size_t>(t);
    }
  };

  static std::unordered_map<::rss::check::LateralResponse, std::string, EnumClassHash> enumToStringMap{
    {::rss::check::LateralResponse::None, "::rss::check::LateralResponse::None"},
    {::rss::check::LateralResponse::BrakeMin, "::rss::check::LateralResponse::BrakeMin"}};
  return enumToStringMap.at(e);
}

template <>::rss::check::LateralResponse fromString(std::string const &str)
{
  static std::unordered_map<std::string, ::rss::check::LateralResponse> stringToEnumMap{
    {"::rss::check::LateralResponse::None", ::rss::check::LateralResponse::None},
    {"::rss::check::LateralResponse::BrakeMin", ::rss::check::LateralResponse::BrakeMin},
    {"None", ::rss::check::LateralResponse::None},
    {"BrakeMin", ::rss::check::LateralResponse::BrakeMin}};
  return stringToEnumMap.at(str);
}
