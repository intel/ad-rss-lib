// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include <ad/physics/RatioValue.hpp>
#include <algorithm>
#include <vector>
#include "TrajectoryCommon.hpp"
#include "ad/rss/situation/Physics.hpp"
#include "ad/rss/situation/VehicleState.hpp"
#include "ad/rss/unstructured/Geometry.hpp"

/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace situation
 */
namespace unstructured {

class TrajectoryVehicle
{
public:
  static const double maxRadius;

  TrajectoryVehicle()
  {
  }

  bool calculateTrajectorySets(ad::rss::situation::VehicleState const &vehicleState,
                               ad::rss::unstructured::Polygon &brakePolygon,
                               ad::rss::unstructured::Polygon &continueForwardPolygon);

private:
  enum class Side
  {
    front,
    back
  };

  TrajectoryPoint getMaxTrajectoryPoint(ad::rss::situation::VehicleState const &vehicleState,
                                        ad::physics::Duration const &inputTime,
                                        ad::physics::Acceleration const &aUntilResponseTime,
                                        ad::physics::Acceleration const &aAfterResponseTime,
                                        ad::physics::RatioValue const &yawRateRatio,
                                        std::string const &ns) const;

  ad::rss::unstructured::Polygon createTrajectorySet(ad::rss::situation::VehicleState const &vehicleState,
                                                     ad::physics::Duration currentTime,
                                                     ad::physics::Acceleration aAfterResponseTime,
                                                     std::string const &ns);

  ad::rss::unstructured::Line calculateSide(Trajectory const &sidePts,
                                            TrajectoryHeading const side,
                                            ad::physics::Dimension2D const &dimension,
                                            std::string const &ns) const;

  TrajectoryHeading getTrajectoryHeading(Trajectory const &trajectoryPoints) const;

  Trajectory createTrajectory(ad::rss::situation::VehicleState const &vehicleState,
                              ad::physics::Duration const &inputTime,
                              ad::physics::Acceleration const &aUntilResponseTime,
                              ad::physics::Acceleration const &aAfterResponseTime,
                              ad::physics::RatioValue const &yawRateRatio,
                              std::string const &ns) const;

  ad::physics::AngularVelocity calculateYawRate(ad::physics::Duration const &currentTime,
                                                ad::rss::situation::VehicleState const &vehicleState,
                                                ad::physics::ParametricValue const &yawRateDiffPerSecond,
                                                ad::physics::RatioValue const &yawRateRation) const;

  Line calculateFrontWithDimension(Trajectory const &front, ad::physics::Dimension2D const &dimension);
};

} // namespace unstructured
} // namespace rss
} // namespace ad
