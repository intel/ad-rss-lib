/*
 * Copyright (C) 2019 Intel Corporation
 */

/**
 * Generated file
 * @file
 *
 * Model Library     : RSS.ad_rss_data_type_lib
 * Model Version     : 0.0.0
 * Generator         : mo2ive_generator_mockup
 * Generator Version : @GENERATOR_VERSION@
 */

#pragma once

#include <cmath>
#include <limits>
#include "ad/rss/situation/SituationSnapshot.hpp"
#include "ad/rss/situation/SituationVectorValidInputRange.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given SituationSnapshot is within valid input range
 *
 * \param[in] input the SituationSnapshot as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if SituationSnapshot is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad::rss::world::TimeIndex(1) <= timeIndex
 */
inline bool withinValidInputRange(::ad::rss::situation::SituationSnapshot const &input, bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.situations, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::situation::SituationSnapshot)>> {} has invalid member", input);
  }

  // check for individual input ranges
  if (inValidInputRange)
  {
    inValidInputRange = (::ad::rss::world::TimeIndex(1) <= input.timeIndex);
    if (!inValidInputRange && logErrors)
    {
      spdlog::error("withinValidInputRange(::ad::rss::situation::SituationSnapshot)>> {} element {} out of valid input "
                    "range [{}, {}]",
                    input,
                    input.timeIndex,
                    ::ad::rss::world::TimeIndex(1),
                    "Undefined");
    }
  }

  return inValidInputRange;
}
