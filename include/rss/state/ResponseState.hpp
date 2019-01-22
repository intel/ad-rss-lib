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

#pragma once
#include <limits>

#include <cstdint>
#include <memory>
#include "rss/situation/SituationId.hpp"
#include "rss/state/LateralRssState.hpp"
#include "rss/state/LongitudinalRssState.hpp"
#include "rss/time/TimeIndex.hpp"
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace state
 */
namespace state {

/*!
 * \brief DataType ResponseState
 *
 * Struct defining the RSS state of a single object.
 */
struct ResponseState
{
  ::rss::time::TimeIndex timeIndex; /*!< The time index is required to distinguish different points in time when
                                       tracking states or transforming responses back. */
  ::rss::situation::SituationId situationId{0u};        /*!< Id of the situation this state refers to.
         The id has to remain unique over time representing the situation (ego-vehicle / object pair) under investigation.
         It is used to track the state of the ego-vehicle / object constellation i.e. at point of danger threshold time. */
  ::rss::state::LongitudinalRssState longitudinalState; /*!< The current longitudinal rss state. */
  ::rss::state::LateralRssState
    lateralStateRight; /*!< The current lateral rss state at right side in respect to ego-vehicle driving direction. */
  ::rss::state::LateralRssState
    lateralStateLeft; /*!< The current lateral rss state at left side in respect to ego-vehicle driving direction. */
};

} // namespace state
} // namespace rss
