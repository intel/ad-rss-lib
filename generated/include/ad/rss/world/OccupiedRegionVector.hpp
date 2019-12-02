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
using OccupiedRegionVector = std::vector<::ad::rss::world::OccupiedRegion>;

} // namespace world
} // namespace rss
} // namespace ad

// protect the definition of ostream operator from duplicates by typedef usage within other data types
#ifndef OSTREAM_VECTOR_AD_RSS_WORLD_OCCUPIEDREGION
#define OSTREAM_VECTOR_AD_RSS_WORLD_OCCUPIEDREGION
namespace std {

/**
 * \brief standard ostream operator
 *
 * \param[in] stream The output stream to write to
 * \param[in] value OccupiedRegionVector value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, std::vector<::ad::rss::world::OccupiedRegion> const &_value)
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
#endif // OSTREAM_VECTOR_AD_RSS_WORLD_OCCUPIEDREGION