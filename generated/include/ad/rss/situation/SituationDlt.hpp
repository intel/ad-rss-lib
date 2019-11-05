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

#include <ad/rss/situation/RelativePositionDlt.hpp>
#include <ad/rss/situation/Situation.hpp>
#include <ad/rss/situation/SituationIdDlt.hpp>
#include <ad/rss/situation/SituationTypeDlt.hpp>
#include <ad/rss/situation/VehicleStateDlt.hpp>
#include <ad/rss/world/ObjectIdDlt.hpp>
#include <dlt/dlt_cpp_extension.hpp>

template <> inline int32_t logToDlt(DltContextData &log, ::ad::rss::situation::Situation const &_value)
{
  int32_t result = dlt_user_log_write_constant_string(&log, "Situation(");
  result += dlt_user_log_write_constant_string(&log, "situationId:");
  result += logToDlt(log, _value.situationId);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "objectId:");
  result += logToDlt(log, _value.objectId);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "situationType:");
  result += logToDlt(log, _value.situationType);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "egoVehicleState:");
  result += logToDlt(log, _value.egoVehicleState);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "otherVehicleState:");
  result += logToDlt(log, _value.otherVehicleState);
  result += dlt_user_log_write_constant_string(&log, ",");
  result += dlt_user_log_write_constant_string(&log, "relativePosition:");
  result += logToDlt(log, _value.relativePosition);
  result += dlt_user_log_write_constant_string(&log, ")");
  if (result != 0)
  {
    result = -1;
  }
  return result;
}
