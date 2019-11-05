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

#include <ad/physics/DistanceDlt.hpp>
#include <ad/rss/situation/VehicleState.hpp>
#include <ad/rss/situation/VelocityRangeDlt.hpp>
#include <ad/rss/world/RssDynamicsDlt.hpp>
#include <dlt/dlt_cpp_extension.hpp>

template <> inline int32_t logToDlt(DltContextData &log, ::ad::rss::situation::VehicleState const &_value)
{
  int32_t result = dlt_user_log_write_constant_string(&log, "VehicleState(");
  result += dlt_user_log_write_constant_string(&log, "velocity:");
  result += logToDlt(log, _value.velocity);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "dynamics:");
  result += logToDlt(log, _value.dynamics);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "hasPriority:");
  result += logToDlt(log, _value.hasPriority);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "isInCorrectLane:");
  result += logToDlt(log, _value.isInCorrectLane);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "distanceToEnterIntersection:");
  result += logToDlt(log, _value.distanceToEnterIntersection);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "distanceToLeaveIntersection:");
  result += logToDlt(log, _value.distanceToLeaveIntersection);
  result += dlt_user_log_write_constant_string(&log, ")");
  if (result != 0)
  {
    result = -1;
  }
  return result;
}
