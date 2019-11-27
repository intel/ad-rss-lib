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

#include <ad/physics/AccelerationDlt.hpp>
#include <ad/rss/world/LongitudinalRssAccelerationValues.hpp>
#include <dlt/dlt_cpp_extension.hpp>

template <>
inline int32_t logToDlt(DltContextData &log, ::ad::rss::world::LongitudinalRssAccelerationValues const &_value)
{
  int32_t result = dlt_user_log_write_constant_string(&log, "LongitudinalRssAccelerationValues(");
  result += dlt_user_log_write_constant_string(&log, "accelMax:");
  result += logToDlt(log, _value.accelMax);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "brakeMax:");
  result += logToDlt(log, _value.brakeMax);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "brakeMin:");
  result += logToDlt(log, _value.brakeMin);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "brakeMinCorrect:");
  result += logToDlt(log, _value.brakeMinCorrect);
  result += dlt_user_log_write_constant_string(&log, ")");
  if (result != 0)
  {
    result = -1;
  }
  return result;
}
