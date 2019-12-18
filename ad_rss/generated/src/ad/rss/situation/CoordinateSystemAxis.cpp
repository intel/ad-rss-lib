/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 10.6.1-1904
 */

#include "ad/rss/situation/CoordinateSystemAxis.hpp"
#include <stdexcept>

std::string toString(::ad::rss::situation::CoordinateSystemAxis const e)
{
  switch (e)
  {
    case ::ad::rss::situation::CoordinateSystemAxis::Longitudinal:
      return std::string("::ad::rss::situation::CoordinateSystemAxis::Longitudinal"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::situation::CoordinateSystemAxis::Lateral:
      return std::string("::ad::rss::situation::CoordinateSystemAxis::Lateral"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad::rss::situation::CoordinateSystemAxis fromString(std::string const &str)
{
  if (str == std::string("::ad::rss::situation::CoordinateSystemAxis::Longitudinal")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::CoordinateSystemAxis::Longitudinal;
  }
  if (str == std::string("Longitudinal")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::CoordinateSystemAxis::Longitudinal;
  }
  if (str == std::string("::ad::rss::situation::CoordinateSystemAxis::Lateral")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::CoordinateSystemAxis::Lateral;
  }
  if (str == std::string("Lateral")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::CoordinateSystemAxis::Lateral;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
