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

#include "ad_rss/world/ObjectTypeValidInputRange.hpp"

TEST(ObjectTypeValidInputRangeTests, testValidInputRangeValid)
{
  ASSERT_TRUE(withinValidInputRange(::ad_rss::world::ObjectType::EgoVehicle));
  ASSERT_TRUE(withinValidInputRange(::ad_rss::world::ObjectType::OtherVehicle));
  ASSERT_TRUE(withinValidInputRange(::ad_rss::world::ObjectType::ArtificialObject));
}

TEST(ObjectTypeValidInputRangeTests, testValidInputRangeInvalid)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();

  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::world::ObjectType::EgoVehicle));
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::world::ObjectType::OtherVehicle));
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::world::ObjectType::ArtificialObject));

  ASSERT_FALSE(withinValidInputRange(static_cast<::ad_rss::world::ObjectType>(minValue - 1)));
}
