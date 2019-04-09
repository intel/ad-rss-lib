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

#include "ad_rss/core/RssLogging.hpp"
#include "ad_rss/physics/LoggingDefinitions.hpp"
#include "ad_rss/situation/LoggingDefinitions.hpp"
#include "ad_rss/state/LoggingDefinitions.hpp"
#include "ad_rss/world/LoggingDefinitions.hpp"

namespace ad_rss {

namespace core {

RssLogging &RssLogging::instance()
{
  static RssLogging singleton;
  return singleton;
}

RssLogging::RssLogging()
{
  DLT_REGISTER_CONTEXT(mDltContext, " RSS", "ad-rss-lib Context");
}

RssLogging::~RssLogging()
{
  DLT_UNREGISTER_CONTEXT(mDltContext);
}

DltContext &RssLogging::getDltContext()
{
  return instance().mDltContext;
}

} // namespace core

namespace physics {
DltContext &getLoggingContext()
{
  return core::RssLogging::getDltContext();
}
} // namespace physics

namespace situation {
DltContext &getLoggingContext()
{
  return core::RssLogging::getDltContext();
}
} // namespace situation

namespace state {
DltContext &getLoggingContext()
{
  return core::RssLogging::getDltContext();
}
} // namespace state

namespace world {
DltContext &getLoggingContext()
{
  return core::RssLogging::getDltContext();
}
} // namespace world

} // namespace ad_rss
