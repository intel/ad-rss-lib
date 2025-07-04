#!/bin/env python

# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (c) 2019-2021 Intel Corporation
#
# SPDX-License-Identifier: LGPL-2.1-only
#
# ----------------- END LICENSE BLOCK -----------------------------------

"""
Simple unittest module to ensure that the Python binding is functional
"""

import unittest
import xmlrunner
import math
import sys
import os

import ad_rss as ad


class AdRssPythonTest(unittest.TestCase):

    """
    Test class for Python interface
    """

    world_model = None

    road_length = 1000.0
    road_width = 5.0

    def _getUnstructuedSettings(self):
        """
        Fill unstructured settings
        """
        unstructured_settings = ad.rss.world.UnstructuredSettings()
        unstructured_settings.pedestrian_turning_radius = ad.physics.Distance(2.0)
        unstructured_settings.drive_away_max_angle = ad.physics.Angle(2.4)
        unstructured_settings.vehicle_yaw_rate_change = ad.physics.AngularAcceleration(0.3)
        unstructured_settings.vehicle_min_radius = ad.physics.Distance(3.5)
        unstructured_settings.vehicle_trajectory_calculation_step = ad.physics.Duration(0.2)
        return unstructured_settings

    def _createObject(self, object_id, object_type, lonVelocity, latVelocity, occupiedRegion):
        """
        Fill basic object data
        """
        rss_vehicle = ad.rss.world.Object()
        rss_vehicle.object_id = object_id
        rss_vehicle.object_type = object_type
        rss_vehicle.velocity.speed_lon_min = lonVelocity
        rss_vehicle.velocity.speed_lon_max = lonVelocity
        rss_vehicle.velocity.speed_lat_min = latVelocity
        rss_vehicle.velocity.speed_lat_max = latVelocity

        rss_vehicle.state.yaw = ad.physics.Angle(0.0)
        rss_vehicle.state.dimension.length = ad.physics.Distance(4.0)
        rss_vehicle.state.dimension.width = ad.physics.Distance(2.0)
        rss_vehicle.state.yaw_rate = ad.physics.AngularVelocity(0.0)
        rss_vehicle.state.center_point.x = ad.physics.Distance(0.0)
        rss_vehicle.state.center_point.y = ad.physics.Distance(0.0)
        speed = math.sqrt(lonVelocity * lonVelocity + latVelocity * latVelocity)
        rss_vehicle.state.speed_range.minimum = speed
        rss_vehicle.state.speed_range.maximum = speed
        rss_vehicle.state.steering_angle = ad.physics.Angle(0.0)

        rss_vehicle.occupied_regions.append(occupiedRegion)
        return rss_vehicle

    def _prepare_world_model(self):
        """
        Setup RSS world model
        """

        occupied_region = ad.rss.world.OccupiedRegion()
        occupied_region.segment_id = 0
        occupied_region.lat_range.minimum = ad.physics.ParametricValue(0)
        occupied_region.lat_range.maximum = ad.physics.ParametricValue(2.0 / self.road_width)
        occupied_region.lon_range.minimum = ad.physics.ParametricValue(0.)
        occupied_region.lon_range.maximum = ad.physics.ParametricValue(5.0 / self.road_length)
        rss_vehicle_a = self._createObject(0, ad.rss.world.ObjectType.EgoVehicle, 20., 0., occupied_region)

        occupied_region.lon_range.minimum = ad.physics.ParametricValue(100.0 / self.road_length)
        occupied_region.lon_range.maximum = ad.physics.ParametricValue((5.0 + 100) / self.road_length)
        rss_vehicle_b = self._createObject(1, ad.rss.world.ObjectType.OtherVehicle, 10., 0., occupied_region)

        rss_constellation = ad.rss.world.Constellation()

        rss_constellation.ego_vehicle = rss_vehicle_a
        rss_constellation.object = rss_vehicle_b
        rss_constellation.constellation_type = ad.rss.world.ConstellationType.SameDirection

        road_segment = ad.rss.world.RoadSegment()
        lane_segment = ad.rss.world.LaneSegment()
        lane_segment.id = 0
        lane_segment.length.minimum = ad.physics.Distance(self.road_length)
        lane_segment.length.maximum = ad.physics.Distance(self.road_length)
        lane_segment.width.minimum = ad.physics.Distance(self.road_width)
        lane_segment.width.maximum = ad.physics.Distance(self.road_width)
        lane_segment.driving_direction = ad.rss.world.LaneDrivingDirection.Positive
        road_segment.type = ad.rss.world.RoadSegmentType.Normal
        road_segment.lane_segments.append(lane_segment)
        rss_constellation.ego_vehicle_road.append(road_segment)
        rss_constellation.object_rss_dynamics.response_time = ad.physics.Duration(0.5)
        rss_constellation.object_rss_dynamics.max_speed_on_acceleration = ad.physics.Speed(0.)
        rss_constellation.object_rss_dynamics.alpha_lat.accel_max = ad.physics.Acceleration(1.)
        rss_constellation.object_rss_dynamics.alpha_lat.brake_min = ad.physics.Acceleration(-1.)
        rss_constellation.object_rss_dynamics.alpha_lon.accel_max = ad.physics.Acceleration(4.)
        rss_constellation.object_rss_dynamics.alpha_lon.brake_max = ad.physics.Acceleration(-8.)
        rss_constellation.object_rss_dynamics.alpha_lon.brake_min_correct = ad.physics.Acceleration(-4.)
        rss_constellation.object_rss_dynamics.alpha_lon.brake_min = ad.physics.Acceleration(-4.)
        rss_constellation.object_rss_dynamics.lateral_fluctuation_margin = ad.physics.Distance(0.)
        rss_constellation.object_rss_dynamics.unstructured_settings = self._getUnstructuedSettings()

        rss_constellation.ego_vehicle_rss_dynamics.response_time = ad.physics.Duration(0.2)
        rss_constellation.ego_vehicle_rss_dynamics.max_speed_on_acceleration = ad.physics.Speed(0.)
        rss_constellation.ego_vehicle_rss_dynamics.alpha_lat.accel_max = ad.physics.Acceleration(0.1)
        rss_constellation.ego_vehicle_rss_dynamics.alpha_lat.brake_min = ad.physics.Acceleration(-0.1)
        rss_constellation.ego_vehicle_rss_dynamics.alpha_lon.accel_max = ad.physics.Acceleration(0.1)
        rss_constellation.ego_vehicle_rss_dynamics.alpha_lon.brake_max = ad.physics.Acceleration(-8.)
        rss_constellation.ego_vehicle_rss_dynamics.alpha_lon.brake_min = ad.physics.Acceleration(-4.)
        rss_constellation.ego_vehicle_rss_dynamics.alpha_lon.brake_min_correct = ad.physics.Acceleration(-4.)
        rss_constellation.ego_vehicle_rss_dynamics.lateral_fluctuation_margin = ad.physics.Distance(0.)
        rss_constellation.ego_vehicle_rss_dynamics.unstructured_settings = self._getUnstructuedSettings()

        self.world_model = ad.rss.world.WorldModel()

        self.world_model.time_index = 1
        self.world_model.constellations.append(rss_constellation)
        self.world_model.default_ego_vehicle_rss_dynamics.response_time = ad.physics.Duration(0.2)
        self.world_model.default_ego_vehicle_rss_dynamics.max_speed_on_acceleration = ad.physics.Speed(0.)
        self.world_model.default_ego_vehicle_rss_dynamics.alpha_lat.accel_max = ad.physics.Acceleration(0.1)
        self.world_model.default_ego_vehicle_rss_dynamics.alpha_lat.brake_min = ad.physics.Acceleration(-0.1)
        self.world_model.default_ego_vehicle_rss_dynamics.alpha_lon.accel_max = ad.physics.Acceleration(0.1)
        self.world_model.default_ego_vehicle_rss_dynamics.alpha_lon.brake_max = ad.physics.Acceleration(-8.)
        self.world_model.default_ego_vehicle_rss_dynamics.alpha_lon.brake_min = ad.physics.Acceleration(-4.)
        self.world_model.default_ego_vehicle_rss_dynamics.alpha_lon.brake_min_correct = ad.physics.Acceleration(-4.)
        self.world_model.default_ego_vehicle_rss_dynamics.lateral_fluctuation_margin = ad.physics.Distance(0.)
        self.world_model.default_ego_vehicle_rss_dynamics.unstructured_settings = self._getUnstructuedSettings()

    def test_interface(self):
        """
        Main test part
        """

        self._prepare_world_model()

        print("== Input World Model ==")
        print(self.world_model)

        rss_response_resolving = ad.rss.core.RssResponseResolving()
        rss_situation_checking = ad.rss.core.RssSituationChecking()
        rss_situation_extraction = ad.rss.core.RssSituationExtraction()

        rss_situation_snapshot = ad.rss.core.RssSituationSnapshot()
        self.assertTrue(rss_situation_extraction.extractSituation(self.world_model, rss_situation_snapshot))

        print("== Situation Snaphost ==")
        print(rss_situation_snapshot)

        rss_state_snapshot = ad.rss.state.RssStateSnapshot()
        self.assertTrue(rss_situation_checking.checkSituation(rss_situation_snapshot, rss_state_snapshot))

        rss_proper_response = ad.rss.state.ProperResponse()
        self.assertTrue(rss_response_resolving.provideProperResponse(rss_state_snapshot, rss_proper_response))

        print("== Proper Response ==")
        print(rss_proper_response)

        longitudinal_distance = rss_situation_snapshot.constellations[
            0].relative_position.longitudinal_distance.mDistance

        self.assertTrue(rss_proper_response.is_safe)
        self.assertEqual(longitudinal_distance, 95.0)

        self.world_model.time_index += 1


if __name__ == '__main__':
    if os.environ.get('GTEST_OUTPUT') and os.environ['GTEST_OUTPUT'].startswith('xml:'):
        base_folder = os.environ['GTEST_OUTPUT'][4:]
        unittest.main(testRunner=xmlrunner.XMLTestRunner(output=base_folder))
    else:
        unittest.main()
