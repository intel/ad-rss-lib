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
  static constexpr double maxRadius{1000.0};

  TrajectoryPedestrian()
  {
  }

  bool getMaxTrajectory(::ad::rss::situation::VehicleState const &vehicleState,
                        ad::rss::unstructured::Polygon &brakePolygon,
                        ad::rss::unstructured::Polygon &continueForwardPolygon);

private:
  ad::rss::unstructured::Point calculateIntersectionPoint(ad::rss::unstructured::Point const &straight,
                                                          ad::rss::unstructured::Point const &maxAccel,
                                                          ad::physics::Distance const &maxDistance,
                                                          ad::rss::unstructured::Point const &startingPoint);

  void calculateTrajectorySetSimplified(ad::physics::Duration const &currentTime,
                                        ad::rss::unstructured::Point const &startingPoint,
                                        ad::physics::Angle const &startingAngle,
                                        ad::physics::Speed const &initialSpeed,
                                        ad::physics::Acceleration const &aAfterResponseTime,
                                        ad::physics::Distance const &maxDistance,
                                        ad::rss::world::RssDynamics const &rssDynamics,
                                        ad::rss::unstructured::Polygon &trajectoryCorridor);

  void calculateTrajectorySetPrecise(ad::physics::Duration const &currentTime,
                                     ad::rss::unstructured::Point const &startingPoint,
                                     ad::physics::Angle const &startingAngle,
                                     ad::physics::Speed const &initialSpeed,
                                     ad::physics::Acceleration const &aAfterResponseTime,
                                     ad::rss::world::RssDynamics const &rssDynamics,
                                     ad::rss::unstructured::Polygon &trajectoryCorridor);

  ad::rss::unstructured::Polygon generate(ad::physics::Duration const &currentTime,
                                          ad::rss::unstructured::Point const &startingPoint,
                                          ad::physics::Angle const &startingAngle,
                                          ad::physics::Speed const &initialSpeed,
                                          ad::physics::Acceleration const &aAfterResponseTime,
                                          ad::rss::world::RssDynamics const &rssDynamics,
                                          bool const preciseTrajectoryCalculation);

  void calculateMaxAngleTrajectory(ad::rss::unstructured::Line &geometry,
                                   ad::physics::Duration const &currentTime,
                                   ad::physics::Acceleration const &aUntilResponseTimeMin,
                                   ad::physics::Acceleration const &aUntilResponseTimeMax,
                                   ad::physics::RatioValue const &angleChangeRatio,
                                   ad::rss::unstructured::Point const &startingPoint,
                                   ad::physics::Angle const &startingAngle,
                                   ad::physics::Speed const &initialSpeed,
                                   ad::rss::world::RssDynamics const &rssDynamics);

  ad::rss::unstructured::Point calculateTrajectoryEndPoint(ad::physics::Duration const &currentTime,
                                                           ad::physics::Acceleration const &aUntilResponseTime,
                                                           ad::physics::RatioValue const &angleChangeRatio,
                                                           ad::rss::unstructured::Point const &startingPoint,
                                                           ad::physics::Angle const &startingAngle,
                                                           ad::physics::Speed const &initialSpeed,
                                                           ad::rss::world::RssDynamics const &rssDynamics) const;
};

} // namespace unstructured
} // namespace rss
} // namespace ad
