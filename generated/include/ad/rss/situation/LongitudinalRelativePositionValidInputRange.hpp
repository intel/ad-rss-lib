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
#include "ad/rss/situation/LongitudinalRelativePosition.hpp"

/*!
 * \brief check if the given LongitudinalRelativePosition is within valid input range
 *
 * \param[in] input the LongitudinalRelativePosition as an input value
 *
 * \returns \c true if LongitudinalRelativePosition is considered to be within the specified input range
 *
 * \note the specified input range is defined by the valid enum literals.
 */
inline bool withinValidInputRange(::ad::rss::situation::LongitudinalRelativePosition const &input)
{
  return (input == ::ad::rss::situation::LongitudinalRelativePosition::InFront)
    || (input == ::ad::rss::situation::LongitudinalRelativePosition::OverlapFront)
    || (input == ::ad::rss::situation::LongitudinalRelativePosition::Overlap)
    || (input == ::ad::rss::situation::LongitudinalRelativePosition::OverlapBack)
    || (input == ::ad::rss::situation::LongitudinalRelativePosition::AtBack);
}
