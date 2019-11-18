/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 */

#pragma once

#include <cmath>
#include <limits>
#include "ad_rss/situation/LongitudinalRelativePosition.hpp"

/*!
 * \brief check if the given LongitudinalRelativePosition is within valid input range
 *
 * \param[in] input the LongitudinalRelativePosition as an input value
 *
 * \returns \c true if LongitudinalRelativePosition is considered to be within the specified input range
 *
 * \note the specified input range is defined by the valid enum literals.
 */
inline bool withinValidInputRange(::ad_rss::situation::LongitudinalRelativePosition const &input)
{
  try
  {
    // LCOV_EXCL_BR_START: not always possible to cover especially all exception branches
    return (input == ::ad_rss::situation::LongitudinalRelativePosition::InFront)
      || (input == ::ad_rss::situation::LongitudinalRelativePosition::OverlapFront)
      || (input == ::ad_rss::situation::LongitudinalRelativePosition::Overlap)
      || (input == ::ad_rss::situation::LongitudinalRelativePosition::OverlapBack)
      || (input == ::ad_rss::situation::LongitudinalRelativePosition::AtBack);
    // LCOV_EXCL_BR_STOP: not always possible to cover especially all exception branches
  }
  // LCOV_EXCL_START: not possible to cover these lines for all generated datatypes
  catch (std::out_of_range &)
  {
  }
  return false;
  // LCOV_EXCL_STOP: not possible to cover these lines for all generated datatypes
}
