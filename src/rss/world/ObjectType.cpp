/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * INTEL CONFIDENTIAL
 *
 * Copyright (c) 2018 Intel Corporation
 *
 * This software and the related documents are Intel copyrighted materials, and
 * your use of them is governed by the express license under which they were
 * provided to you (License). Unless the License provides otherwise, you may not
 * use, modify, copy, publish, distribute, disclose or transmit this software or
 * the related documents without Intel's prior written permission.
 *
 * This software and the related documents are provided as is, with no express or
 * implied warranties, other than those that are expressly stated in the License.
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * @file
 *
 */

#include "rss/world/ObjectType.hpp"
#include <unordered_map>

std::string toString(::rss::world::ObjectType const e)
{
  struct EnumClassHash
  {
    std::size_t operator()(::rss::world::ObjectType t) const
    {
      return static_cast<std::size_t>(t);
    }
  };

  static std::unordered_map<::rss::world::ObjectType, std::string, EnumClassHash> enumToStringMap{
    {::rss::world::ObjectType::EgoVehicle, "::rss::world::ObjectType::EgoVehicle"},
    {::rss::world::ObjectType::OtherVehicle, "::rss::world::ObjectType::OtherVehicle"},
    {::rss::world::ObjectType::ArtificialObject, "::rss::world::ObjectType::ArtificialObject"}};
  return enumToStringMap.at(e);
}

template <>::rss::world::ObjectType fromString(std::string const &str)
{
  static std::unordered_map<std::string, ::rss::world::ObjectType> stringToEnumMap{
    {"::rss::world::ObjectType::EgoVehicle", ::rss::world::ObjectType::EgoVehicle},
    {"::rss::world::ObjectType::OtherVehicle", ::rss::world::ObjectType::OtherVehicle},
    {"::rss::world::ObjectType::ArtificialObject", ::rss::world::ObjectType::ArtificialObject},
    {"EgoVehicle", ::rss::world::ObjectType::EgoVehicle},
    {"OtherVehicle", ::rss::world::ObjectType::OtherVehicle},
    {"ArtificialObject", ::rss::world::ObjectType::ArtificialObject}};
  return stringToEnumMap.at(str);
}
