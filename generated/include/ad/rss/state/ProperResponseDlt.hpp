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

#include <ad/rss/state/LateralResponseDlt.hpp>
#include <ad/rss/state/LongitudinalResponseDlt.hpp>
#include <ad/rss/state/ProperResponse.hpp>
#include <ad/rss/world/ObjectIdVectorDlt.hpp>
#include <ad/rss/world/TimeIndexDlt.hpp>
#include <dlt/dlt_cpp_extension.hpp>

template <> inline int32_t logToDlt(DltContextData &log, ::ad::rss::state::ProperResponse const &_value)
{
  int32_t result = dlt_user_log_write_constant_string(&log, "ProperResponse(");
  result += dlt_user_log_write_constant_string(&log, "timeIndex:");
  result += logToDlt(log, _value.timeIndex);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "isSafe:");
  result += logToDlt(log, _value.isSafe);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "dangerousObjects:");
  result += logToDlt(log, _value.dangerousObjects);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "longitudinalResponse:");
  result += logToDlt(log, _value.longitudinalResponse);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "lateralResponseRight:");
  result += logToDlt(log, _value.lateralResponseRight);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "lateralResponseLeft:");
  result += logToDlt(log, _value.lateralResponseLeft);
  result += dlt_user_log_write_constant_string(&log, ")");
  if (result != 0)
  {
    result = -1;
  }
  return result;
}
