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
#include "ad/rss/situation/SituationId.hpp"

/*!
 * \brief check if the given SituationId is within valid input range
 *
 * \param[in] input the SituationId as an input value
 *
 * \returns \c true if SituationId is considered to be within the specified input range
 *
 * \note the specified input range is defined by
 *       std::numeric_limits<::ad::rss::situation::SituationId>::lowest() <= \c input <=
 * std::numeric_limits<::ad::rss::situation::SituationId>::max()
 */
inline bool withinValidInputRange(::ad::rss::situation::SituationId const &input)
{
  // check for generic numeric limits of the type
  bool isValidInputRange = input.isValid()
    && (std::numeric_limits<::ad::rss::situation::SituationId>::lowest() <= input)
    && (input <= std::numeric_limits<::ad::rss::situation::SituationId>::max());

  return isValidInputRange;
}
