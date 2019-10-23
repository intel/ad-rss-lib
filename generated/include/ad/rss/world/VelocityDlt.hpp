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

#include <ad/physics/SpeedDlt.hpp>
#include <ad/rss/world/Velocity.hpp>
#include <dlt/dlt_cpp_extension.hpp>

template <> inline int32_t logToDlt(DltContextData &log, ::ad::rss::world::Velocity const &_value)
{
  int32_t result = dlt_user_log_write_constant_string(&log, "Velocity(");
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
