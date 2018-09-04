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

RssCheck::~RssCheck() = default;

RssCheck::RssCheck()
{
  try
  {
    mResponseResolving = std::make_unique<RssResponseResolving>();
    mSituationChecking = std::make_unique<RssSituationChecking>();
  }
  catch (...)
  {
    mResponseResolving = nullptr;
    mSituationChecking = nullptr;
  }
}

bool RssCheck::calculateAccelerationRestriction(world::WorldModel const &worldModel,
                                                world::AccelerationRestriction &accelerationRestriction) noexcept
{
  if (!bool(mResponseResolving) || !bool(mSituationChecking))
  {
    return false;
  }

  situation::SituationVector situationVector;
  bool result = RssSituationExtraction::extractSituations(worldModel, situationVector);

  state::ResponseStateVector responseStateVector;
  if (result)
  {
    result = mSituationChecking->checkSituations(situationVector, responseStateVector);
  }

  if (result && responseStateVector.empty())
  {
    // if the worldModel contains no relevant object (or no objects at all)
    // the responseStateVector will be empty. Thus, we need to add a "all safe" response
    state::ResponseState safeResponse;
    safeResponse.timeIndex = worldModel.timeIndex;
    safeResponse.situationId = 0u;
    safeResponse.lateralStateLeft.isSafe = true;
    safeResponse.lateralStateLeft.response = ::rss::state::LateralResponse::None;
    safeResponse.lateralStateRight.isSafe = true;
    safeResponse.lateralStateRight.response = ::rss::state::LateralResponse::None;
    safeResponse.longitudinalState.isSafe = true;
    safeResponse.longitudinalState.response = ::rss::state::LongitudinalResponse::None;
    responseStateVector.push_back(safeResponse);
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
