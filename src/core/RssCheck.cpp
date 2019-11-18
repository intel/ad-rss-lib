// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
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
    mSituationExtraction = std::unique_ptr<RssSituationExtraction>(new RssSituationExtraction());
  }
  catch (...)
  {
    mResponseResolving = nullptr;
    mSituationChecking = nullptr;
    mSituationExtraction = nullptr;
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
    if (!static_cast<bool>(mResponseResolving) || !static_cast<bool>(mSituationChecking)
        || !static_cast<bool>(mSituationExtraction))
    {
      return false;
    }

    situation::SituationSnapshot situationSnapshot;
    result = mSituationExtraction->extractSituations(worldModel, situationSnapshot);

    state::RssStateSnapshot rssStateSnapshot;
    if (result)
    {
      result = mSituationChecking->checkSituations(situationSnapshot, rssStateSnapshot);
    }

    state::ProperResponse properResponse;
    if (result)
    {
      result = mResponseResolving->provideProperResponse(rssStateSnapshot, properResponse);
    }

    if (result)
    {
      result = RssResponseTransformation::transformProperResponse(worldModel, properResponse, accelerationRestriction);
    }
  }
  // LCOV_EXCL_START: unreachable code, keep to be on the safe side
  catch (...)
  {
    result = false;
  }
  // LCOV_EXCL_STOP: unreachable code, keep to be on the safe side
  return result;
}

} // namespace core
} // namespace ad_rss
