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

#include "ad_rss/state/LateralResponse.hpp"
#include <stdexcept>

std::string toString(::ad_rss::state::LateralResponse const e)
{
  switch (e)
  {
    case ::ad_rss::state::LateralResponse::None:
      return std::string("::ad_rss::state::LateralResponse::None"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::state::LateralResponse::BrakeMin:
      return std::string("::ad_rss::state::LateralResponse::BrakeMin"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad_rss::state::LateralResponse fromString(std::string const &str)
{
  if (str == std::string("::ad_rss::state::LateralResponse::None")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::LateralResponse::None;
  }
  if (str == std::string("None")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::LateralResponse::None;
  }
  if (str == std::string("::ad_rss::state::LateralResponse::BrakeMin")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::LateralResponse::BrakeMin;
  }
  if (str == std::string("BrakeMin")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::LateralResponse::BrakeMin;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
