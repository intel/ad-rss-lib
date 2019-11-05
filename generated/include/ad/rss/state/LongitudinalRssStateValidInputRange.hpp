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
#include "ad/rss/state/LongitudinalResponseValidInputRange.hpp"
#include "ad/rss/state/LongitudinalRssState.hpp"
#include "ad/rss/state/RssStateInformationValidInputRange.hpp"

/*!
 * \brief check if the given LongitudinalRssState is within valid input range
 *
 * \param[in] input the LongitudinalRssState as an input value
 *
 * \returns \c true if LongitudinalRssState is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::state::LongitudinalRssState const &input)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.response) && withinValidInputRange(input.rssStateInformation);

  return inValidInputRange;
}
