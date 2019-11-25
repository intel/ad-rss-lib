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
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given RssStateVector is within valid input range
 *
 * \param[in] input the RssStateVector as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if RssStateVector is considered to be within the specified input range
 *
 * \note the specified input range is defined by
 *       0 <= \c input.size() <= 1000
 *       and the ranges of all vector elements
 */
inline bool withinValidInputRange(::ad::rss::state::RssStateVector const &input, bool const logErrors = true)
{
  bool inValidInputRange = (input.size() <= std::size_t(1000));
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::state::RssStateVector)>> {}, invalid input range", input);
  }

  if (inValidInputRange)
  {
    for (auto const &member : input)
    {
      bool memberInValidInputRange = withinValidInputRange(member, logErrors);
      inValidInputRange = inValidInputRange && memberInValidInputRange;
      if (!memberInValidInputRange && logErrors)
      {
        spdlog::error("withinValidInputRange(::ad::rss::state::RssStateVector)>> {}, invalid member {}", input, member);
      }
    }
  }
  return inValidInputRange;
}
