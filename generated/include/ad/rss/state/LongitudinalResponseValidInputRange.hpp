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
#include "ad/rss/state/LongitudinalResponse.hpp"

/*!
 * \brief check if the given LongitudinalResponse is within valid input range
 *
 * \param[in] input the LongitudinalResponse as an input value
 *
 * \returns \c true if LongitudinalResponse is considered to be within the specified input range
 *
 * \note the specified input range is defined by the valid enum literals.
 */
inline bool withinValidInputRange(::ad::rss::state::LongitudinalResponse const &input)
{
  return (input == ::ad::rss::state::LongitudinalResponse::None)
    || (input == ::ad::rss::state::LongitudinalResponse::BrakeMinCorrect)
    || (input == ::ad::rss::state::LongitudinalResponse::BrakeMin);
}
