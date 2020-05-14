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
#include "TrajectoryCommon.hpp"
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

class TrajectoryPedestrian
{
public:
  static const double maxRadius;

  TrajectoryPedestrian()
  {
  }

  bool calculateTrajectorySets(::ad::rss::situation::VehicleState const &vehicleState,
                               ad::rss::unstructured::Polygon &brakePolygon,
                               ad::rss::unstructured::Polygon &continueForwardPolygon);

private:
  bool calculateTrajectorySet(ad::physics::Duration const &currentTime,
                              ad::physics::Acceleration const &aAfterResponseTime,
                              ad::rss::situation::VehicleState const &vehicleState,
                              ad::rss::unstructured::Polygon &trajectorySet);

  ad::rss::unstructured::Polygon generate(ad::physics::Duration const &currentTime,
                                          ad::physics::Acceleration const &aAfterResponseTime,
                                          ad::rss::situation::VehicleState const &vehicleState);

  void calculateMaxAngleTrajectory(ad::rss::unstructured::Line &geometry,
                                   ad::physics::Duration const &currentTime,
                                   ad::physics::Acceleration const &aAfterResponseTime,
                                   ad::physics::RatioValue const &angleChangeRatio,
                                   ad::rss::unstructured::Point const &startingPoint,
                                   ad::physics::Angle const &startingAngle,
                                   ad::physics::Speed const &initialSpeed,
                                   ad::rss::world::RssDynamics const &rssDynamics);

  TrajectoryPoint calculateTrajectoryEndPoint(ad::physics::Duration const &currentTime,
                                              ad::physics::Acceleration const &aUntilResponseTime,
                                              ad::physics::Acceleration const &aAfterResponseTime,
                                              ad::physics::RatioValue const &angleChangeRatio,
                                              ad::rss::situation::VehicleState const &vehicleState,
                                              std::string const &ns) const;

  Polygon calculateFrontWithDimension(Trajectory const &trajectory, ad::physics::Dimension2D const &dimension);

  Polygon calculateBackWithDimension(ad::physics::Duration const &currentTime,
                                     ad::physics::Acceleration const &aAfterResponseTime,
                                     situation::VehicleState const &vehicleState);
};

} // namespace unstructured
} // namespace rss
} // namespace ad
