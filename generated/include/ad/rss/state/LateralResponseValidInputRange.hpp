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
#include "ad/rss/state/LateralResponse.hpp"

/*!
 * \brief check if the given LateralResponse is within valid input range
 *
 * \param[in] input the LateralResponse as an input value
 *
 * \returns \c true if LateralResponse is considered to be within the specified input range
 *
 * \note the specified input range is defined by the valid enum literals.
 */
inline bool withinValidInputRange(::ad::rss::state::LateralResponse const &input)
{
  return (input == ::ad::rss::state::LateralResponse::None) || (input == ::ad::rss::state::LateralResponse::BrakeMin);
}
