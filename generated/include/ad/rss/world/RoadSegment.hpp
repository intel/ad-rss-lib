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

#include <iostream>
#include <vector>
#include "ad/rss/world/LaneSegment.hpp"
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace world
 */
namespace world {

/*!
 * \brief DataType RoadSegment
 *
 * A RoadSegment is defined by lateral neighboring lane segments. The lane segments within a road segment have to be
 * ordered from left to right in respect to the driving direction defined by the road area.
 */
using RoadSegment = std::vector<::ad::rss::world::LaneSegment>;

} // namespace world
} // namespace rss
} // namespace ad

// protect the definition of ostream operator from duplicates by typedef usage within other data types
#ifndef OSTREAM_VECTOR_AD_RSS_WORLD_LANESEGMENT
#define OSTREAM_VECTOR_AD_RSS_WORLD_LANESEGMENT
namespace std {

/**
 * \brief standard ostream operator
 *
 * \param[in] stream The output stream to write to
 * \param[in] value RoadSegment value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, std::vector<::ad::rss::world::LaneSegment> const &_value)
{
  os << "[";
  for (auto it = _value.begin(); it != _value.end(); it++)
  {
    if (it != _value.begin())
    {
      os << ",";
    }
    os << *it;
  }
  os << "]";
  return os;
}

} // namespace std
#endif // OSTREAM_VECTOR_AD_RSS_WORLD_LANESEGMENT
