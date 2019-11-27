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

#include <ad/rss/state/RssStateEvaluator.hpp>
#include <dlt/dlt_cpp_extension.hpp>

/*!
 * @brief DLT logging for type ::ad::rss::state::RssStateEvaluator
 */
template <> inline int32_t logToDlt(DltContextData &log, ::ad::rss::state::RssStateEvaluator const &value)
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
