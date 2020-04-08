#!/bin/env python

# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (c) 2019-2020 Intel Corporation
#
# SPDX-License-Identifier: LGPL-2.1-only
#
# ----------------- END LICENSE BLOCK -----------------------------------

"""
Simple unittest module to ensure that the Python binding is functional
"""

import unittest
import xmlrunner
import sys
import os

if sys.version_info.major == 3:
    import libad_physics_python3 as physics
    import libad_rss_python3 as rss
else:
    import libad_physics_python2 as physics
    import libad_rss_python2 as rss


class InterfaceTest(unittest.TestCase):

    """
    Test class for Python interface
    """

    world_model = None

    road_length = 1000.0
    road_width = 5.0

    def _prepare_world_model(self):
        """
        Setup RSS world model
        """

        rss_vehicle_a = rss.Object()
        rss_vehicle_b = rss.Object()

        rss_vehicle_a.objectType = rss.ObjectType.EgoVehicle
        rss_vehicle_a.velocity.speedLonMin = physics.Speed(20.0)
        rss_vehicle_a.velocity.speedLonMax = physics.Speed(20.0)
        rss_vehicle_a.velocity.speedLatMin = physics.Speed(0.0)
        rss_vehicle_a.velocity.speedLatMax = physics.Speed(0.0)
        rss_vehicle_a.objectId = 0

        occupied_region = rss.OccupiedRegion()
        occupied_region.segmentId = 0
        occupied_region.latRange.minimum = physics.ParametricValue(0)
        occupied_region.latRange.maximum = physics.ParametricValue(2.0 / self.road_width)
        occupied_region.lonRange.minimum = physics.ParametricValue(0.)
        occupied_region.lonRange.maximum = physics.ParametricValue(5.0 / self.road_length)

        rss_vehicle_a.occupiedRegions.append(occupied_region)

        rss_vehicle_b.objectType = rss.ObjectType.OtherVehicle
        rss_vehicle_b.velocity.speedLonMin = physics.Speed(10.0)
        rss_vehicle_b.velocity.speedLonMax = physics.Speed(10.0)
        rss_vehicle_b.velocity.speedLatMin = physics.Speed(0.0)
        rss_vehicle_b.velocity.speedLatMax = physics.Speed(0.0)
        rss_vehicle_b.objectId = 1

        occupied_region.lonRange.minimum = physics.ParametricValue(100.0 / self.road_length)
        occupied_region.lonRange.maximum = physics.ParametricValue((5.0 + 100) / self.road_length)
        rss_vehicle_b.occupiedRegions.append(occupied_region)

        rss_scene = rss.Scene()

        rss_scene.egoVehicle = rss_vehicle_a
        rss_scene.object = rss_vehicle_b
        rss_scene.situationType = rss.SituationType.SameDirection

        road_segment = rss.RoadSegment()
        lane_segment = rss.LaneSegment()
        lane_segment.id = 0
        lane_segment.length.minimum = physics.Distance(self.road_length)
        lane_segment.length.maximum = physics.Distance(self.road_length)
        lane_segment.width.minimum = physics.Distance(self.road_width)
        lane_segment.width.maximum = physics.Distance(self.road_width)
        lane_segment.type = rss.LaneSegmentType.Normal
        lane_segment.drivingDirection = rss.LaneDrivingDirection.Positive
        road_segment.append(lane_segment)
        rss_scene.egoVehicleRoad.append(road_segment)
        rss_scene.objectRssDynamics.responseTime = physics.Duration(0.5)
        rss_scene.objectRssDynamics.alphaLat.accelMax = physics.Acceleration(1.)
        rss_scene.objectRssDynamics.alphaLat.brakeMin = physics.Acceleration(-1.)
        rss_scene.objectRssDynamics.alphaLon.accelMax = physics.Acceleration(4.)
        rss_scene.objectRssDynamics.alphaLon.brakeMax = physics.Acceleration(-8.)
        rss_scene.objectRssDynamics.alphaLon.brakeMinCorrect = physics.Acceleration(-4.)
        rss_scene.objectRssDynamics.alphaLon.brakeMin = physics.Acceleration(-4.)
        rss_scene.objectRssDynamics.lateralFluctuationMargin = physics.Distance(0.)

        rss_scene.egoVehicleRssDynamics.responseTime = physics.Duration(0.2)
        rss_scene.egoVehicleRssDynamics.alphaLat.accelMax = physics.Acceleration(0.1)
        rss_scene.egoVehicleRssDynamics.alphaLat.brakeMin = physics.Acceleration(-0.1)
        rss_scene.egoVehicleRssDynamics.alphaLon.accelMax = physics.Acceleration(0.1)
        rss_scene.egoVehicleRssDynamics.alphaLon.brakeMax = physics.Acceleration(-8.)
        rss_scene.egoVehicleRssDynamics.alphaLon.brakeMin = physics.Acceleration(-4.)
        rss_scene.egoVehicleRssDynamics.alphaLon.brakeMinCorrect = physics.Acceleration(-4.)
        rss_scene.egoVehicleRssDynamics.lateralFluctuationMargin = physics.Distance(0.)

        self.world_model = rss.WorldModel()

        self.world_model.timeIndex = 1
        self.world_model.scenes.append(rss_scene)
        self.world_model.defaultEgoVehicleRssDynamics.responseTime = physics.Duration(0.2)
        self.world_model.defaultEgoVehicleRssDynamics.alphaLat.accelMax = physics.Acceleration(0.1)
        self.world_model.defaultEgoVehicleRssDynamics.alphaLat.brakeMin = physics.Acceleration(-0.1)
        self.world_model.defaultEgoVehicleRssDynamics.alphaLon.accelMax = physics.Acceleration(0.1)
        self.world_model.defaultEgoVehicleRssDynamics.alphaLon.brakeMax = physics.Acceleration(-8.)
        self.world_model.defaultEgoVehicleRssDynamics.alphaLon.brakeMin = physics.Acceleration(-4.)
        self.world_model.defaultEgoVehicleRssDynamics.alphaLon.brakeMinCorrect = physics.Acceleration(-4.)
        self.world_model.defaultEgoVehicleRssDynamics.lateralFluctuationMargin = physics.Distance(0.)

    def test_interface(self):
        """
        Main test part
        """

        self._prepare_world_model()

        print ("== Input World Model ==")
        print(self.world_model)

        rss_response_resolving = rss.RssResponseResolving()
        rss_situation_checking = rss.RssSituationChecking()
        rss_sitation_extraction = rss.RssSituationExtraction()

        rss_situation_snapshot = rss.SituationSnapshot()
        self.assertTrue(rss_sitation_extraction.extractSituations(self.world_model, rss_situation_snapshot))

        print ("== Situation Snaphost ==")
        print (rss_situation_snapshot)

        rss_state_snapshot = rss.RssStateSnapshot()
        self.assertTrue(rss_situation_checking.checkSituations(rss_situation_snapshot, rss_state_snapshot))

        rss_proper_response = rss.ProperResponse()
        acceleration_restriction = rss.AccelerationRestriction()
        self.assertTrue(rss_response_resolving.provideProperResponse(
            rss_state_snapshot, rss_proper_response, acceleration_restriction))

        print ("== Acceleration Restrictions ==")
        print (acceleration_restriction)

        longitudinal_distance = float(rss_situation_snapshot.situations[0].relativePosition.longitudinalDistance)

        self.assertTrue(rss_proper_response.isSafe)
        self.assertEqual(longitudinal_distance, 95.0)

        self.world_model.timeIndex += 1


if __name__ == '__main__':
    if os.environ['GTEST_OUTPUT'] and os.environ['GTEST_OUTPUT'].startswith('xml:'):
        base_folder = os.environ['GTEST_OUTPUT'][4:]
        result_filename = base_folder + 'ad_rss_interface_test_python' + str(sys.version_info.major) + ".xml"
        with open(result_filename, "w+") as result_file:
            unittest.main(testRunner=xmlrunner.XMLTestRunner(output=result_file))
    else:
        unittest.main()
