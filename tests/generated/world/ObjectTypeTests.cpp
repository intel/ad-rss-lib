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

/*
 * Generated file
 */

#include <gtest/gtest.h>
#include <limits>
#include "ad/rss/world/ObjectType.hpp"

TEST(ObjectTypeTests, testFromString)
{
  ASSERT_EQ(fromString<::ad::rss::world::ObjectType>("Invalid"), ::ad::rss::world::ObjectType::Invalid);
  ASSERT_EQ(fromString<::ad::rss::world::ObjectType>("::ad::rss::world::ObjectType::Invalid"),
            ::ad::rss::world::ObjectType::Invalid);

  ASSERT_EQ(fromString<::ad::rss::world::ObjectType>("EgoVehicle"), ::ad::rss::world::ObjectType::EgoVehicle);
  ASSERT_EQ(fromString<::ad::rss::world::ObjectType>("::ad::rss::world::ObjectType::EgoVehicle"),
            ::ad::rss::world::ObjectType::EgoVehicle);

  ASSERT_EQ(fromString<::ad::rss::world::ObjectType>("OtherVehicle"), ::ad::rss::world::ObjectType::OtherVehicle);
  ASSERT_EQ(fromString<::ad::rss::world::ObjectType>("::ad::rss::world::ObjectType::OtherVehicle"),
            ::ad::rss::world::ObjectType::OtherVehicle);

  ASSERT_EQ(fromString<::ad::rss::world::ObjectType>("ArtificialObject"),
            ::ad::rss::world::ObjectType::ArtificialObject);
  ASSERT_EQ(fromString<::ad::rss::world::ObjectType>("::ad::rss::world::ObjectType::ArtificialObject"),
            ::ad::rss::world::ObjectType::ArtificialObject);

  EXPECT_ANY_THROW({ fromString<::ad::rss::world::ObjectType>("NOT A VALID ENUM LITERAL"); });
}

TEST(ObjectTypeTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad::rss::world::ObjectType::Invalid), "::ad::rss::world::ObjectType::Invalid");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ObjectType::Invalid));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::world::ObjectType::Invalid));

  ASSERT_EQ(toString(::ad::rss::world::ObjectType::EgoVehicle), "::ad::rss::world::ObjectType::EgoVehicle");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ObjectType::EgoVehicle));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::world::ObjectType::EgoVehicle));

  ASSERT_EQ(toString(::ad::rss::world::ObjectType::OtherVehicle), "::ad::rss::world::ObjectType::OtherVehicle");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ObjectType::OtherVehicle));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::world::ObjectType::OtherVehicle));

  ASSERT_EQ(toString(::ad::rss::world::ObjectType::ArtificialObject), "::ad::rss::world::ObjectType::ArtificialObject");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::world::ObjectType::ArtificialObject));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::world::ObjectType::ArtificialObject));

  ASSERT_EQ(toString(static_cast<::ad::rss::world::ObjectType>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad::rss::world::ObjectType>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}
