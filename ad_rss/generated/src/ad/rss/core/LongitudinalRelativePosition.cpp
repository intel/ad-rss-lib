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

#include "ad/rss/core/LongitudinalRelativePosition.hpp"
#include <stdexcept>

std::string toString(::ad::rss::core::LongitudinalRelativePosition const e)
{
  switch (e)
  {
    case ::ad::rss::core::LongitudinalRelativePosition::InFront:
      return std::string("::ad::rss::core::LongitudinalRelativePosition::InFront"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::core::LongitudinalRelativePosition::OverlapFront:
      return std::string("::ad::rss::core::LongitudinalRelativePosition::OverlapFront"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::core::LongitudinalRelativePosition::Overlap:
      return std::string("::ad::rss::core::LongitudinalRelativePosition::Overlap"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::core::LongitudinalRelativePosition::OverlapBack:
      return std::string("::ad::rss::core::LongitudinalRelativePosition::OverlapBack"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::core::LongitudinalRelativePosition::AtBack:
      return std::string("::ad::rss::core::LongitudinalRelativePosition::AtBack"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad::rss::core::LongitudinalRelativePosition fromString(std::string const &str)
{
  if (str == std::string("::ad::rss::core::LongitudinalRelativePosition::InFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::core::LongitudinalRelativePosition::InFront;
  }
  if (str == std::string("InFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::core::LongitudinalRelativePosition::InFront;
  }
  if (str == std::string("::ad::rss::core::LongitudinalRelativePosition::OverlapFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::core::LongitudinalRelativePosition::OverlapFront;
  }
  if (str == std::string("OverlapFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::core::LongitudinalRelativePosition::OverlapFront;
  }
  if (str == std::string("::ad::rss::core::LongitudinalRelativePosition::Overlap")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::core::LongitudinalRelativePosition::Overlap;
  }
  if (str == std::string("Overlap")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::core::LongitudinalRelativePosition::Overlap;
  }
  if (str == std::string("::ad::rss::core::LongitudinalRelativePosition::OverlapBack")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::core::LongitudinalRelativePosition::OverlapBack;
  }
  if (str == std::string("OverlapBack")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::core::LongitudinalRelativePosition::OverlapBack;
  }
  if (str == std::string("::ad::rss::core::LongitudinalRelativePosition::AtBack")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::core::LongitudinalRelativePosition::AtBack;
  }
  if (str == std::string("AtBack")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::core::LongitudinalRelativePosition::AtBack;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
