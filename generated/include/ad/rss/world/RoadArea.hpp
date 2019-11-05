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

#pragma once

#include <iostream>
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
using RoadArea = std::vector<::ad::rss::world::RoadSegment>;

} // namespace world
} // namespace rss
} // namespace ad

// protect the definition of ostream operator from duplicates by typedef usage within other data types
#ifndef OSTREAM_VECTOR_VECTOR_AD_RSS_WORLD_LANESEGMENT
#define OSTREAM_VECTOR_VECTOR_AD_RSS_WORLD_LANESEGMENT
namespace std {

/**
 * \brief standard ostream operator
 *
 * \param[in] stream The output stream to write to
 * \param[in] value RoadArea value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, std::vector<::ad::rss::world::RoadSegment> const &_value)
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
#endif // OSTREAM_VECTOR_VECTOR_AD_RSS_WORLD_LANESEGMENT
