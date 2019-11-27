/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 10.6.0-1878
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
