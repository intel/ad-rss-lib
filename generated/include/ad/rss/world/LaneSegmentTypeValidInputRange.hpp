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
#include "ad/rss/world/LaneSegmentType.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given LaneSegmentType is within valid input range
 *
 * \param[in] input the LaneSegmentType as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if LaneSegmentType is considered to be within the specified input range
 *
 * \note the specified input range is defined by the valid enum literals.
 */
inline bool withinValidInputRange(::ad::rss::world::LaneSegmentType const &input, bool const logErrors = true)
{
  bool inValidInputRange = (input == ::ad::rss::world::LaneSegmentType::Normal)
    || (input == ::ad::rss::world::LaneSegmentType::Intersection);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::world::LaneSegmentType)>> {}, raw value: {} ",
                  input,
                  static_cast<int32_t>(input));
  }
  return inValidInputRange;
}
