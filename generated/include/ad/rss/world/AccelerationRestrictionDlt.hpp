/*
 * Copyright (C) 2019 Intel Corporation
 */

/**
 * Generated file
 * @file
 *
 * Model Library     : RSS.ad_rss_data_type_lib
 * Model Version     : 0.0.0
 * Generator         : mo2ive_generator_mockup
 * Generator Version : @GENERATOR_VERSION@
 */

#pragma once

#include <ad/physics/AccelerationRangeDlt.hpp>
#include <ad/rss/world/AccelerationRestriction.hpp>
#include <ad/rss/world/TimeIndexDlt.hpp>
#include <dlt/dlt_cpp_extension.hpp>

template <> inline int32_t logToDlt(DltContextData &log, ::ad::rss::world::AccelerationRestriction const &_value)
{
  int32_t result = dlt_user_log_write_constant_string(&log, "AccelerationRestriction(");
  result += dlt_user_log_write_constant_string(&log, "timeIndex:");
  result += logToDlt(log, _value.timeIndex);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "lateralLeftRange:");
  result += logToDlt(log, _value.lateralLeftRange);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "longitudinalRange:");
  result += logToDlt(log, _value.longitudinalRange);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "lateralRightRange:");
  result += logToDlt(log, _value.lateralRightRange);
  result += dlt_user_log_write_constant_string(&log, ")");
  if (result != 0)
  {
    result = -1;
  }
  return result;
}
