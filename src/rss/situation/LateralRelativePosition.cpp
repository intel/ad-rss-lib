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

#include "rss/situation/LateralRelativePosition.hpp"
#include <stdexcept>

std::string toString(::rss::situation::LateralRelativePosition const e)
{
  switch (e)
  {
    case ::rss::situation::LateralRelativePosition::AtLeft:
      return "::rss::situation::LateralRelativePosition::AtLeft";
    case ::rss::situation::LateralRelativePosition::OverlapLeft:
      return "::rss::situation::LateralRelativePosition::OverlapLeft";
    case ::rss::situation::LateralRelativePosition::Overlap:
      return "::rss::situation::LateralRelativePosition::Overlap";
    case ::rss::situation::LateralRelativePosition::OverlapRight:
      return "::rss::situation::LateralRelativePosition::OverlapRight";
    case ::rss::situation::LateralRelativePosition::AtRight:
      return "::rss::situation::LateralRelativePosition::AtRight";
    default:
      return "UNKNOWN ENUM VALUE";
  }
}

template <>::rss::situation::LateralRelativePosition fromString(std::string const &str)
{
  if ((str == "::rss::situation::LateralRelativePosition::AtLeft") || (str == "AtLeft"))
  {
    return ::rss::situation::LateralRelativePosition::AtLeft;
  }
  else if ((str == "::rss::situation::LateralRelativePosition::OverlapLeft") || (str == "OverlapLeft"))
  {
    return ::rss::situation::LateralRelativePosition::OverlapLeft;
  }
  else if ((str == "::rss::situation::LateralRelativePosition::Overlap") || (str == "Overlap"))
  {
    return ::rss::situation::LateralRelativePosition::Overlap;
  }
  else if ((str == "::rss::situation::LateralRelativePosition::OverlapRight") || (str == "OverlapRight"))
  {
    return ::rss::situation::LateralRelativePosition::OverlapRight;
  }
  else if ((str == "::rss::situation::LateralRelativePosition::AtRight") || (str == "AtRight"))
  {
    return ::rss::situation::LateralRelativePosition::AtRight;
  }
  else
  {
    throw std::out_of_range("Invalid enum literal");
  }
}
