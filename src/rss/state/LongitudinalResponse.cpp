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
 * @file
 *
 */

#include "rss/state/LongitudinalResponse.hpp"
#include <stdexcept>

std::string toString(::rss::state::LongitudinalResponse const e)
{
  switch (e)
  {
    case ::rss::state::LongitudinalResponse::None:
      return "::rss::state::LongitudinalResponse::None";
    case ::rss::state::LongitudinalResponse::BrakeMinCorrect:
      return "::rss::state::LongitudinalResponse::BrakeMinCorrect";
    case ::rss::state::LongitudinalResponse::BrakeMin:
      return "::rss::state::LongitudinalResponse::BrakeMin";
    default:
      return "UNKNOWN ENUM VALUE";
  }
}

template <>::rss::state::LongitudinalResponse fromString(std::string const &str)
{
  if ((str == "::rss::state::LongitudinalResponse::None") || (str == "None"))
  {
    return ::rss::state::LongitudinalResponse::None;
  }
  else if ((str == "::rss::state::LongitudinalResponse::BrakeMinCorrect") || (str == "BrakeMinCorrect"))
  {
    return ::rss::state::LongitudinalResponse::BrakeMinCorrect;
  }
  else if ((str == "::rss::state::LongitudinalResponse::BrakeMin") || (str == "BrakeMin"))
  {
    return ::rss::state::LongitudinalResponse::BrakeMin;
  }
  else
  {
    throw std::out_of_range("Invalid enum literal");
  }
}
