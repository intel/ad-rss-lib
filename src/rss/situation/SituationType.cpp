/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 *    may be used to endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 *    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 *    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 *    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 *    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 *    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 *    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *    POSSIBILITY OF SUCH DAMAGE.
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
