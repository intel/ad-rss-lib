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
 * Generator Version : 10.6.0-1882
 */

#pragma once

#include <ad/physics/MetricRangeDlt.hpp>
#include <ad/rss/world/LaneDrivingDirectionDlt.hpp>
#include <ad/rss/world/LaneSegment.hpp>
#include <ad/rss/world/LaneSegmentIdDlt.hpp>
#include <ad/rss/world/LaneSegmentTypeDlt.hpp>
#include <dlt/dlt_cpp_extension.hpp>

template <> inline int32_t logToDlt(DltContextData &log, ::ad::rss::world::LaneSegment const &_value)
{
  int32_t result = dlt_user_log_write_constant_string(&log, "LaneSegment(");
  result += dlt_user_log_write_constant_string(&log, "id:");
  result += logToDlt(log, _value.id);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "type:");
  result += logToDlt(log, _value.type);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "drivingDirection:");
  result += logToDlt(log, _value.drivingDirection);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "length:");
  result += logToDlt(log, _value.length);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "width:");
  result += logToDlt(log, _value.width);
  result += dlt_user_log_write_constant_string(&log, ")");
  if (result != 0)
  {
    result = -1;
  }
  return result;
}
