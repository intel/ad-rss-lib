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

#include <ad/rss/situation/SituationIdDlt.hpp>
#include <ad/rss/state/LateralRssStateDlt.hpp>
#include <ad/rss/state/LongitudinalRssStateDlt.hpp>
#include <ad/rss/state/RssState.hpp>
#include <ad/rss/world/ObjectIdDlt.hpp>
#include <dlt/dlt_cpp_extension.hpp>

template <> inline int32_t logToDlt(DltContextData &log, ::ad::rss::state::RssState const &_value)
{
  int32_t result = dlt_user_log_write_constant_string(&log, "RssState(");
  result += dlt_user_log_write_constant_string(&log, "objectId:");
  result += logToDlt(log, _value.objectId);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "situationId:");
  result += logToDlt(log, _value.situationId);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "longitudinalState:");
  result += logToDlt(log, _value.longitudinalState);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "lateralStateRight:");
  result += logToDlt(log, _value.lateralStateRight);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "lateralStateLeft:");
  result += logToDlt(log, _value.lateralStateLeft);
  result += dlt_user_log_write_constant_string(&log, ")");
  if (result != 0)
  {
    result = -1;
  }
  return result;
}
