// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// INTEL CONFIDENTIAL
//
// Copyright (c) 2018 Intel Corporation
//
// This software and the related documents are Intel copyrighted materials, and
// your use of them is governed by the express license under which they were
// provided to you (License). Unless the License provides otherwise, you may not
// use, modify, copy, publish, distribute, disclose or transmit this software or
// the related documents without Intel's prior written permission.
//
// This software and the related documents are provided as is, with no express or
// implied warranties, other than those that are expressly stated in the License.
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include <map>
#include "rss/check/ResponseVector.hpp"
#include "rss/check/RssState.hpp"

/*!
 * @brief namespace rss
 */
namespace rss {

/*!
 * @brief namespace core
 */
namespace core {

/**
 * @brief RSSResponseProvider
 */
class RSSResponseProvider
{
public:
  /**
   * @brief constructor
   */
  explicit RSSResponseProvider();

  /**
   * @brief Calculate the proper response out of the current responses
   *
   * @param[in] currentResponses all the responses gathered for the current situations
   * @param[out] response the proper overall response
   *
   * @return true if response could be calculated, false otherwise
   *
   * When false is returned the internal state has not been updated
   */
  bool provideProperResponse(check::ResponseVector const &currentResponses, check::Response &response);

private:
  /**
   * @brief typedef for the mapping of object id to the corresponding RssState before the blame time
   */
  typedef std::map<lane::SituationId, check::RssState> RssStateBeforeBlameTimeMap;

  /**
   * @brief the state of all responses before the blame time of each response
   *
   * Needs to be stored to check which is the response that changed and required to solve an unclear situation
   */
  RssStateBeforeBlameTimeMap mStatesBeforeBlameTime;
};

} // namespace core
} // namespace rss
