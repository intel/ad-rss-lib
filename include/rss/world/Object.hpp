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

#pragma once
#include <limits>

#include <vector>
#include "rss/world/Dynamics.hpp"
#include "rss/world/ObjectId.hpp"
#include "rss/world/ObjectType.hpp"
#include "rss/world/OccupiedRegion.hpp"
#include "rss/world/RssArea.hpp"
#include "rss/world/Velocity.hpp"
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace world
 */
namespace world {

struct Object
{
  ::rss::world::ObjectId objectId;
  ::rss::world::ObjectType objectType;
  std::vector<::rss::world::OccupiedRegion> occupiedRegions;
  ::rss::world::Dynamics dynamics;
  ::rss::world::Velocity velocity;
  ::rss::world::RssArea rssArea;

  ::rss::world::ObjectType getObjectType() const
  {
    return objectType;
  }

  void setObjectType(::rss::world::ObjectType const newVal)
  {
    objectType = newVal;
  }
};

} // namespace world
} // namespace rss
