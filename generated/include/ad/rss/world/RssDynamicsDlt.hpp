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

#include <ad/physics/DistanceDlt.hpp>
#include <ad/physics/DurationDlt.hpp>
#include <ad/physics/SpeedDlt.hpp>
#include <ad/rss/world/LateralRssAccelerationValuesDlt.hpp>
#include <ad/rss/world/LongitudinalRssAccelerationValuesDlt.hpp>
#include <ad/rss/world/RssDynamics.hpp>
#include <dlt/dlt_cpp_extension.hpp>

template <> inline int32_t logToDlt(DltContextData &log, ::ad::rss::world::RssDynamics const &_value)
{
  int32_t result = dlt_user_log_write_constant_string(&log, "RssDynamics(");
  result += dlt_user_log_write_constant_string(&log, "alphaLon:");
  result += logToDlt(log, _value.alphaLon);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "alphaLat:");
  result += logToDlt(log, _value.alphaLat);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "lateralFluctuationMargin:");
  result += logToDlt(log, _value.lateralFluctuationMargin);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "responseTime:");
  result += logToDlt(log, _value.responseTime);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "maxSpeed:");
  result += logToDlt(log, _value.maxSpeed);
  result += dlt_user_log_write_constant_string(&log, ")");
  if (result != 0)
  {
    result = -1;
  }
  return result;
}
