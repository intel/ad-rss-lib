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
#include "ad/rss/situation/SituationTypeValidInputRange.hpp"
#include "ad/rss/world/ObjectValidInputRange.hpp"
#include "ad/rss/world/RoadAreaValidInputRange.hpp"
#include "ad/rss/world/RssDynamicsValidInputRange.hpp"
#include "ad/rss/world/Scene.hpp"

/*!
 * \brief check if the given Scene is within valid input range
 *
 * \param[in] input the Scene as an input value
 *
 * \returns \c true if Scene is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::world::Scene const &input)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.situationType) && withinValidInputRange(input.egoVehicle)
    && withinValidInputRange(input.object) && withinValidInputRange(input.objectRssDynamics)
    && withinValidInputRange(input.intersectingRoad) && withinValidInputRange(input.egoVehicleRoad);

  return inValidInputRange;
}
