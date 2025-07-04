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

#include "ad/rss/world/ConstellationType.hpp"
#include <stdexcept>

std::string toString(::ad::rss::world::ConstellationType const e)
{
  switch (e)
  {
    case ::ad::rss::world::ConstellationType::NotRelevant:
      return std::string("::ad::rss::world::ConstellationType::NotRelevant"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::world::ConstellationType::SameDirection:
      return std::string("::ad::rss::world::ConstellationType::SameDirection"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::world::ConstellationType::OppositeDirection:
      return std::string("::ad::rss::world::ConstellationType::OppositeDirection"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::world::ConstellationType::IntersectionEgoHasPriority:
      return std::string("::ad::rss::world::ConstellationType::IntersectionEgoHasPriority"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::world::ConstellationType::IntersectionObjectHasPriority:
      return std::string("::ad::rss::world::ConstellationType::IntersectionObjectHasPriority"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::world::ConstellationType::IntersectionSamePriority:
      return std::string("::ad::rss::world::ConstellationType::IntersectionSamePriority"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::world::ConstellationType::Unstructured:
      return std::string("::ad::rss::world::ConstellationType::Unstructured"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad::rss::world::ConstellationType fromString(std::string const &str)
{
  if (str == std::string("::ad::rss::world::ConstellationType::NotRelevant")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ConstellationType::NotRelevant;
  }
  if (str == std::string("NotRelevant")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ConstellationType::NotRelevant;
  }
  if (str == std::string("::ad::rss::world::ConstellationType::SameDirection")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ConstellationType::SameDirection;
  }
  if (str == std::string("SameDirection")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ConstellationType::SameDirection;
  }
  if (str == std::string("::ad::rss::world::ConstellationType::OppositeDirection")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ConstellationType::OppositeDirection;
  }
  if (str == std::string("OppositeDirection")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ConstellationType::OppositeDirection;
  }
  if (str == std::string("::ad::rss::world::ConstellationType::IntersectionEgoHasPriority")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ConstellationType::IntersectionEgoHasPriority;
  }
  if (str == std::string("IntersectionEgoHasPriority")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ConstellationType::IntersectionEgoHasPriority;
  }
  if (str == std::string("::ad::rss::world::ConstellationType::IntersectionObjectHasPriority")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ConstellationType::IntersectionObjectHasPriority;
  }
  if (str == std::string("IntersectionObjectHasPriority")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ConstellationType::IntersectionObjectHasPriority;
  }
  if (str == std::string("::ad::rss::world::ConstellationType::IntersectionSamePriority")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ConstellationType::IntersectionSamePriority;
  }
  if (str == std::string("IntersectionSamePriority")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ConstellationType::IntersectionSamePriority;
  }
  if (str == std::string("::ad::rss::world::ConstellationType::Unstructured")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ConstellationType::Unstructured;
  }
  if (str == std::string("Unstructured")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ConstellationType::Unstructured;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
