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

#include <ad/physics/MetricRangeDlt.hpp>
#include <ad/rss/world/LaneDrivingDirectionDlt.hpp>
#include <ad/rss/world/LaneSegment.hpp>
#include <ad/rss/world/LaneSegmentIdDlt.hpp>
#include <ad/rss/world/LaneSegmentTypeDlt.hpp>
#include <dlt/dlt_cpp_extension.hpp>

template <> inline int32_t logToDlt(DltContextData &log, ::ad::rss::world::LaneSegment const &_value)
{
  int32_t result = dlt_user_log_write_constant_string(&log, "LaneSegment(");
  result += dlt_user_log_write_constant_string(&log, "id:");
  result += logToDlt(log, _value.id);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "type:");
  result += logToDlt(log, _value.type);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "drivingDirection:");
  result += logToDlt(log, _value.drivingDirection);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "length:");
  result += logToDlt(log, _value.length);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "width:");
  result += logToDlt(log, _value.width);
  result += dlt_user_log_write_constant_string(&log, ")");
  if (result != 0)
  {
    result = -1;
  }
  return result;
}
