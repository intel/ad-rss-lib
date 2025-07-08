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
    case ::ad::rss::world::ObjectType::ArtificialVehicle:
      return std::string("::ad::rss::world::ObjectType::ArtificialVehicle"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::world::ObjectType::ArtificialPedestrian:
      return std::string("::ad::rss::world::ObjectType::ArtificialPedestrian"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::world::ObjectType::Bicycle:
      return std::string("::ad::rss::world::ObjectType::Bicycle"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::world::ObjectType::OtherObject:
      return std::string("::ad::rss::world::ObjectType::OtherObject"); // LCOV_EXCL_BR_LINE
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
  if (str == std::string("::ad::rss::world::ObjectType::ArtificialVehicle")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ObjectType::ArtificialVehicle;
  }
  if (str == std::string("ArtificialVehicle")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ObjectType::ArtificialVehicle;
  }
  if (str == std::string("::ad::rss::world::ObjectType::ArtificialPedestrian")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ObjectType::ArtificialPedestrian;
  }
  if (str == std::string("ArtificialPedestrian")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ObjectType::ArtificialPedestrian;
  }
  if (str == std::string("::ad::rss::world::ObjectType::Bicycle")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ObjectType::Bicycle;
  }
  if (str == std::string("Bicycle")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ObjectType::Bicycle;
  }
  if (str == std::string("::ad::rss::world::ObjectType::OtherObject")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ObjectType::OtherObject;
  }
  if (str == std::string("OtherObject")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::world::ObjectType::OtherObject;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
