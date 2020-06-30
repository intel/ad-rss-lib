// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/core/RssCheck.hpp"
#include "ad/rss/core/RssResponseResolving.hpp"
#include "ad/rss/core/RssSituationChecking.hpp"
#include "ad/rss/core/RssSituationExtraction.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

namespace ad {
namespace rss {
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
    spdlog::critical("RssCheck object initialization failed");
    mResponseResolving = nullptr;
    mSituationChecking = nullptr;
    mSituationExtraction = nullptr;
  }
}

RssCheck::~RssCheck()
{
}

bool RssCheck::calculateProperResponse(world::WorldModel const &worldModel,
                                       situation::SituationSnapshot &situationSnapshot,
                                       state::RssStateSnapshot &rssStateSnapshot,
                                       state::ProperResponse &properResponse)
{
  bool result = false;
  // global try catch block to ensure this library call doesn't throw an exception
  try
  {
    if (!static_cast<bool>(mResponseResolving) || !static_cast<bool>(mSituationChecking)
        || !static_cast<bool>(mSituationExtraction))
    {
      spdlog::critical("RssCheck::calculateProperResponse>> object not properly initialized");
      return false;
    }

    result = mSituationExtraction->extractSituations(worldModel, situationSnapshot);

    if (result)
    {
      result = mSituationChecking->checkSituations(situationSnapshot, rssStateSnapshot);
    }

    if (result)
    {
      result = mResponseResolving->provideProperResponse(rssStateSnapshot, properResponse);
    }
  }
  // LCOV_EXCL_START: unreachable code, keep to be on the safe side
  catch (...)
  {
    spdlog::critical("RssCheck::calculateProperResponse>> Exception caught");
    result = false;
  }
  // LCOV_EXCL_STOP: unreachable code, keep to be on the safe side
  return result;
}

bool RssCheck::calculateProperResponse(world::WorldModel const &worldModel, state::ProperResponse &properResponse)
{
  situation::SituationSnapshot situationSnapshot;
  state::RssStateSnapshot rssStateSnapshot;

  return calculateProperResponse(worldModel, situationSnapshot, rssStateSnapshot, properResponse);
}

} // namespace core
} // namespace rss
} // namespace ad
