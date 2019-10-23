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

#include <ad/physics/DistanceDlt.hpp>
#include <ad/physics/DurationDlt.hpp>
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
  result += dlt_user_log_write_constant_string(&log, ")");
  if (result != 0)
  {
    result = -1;
  }
  return result;
}
