/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-1988
 */

#include "ad/rss/situation/LateralRelativePosition.hpp"
#include <stdexcept>

std::string toString(::ad::rss::situation::LateralRelativePosition const e)
{
  switch (e)
  {
    case ::ad::rss::situation::LateralRelativePosition::AtLeft:
      return std::string("::ad::rss::situation::LateralRelativePosition::AtLeft"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::situation::LateralRelativePosition::OverlapLeft:
      return std::string("::ad::rss::situation::LateralRelativePosition::OverlapLeft"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::situation::LateralRelativePosition::Overlap:
      return std::string("::ad::rss::situation::LateralRelativePosition::Overlap"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::situation::LateralRelativePosition::OverlapRight:
      return std::string("::ad::rss::situation::LateralRelativePosition::OverlapRight"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::situation::LateralRelativePosition::AtRight:
      return std::string("::ad::rss::situation::LateralRelativePosition::AtRight"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad::rss::situation::LateralRelativePosition fromString(std::string const &str)
{
  if (str == std::string("::ad::rss::situation::LateralRelativePosition::AtLeft")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::LateralRelativePosition::AtLeft;
  }
  if (str == std::string("AtLeft")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::LateralRelativePosition::AtLeft;
  }
  if (str == std::string("::ad::rss::situation::LateralRelativePosition::OverlapLeft")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::LateralRelativePosition::OverlapLeft;
  }
  if (str == std::string("OverlapLeft")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::LateralRelativePosition::OverlapLeft;
  }
  if (str == std::string("::ad::rss::situation::LateralRelativePosition::Overlap")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::LateralRelativePosition::Overlap;
  }
  if (str == std::string("Overlap")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::LateralRelativePosition::Overlap;
  }
  if (str == std::string("::ad::rss::situation::LateralRelativePosition::OverlapRight")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::LateralRelativePosition::OverlapRight;
  }
  if (str == std::string("OverlapRight")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::LateralRelativePosition::OverlapRight;
  }
  if (str == std::string("::ad::rss::situation::LateralRelativePosition::AtRight")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::LateralRelativePosition::AtRight;
  }
  if (str == std::string("AtRight")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::LateralRelativePosition::AtRight;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
