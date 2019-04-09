// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2019 Intel Corporation
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors
//    may be used to endorse or promote products derived from this software without
//    specific prior written permission.
//
//    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
//    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
//    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
//    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
//    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//    POSSIBILITY OF SUCH DAMAGE.
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

// include the high level interface (and most complex) data types and by this any of the types
// to be able to switch on/off logging mainly at one central place
#include "ad_rss/situation/SituationVectorDlt.hpp"
#include "ad_rss/state/ResponseStateVectorDlt.hpp"
#include "ad_rss/world/AccelerationRestrictionDlt.hpp"
#include "ad_rss/world/WorldModelDlt.hpp"

/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {

/*!
 * @brief namespace core
 */
namespace core {

/**
 * @brief RssLogging singleton
 */
class RssLogging
{
public:
  /**
   * @brief get reference of the one RssLogging singleton
   *
   * @return Reference to RssLogging singleton
   */
  static RssLogging &instance();

  /**
   * @brief get reference of the one RssLogging singleton
   *
   * @return Reference to RssLogging singleton
   */
  static DltContext &getDltContext();

private:
  // Copy operators and constructors are deleted to avoid accidental copies
  RssLogging(RssLogging const &) = delete;
  RssLogging(RssLogging const &&) = delete;
  RssLogging &operator=(RssLogging &&) = delete;
  RssLogging &operator=(RssLogging const &) = delete;

  explicit RssLogging();
  ~RssLogging();

  mutable DltContext mDltContext;
};

} // namespace core
} // namespace ad_rss
