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
 * Generator Version : 11.0.0-1917
 */

#pragma once

#include <iostream>
#include <sstream>
#include <vector>
#include "ad/rss/world/RoadSegment.hpp"
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
 * \brief DataType RoadArea
 *
 * A RoadArea is defined by longitudinal neighboring road segments. The road segments within a road area have to be
 * ordered from start to end in respect to the driving direction.
 */
typedef std::vector<::ad::rss::world::RoadSegment> RoadArea;

} // namespace world
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_VECTOR_VECTOR_AD_RSS_WORLD_LANESEGMENT
#define GEN_GUARD_VECTOR_VECTOR_AD_RSS_WORLD_LANESEGMENT
namespace std {
/**
 * \brief standard ostream operator
 *
 * \param[in] os The output stream to write to
 * \param[in] _value RoadArea value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, vector<::ad::rss::world::RoadSegment> const &_value)
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

namespace std {
/*!
 * \brief overload of the std::to_string for RoadArea
 */
inline std::string to_string(::ad::rss::world::RoadArea const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std
#endif // GEN_GUARD_VECTOR_VECTOR_AD_RSS_WORLD_LANESEGMENT
