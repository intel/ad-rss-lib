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

namespace core {
namespace RSSWorld {

void calcluateRelativeLongitudinalPosition(lane::Interval const &egoInterval,
                                           lane::Interval const &otherInterval,
                                           situation::LongitudinalRelativePosition &longitudinalPosition,
                                           situation::Distance &longitudinalDistance) noexcept
{
  if (egoInterval.minimum > otherInterval.maximum)
  {
    longitudinalPosition = situation::LongitudinalRelativePosition::InFront;
    longitudinalDistance = egoInterval.minimum - otherInterval.maximum;
  }
  else if (otherInterval.minimum > egoInterval.maximum)
  {
    longitudinalPosition = situation::LongitudinalRelativePosition::AtBack;
    longitudinalDistance = otherInterval.minimum - egoInterval.maximum;
  }
  else
  {
    longitudinalDistance = 0.;
    if ((egoInterval.minimum > otherInterval.minimum) && (egoInterval.maximum > otherInterval.maximum))
    {
      longitudinalPosition = situation::LongitudinalRelativePosition::OverlapFront;
    }
    else if ((egoInterval.minimum < otherInterval.minimum) && (egoInterval.maximum < otherInterval.maximum))
    {
      longitudinalPosition = situation::LongitudinalRelativePosition::OverlapBack;
    }
    else
    {
      longitudinalPosition = situation::LongitudinalRelativePosition::Overlap;
    }
  }
}

void calcluateRelativeLateralPosition(lane::Interval const &egoInterval,
                                      lane::Interval const &otherInterval,
                                      situation::LateralRelativePosition &lateralPosition,
                                      situation::Distance &lateralDistance) noexcept
{
  if (egoInterval.minimum > otherInterval.maximum)
  {
    lateralPosition = situation::LateralRelativePosition::AtRight;
    lateralDistance = egoInterval.minimum - otherInterval.maximum;
  }
  else if (otherInterval.minimum > egoInterval.maximum)
  {
    lateralPosition = situation::LateralRelativePosition::AtLeft;
    lateralDistance = otherInterval.minimum - egoInterval.maximum;
  }
  else
  {
    lateralDistance = 0.;
    if ((egoInterval.minimum > otherInterval.minimum) && (egoInterval.maximum > otherInterval.maximum))
    {
      lateralPosition = situation::LateralRelativePosition::OverlapRight;
    }
    else if ((egoInterval.minimum < otherInterval.minimum) && (egoInterval.maximum < otherInterval.maximum))
    {
      lateralPosition = situation::LateralRelativePosition::OverlapLeft;
    }
    else
    {
      lateralPosition = situation::LateralRelativePosition::Overlap;
    }
  }
}

situation::RelativePosition calcluateRelativePosition(lane::Position const &egoPosition,
                                                      lane::Position const &otherPosition,
                                                      bool const isDrivingInOppositeDirection) noexcept
{
  situation::RelativePosition relativePosition;

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
