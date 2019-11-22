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

#include "ad_rss/situation/LongitudinalRelativePosition.hpp"
#include <stdexcept>

std::string toString(::ad_rss::situation::LongitudinalRelativePosition const e)
{
  switch (e)
  {
    case ::ad_rss::situation::LongitudinalRelativePosition::InFront:
      return std::string("::ad_rss::situation::LongitudinalRelativePosition::InFront"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::situation::LongitudinalRelativePosition::OverlapFront:
      return std::string("::ad_rss::situation::LongitudinalRelativePosition::OverlapFront"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::situation::LongitudinalRelativePosition::Overlap:
      return std::string("::ad_rss::situation::LongitudinalRelativePosition::Overlap"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::situation::LongitudinalRelativePosition::OverlapBack:
      return std::string("::ad_rss::situation::LongitudinalRelativePosition::OverlapBack"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::situation::LongitudinalRelativePosition::AtBack:
      return std::string("::ad_rss::situation::LongitudinalRelativePosition::AtBack"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad_rss::situation::LongitudinalRelativePosition fromString(std::string const &str)
{
  if (str == std::string("::ad_rss::situation::LongitudinalRelativePosition::InFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::situation::LongitudinalRelativePosition::InFront;
  }
  if (str == std::string("InFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::situation::LongitudinalRelativePosition::InFront;
  }
  if (str == std::string("::ad_rss::situation::LongitudinalRelativePosition::OverlapFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::situation::LongitudinalRelativePosition::OverlapFront;
  }
  if (str == std::string("OverlapFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::situation::LongitudinalRelativePosition::OverlapFront;
  }
  if (str == std::string("::ad_rss::situation::LongitudinalRelativePosition::Overlap")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::situation::LongitudinalRelativePosition::Overlap;
  }
  if (str == std::string("Overlap")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::situation::LongitudinalRelativePosition::Overlap;
  }
  if (str == std::string("::ad_rss::situation::LongitudinalRelativePosition::OverlapBack")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::situation::LongitudinalRelativePosition::OverlapBack;
  }
  if (str == std::string("OverlapBack")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::situation::LongitudinalRelativePosition::OverlapBack;
  }
  if (str == std::string("::ad_rss::situation::LongitudinalRelativePosition::AtBack")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::situation::LongitudinalRelativePosition::AtBack;
  }
  if (str == std::string("AtBack")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::situation::LongitudinalRelativePosition::AtBack;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
