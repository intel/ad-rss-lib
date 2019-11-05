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
#include "ad/rss/state/LateralResponseValidInputRange.hpp"
#include "ad/rss/state/LongitudinalResponseValidInputRange.hpp"
#include "ad/rss/state/ProperResponse.hpp"
#include "ad/rss/world/ObjectIdVectorValidInputRange.hpp"

/*!
 * \brief check if the given ProperResponse is within valid input range
 *
 * \param[in] input the ProperResponse as an input value
 *
 * \returns \c true if ProperResponse is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad::rss::world::TimeIndex(1) <= timeIndex
 */
inline bool withinValidInputRange(::ad::rss::state::ProperResponse const &input)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.dangerousObjects) && withinValidInputRange(input.longitudinalResponse)
    && withinValidInputRange(input.lateralResponseRight) && withinValidInputRange(input.lateralResponseLeft);

  // check for individual input ranges
  if (inValidInputRange)
  {
    inValidInputRange = (::ad::rss::world::TimeIndex(1) <= input.timeIndex);
  }

  return inValidInputRange;
}
