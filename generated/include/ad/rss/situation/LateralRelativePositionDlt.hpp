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

#include <ad/rss/situation/LateralRelativePosition.hpp>
#include <dlt/dlt_cpp_extension.hpp>

/*!
 * @brief DLT logging for type ::ad::rss::situation::LateralRelativePosition
 */
template <> inline int32_t logToDlt(DltContextData &log, ::ad::rss::situation::LateralRelativePosition const &value)
{
  std::string valueString;
  try
  {
    valueString = toString(value);
  }
  catch (std::exception &e)
  {
    valueString = "INVALID";
  }
  return dlt_user_log_write_constant_string(&log, valueString.c_str());
}
