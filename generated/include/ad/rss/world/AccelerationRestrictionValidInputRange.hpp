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
#include "ad/physics/AccelerationRangeValidInputRange.hpp"
#include "ad/rss/world/AccelerationRestriction.hpp"

/*!
 * \brief check if the given AccelerationRestriction is within valid input range
 *
 * \param[in] input the AccelerationRestriction as an input value
 *
 * \returns \c true if AccelerationRestriction is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad::rss::world::TimeIndex(1) <= timeIndex
 */
inline bool withinValidInputRange(::ad::rss::world::AccelerationRestriction const &input)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.lateralLeftRange) && withinValidInputRange(input.longitudinalRange)
    && withinValidInputRange(input.lateralRightRange);

  // check for individual input ranges
  if (inValidInputRange)
  {
    inValidInputRange = (::ad::rss::world::TimeIndex(1) <= input.timeIndex);
  }

  return inValidInputRange;
}
