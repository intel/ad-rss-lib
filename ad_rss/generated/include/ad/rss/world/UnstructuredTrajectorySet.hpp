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

#pragma once

#include <iostream>
#include <sstream>
#include <vector>
#include "ad/physics/Distance2D.hpp"
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
 * \brief DataType UnstructuredTrajectorySet
 *
 * Describes the potential endpoints of all possible trajectories during unstructured scene calculation
 */
typedef std::vector<::ad::physics::Distance2D> UnstructuredTrajectorySet;

} // namespace world
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_VECTOR_AD_PHYSICS_DISTANCE2D
#define GEN_GUARD_VECTOR_AD_PHYSICS_DISTANCE2D
namespace std {
/**
 * \brief standard ostream operator
 *
 * \param[in] os The output stream to write to
 * \param[in] _value UnstructuredTrajectorySet value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, vector<::ad::physics::Distance2D> const &_value)
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
 * \brief overload of the std::to_string for UnstructuredTrajectorySet
 */
inline std::string to_string(::ad::rss::world::UnstructuredTrajectorySet const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std
#endif // GEN_GUARD_VECTOR_AD_PHYSICS_DISTANCE2D
