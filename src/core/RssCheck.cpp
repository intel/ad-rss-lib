// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// INTEL CONFIDENTIAL
//
// Copyright (c) 2018 Intel Corporation
//
// This software and the related documents are Intel copyrighted materials, and
// your use of them is governed by the express license under which they were
// provided to you (License). Unless the License provides otherwise, you may not
// use, modify, copy, publish, distribute, disclose or transmit this software or
// the related documents without Intel's prior written permission.
//
// This software and the related documents are provided as is, with no express or
// implied warranties, other than those that are expressly stated in the License.
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "rss/core/RssCheck.hpp"
#include "rss/core/RssResponseResolving.hpp"
#include "rss/core/RssResponseTransformation.hpp"
#include "rss/core/RssSituationChecking.hpp"
#include "rss/core/RssSituationExtraction.hpp"

namespace rss {

namespace core {

RssCheck::RssCheck()
  : mResponseResolving(new RssResponseResolving())
{
}

bool RssCheck::calculateAccelerationRestriction(world::WorldModel const &worldModel,
                                                world::AccelerationRestriction &accelerationRestriction) noexcept
{
  situation::SituationVector situationVector;
  bool result = RssSituationExtraction::extractSituations(worldModel, situationVector);

  state::ResponseStateVector responseStateVector;
  if (result)
  {
    result = RssSituationChecking::checkSituations(situationVector, responseStateVector);
  }

  state::ResponseState properResponse;
  if (result)
  {
    result = mResponseResolving->provideProperResponse(responseStateVector, properResponse);
  }

  if (result)
  {
    result = RssResponseTransformation::transformProperResponse(worldModel, properResponse, accelerationRestriction);
  }

  return result;
}

} // namespace core
} // namespace rss
