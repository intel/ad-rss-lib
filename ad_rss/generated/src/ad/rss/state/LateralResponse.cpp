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

#include "ad/rss/state/LateralResponse.hpp"
#include <stdexcept>

std::string toString(::ad::rss::state::LateralResponse const e)
{
  switch (e)
  {
    case ::ad::rss::state::LateralResponse::None:
      return std::string("::ad::rss::state::LateralResponse::None"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::state::LateralResponse::BrakeMin:
      return std::string("::ad::rss::state::LateralResponse::BrakeMin"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad::rss::state::LateralResponse fromString(std::string const &str)
{
  if (str == std::string("::ad::rss::state::LateralResponse::None")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::LateralResponse::None;
  }
  if (str == std::string("None")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::LateralResponse::None;
  }
  if (str == std::string("::ad::rss::state::LateralResponse::BrakeMin")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::LateralResponse::BrakeMin;
  }
  if (str == std::string("BrakeMin")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::LateralResponse::BrakeMin;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
