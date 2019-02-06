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

#include "rss/world/ObjectType.hpp"
#include <stdexcept>

std::string toString(::rss::world::ObjectType const e)
{
  switch (e)
  {
    case ::rss::world::ObjectType::EgoVehicle:
      return "::rss::world::ObjectType::EgoVehicle";
    case ::rss::world::ObjectType::OtherVehicle:
      return "::rss::world::ObjectType::OtherVehicle";
    case ::rss::world::ObjectType::ArtificialObject:
      return "::rss::world::ObjectType::ArtificialObject";
    default:
      return "UNKNOWN ENUM VALUE";
  }
}

template <>::rss::world::ObjectType fromString(std::string const &str)
{
  if ((str == "::rss::world::ObjectType::EgoVehicle") || (str == "EgoVehicle"))
  {
    return ::rss::world::ObjectType::EgoVehicle;
  }
  else if ((str == "::rss::world::ObjectType::OtherVehicle") || (str == "OtherVehicle"))
  {
    return ::rss::world::ObjectType::OtherVehicle;
  }
  else if ((str == "::rss::world::ObjectType::ArtificialObject") || (str == "ArtificialObject"))
  {
    return ::rss::world::ObjectType::ArtificialObject;
  }
  else
  {
    throw std::out_of_range("Invalid enum literal");
  }
}
