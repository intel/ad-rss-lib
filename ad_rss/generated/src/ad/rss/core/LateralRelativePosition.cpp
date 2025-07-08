/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2022 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-2046
 */

#include "ad/rss/core/LateralRelativePosition.hpp"
#include <stdexcept>

std::string toString(::ad::rss::core::LateralRelativePosition const e)
{
  switch (e)
  {
    case ::ad::rss::core::LateralRelativePosition::AtLeft:
      return std::string("::ad::rss::core::LateralRelativePosition::AtLeft"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::core::LateralRelativePosition::OverlapLeft:
      return std::string("::ad::rss::core::LateralRelativePosition::OverlapLeft"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::core::LateralRelativePosition::Overlap:
      return std::string("::ad::rss::core::LateralRelativePosition::Overlap"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::core::LateralRelativePosition::OverlapRight:
      return std::string("::ad::rss::core::LateralRelativePosition::OverlapRight"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::core::LateralRelativePosition::AtRight:
      return std::string("::ad::rss::core::LateralRelativePosition::AtRight"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad::rss::core::LateralRelativePosition fromString(std::string const &str)
{
  if (str == std::string("::ad::rss::core::LateralRelativePosition::AtLeft")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::core::LateralRelativePosition::AtLeft;
  }
  if (str == std::string("AtLeft")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::core::LateralRelativePosition::AtLeft;
  }
  if (str == std::string("::ad::rss::core::LateralRelativePosition::OverlapLeft")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::core::LateralRelativePosition::OverlapLeft;
  }
  if (str == std::string("OverlapLeft")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::core::LateralRelativePosition::OverlapLeft;
  }
  if (str == std::string("::ad::rss::core::LateralRelativePosition::Overlap")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::core::LateralRelativePosition::Overlap;
  }
  if (str == std::string("Overlap")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::core::LateralRelativePosition::Overlap;
  }
  if (str == std::string("::ad::rss::core::LateralRelativePosition::OverlapRight")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::core::LateralRelativePosition::OverlapRight;
  }
  if (str == std::string("OverlapRight")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::core::LateralRelativePosition::OverlapRight;
  }
  if (str == std::string("::ad::rss::core::LateralRelativePosition::AtRight")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::core::LateralRelativePosition::AtRight;
  }
  if (str == std::string("AtRight")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::core::LateralRelativePosition::AtRight;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
