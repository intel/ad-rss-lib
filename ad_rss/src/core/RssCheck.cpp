// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2022 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/core/RssCheck.hpp"
#include "ad/rss/core/Logging.hpp"
#include "ad/rss/core/RssResponseResolving.hpp"
#include "ad/rss/core/RssSituationChecking.hpp"
#include "ad/rss/core/RssSituationExtraction.hpp"

namespace ad {
namespace rss {
namespace core {

void RssCheck::registerCalculateTrajectorySetsCallback(
  world::ObjectType objectType,
  unstructured::RssUnstructuredConstellationChecker::CalculateTrajectorySetsCallbackFunctionType
    calculateTrajectorySetsCallback)
{
  // global try catch block to ensure this library call doesn't throw an exception
  try
  {
    mSituationChecking.registerCalculateTrajectorySetsCallback(objectType, calculateTrajectorySetsCallback);
  }
  catch (...)
  {
    core::getLogger()->critical("RssCheck::registerCalculateTrajectorySetsCallback>> Exception caught");
  }
}

void RssCheck::dropObjectHistory(world::ObjectId const &object_id)
{
  mSituationExtraction.dropObjectHistory(object_id);
}

bool RssCheck::calculateProperResponse(world::WorldModel const &worldModel,
                                       RssSituationSnapshot &situationSnapshot,
                                       state::RssStateSnapshot &rssStateSnapshot,
                                       state::ProperResponse &properResponse)
{
  bool result = false;
  // global try catch block to ensure this library call doesn't throw an exception
  try
  {
    result = mSituationExtraction.extractSituation(worldModel, situationSnapshot);

    if (result)
    {
      result = mSituationChecking.checkSituation(situationSnapshot, rssStateSnapshot);
    }

    if (result)
    {
      result = mResponseResolving.provideProperResponse(rssStateSnapshot, properResponse);
    }
  }
  // LCOV_EXCL_START: unreachable code, keep to be on the safe side
  catch (...)
  {
    core::getLogger()->critical("RssCheck::calculateProperResponse>> Exception caught");
    result = false;
  }
  // LCOV_EXCL_STOP: unreachable code, keep to be on the safe side
  return result;
}

bool RssCheck::calculateProperResponse(world::WorldModel const &worldModel, state::ProperResponse &properResponse)
{
  RssSituationSnapshot situationSnapshot;
  state::RssStateSnapshot rssStateSnapshot;

  return calculateProperResponse(worldModel, situationSnapshot, rssStateSnapshot, properResponse);
}

} // namespace core
} // namespace rss
} // namespace ad
