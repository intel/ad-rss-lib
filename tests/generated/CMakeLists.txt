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

set(GENERATED_TEST_SOURCES
  generated/physics/MetricRangeValidInputRangeTests.cpp
  generated/physics/MetricRangeTests.cpp
  generated/physics/ParametricValueValidInputRangeTests.cpp
  generated/physics/SpeedRangeValidInputRangeTests.cpp
  generated/physics/SpeedRangeTests.cpp
  generated/physics/AccelerationRangeTests.cpp
  generated/physics/AccelerationRangeValidInputRangeTests.cpp
  generated/physics/DistanceSquaredTests.cpp
  generated/physics/DistanceSquaredValidInputRangeTests.cpp
  generated/physics/CoordinateSystemAxisValidInputRangeTests.cpp
  generated/physics/CoordinateSystemAxisTests.cpp
  generated/physics/SpeedSquaredTests.cpp
  generated/physics/SpeedSquaredValidInputRangeTests.cpp
  generated/physics/DurationTests.cpp
  generated/physics/DurationValidInputRangeTests.cpp
  generated/physics/AccelerationTests.cpp
  generated/physics/AccelerationValidInputRangeTests.cpp
  generated/physics/ParametricRangeValidInputRangeTests.cpp
  generated/physics/ParametricRangeTests.cpp
  generated/physics/DurationSquaredTests.cpp
  generated/physics/DurationSquaredValidInputRangeTests.cpp
  generated/physics/SpeedValidInputRangeTests.cpp
  generated/physics/SpeedTests.cpp
  generated/physics/DistanceTests.cpp
  generated/physics/DistanceValidInputRangeTests.cpp
  generated/situation/SituationTypeValidInputRangeTests.cpp
  generated/situation/SituationTypeTests.cpp
  generated/situation/VehicleStateValidInputRangeTests.cpp
  generated/situation/VehicleStateTests.cpp
  generated/situation/RelativePositionValidInputRangeTests.cpp
  generated/situation/RelativePositionTests.cpp
  generated/situation/SituationSnapshotValidInputRangeTests.cpp
  generated/situation/SituationSnapshotTests.cpp
  generated/situation/LateralRelativePositionValidInputRangeTests.cpp
  generated/situation/LateralRelativePositionTests.cpp
  generated/situation/VelocityRangeTests.cpp
  generated/situation/VelocityRangeValidInputRangeTests.cpp
  generated/situation/SituationVectorValidInputRangeTests.cpp
  generated/situation/SituationTests.cpp
  generated/situation/SituationValidInputRangeTests.cpp
  generated/situation/LongitudinalRelativePositionTests.cpp
  generated/situation/LongitudinalRelativePositionValidInputRangeTests.cpp
  generated/state/LateralRssStateValidInputRangeTests.cpp
  generated/state/LateralRssStateTests.cpp
  generated/state/LateralResponseTests.cpp
  generated/state/LateralResponseValidInputRangeTests.cpp
  generated/state/RssStateInformationValidInputRangeTests.cpp
  generated/state/RssStateInformationTests.cpp
  generated/state/RssStateVectorValidInputRangeTests.cpp
  generated/state/LongitudinalResponseTests.cpp
  generated/state/LongitudinalResponseValidInputRangeTests.cpp
  generated/state/ProperResponseTests.cpp
  generated/state/ProperResponseValidInputRangeTests.cpp
  generated/state/RssStateEvaluatorValidInputRangeTests.cpp
  generated/state/RssStateEvaluatorTests.cpp
  generated/state/RssStateValidInputRangeTests.cpp
  generated/state/RssStateTests.cpp
  generated/state/LongitudinalRssStateTests.cpp
  generated/state/LongitudinalRssStateValidInputRangeTests.cpp
  generated/state/RssStateSnapshotTests.cpp
  generated/state/RssStateSnapshotValidInputRangeTests.cpp
  generated/world/WorldModelTests.cpp
  generated/world/WorldModelValidInputRangeTests.cpp
  generated/world/LaneSegmentTests.cpp
  generated/world/LaneSegmentValidInputRangeTests.cpp
  generated/world/ObjectTypeValidInputRangeTests.cpp
  generated/world/ObjectTypeTests.cpp
  generated/world/AccelerationRestrictionValidInputRangeTests.cpp
  generated/world/AccelerationRestrictionTests.cpp
  generated/world/SceneVectorValidInputRangeTests.cpp
  generated/world/LaneSegmentTypeValidInputRangeTests.cpp
  generated/world/LaneSegmentTypeTests.cpp
  generated/world/RoadAreaValidInputRangeTests.cpp
  generated/world/LongitudinalRssAccelerationValuesValidInputRangeTests.cpp
  generated/world/LongitudinalRssAccelerationValuesTests.cpp
  generated/world/ObjectValidInputRangeTests.cpp
  generated/world/ObjectTests.cpp
  generated/world/LateralRssAccelerationValuesValidInputRangeTests.cpp
  generated/world/LateralRssAccelerationValuesTests.cpp
  generated/world/ObjectIdVectorValidInputRangeTests.cpp
  generated/world/LaneDrivingDirectionTests.cpp
  generated/world/LaneDrivingDirectionValidInputRangeTests.cpp
  generated/world/VelocityTests.cpp
  generated/world/VelocityValidInputRangeTests.cpp
  generated/world/OccupiedRegionTests.cpp
  generated/world/OccupiedRegionValidInputRangeTests.cpp
  generated/world/RssDynamicsValidInputRangeTests.cpp
  generated/world/RssDynamicsTests.cpp
  generated/world/RoadSegmentValidInputRangeTests.cpp
  generated/world/SceneTests.cpp
  generated/world/SceneValidInputRangeTests.cpp
  generated/world/OccupiedRegionVectorValidInputRangeTests.cpp
)
