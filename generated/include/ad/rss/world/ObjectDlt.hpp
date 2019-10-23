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
