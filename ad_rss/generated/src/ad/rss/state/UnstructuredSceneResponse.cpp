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
 * Generator Version : 11.0.0-1997
 */

#include "ad/rss/state/UnstructuredSceneResponse.hpp"
#include <stdexcept>

std::string toString(::ad::rss::state::UnstructuredSceneResponse const e)
{
  switch (e)
  {
    case ::ad::rss::state::UnstructuredSceneResponse::None:
      return std::string("::ad::rss::state::UnstructuredSceneResponse::None"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::state::UnstructuredSceneResponse::ContinueForward:
      return std::string("::ad::rss::state::UnstructuredSceneResponse::ContinueForward"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::state::UnstructuredSceneResponse::DriveAway:
      return std::string("::ad::rss::state::UnstructuredSceneResponse::DriveAway"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::state::UnstructuredSceneResponse::Brake:
      return std::string("::ad::rss::state::UnstructuredSceneResponse::Brake"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad::rss::state::UnstructuredSceneResponse fromString(std::string const &str)
{
  if (str == std::string("::ad::rss::state::UnstructuredSceneResponse::None")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::UnstructuredSceneResponse::None;
  }
  if (str == std::string("None")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::UnstructuredSceneResponse::None;
  }
  if (str == std::string("::ad::rss::state::UnstructuredSceneResponse::ContinueForward")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::UnstructuredSceneResponse::ContinueForward;
  }
  if (str == std::string("ContinueForward")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::UnstructuredSceneResponse::ContinueForward;
  }
  if (str == std::string("::ad::rss::state::UnstructuredSceneResponse::DriveAway")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::UnstructuredSceneResponse::DriveAway;
  }
  if (str == std::string("DriveAway")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::UnstructuredSceneResponse::DriveAway;
  }
  if (str == std::string("::ad::rss::state::UnstructuredSceneResponse::Brake")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::UnstructuredSceneResponse::Brake;
  }
  if (str == std::string("Brake")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::UnstructuredSceneResponse::Brake;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
