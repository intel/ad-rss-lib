// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// INTEL CONFIDENTIAL
//
// Copyright (c) 2018 Intel Corporation
//
// This software and the related documents are Intel copyrighted materials, and
// your use of them is governed by the express license under which they were
// provided to you (License). Unless the License provides otherwise, you may not
// use, modify, copy, publish, distribute, disclose or transmit this software or
// the related documents without Intel's prior written permission.
//
// This software and the related documents are provided as is, with no express or
// implied warranties, other than those that are expressly stated in the License.
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "rss/core/RssSituationExtraction.hpp"

namespace rss {

namespace core {
namespace RssSituationExtraction {

void calcluateRelativeLongitudinalPosition(world::MetricRange const &egoMetricRange,
                                           world::MetricRange const &otherMetricRange,
                                           situation::LongitudinalRelativePosition &longitudinalPosition,
                                           situation::Distance &longitudinalDistance) noexcept
{
  if (egoMetricRange.minimum > otherMetricRange.maximum)
  {
    longitudinalPosition = situation::LongitudinalRelativePosition::InFront;
    longitudinalDistance = egoMetricRange.minimum - otherMetricRange.maximum;
  }
  else if (otherMetricRange.minimum > egoMetricRange.maximum)
  {
    longitudinalPosition = situation::LongitudinalRelativePosition::AtBack;
    longitudinalDistance = otherMetricRange.minimum - egoMetricRange.maximum;
  }
  else
  {
    longitudinalDistance = 0.;
    if ((egoMetricRange.minimum > otherMetricRange.minimum) && (egoMetricRange.maximum > otherMetricRange.maximum))
    {
      longitudinalPosition = situation::LongitudinalRelativePosition::OverlapFront;
    }
    else if ((egoMetricRange.minimum < otherMetricRange.minimum) && (egoMetricRange.maximum < otherMetricRange.maximum))
    {
      longitudinalPosition = situation::LongitudinalRelativePosition::OverlapBack;
    }
    else
    {
      longitudinalPosition = situation::LongitudinalRelativePosition::Overlap;
    }
  }
}

void calcluateRelativeLateralPosition(world::MetricRange const &egoMetricRange,
                                      world::MetricRange const &otherMetricRange,
                                      situation::LateralRelativePosition &lateralPosition,
                                      situation::Distance &lateralDistance) noexcept
{
  if (egoMetricRange.minimum > otherMetricRange.maximum)
  {
    lateralPosition = situation::LateralRelativePosition::AtRight;
    lateralDistance = egoMetricRange.minimum - otherMetricRange.maximum;
  }
  else if (otherMetricRange.minimum > egoMetricRange.maximum)
  {
    lateralPosition = situation::LateralRelativePosition::AtLeft;
    lateralDistance = otherMetricRange.minimum - egoMetricRange.maximum;
  }
  else
  {
    lateralDistance = 0.;
    if ((egoMetricRange.minimum > otherMetricRange.minimum) && (egoMetricRange.maximum > otherMetricRange.maximum))
    {
      lateralPosition = situation::LateralRelativePosition::OverlapRight;
    }
    else if ((egoMetricRange.minimum < otherMetricRange.minimum) && (egoMetricRange.maximum < otherMetricRange.maximum))
    {
      lateralPosition = situation::LateralRelativePosition::OverlapLeft;
    }
    else
    {
      lateralPosition = situation::LateralRelativePosition::Overlap;
    }
  }
}

bool extractSituation(world::Object const &egoVehicle,
                      world::Object const &objectToBeChecked,
                      situation::Situation &situation) noexcept
{
  (void)egoVehicle;
  (void)objectToBeChecked;
  (void)situation;
  return false;
}

bool extractSituations(world::WorldModel const &worldModel, situation::SituationVector &situationVector) noexcept
{
  bool result = true;

  for (auto const &object : worldModel.objects)
  {
    situation::Situation situation;
    situation.timeIndex = worldModel.timeIndex;
    bool const extractResult = extractSituation(worldModel.egoVehicle, object, situation);
    if (extractResult)
    {
      try
      {
        situationVector.push_back(situation);
      }
      catch (...)
      {
        result = false;
      }
    }
    else
    {
      result = false;
    }
  }
  return result;
}

} // namespace RssSituationExtraction
} // namespace core
} // namespace rss
