/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 10.6.0-1878
 */

#pragma once

#include <ad/physics/ParametricRangeDlt.hpp>
#include <ad/rss/world/LaneSegmentIdDlt.hpp>
#include <ad/rss/world/OccupiedRegion.hpp>
#include <dlt/dlt_cpp_extension.hpp>

template <> inline int32_t logToDlt(DltContextData &log, ::ad::rss::world::OccupiedRegion const &_value)
{
  int32_t result = dlt_user_log_write_constant_string(&log, "OccupiedRegion(");
  result += dlt_user_log_write_constant_string(&log, "segmentId:");
  result += logToDlt(log, _value.segmentId);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "lonRange:");
  result += logToDlt(log, _value.lonRange);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "latRange:");
  result += logToDlt(log, _value.latRange);
  result += dlt_user_log_write_constant_string(&log, ")");
  if (result != 0)
  {
    result = -1;
  }
  return result;
}
