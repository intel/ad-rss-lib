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
#include "ad/rss/world/OccupiedRegion.hpp"
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
 * \brief DataType OccupiedRegionVector
 *
 * A vector of occupied regions.
 */
typedef std::vector<::ad::rss::world::OccupiedRegion> OccupiedRegionVector;

} // namespace world
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_VECTOR_AD_RSS_WORLD_OCCUPIEDREGION
#define GEN_GUARD_VECTOR_AD_RSS_WORLD_OCCUPIEDREGION
namespace std {
/**
 * \brief standard ostream operator
 *
 * \param[in] os The output stream to write to
 * \param[in] _value OccupiedRegionVector value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, vector<::ad::rss::world::OccupiedRegion> const &_value)
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
 * \brief overload of the std::to_string for OccupiedRegionVector
 */
inline std::string to_string(::ad::rss::world::OccupiedRegionVector const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std
#endif // GEN_GUARD_VECTOR_AD_RSS_WORLD_OCCUPIEDREGION
