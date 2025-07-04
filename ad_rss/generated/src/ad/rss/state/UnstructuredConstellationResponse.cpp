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

#include "ad/rss/state/UnstructuredConstellationResponse.hpp"
#include <stdexcept>

std::string toString(::ad::rss::state::UnstructuredConstellationResponse const e)
{
  switch (e)
  {
    case ::ad::rss::state::UnstructuredConstellationResponse::None:
      return std::string("::ad::rss::state::UnstructuredConstellationResponse::None"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::state::UnstructuredConstellationResponse::ContinueForward:
      return std::string("::ad::rss::state::UnstructuredConstellationResponse::ContinueForward"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::state::UnstructuredConstellationResponse::DriveAway:
      return std::string("::ad::rss::state::UnstructuredConstellationResponse::DriveAway"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::state::UnstructuredConstellationResponse::Brake:
      return std::string("::ad::rss::state::UnstructuredConstellationResponse::Brake"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad::rss::state::UnstructuredConstellationResponse fromString(std::string const &str)
{
  if (str == std::string("::ad::rss::state::UnstructuredConstellationResponse::None")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::UnstructuredConstellationResponse::None;
  }
  if (str == std::string("None")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::UnstructuredConstellationResponse::None;
  }
  if (str == std::string("::ad::rss::state::UnstructuredConstellationResponse::ContinueForward")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::UnstructuredConstellationResponse::ContinueForward;
  }
  if (str == std::string("ContinueForward")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::UnstructuredConstellationResponse::ContinueForward;
  }
  if (str == std::string("::ad::rss::state::UnstructuredConstellationResponse::DriveAway")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::UnstructuredConstellationResponse::DriveAway;
  }
  if (str == std::string("DriveAway")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::UnstructuredConstellationResponse::DriveAway;
  }
  if (str == std::string("::ad::rss::state::UnstructuredConstellationResponse::Brake")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::UnstructuredConstellationResponse::Brake;
  }
  if (str == std::string("Brake")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::UnstructuredConstellationResponse::Brake;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
