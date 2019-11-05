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
#include "ad/rss/state/RssStateValidInputRange.hpp"
#include "ad/rss/state/RssStateVector.hpp"

/*!
 * \brief check if the given RssStateVector is within valid input range
 *
 * \param[in] input the RssStateVector as an input value
 *
 * \returns \c true if RssStateVector is considered to be within the specified input range
 *
 * \note the specified input range is defined by
 *       0 <= \c input.size() <= 1000
 *       and the ranges of all vector elements
 */
inline bool withinValidInputRange(::ad::rss::state::RssStateVector const &input)
{
  bool inValidInputRange = (input.size() <= std::size_t(1000));

  if (inValidInputRange)
  {
    for (auto const &member : input)
    {
      inValidInputRange = inValidInputRange && withinValidInputRange(member);
    }
  }
  return inValidInputRange;
}
