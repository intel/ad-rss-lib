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

#include "ad/rss/situation/SituationType.hpp"
#include <stdexcept>

std::string toString(::ad::rss::situation::SituationType const e)
{
  switch (e)
  {
    case ::ad::rss::situation::SituationType::NotRelevant:
      return std::string("::ad::rss::situation::SituationType::NotRelevant"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::situation::SituationType::SameDirection:
      return std::string("::ad::rss::situation::SituationType::SameDirection"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::situation::SituationType::OppositeDirection:
      return std::string("::ad::rss::situation::SituationType::OppositeDirection"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::situation::SituationType::IntersectionEgoHasPriority:
      return std::string("::ad::rss::situation::SituationType::IntersectionEgoHasPriority"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::situation::SituationType::IntersectionObjectHasPriority:
      return std::string("::ad::rss::situation::SituationType::IntersectionObjectHasPriority"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::situation::SituationType::IntersectionSamePriority:
      return std::string("::ad::rss::situation::SituationType::IntersectionSamePriority"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad::rss::situation::SituationType fromString(std::string const &str)
{
  if (str == std::string("::ad::rss::situation::SituationType::NotRelevant")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::SituationType::NotRelevant;
  }
  if (str == std::string("NotRelevant")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::SituationType::NotRelevant;
  }
  if (str == std::string("::ad::rss::situation::SituationType::SameDirection")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::SituationType::SameDirection;
  }
  if (str == std::string("SameDirection")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::SituationType::SameDirection;
  }
  if (str == std::string("::ad::rss::situation::SituationType::OppositeDirection")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::SituationType::OppositeDirection;
  }
  if (str == std::string("OppositeDirection")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::SituationType::OppositeDirection;
  }
  if (str == std::string("::ad::rss::situation::SituationType::IntersectionEgoHasPriority")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::SituationType::IntersectionEgoHasPriority;
  }
  if (str == std::string("IntersectionEgoHasPriority")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::SituationType::IntersectionEgoHasPriority;
  }
  if (str == std::string("::ad::rss::situation::SituationType::IntersectionObjectHasPriority")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::SituationType::IntersectionObjectHasPriority;
  }
  if (str == std::string("IntersectionObjectHasPriority")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::SituationType::IntersectionObjectHasPriority;
  }
  if (str == std::string("::ad::rss::situation::SituationType::IntersectionSamePriority")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::SituationType::IntersectionSamePriority;
  }
  if (str == std::string("IntersectionSamePriority")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::situation::SituationType::IntersectionSamePriority;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
