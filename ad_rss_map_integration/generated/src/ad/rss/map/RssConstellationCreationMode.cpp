/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2022 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-2046
 */

#include "ad/rss/map/RssConstellationCreationMode.hpp"
#include <stdexcept>

std::string toString(::ad::rss::map::RssConstellationCreationMode const e)
{
  switch (e)
  {
    case ::ad::rss::map::RssConstellationCreationMode::Ignore:
      return std::string("::ad::rss::map::RssConstellationCreationMode::Ignore"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::map::RssConstellationCreationMode::NotRelevant:
      return std::string("::ad::rss::map::RssConstellationCreationMode::NotRelevant"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::map::RssConstellationCreationMode::Structured:
      return std::string("::ad::rss::map::RssConstellationCreationMode::Structured"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::map::RssConstellationCreationMode::Unstructured:
      return std::string("::ad::rss::map::RssConstellationCreationMode::Unstructured"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad::rss::map::RssConstellationCreationMode fromString(std::string const &str)
{
  if (str == std::string("::ad::rss::map::RssConstellationCreationMode::Ignore")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::map::RssConstellationCreationMode::Ignore;
  }
  if (str == std::string("Ignore")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::map::RssConstellationCreationMode::Ignore;
  }
  if (str == std::string("::ad::rss::map::RssConstellationCreationMode::NotRelevant")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::map::RssConstellationCreationMode::NotRelevant;
  }
  if (str == std::string("NotRelevant")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::map::RssConstellationCreationMode::NotRelevant;
  }
  if (str == std::string("::ad::rss::map::RssConstellationCreationMode::Structured")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::map::RssConstellationCreationMode::Structured;
  }
  if (str == std::string("Structured")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::map::RssConstellationCreationMode::Structured;
  }
  if (str == std::string("::ad::rss::map::RssConstellationCreationMode::Unstructured")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::map::RssConstellationCreationMode::Unstructured;
  }
  if (str == std::string("Unstructured")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::map::RssConstellationCreationMode::Unstructured;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
