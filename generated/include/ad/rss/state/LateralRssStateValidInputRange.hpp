/*
 *  @COPYRIGHT_TAG@
 */

/**
 * Generated file
 * @file
 *
 * Model Library     : RSS.ad_rss_data_type_lib
 * Model Version     : 0.0.0
 * Generator         : mo2ive_generator_mockup
 * Generator Version : 10.5.6-1843
 */

#pragma once

#include <cmath>
#include <limits>
#include "ad/rss/state/LateralResponseValidInputRange.hpp"
#include "ad/rss/state/LateralRssState.hpp"
#include "ad/rss/state/RssStateInformationValidInputRange.hpp"

/*!
 * \brief check if the given LateralRssState is within valid input range
 *
 * \param[in] input the LateralRssState as an input value
 *
 * \returns \c true if LateralRssState is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::state::LateralRssState const &input)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.response) && withinValidInputRange(input.rssStateInformation);

  return inValidInputRange;
}
