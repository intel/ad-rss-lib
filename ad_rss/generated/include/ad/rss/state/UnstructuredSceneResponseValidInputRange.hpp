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

#pragma once

#include <cmath>
#include <limits>
#include "ad/rss/state/UnstructuredSceneResponse.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given UnstructuredSceneResponse is within valid input range
 *
 * \param[in] input the UnstructuredSceneResponse as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if UnstructuredSceneResponse is considered to be within the specified input range
 *
 * \note the specified input range is defined by the valid enum literals.
 */
inline bool withinValidInputRange(::ad::rss::state::UnstructuredSceneResponse const &input, bool const logErrors = true)
{
  bool inValidInputRange = (input == ::ad::rss::state::UnstructuredSceneResponse::None)
    || (input == ::ad::rss::state::UnstructuredSceneResponse::ContinueForward)
    || (input == ::ad::rss::state::UnstructuredSceneResponse::DriveAway)
    || (input == ::ad::rss::state::UnstructuredSceneResponse::Brake);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::state::UnstructuredSceneResponse)>> {}, raw value: {} ",
                  input,
                  static_cast<int32_t>(input)); // LCOV_EXCL_BR_LINE
  }
  return inValidInputRange;
}
