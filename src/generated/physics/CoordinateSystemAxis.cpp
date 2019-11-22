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

#include "ad_rss/physics/CoordinateSystemAxis.hpp"
#include <stdexcept>

std::string toString(::ad_rss::physics::CoordinateSystemAxis const e)
{
  switch (e)
  {
    case ::ad_rss::physics::CoordinateSystemAxis::Longitudinal:
      return std::string("::ad_rss::physics::CoordinateSystemAxis::Longitudinal"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::physics::CoordinateSystemAxis::Lateral:
      return std::string("::ad_rss::physics::CoordinateSystemAxis::Lateral"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad_rss::physics::CoordinateSystemAxis fromString(std::string const &str)
{
  if (str == std::string("::ad_rss::physics::CoordinateSystemAxis::Longitudinal")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::physics::CoordinateSystemAxis::Longitudinal;
  }
  if (str == std::string("Longitudinal")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::physics::CoordinateSystemAxis::Longitudinal;
  }
  if (str == std::string("::ad_rss::physics::CoordinateSystemAxis::Lateral")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::physics::CoordinateSystemAxis::Lateral;
  }
  if (str == std::string("Lateral")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::physics::CoordinateSystemAxis::Lateral;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
