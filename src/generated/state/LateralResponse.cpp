/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 *    may be used to endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 *    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 *    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 *    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 *    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 *    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 *    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *    POSSIBILITY OF SUCH DAMAGE.
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 */

#include "ad/rss/state/LateralResponse.hpp"
#include <stdexcept>

std::string toString(::ad::rss::state::LateralResponse const e)
{
  switch (e)
  {
    case ::ad::rss::state::LateralResponse::None:
      return std::string("::ad::rss::state::LateralResponse::None"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::state::LateralResponse::BrakeMin:
      return std::string("::ad::rss::state::LateralResponse::BrakeMin"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad::rss::state::LateralResponse fromString(std::string const &str)
{
  if (str == std::string("::ad::rss::state::LateralResponse::None")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::LateralResponse::None;
  }
  if (str == std::string("None")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::LateralResponse::None;
  }
  if (str == std::string("::ad::rss::state::LateralResponse::BrakeMin")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::LateralResponse::BrakeMin;
  }
  if (str == std::string("BrakeMin")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::LateralResponse::BrakeMin;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
