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

#include "rss/situation/SituationType.hpp"
#include <unordered_map>

std::string toString(::rss::situation::SituationType const e)
{
  struct EnumClassHash
  {
    std::size_t operator()(::rss::situation::SituationType t) const
    {
      return static_cast<std::size_t>(t);
    }
  };

  static std::unordered_map<::rss::situation::SituationType, std::string, EnumClassHash> enumToStringMap{
    {::rss::situation::SituationType::NotRelevant, "::rss::situation::SituationType::NotRelevant"},
    {::rss::situation::SituationType::SameDirection, "::rss::situation::SituationType::SameDirection"},
    {::rss::situation::SituationType::OppositeDirection, "::rss::situation::SituationType::OppositeDirection"},
    {::rss::situation::SituationType::IntersectionEgoHasPriority,
     "::rss::situation::SituationType::IntersectionEgoHasPriority"},
    {::rss::situation::SituationType::IntersectionObjectHasPriority,
     "::rss::situation::SituationType::IntersectionObjectHasPriority"},
    {::rss::situation::SituationType::IntersectionSamePriority,
     "::rss::situation::SituationType::IntersectionSamePriority"}};
  return enumToStringMap.at(e);
}

template <>::rss::situation::SituationType fromString(std::string const &str)
{
  static std::unordered_map<std::string, ::rss::situation::SituationType> stringToEnumMap{
    {"::rss::situation::SituationType::NotRelevant", ::rss::situation::SituationType::NotRelevant},
    {"::rss::situation::SituationType::SameDirection", ::rss::situation::SituationType::SameDirection},
    {"::rss::situation::SituationType::OppositeDirection", ::rss::situation::SituationType::OppositeDirection},
    {"::rss::situation::SituationType::IntersectionEgoHasPriority",
     ::rss::situation::SituationType::IntersectionEgoHasPriority},
    {"::rss::situation::SituationType::IntersectionObjectHasPriority",
     ::rss::situation::SituationType::IntersectionObjectHasPriority},
    {"::rss::situation::SituationType::IntersectionSamePriority",
     ::rss::situation::SituationType::IntersectionSamePriority},
    {"NotRelevant", ::rss::situation::SituationType::NotRelevant},
    {"SameDirection", ::rss::situation::SituationType::SameDirection},
    {"OppositeDirection", ::rss::situation::SituationType::OppositeDirection},
    {"IntersectionEgoHasPriority", ::rss::situation::SituationType::IntersectionEgoHasPriority},
    {"IntersectionObjectHasPriority", ::rss::situation::SituationType::IntersectionObjectHasPriority},
    {"IntersectionSamePriority", ::rss::situation::SituationType::IntersectionSamePriority}};
  return stringToEnumMap.at(str);
}
