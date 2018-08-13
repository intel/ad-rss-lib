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

#include "rss/core/RSSWorld.hpp"

namespace rss {

using namespace lane;

namespace core {
namespace RSSWorld {

void calcluateRelativeLongitudinalPosition(Interval const &egoInterval,
                                           Interval const &otherInterval,
                                           LongitudinalRelativePosition &longitudinalPosition,
                                           Distance &longitudinalDistance) noexcept
{
  if (egoInterval.minimum > otherInterval.maximum)
  {
    longitudinalPosition = LongitudinalRelativePosition::InFront;
    longitudinalDistance = egoInterval.minimum - otherInterval.maximum;
  }
  else if (otherInterval.minimum > egoInterval.maximum)
  {
    longitudinalPosition = LongitudinalRelativePosition::AtBack;
    longitudinalDistance = otherInterval.minimum - egoInterval.maximum;
  }
  else
  {
    longitudinalDistance = 0.;
    if ((egoInterval.minimum > otherInterval.minimum) && (egoInterval.maximum > otherInterval.maximum))
    {
      longitudinalPosition = LongitudinalRelativePosition::OverlapFront;
    }
    else if ((egoInterval.minimum < otherInterval.minimum) && (egoInterval.maximum < otherInterval.maximum))
    {
      longitudinalPosition = LongitudinalRelativePosition::OverlapBack;
    }
    else
    {
      longitudinalPosition = LongitudinalRelativePosition::Overlap;
    }
  }
}

void calcluateRelativeLateralPosition(Interval const &egoInterval,
                                      Interval const &otherInterval,
                                      LateralRelativePosition &lateralPosition,
                                      Distance &lateralDistance) noexcept
{
  if (egoInterval.minimum > otherInterval.maximum)
  {
    lateralPosition = LateralRelativePosition::AtRight;
    lateralDistance = egoInterval.minimum - otherInterval.maximum;
  }
  else if (otherInterval.minimum > egoInterval.maximum)
  {
    lateralPosition = LateralRelativePosition::AtLeft;
    lateralDistance = otherInterval.minimum - egoInterval.maximum;
  }
  else
  {
    lateralDistance = 0.;
    if ((egoInterval.minimum > otherInterval.minimum) && (egoInterval.maximum > otherInterval.maximum))
    {
      lateralPosition = LateralRelativePosition::OverlapRight;
    }
    else if ((egoInterval.minimum < otherInterval.minimum) && (egoInterval.maximum < otherInterval.maximum))
    {
      lateralPosition = LateralRelativePosition::OverlapLeft;
    }
    else
    {
      lateralPosition = LateralRelativePosition::Overlap;
    }
  }
}

RelativePosition calcluateRelativePosition(Position const &egoPosition,
                                           Position const &otherPosition,
                                           bool const isDrivingInOppositeDirection) noexcept
{
  RelativePosition relativePosition;

  calcluateRelativeLongitudinalPosition(egoPosition.lonInterval,
                                        otherPosition.lonInterval,
                                        relativePosition.longitudinalPosition,
                                        relativePosition.longitudinalDistance);

  calcluateRelativeLateralPosition(egoPosition.latInterval,
                                   otherPosition.latInterval,
                                   relativePosition.lateralPosition,
                                   relativePosition.lateralDistance);

  relativePosition.isDrivingInOppositeDirection = isDrivingInOppositeDirection;

  return relativePosition;
}

} // namespace RSSWorld
} // namespace core
} // namespace rss
