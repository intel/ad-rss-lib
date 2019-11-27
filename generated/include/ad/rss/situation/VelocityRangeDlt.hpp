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

#include <ad/physics/SpeedRangeDlt.hpp>
#include <ad/rss/situation/VelocityRange.hpp>
#include <dlt/dlt_cpp_extension.hpp>

template <> inline int32_t logToDlt(DltContextData &log, ::ad::rss::situation::VelocityRange const &_value)
{
  int32_t result = dlt_user_log_write_constant_string(&log, "VelocityRange(");
  result += dlt_user_log_write_constant_string(&log, "speedLon:");
  result += logToDlt(log, _value.speedLon);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "speedLat:");
  result += logToDlt(log, _value.speedLat);
  result += dlt_user_log_write_constant_string(&log, ")");
  if (result != 0)
  {
    result = -1;
  }
  return result;
}
