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
#include "RSSTypes.hpp"
#include "rss_core/RSSResponseFunctions.hpp"

namespace rss_core {

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
   */
  bool provideProperResponse(std::vector<Response> const &currentResponses, Response &response);

private:
  /**
   * @brief class to store the state before blame time
   */
  class StateBeforeBlameTime
  {
  public:
    /**
     * @brief default constructor
     */
    explicit StateBeforeBlameTime()
    {
    }

    /**
     * @brief  constructor
     */
    explicit StateBeforeBlameTime(bool longitudinalState, bool lateralState)
      : longitudinalSafe(longitudinalState)
      , lateralSafe(lateralState)
    {
    }
    //!< State is longitudinal safe
    bool longitudinalSafe{true};
    //!< State is lateral safe
    bool lateralSafe{true};
  };
  /**
   * @brief the state of all responses before the blame time of each response
   *
   * Needs to be stored to check which is the response that changed and required to solve an unclear situation
   */
  std::map<lane::Id, StateBeforeBlameTime> mStatesBeforeBlameTime;
};

} // namespace rss_core
