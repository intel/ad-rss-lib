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

#include <ad/rss/situation/SituationTypeDlt.hpp>
#include <ad/rss/world/ObjectDlt.hpp>
#include <ad/rss/world/RoadAreaDlt.hpp>
#include <ad/rss/world/RssDynamicsDlt.hpp>
#include <ad/rss/world/Scene.hpp>
#include <dlt/dlt_cpp_extension.hpp>

template <> inline int32_t logToDlt(DltContextData &log, ::ad::rss::world::Scene const &_value)
{
  int32_t result = dlt_user_log_write_constant_string(&log, "Scene(");
  result += dlt_user_log_write_constant_string(&log, "situationType:");
  result += logToDlt(log, _value.situationType);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "egoVehicle:");
  result += logToDlt(log, _value.egoVehicle);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "object:");
  result += logToDlt(log, _value.object);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "objectRssDynamics:");
  result += logToDlt(log, _value.objectRssDynamics);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "intersectingRoad:");
  result += logToDlt(log, _value.intersectingRoad);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "egoVehicleRoad:");
  result += logToDlt(log, _value.egoVehicleRoad);
  result += dlt_user_log_write_constant_string(&log, ")");
  if (result != 0)
  {
    result = -1;
  }
  return result;
}
