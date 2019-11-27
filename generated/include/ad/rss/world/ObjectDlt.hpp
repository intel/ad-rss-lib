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

#include <ad/rss/world/Object.hpp>
#include <ad/rss/world/ObjectIdDlt.hpp>
#include <ad/rss/world/ObjectTypeDlt.hpp>
#include <ad/rss/world/OccupiedRegionVectorDlt.hpp>
#include <ad/rss/world/VelocityDlt.hpp>
#include <dlt/dlt_cpp_extension.hpp>

template <> inline int32_t logToDlt(DltContextData &log, ::ad::rss::world::Object const &_value)
{
  int32_t result = dlt_user_log_write_constant_string(&log, "Object(");
  result += dlt_user_log_write_constant_string(&log, "objectId:");
  result += logToDlt(log, _value.objectId);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "objectType:");
  result += logToDlt(log, _value.objectType);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "occupiedRegions:");
  result += logToDlt(log, _value.occupiedRegions);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "velocity:");
  result += logToDlt(log, _value.velocity);
  result += dlt_user_log_write_constant_string(&log, ")");
  if (result != 0)
  {
    result = -1;
  }
  return result;
}
