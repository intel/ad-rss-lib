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

#pragma once

#include <cmath>
#include <limits>
#include "ad/rss/state/UnstructuredSceneStateInformation.hpp"
#include "ad/rss/world/UnstructuredTrajectorySetValidInputRange.hpp"

/*!
 * \brief check if the given UnstructuredSceneStateInformation is within valid input range
 *
 * \param[in] input the UnstructuredSceneStateInformation as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if UnstructuredSceneStateInformation is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::state::UnstructuredSceneStateInformation const &input,
                                  bool const logErrors = true)
{
  // check for generic member input ranges
  (void)input;
  (void)logErrors;
  bool inValidInputRange = true;
  return inValidInputRange;
}
