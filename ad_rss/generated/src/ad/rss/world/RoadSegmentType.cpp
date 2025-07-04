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

#include "ad/rss/world/RoadSegmentType.hpp"
#include <stdexcept>

std::string toString(::ad::rss::world::RoadSegmentType const e)
{
  switch (e)
  {
    case ::ad::rss::world::RoadSegmentType::Normal:
      return std::string("::ad::rss::world::RoadSegmentType::Normal"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::world::RoadSegmentType::Intersection:
      return std::string("::ad::rss::world::RoadSegmentType::Intersection"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad::rss::world::RoadSegmentType fromString(std::string const &str)
{
  if (str == std::string("::ad::rss::world::RoadSegmentType::Normal")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::RoadSegmentType::Normal;
  }
  if (str == std::string("Normal")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::RoadSegmentType::Normal;
  }
  if (str == std::string("::ad::rss::world::RoadSegmentType::Intersection")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::RoadSegmentType::Intersection;
  }
  if (str == std::string("Intersection")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::RoadSegmentType::Intersection;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
