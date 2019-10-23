/*
 *  @COPYRIGHT_TAG@
 */

/**
 * Generated file
 * @file
 *
 * Model Library     : RSS.ad_rss_data_type_lib
 * Model Version     : 0.0.0
 * Generator         : mo2ive_generator_mockup
 * Generator Version : 10.5.6-1843
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
