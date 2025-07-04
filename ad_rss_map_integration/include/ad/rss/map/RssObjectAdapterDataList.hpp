/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2022 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

#pragma once

#include <iostream>
#include <sstream>
#include <vector>
#include "ad/rss/map/RssObjectAdapterData.hpp"
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace map
 */
namespace map {

/*!
 * \brief DataType RssObjectAdapterDataList
 *
 * A list of RssObjectAdapterData
 */
typedef std::vector<::ad::rss::map::RssObjectAdapterData> RssObjectAdapterDataList;

} // namespace map
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_VECTOR_AD_RSS_MAP_RSSObjectAdapterData
#define GEN_GUARD_VECTOR_AD_RSS_MAP_RSSObjectAdapterData
namespace std {
/**
 * \brief standard ostream operator
 *
 * \param[in] os The output stream to write to
 * \param[in] _value RssObjectAdapterDataList value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, vector<::ad::rss::map::RssObjectAdapterData> const &_value)
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
 * \brief overload of the std::to_string for RssObjectAdapterDataList
 */
inline std::string to_string(::ad::rss::map::RssObjectAdapterDataList const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::map::RssObjectAdapterDataList> : formatter<string_view>
{
  template <typename FormatContext>
  auto format(::ad::rss::map::RssObjectAdapterDataList const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};
#endif // GEN_GUARD_VECTOR_AD_RSS_MAP_RSSObjectAdapterData
