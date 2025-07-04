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
#include <memory>
#include <sstream>
#include "ad/rss/core/StructuredObjectState.hpp"
#include "ad/rss/world/ObjectState.hpp"
#include "ad/rss/world/ObjectType.hpp"
#include "ad/rss/world/RssDynamics.hpp"
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
 * \brief DataType RelativeObjectState
 *
 * The state of an object with structured and unstructured constellation data.
 * The state consists of the object type, the dynamics, structured and unstructured
 * object states.
 */
struct RelativeObjectState
{
  /*!
   * \brief Smart pointer on RelativeObjectState
   */
  typedef std::shared_ptr<RelativeObjectState> Ptr;

  /*!
   * \brief Smart pointer on constant RelativeObjectState
   */
  typedef std::shared_ptr<RelativeObjectState const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  RelativeObjectState() = default;

  /*!
   * \brief standard destructor
   */
  ~RelativeObjectState() = default;

  /*!
   * \brief standard copy constructor
   */
  RelativeObjectState(const RelativeObjectState &other) = default;

  /*!
   * \brief standard move constructor
   */
  RelativeObjectState(RelativeObjectState &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RelativeObjectState
   *
   * \returns Reference to this RelativeObjectState.
   */
  RelativeObjectState &operator=(const RelativeObjectState &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RelativeObjectState
   *
   * \returns Reference to this RelativeObjectState.
   */
  RelativeObjectState &operator=(RelativeObjectState &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RelativeObjectState
   *
   * \returns \c true if both RelativeObjectState are equal
   */
  bool operator==(const RelativeObjectState &other) const
  {
    return (object_type == other.object_type) && (dynamics == other.dynamics)
      && (unstructured_object_state == other.unstructured_object_state)
      && (structured_object_state == other.structured_object_state);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RelativeObjectState.
   *
   * \returns \c true if both RelativeObjectState are different
   */
  bool operator!=(const RelativeObjectState &other) const
  {
    return !operator==(other);
  }

  /*!
   * The type of object.
   */
  ::ad::rss::world::ObjectType object_type;

  /*!
   * The constellation specific dynamics.
   */
  ::ad::rss::world::RssDynamics dynamics;

  /*!
   * The state of the object required to perform unstructured constellation calculations.
   */
  ::ad::rss::world::ObjectState unstructured_object_state;

  /*!
   * The state of the object required to perform structured constellation calculations.
   */
  ::ad::rss::core::StructuredObjectState structured_object_state;
};

} // namespace core
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_CORE_RELATIVEOBJECTSTATE
#define GEN_GUARD_AD_RSS_CORE_RELATIVEOBJECTSTATE
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
 * \param[in] _value RelativeObjectState value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RelativeObjectState const &_value)
{
  os << "RelativeObjectState(";
  os << "object_type:";
  os << _value.object_type;
  os << ",";
  os << "dynamics:";
  os << _value.dynamics;
  os << ",";
  os << "unstructured_object_state:";
  os << _value.unstructured_object_state;
  os << ",";
  os << "structured_object_state:";
  os << _value.structured_object_state;
  os << ")";
  return os;
}

} // namespace core
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RelativeObjectState
 */
inline std::string to_string(::ad::rss::core::RelativeObjectState const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::core::RelativeObjectState> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::core::RelativeObjectState const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};

#endif // GEN_GUARD_AD_RSS_CORE_RELATIVEOBJECTSTATE
