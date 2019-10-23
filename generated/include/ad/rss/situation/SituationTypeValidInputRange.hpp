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
#include "ad/rss/situation/SituationType.hpp"

/*!
 * \brief check if the given SituationType is within valid input range
 *
 * \param[in] input the SituationType as an input value
 *
 * \returns \c true if SituationType is considered to be within the specified input range
 *
 * \note the specified input range is defined by the valid enum literals.
 */
inline bool withinValidInputRange(::ad::rss::situation::SituationType const &input)
{
  return (input == ::ad::rss::situation::SituationType::NotRelevant)
    || (input == ::ad::rss::situation::SituationType::SameDirection)
    || (input == ::ad::rss::situation::SituationType::OppositeDirection)
    || (input == ::ad::rss::situation::SituationType::IntersectionEgoHasPriority)
    || (input == ::ad::rss::situation::SituationType::IntersectionObjectHasPriority)
    || (input == ::ad::rss::situation::SituationType::IntersectionSamePriority);
}
