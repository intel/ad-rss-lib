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
#include "ad/rss/world/Object.hpp"
#include "ad/rss/world/ObjectTypeValidInputRange.hpp"
#include "ad/rss/world/OccupiedRegionVectorValidInputRange.hpp"
#include "ad/rss/world/VelocityValidInputRange.hpp"

/*!
 * \brief check if the given Object is within valid input range
 *
 * \param[in] input the Object as an input value
 *
 * \returns \c true if Object is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::world::Object const &input)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.objectType) && withinValidInputRange(input.occupiedRegions)
    && withinValidInputRange(input.velocity);

  return inValidInputRange;
}
