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

#include <ad/rss/world/RssDynamicsDlt.hpp>
#include <ad/rss/world/SceneVectorDlt.hpp>
#include <ad/rss/world/TimeIndexDlt.hpp>
#include <ad/rss/world/WorldModel.hpp>
#include <dlt/dlt_cpp_extension.hpp>

template <> inline int32_t logToDlt(DltContextData &log, ::ad::rss::world::WorldModel const &_value)
{
  int32_t result = dlt_user_log_write_constant_string(&log, "WorldModel(");
  result += dlt_user_log_write_constant_string(&log, "timeIndex:");
  result += logToDlt(log, _value.timeIndex);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "egoVehicleRssDynamics:");
  result += logToDlt(log, _value.egoVehicleRssDynamics);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "scenes:");
  result += logToDlt(log, _value.scenes);
  result += dlt_user_log_write_constant_string(&log, ")");
  if (result != 0)
  {
    result = -1;
  }
  return result;
}
