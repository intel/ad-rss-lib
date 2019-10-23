# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (c) 2018-2019 Intel Corporation
#
# Redistribution and use in source and binary forms, with or without modification,
# are permitted provided that the following conditions are met:
#
# 1. Redistributions of source code must retain the above copyright notice,
#    this list of conditions and the following disclaimer.
#
# 2. Redistributions in binary form must reproduce the above copyright notice,
#    this list of conditions and the following disclaimer in the documentation
#    and/or other materials provided with the distribution.
#
# 3. Neither the name of the copyright holder nor the names of its contributors
#    may be used to endorse or promote products derived from this software without
#    specific prior written permission.
#
#    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
#    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
#    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
#    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
#    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
#    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
#    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
#    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
#    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
#    POSSIBILITY OF SUCH DAMAGE.
#
# ----------------- END LICENSE BLOCK -----------------------------------

set(ad_rss_SOURCES
  ${CMAKE_CURRENT_LIST_DIR}/src/core/RssCheck.cpp
  ${CMAKE_CURRENT_LIST_DIR}/src/core/RssResponseResolving.cpp
  ${CMAKE_CURRENT_LIST_DIR}/src/core/RssResponseTransformation.cpp
  ${CMAKE_CURRENT_LIST_DIR}/src/core/RssSituationChecking.cpp
  ${CMAKE_CURRENT_LIST_DIR}/src/core/RssSituationExtraction.cpp
  ${CMAKE_CURRENT_LIST_DIR}/src/situation/Math.cpp
  ${CMAKE_CURRENT_LIST_DIR}/src/situation/RssFormulas.cpp
  ${CMAKE_CURRENT_LIST_DIR}/src/situation/RssIntersectionChecker.cpp
  ${CMAKE_CURRENT_LIST_DIR}/src/situation/RssSituation.cpp
  ${CMAKE_CURRENT_LIST_DIR}/src/world/RssSituationCoordinateSystemConversion.cpp
  ${CMAKE_CURRENT_LIST_DIR}/src/world/RssSituationIdProvider.cpp
  ${CMAKE_CURRENT_LIST_DIR}/src/world/RssObjectPositionExtractor.cpp
  )
set(ad_rss_INCLUDE_DIRS
  ${CMAKE_CURRENT_LIST_DIR}/include/
)

set(ad_rss_UNIT_TEST_DIR
  ${CMAKE_CURRENT_LIST_DIR}/test/
)
