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

#pragma once

#include <iostream>
#include <limits>
#include <memory>
#include <sstream>
#include "ad/rss/core/RelativeConstellationId.hpp"
#include "ad/rss/core/RelativeObjectState.hpp"
#include "ad/rss/core/RelativePosition.hpp"
#include "ad/rss/world/ConstellationType.hpp"
#include "ad/rss/world/ObjectId.hpp"
#include "ad/rss/world/WorldModelIndexVector.hpp"
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace core
 */
namespace core {

/*!
 * \brief DataType RelativeConstellation
 *
 * Describes a RSS constellation within the constellation specific lane coordinate
 * system.
 * A constellation always considers the relative relation between two objects: the
 * ego vehicle and one other vehicle. The constellation lane coordinate system is
 * unique for one specific constellation. As a consequence the vehicle state of the
 * ego vehicle in different RSS constellations cannot be compared to each other. Consists
 * of a constellation id and type, the VehicleState of the ego vehicle, the VehicleState
 * of the other vehicle and the RelativePosition between ego vehicle and other vehicle.
 */
struct RelativeConstellation
{
  /*!
   * \brief Smart pointer on RelativeConstellation
   */
  typedef std::shared_ptr<RelativeConstellation> Ptr;

  /*!
   * \brief Smart pointer on constant RelativeConstellation
   */
  typedef std::shared_ptr<RelativeConstellation const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  RelativeConstellation() = default;

  /*!
   * \brief standard destructor
   */
  ~RelativeConstellation() = default;

  /*!
   * \brief standard copy constructor
   */
  RelativeConstellation(const RelativeConstellation &other) = default;

  /*!
   * \brief standard move constructor
   */
  RelativeConstellation(RelativeConstellation &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RelativeConstellation
   *
   * \returns Reference to this RelativeConstellation.
   */
  RelativeConstellation &operator=(const RelativeConstellation &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RelativeConstellation
   *
   * \returns Reference to this RelativeConstellation.
   */
  RelativeConstellation &operator=(RelativeConstellation &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RelativeConstellation
   *
   * \returns \c true if both RelativeConstellation are equal
   */
  bool operator==(const RelativeConstellation &other) const
  {
    return (ego_id == other.ego_id) && (object_id == other.object_id) && (constellation_id == other.constellation_id)
      && (constellation_type == other.constellation_type) && (ego_state == other.ego_state)
      && (other_state == other.other_state) && (relative_position == other.relative_position)
      && (world_model_indices == other.world_model_indices);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RelativeConstellation.
   *
   * \returns \c true if both RelativeConstellation are different
   */
  bool operator!=(const RelativeConstellation &other) const
  {
    return !operator==(other);
  }

  /*!
   * Defines the unique id of the ego. This id has to be constant over time.
   */
  ::ad::rss::world::ObjectId ego_id{0};

  /*!
   * Defines the unique id of an object. This id has to be constant over time for the same object.
   */
  ::ad::rss::world::ObjectId object_id{0};

  /*!
   * The unique id of the constellation.
   * The constellation id has to be constant over time for a pair of ego vehicle and
   * specific constellation between another vehicle.
   */
  ::ad::rss::core::RelativeConstellationId constellation_id{0};

  /*!
   * The type of the current constellation.
   */
  ::ad::rss::world::ConstellationType constellation_type{::ad::rss::world::ConstellationType::NotRelevant};

  /*!
   * The vehicle state of the ego vehicle within the constellation specific lane coordinate system.
   */
  ::ad::rss::core::RelativeObjectState ego_state;

  /*!
   * The vehicle state of the other vehicle within the constellation specific lane coordinate system.
   */
  ::ad::rss::core::RelativeObjectState other_state;

  /*!
   * The relative position between the ego vehicle and the other vehicle within the constellation specific lane
   * coordinate system.
   */
  ::ad::rss::core::RelativePosition relative_position;

  /*!
   * The indices of the input Constellation within the WorldModel.constellations ConstellationVector which this
   * RelativeConstellation is based on.
   */
  ::ad::rss::world::WorldModelIndexVector world_model_indices;
};

} // namespace core
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_CORE_RELATIVECONSTELLATION
#define GEN_GUARD_AD_RSS_CORE_RELATIVECONSTELLATION
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace core
 */
namespace core {

/**
 * \brief standard ostream operator
 *
 * \param[in] os The output stream to write to
 * \param[in] _value RelativeConstellation value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RelativeConstellation const &_value)
{
  os << "RelativeConstellation(";
  os << "ego_id:";
  os << _value.ego_id;
  os << ",";
  os << "object_id:";
  os << _value.object_id;
  os << ",";
  os << "constellation_id:";
  os << _value.constellation_id;
  os << ",";
  os << "constellation_type:";
  os << _value.constellation_type;
  os << ",";
  os << "ego_state:";
  os << _value.ego_state;
  os << ",";
  os << "other_state:";
  os << _value.other_state;
  os << ",";
  os << "relative_position:";
  os << _value.relative_position;
  os << ",";
  os << "world_model_indices:";
  os << _value.world_model_indices;
  os << ")";
  return os;
}

} // namespace core
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RelativeConstellation
 */
inline std::string to_string(::ad::rss::core::RelativeConstellation const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::core::RelativeConstellation> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::core::RelativeConstellation const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_CORE_RELATIVECONSTELLATION
