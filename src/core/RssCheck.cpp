// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors
//    may be used to endorse or promote products derived from this software without
//    specific prior written permission.
//
//    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
//    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
//    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
//    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
//    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//    POSSIBILITY OF SUCH DAMAGE.
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad_rss/core/RssCheck.hpp"
#include "ad_rss/core/RssResponseResolving.hpp"
#include "ad_rss/core/RssResponseTransformation.hpp"
#include "ad_rss/core/RssSituationChecking.hpp"
#include "ad_rss/core/RssSituationExtraction.hpp"

namespace ad_rss {

namespace core {

RssCheck::RssCheck()
{
  try
  {
    mResponseResolving = std::unique_ptr<RssResponseResolving>(new RssResponseResolving());
    mSituationChecking = std::unique_ptr<RssSituationChecking>(new RssSituationChecking());
  }
  catch (...)
  {
    mResponseResolving = nullptr;
    mSituationChecking = nullptr;
  }
}

RssCheck::~RssCheck()
{
}

bool RssCheck::calculateAccelerationRestriction(world::WorldModel const &worldModel,
                                                world::AccelerationRestriction &accelerationRestriction)
{
  bool result = false;
  // global try catch block to ensure this library call doesn't throw an exception
  try
  {
    if (!bool(mResponseResolving) || !bool(mSituationChecking))
    {
      return false;
    }

    situation::SituationVector situationVector;
    result = RssSituationExtraction::extractSituations(worldModel, situationVector);

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
      safeResponse.lateralStateLeft.response = ::ad_rss::state::LateralResponse::None;
      safeResponse.lateralStateRight.isSafe = true;
      safeResponse.lateralStateRight.response = ::ad_rss::state::LateralResponse::None;
      safeResponse.longitudinalState.isSafe = true;
      safeResponse.longitudinalState.response = ::ad_rss::state::LongitudinalResponse::None;
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
  }
  catch (...)
  {
    result = false;
  }

  return result;
}

} // namespace core
} // namespace ad_rss
