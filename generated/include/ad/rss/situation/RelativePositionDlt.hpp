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
#include <ad/rss/situation/LateralRelativePositionDlt.hpp>
#include <ad/rss/situation/LongitudinalRelativePositionDlt.hpp>
#include <ad/rss/situation/RelativePosition.hpp>
#include <dlt/dlt_cpp_extension.hpp>

template <> inline int32_t logToDlt(DltContextData &log, ::ad::rss::situation::RelativePosition const &_value)
{
  int32_t result = dlt_user_log_write_constant_string(&log, "RelativePosition(");
  result += dlt_user_log_write_constant_string(&log, "longitudinalPosition:");
  result += logToDlt(log, _value.longitudinalPosition);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "longitudinalDistance:");
  result += logToDlt(log, _value.longitudinalDistance);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "lateralPosition:");
  result += logToDlt(log, _value.lateralPosition);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "lateralDistance:");
  result += logToDlt(log, _value.lateralDistance);
  result += dlt_user_log_write_constant_string(&log, ")");
  if (result != 0)
  {
    result = -1;
  }
  return result;
}
