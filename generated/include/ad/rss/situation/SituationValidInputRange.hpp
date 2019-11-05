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
#include "ad/rss/situation/RelativePositionValidInputRange.hpp"
#include "ad/rss/situation/Situation.hpp"
#include "ad/rss/situation/SituationTypeValidInputRange.hpp"
#include "ad/rss/situation/VehicleStateValidInputRange.hpp"

/*!
 * \brief check if the given Situation is within valid input range
 *
 * \param[in] input the Situation as an input value
 *
 * \returns \c true if Situation is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::situation::Situation const &input)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.situationType) && withinValidInputRange(input.egoVehicleState)
    && withinValidInputRange(input.otherVehicleState) && withinValidInputRange(input.relativePosition);

  return inValidInputRange;
}
