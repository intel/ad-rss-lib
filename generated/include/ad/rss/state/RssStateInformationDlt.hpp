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
#include <ad/rss/state/RssStateEvaluatorDlt.hpp>
#include <ad/rss/state/RssStateInformation.hpp>
#include <dlt/dlt_cpp_extension.hpp>

template <> inline int32_t logToDlt(DltContextData &log, ::ad::rss::state::RssStateInformation const &_value)
{
  int32_t result = dlt_user_log_write_constant_string(&log, "RssStateInformation(");
  result += dlt_user_log_write_constant_string(&log, "safeDistance:");
  result += logToDlt(log, _value.safeDistance);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "currentDistance:");
  result += logToDlt(log, _value.currentDistance);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "evaluator:");
  result += logToDlt(log, _value.evaluator);
  result += dlt_user_log_write_constant_string(&log, ")");
  if (result != 0)
  {
    result = -1;
  }
  return result;
}
