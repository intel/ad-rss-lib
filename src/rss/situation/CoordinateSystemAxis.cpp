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
