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

#include <ad/physics/ParametricRangeDlt.hpp>
#include <ad/rss/world/LaneSegmentIdDlt.hpp>
#include <ad/rss/world/OccupiedRegion.hpp>
#include <dlt/dlt_cpp_extension.hpp>

template <> inline int32_t logToDlt(DltContextData &log, ::ad::rss::world::OccupiedRegion const &_value)
{
  int32_t result = dlt_user_log_write_constant_string(&log, "OccupiedRegion(");
  result += dlt_user_log_write_constant_string(&log, "segmentId:");
  result += logToDlt(log, _value.segmentId);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "lonRange:");
  result += logToDlt(log, _value.lonRange);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "latRange:");
  result += logToDlt(log, _value.latRange);
  result += dlt_user_log_write_constant_string(&log, ")");
  if (result != 0)
  {
    result = -1;
  }
  return result;
}
