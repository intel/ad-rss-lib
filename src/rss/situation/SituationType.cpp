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
#include <stdexcept>

std::string toString(::rss::situation::SituationType const e)
{
  switch (e)
  {
    case ::rss::situation::SituationType::NotRelevant:
      return "::rss::situation::SituationType::NotRelevant";
    case ::rss::situation::SituationType::SameDirection:
      return "::rss::situation::SituationType::SameDirection";
    case ::rss::situation::SituationType::OppositeDirection:
      return "::rss::situation::SituationType::OppositeDirection";
    case ::rss::situation::SituationType::IntersectionEgoHasPriority:
      return "::rss::situation::SituationType::IntersectionEgoHasPriority";
    case ::rss::situation::SituationType::IntersectionObjectHasPriority:
      return "::rss::situation::SituationType::IntersectionObjectHasPriority";
    case ::rss::situation::SituationType::IntersectionSamePriority:
      return "::rss::situation::SituationType::IntersectionSamePriority";
    default:
      return "UNKNOWN ENUM VALUE";
  }
}

template <>::rss::situation::SituationType fromString(std::string const &str)
{
  if ((str == "::rss::situation::SituationType::NotRelevant") || (str == "NotRelevant"))
  {
    return ::rss::situation::SituationType::NotRelevant;
  }
  else if ((str == "::rss::situation::SituationType::SameDirection") || (str == "SameDirection"))
  {
    return ::rss::situation::SituationType::SameDirection;
  }
  else if ((str == "::rss::situation::SituationType::OppositeDirection") || (str == "OppositeDirection"))
  {
    return ::rss::situation::SituationType::OppositeDirection;
  }
  else if ((str == "::rss::situation::SituationType::IntersectionEgoHasPriority")
           || (str == "IntersectionEgoHasPriority"))
  {
    return ::rss::situation::SituationType::IntersectionEgoHasPriority;
  }
  else if ((str == "::rss::situation::SituationType::IntersectionObjectHasPriority")
           || (str == "IntersectionObjectHasPriority"))
  {
    return ::rss::situation::SituationType::IntersectionObjectHasPriority;
  }
  else if ((str == "::rss::situation::SituationType::IntersectionSamePriority") || (str == "IntersectionSamePriority"))
  {
    return ::rss::situation::SituationType::IntersectionSamePriority;
  }
  else
  {
    throw std::out_of_range("Invalid enum literal");
  }
}
