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

  bool getMaxTrajectory(ad::rss::situation::VehicleState const &vehicleState,
                        ad::rss::unstructured::Polygon &brakePolygon,
                        ad::rss::unstructured::Polygon &continueForwardPolygon);

private:
  enum class TrajectoryHeading
  {
    left,
    right,
    straight
  };

  enum class Side
  {
    front,
    back
  };

  enum class VehicleCorner
  {
    frontLeft,
    frontRight,
    backLeft,
    backRight
  };

  struct TrajectoryPoint
  {
    TrajectoryPoint(ad::rss::unstructured::Point const &inPoint,
                    ad::physics::Angle const &inAngle,
                    TrajectoryHeading const &inHeading)
      : position(inPoint)
      , angle(inAngle)
      , heading(inHeading)
    {
    }
    ad::rss::unstructured::Point position;
    ad::physics::Angle angle;
    TrajectoryHeading heading;
  };

  using Trajectory = std::vector<TrajectoryPoint>;

  TrajectoryPoint getMaxTrajectoryPoint(ad::rss::situation::VehicleState const &vehicleState,
                                        ad::physics::Duration const &inputTime,
                                        ad::physics::Acceleration const &aUntilResponseTime,
                                        ad::physics::Acceleration const &aAfterResponseTime,
                                        ad::physics::RatioValue const &yawRateRatio,
                                        std::string const &ns) const;

  ad::rss::unstructured::Point getVehicleCorner(TrajectoryPoint const &point,
                                                ad::physics::Dimension2D const &dimension,
                                                VehicleCorner const corner) const;

  ad::rss::unstructured::Polygon createTrajectorySet(ad::rss::situation::VehicleState const &vehicleState,
                                                     ad::physics::Duration currentTime,
                                                     ad::physics::Acceleration aAfterResponseTime,
                                                     std::string const &ns);

  ad::rss::unstructured::Line calculateSide(std::vector<TrajectoryPoint> const &sidePts,
                                            TrajectoryHeading const side,
                                            ad::physics::Dimension2D const &dimension,
                                            std::string const &ns) const;

  TrajectoryHeading getTrajectoryHeading(std::vector<TrajectoryPoint> const &trajectoryPoints) const;

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
};

} // namespace unstructured
} // namespace rss
} // namespace ad
