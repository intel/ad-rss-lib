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
#include "ad/rss/state/RssStateEvaluator.hpp"

/*!
 * \brief check if the given RssStateEvaluator is within valid input range
 *
 * \param[in] input the RssStateEvaluator as an input value
 *
 * \returns \c true if RssStateEvaluator is considered to be within the specified input range
 *
 * \note the specified input range is defined by the valid enum literals.
 */
inline bool withinValidInputRange(::ad::rss::state::RssStateEvaluator const &input)
{
  return (input == ::ad::rss::state::RssStateEvaluator::None)
    || (input == ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane)
    || (input == ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirection)
    || (input == ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront)
    || (input == ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront)
    || (input == ::ad::rss::state::RssStateEvaluator::LateralDistance)
    || (input == ::ad::rss::state::RssStateEvaluator::IntersectionOtherPriorityEgoAbleToStop)
    || (input == ::ad::rss::state::RssStateEvaluator::IntersectionEgoPriorityOtherAbleToStop)
    || (input == ::ad::rss::state::RssStateEvaluator::IntersectionEgoInFront)
    || (input == ::ad::rss::state::RssStateEvaluator::IntersectionOtherInFront)
    || (input == ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
}
