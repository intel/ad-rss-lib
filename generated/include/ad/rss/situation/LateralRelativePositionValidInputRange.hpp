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
#include "ad/rss/situation/LateralRelativePosition.hpp"

/*!
 * \brief check if the given LateralRelativePosition is within valid input range
 *
 * \param[in] input the LateralRelativePosition as an input value
 *
 * \returns \c true if LateralRelativePosition is considered to be within the specified input range
 *
 * \note the specified input range is defined by the valid enum literals.
 */
inline bool withinValidInputRange(::ad::rss::situation::LateralRelativePosition const &input)
{
  return (input == ::ad::rss::situation::LateralRelativePosition::AtLeft)
    || (input == ::ad::rss::situation::LateralRelativePosition::OverlapLeft)
    || (input == ::ad::rss::situation::LateralRelativePosition::Overlap)
    || (input == ::ad::rss::situation::LateralRelativePosition::OverlapRight)
    || (input == ::ad::rss::situation::LateralRelativePosition::AtRight);
}
