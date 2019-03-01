# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# INTEL CONFIDENTIAL
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

set(AD_RSS_TEST_SOURCES
  ad_rss/physics/MetricRangeValidInputRangeTests.cpp
  ad_rss/physics/ParametricValueValidInputRangeTests.cpp
  ad_rss/physics/AccelerationRangeValidInputRangeTests.cpp
  ad_rss/physics/DistanceSquaredTests.cpp
  ad_rss/physics/DistanceSquaredValidInputRangeTests.cpp
  ad_rss/physics/CoordinateSystemAxisValidInputRangeTests.cpp
  ad_rss/physics/CoordinateSystemAxisTests.cpp
  ad_rss/physics/SpeedSquaredTests.cpp
  ad_rss/physics/SpeedSquaredValidInputRangeTests.cpp
  ad_rss/physics/DurationTests.cpp
  ad_rss/physics/DurationValidInputRangeTests.cpp
  ad_rss/physics/AccelerationTests.cpp
  ad_rss/physics/AccelerationValidInputRangeTests.cpp
  ad_rss/physics/ParametricRangeValidInputRangeTests.cpp
  ad_rss/physics/DurationSquaredTests.cpp
  ad_rss/physics/DurationSquaredValidInputRangeTests.cpp
  ad_rss/physics/SpeedValidInputRangeTests.cpp
  ad_rss/physics/SpeedTests.cpp
  ad_rss/physics/DistanceTests.cpp
  ad_rss/physics/DistanceValidInputRangeTests.cpp
  ad_rss/situation/SituationTypeValidInputRangeTests.cpp
  ad_rss/situation/SituationTypeTests.cpp
  ad_rss/situation/VehicleStateValidInputRangeTests.cpp
  ad_rss/situation/RelativePositionValidInputRangeTests.cpp
  ad_rss/situation/LateralRelativePositionValidInputRangeTests.cpp
  ad_rss/situation/LateralRelativePositionTests.cpp
  ad_rss/situation/SituationVectorValidInputRangeTests.cpp
  ad_rss/situation/SituationValidInputRangeTests.cpp
  ad_rss/situation/LongitudinalRelativePositionTests.cpp
  ad_rss/situation/LongitudinalRelativePositionValidInputRangeTests.cpp
  ad_rss/state/ResponseStateValidInputRangeTests.cpp
  ad_rss/state/ResponseStateVectorValidInputRangeTests.cpp
  ad_rss/state/LateralRssStateValidInputRangeTests.cpp
  ad_rss/state/LateralResponseTests.cpp
  ad_rss/state/LateralResponseValidInputRangeTests.cpp
  ad_rss/state/LongitudinalResponseTests.cpp
  ad_rss/state/LongitudinalResponseValidInputRangeTests.cpp
  ad_rss/state/LongitudinalRssStateValidInputRangeTests.cpp
  ad_rss/world/WorldModelValidInputRangeTests.cpp
  ad_rss/world/LaneSegmentValidInputRangeTests.cpp
  ad_rss/world/ObjectTypeValidInputRangeTests.cpp
  ad_rss/world/ObjectTypeTests.cpp
  ad_rss/world/DynamicsValidInputRangeTests.cpp
  ad_rss/world/AccelerationRestrictionValidInputRangeTests.cpp
  ad_rss/world/SceneVectorValidInputRangeTests.cpp
  ad_rss/world/LaneSegmentTypeValidInputRangeTests.cpp
  ad_rss/world/LaneSegmentTypeTests.cpp
  ad_rss/world/RoadAreaValidInputRangeTests.cpp
  ad_rss/world/LongitudinalRssAccelerationValuesValidInputRangeTests.cpp
  ad_rss/world/ObjectValidInputRangeTests.cpp
  ad_rss/world/LateralRssAccelerationValuesValidInputRangeTests.cpp
  ad_rss/world/LaneDrivingDirectionTests.cpp
  ad_rss/world/LaneDrivingDirectionValidInputRangeTests.cpp
  ad_rss/world/VelocityValidInputRangeTests.cpp
  ad_rss/world/OccupiedRegionValidInputRangeTests.cpp
  ad_rss/world/RoadSegmentValidInputRangeTests.cpp
  ad_rss/world/SceneValidInputRangeTests.cpp
  ad_rss/world/OccupiedRegionVectorValidInputRangeTests.cpp
)
