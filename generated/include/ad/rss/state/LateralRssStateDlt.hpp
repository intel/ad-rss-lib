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

#include <ad/rss/state/LateralResponseDlt.hpp>
#include <ad/rss/state/LateralRssState.hpp>
#include <ad/rss/state/RssStateInformationDlt.hpp>
#include <dlt/dlt_cpp_extension.hpp>

template <> inline int32_t logToDlt(DltContextData &log, ::ad::rss::state::LateralRssState const &_value)
{
  int32_t result = dlt_user_log_write_constant_string(&log, "LateralRssState(");
  result += dlt_user_log_write_constant_string(&log, "isSafe:");
  result += logToDlt(log, _value.isSafe);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "response:");
  result += logToDlt(log, _value.response);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "rssStateInformation:");
  result += logToDlt(log, _value.rssStateInformation);
  result += dlt_user_log_write_constant_string(&log, ")");
  if (result != 0)
  {
    result = -1;
  }
  return result;
}
