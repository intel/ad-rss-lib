/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-1988
 */

#include "ad/rss/world/ObjectType.hpp"
#include <stdexcept>

std::string toString(::ad::rss::world::ObjectType const e)
{
  switch (e)
  {
    case ::ad::rss::world::ObjectType::Invalid:
      return std::string("::ad::rss::world::ObjectType::Invalid"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::world::ObjectType::EgoVehicle:
      return std::string("::ad::rss::world::ObjectType::EgoVehicle"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::world::ObjectType::OtherVehicle:
      return std::string("::ad::rss::world::ObjectType::OtherVehicle"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::world::ObjectType::Pedestrian:
      return std::string("::ad::rss::world::ObjectType::Pedestrian"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::world::ObjectType::ArtificialObject:
      return std::string("::ad::rss::world::ObjectType::ArtificialObject"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad::rss::world::ObjectType fromString(std::string const &str)
{
  if (str == std::string("::ad::rss::world::ObjectType::Invalid")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ObjectType::Invalid;
  }
  if (str == std::string("Invalid")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ObjectType::Invalid;
  }
  if (str == std::string("::ad::rss::world::ObjectType::EgoVehicle")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ObjectType::EgoVehicle;
  }
  if (str == std::string("EgoVehicle")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ObjectType::EgoVehicle;
  }
  if (str == std::string("::ad::rss::world::ObjectType::OtherVehicle")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ObjectType::OtherVehicle;
  }
  if (str == std::string("OtherVehicle")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ObjectType::OtherVehicle;
  }
  if (str == std::string("::ad::rss::world::ObjectType::Pedestrian")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ObjectType::Pedestrian;
  }
  if (str == std::string("Pedestrian")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ObjectType::Pedestrian;
  }
  if (str == std::string("::ad::rss::world::ObjectType::ArtificialObject")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ObjectType::ArtificialObject;
  }
  if (str == std::string("ArtificialObject")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ObjectType::ArtificialObject;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
