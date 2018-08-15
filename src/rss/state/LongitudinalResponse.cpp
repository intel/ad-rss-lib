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

#include "rss/state/LongitudinalResponse.hpp"
#include <unordered_map>

std::string toString(::rss::state::LongitudinalResponse const e)
{
  struct EnumClassHash
  {
    std::size_t operator()(::rss::state::LongitudinalResponse t) const
    {
      return static_cast<std::size_t>(t);
    }
  };

  static std::unordered_map<::rss::state::LongitudinalResponse, std::string, EnumClassHash> enumToStringMap{
    {::rss::state::LongitudinalResponse::None, "::rss::state::LongitudinalResponse::None"},
    {::rss::state::LongitudinalResponse::BrakeMinCorrect, "::rss::state::LongitudinalResponse::BrakeMinCorrect"},
    {::rss::state::LongitudinalResponse::BrakeMin, "::rss::state::LongitudinalResponse::BrakeMin"}};
  return enumToStringMap.at(e);
}

template <>::rss::state::LongitudinalResponse fromString(std::string const &str)
{
  static std::unordered_map<std::string, ::rss::state::LongitudinalResponse> stringToEnumMap{
    {"::rss::state::LongitudinalResponse::None", ::rss::state::LongitudinalResponse::None},
    {"::rss::state::LongitudinalResponse::BrakeMinCorrect", ::rss::state::LongitudinalResponse::BrakeMinCorrect},
    {"::rss::state::LongitudinalResponse::BrakeMin", ::rss::state::LongitudinalResponse::BrakeMin},
    {"None", ::rss::state::LongitudinalResponse::None},
    {"BrakeMinCorrect", ::rss::state::LongitudinalResponse::BrakeMinCorrect},
    {"BrakeMin", ::rss::state::LongitudinalResponse::BrakeMin}};
  return stringToEnumMap.at(str);
}
