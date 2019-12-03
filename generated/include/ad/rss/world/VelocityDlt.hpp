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

#include <ad/physics/SpeedDlt.hpp>
#include <ad/rss/world/Velocity.hpp>
#include <dlt/dlt_cpp_extension.hpp>

template <> inline int32_t logToDlt(DltContextData &log, ::ad::rss::world::Velocity const &_value)
{
  int32_t result = dlt_user_log_write_constant_string(&log, "Velocity(");
  result += dlt_user_log_write_constant_string(&log, "speedLonMin:");
  result += logToDlt(log, _value.speedLonMin);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "speedLonMax:");
  result += logToDlt(log, _value.speedLonMax);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "speedLatMin:");
  result += logToDlt(log, _value.speedLatMin);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "speedLatMax:");
  result += logToDlt(log, _value.speedLatMax);
  result += dlt_user_log_write_constant_string(&log, ")");
  if (result != 0)
  {
    result = -1;
  }
  return result;
}
