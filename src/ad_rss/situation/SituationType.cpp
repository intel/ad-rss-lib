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
 * Generated file
 * @file
 *
 */

#include "ad_rss/situation/SituationType.hpp"
#include <stdexcept>

std::string toString(::ad_rss::situation::SituationType const e)
{
  switch (e)
  {
    case ::ad_rss::situation::SituationType::NotRelevant:
      return std::string("::ad_rss::situation::SituationType::NotRelevant");
    case ::ad_rss::situation::SituationType::SameDirection:
      return std::string("::ad_rss::situation::SituationType::SameDirection");
    case ::ad_rss::situation::SituationType::OppositeDirection:
      return std::string("::ad_rss::situation::SituationType::OppositeDirection");
    case ::ad_rss::situation::SituationType::IntersectionEgoHasPriority:
      return std::string("::ad_rss::situation::SituationType::IntersectionEgoHasPriority");
    case ::ad_rss::situation::SituationType::IntersectionObjectHasPriority:
      return std::string("::ad_rss::situation::SituationType::IntersectionObjectHasPriority");
    case ::ad_rss::situation::SituationType::IntersectionSamePriority:
      return std::string("::ad_rss::situation::SituationType::IntersectionSamePriority");
    default:
      return std::string("UNKNOWN ENUM VALUE");
  }
}

template <>::ad_rss::situation::SituationType fromString(std::string const &str)
{
  if ((str == std::string("::ad_rss::situation::SituationType::NotRelevant")) || (str == std::string("NotRelevant")))
  {
    return ::ad_rss::situation::SituationType::NotRelevant;
  }
  else if ((str == std::string("::ad_rss::situation::SituationType::SameDirection"))
           || (str == std::string("SameDirection")))
  {
    return ::ad_rss::situation::SituationType::SameDirection;
  }
  else if ((str == std::string("::ad_rss::situation::SituationType::OppositeDirection"))
           || (str == std::string("OppositeDirection")))
  {
    return ::ad_rss::situation::SituationType::OppositeDirection;
  }
  else if ((str == std::string("::ad_rss::situation::SituationType::IntersectionEgoHasPriority"))
           || (str == std::string("IntersectionEgoHasPriority")))
  {
    return ::ad_rss::situation::SituationType::IntersectionEgoHasPriority;
  }
  else if ((str == std::string("::ad_rss::situation::SituationType::IntersectionObjectHasPriority"))
           || (str == std::string("IntersectionObjectHasPriority")))
  {
    return ::ad_rss::situation::SituationType::IntersectionObjectHasPriority;
  }
  else if ((str == std::string("::ad_rss::situation::SituationType::IntersectionSamePriority"))
           || (str == std::string("IntersectionSamePriority")))
  {
    return ::ad_rss::situation::SituationType::IntersectionSamePriority;
  }
  else
  {
    throw std::out_of_range("Invalid enum literal");
  }
}
