#!/bin/env python

# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (c) 2019 Intel Corporation
#
# SPDX-License-Identifier: LGPL-2.1-only
#
# ----------------- END LICENSE BLOCK -----------------------------------

"""
Simple unittest module to ensure that the Python binding is functional
"""

import unittest

import libad_rss_python as rss


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
        rss_vehicle_a.velocity.speedLon = rss.Speed(20.0)
        rss_vehicle_a.velocity.speedLat = rss.Speed(0.0)
        rss_vehicle_a.objectId = 0

        occupied_region = rss.OccupiedRegion()
        occupied_region.segmentId = 0
        occupied_region.latRange.minimum = rss.ParametricValue(0)

        rss_vehicle_a.occupiedRegions.append(occupied_region)
        rss_vehicle_a.occupiedRegions[0].latRange.maximum = rss.ParametricValue(2.0 / self.road_width)
        rss_vehicle_a.occupiedRegions[0].lonRange.minimum = rss.ParametricValue(0.)
        rss_vehicle_a.occupiedRegions[0].lonRange.maximum = rss.ParametricValue(5.0 / self.road_length)

        rss_vehicle_b.objectType = rss.ObjectType.OtherVehicle
        rss_vehicle_b.velocity.speedLon = rss.Speed(10.0)
        rss_vehicle_b.velocity.speedLat = rss.Speed(0.0)
        rss_vehicle_b.objectId = 1

        rss_vehicle_b.occupiedRegions.append(occupied_region)
        rss_vehicle_b.occupiedRegions[0].latRange.maximum = rss.ParametricValue(2.0 / self.road_width)
        rss_vehicle_b.occupiedRegions[0].lonRange.minimum = rss.ParametricValue(100.0 / self.road_length)
        rss_vehicle_b.occupiedRegions[0].lonRange.maximum = rss.ParametricValue((5.0 + 100) / self.road_length)

        rss_scene = rss.Scene()

        rss_scene.egoVehicle = rss_vehicle_a
        rss_scene.object = rss_vehicle_b
        rss_scene.situationType = rss.SituationType.SameDirection

        road_segment = rss.RoadSegment()
        lane_segment = rss.LaneSegment()
        lane_segment.id = 0
        lane_segment.length.minimum = rss.Distance(self.road_length)
        lane_segment.length.maximum = rss.Distance(self.road_length)
        lane_segment.width.minimum = rss.Distance(self.road_width)
        lane_segment.width.maximum = rss.Distance(self.road_width)
        lane_segment.type = rss.LaneSegmentType.Normal
        lane_segment.drivingDirection = rss.LaneDrivingDirection.Positive
        road_segment.append(lane_segment)
        rss_scene.egoVehicleRoad.append(road_segment)
        rss_scene.objectRssDynamics.responseTime = rss.Duration(0.5)
        rss_scene.objectRssDynamics.alphaLat.accelMax = rss.Acceleration(1.)
        rss_scene.objectRssDynamics.alphaLat.brakeMin = rss.Acceleration(1.)
        rss_scene.objectRssDynamics.alphaLon.accelMax = rss.Acceleration(4.)
        rss_scene.objectRssDynamics.alphaLon.brakeMax = rss.Acceleration(8.)
        rss_scene.objectRssDynamics.alphaLon.brakeMinCorrect = rss.Acceleration(4.)
        rss_scene.objectRssDynamics.alphaLon.brakeMin = rss.Acceleration(4.)
        rss_scene.objectRssDynamics.lateralFluctuationMargin = rss.Distance(0.)

        self.world_model = rss.WorldModel()

        self.world_model.timeIndex = 1
        self.world_model.scenes.append(rss_scene)
        self.world_model.egoVehicleRssDynamics.responseTime = rss.Duration(0.2)
        self.world_model.egoVehicleRssDynamics.alphaLat.accelMax = rss.Acceleration(0.1)
        self.world_model.egoVehicleRssDynamics.alphaLat.brakeMin = rss.Acceleration(0.1)
        self.world_model.egoVehicleRssDynamics.alphaLon.accelMax = rss.Acceleration(0.1)
        self.world_model.egoVehicleRssDynamics.alphaLon.brakeMax = rss.Acceleration(8.)
        self.world_model.egoVehicleRssDynamics.alphaLon.brakeMin = rss.Acceleration(4.)
        self.world_model.egoVehicleRssDynamics.alphaLon.brakeMinCorrect = rss.Acceleration(4.)
        self.world_model.egoVehicleRssDynamics.lateralFluctuationMargin = rss.Distance(0.)

    def test_interface(self):
        """
        Main test part
        """

        self._prepare_world_model()

        rss_response_resolving = rss.RssResponseResolving()
        rss_situation_checking = rss.RssSituationChecking()
        rss_sitation_extraction = rss.RssSituationExtraction()

        rss_situation_snapshot = rss.SituationSnapshot()
        self.assertTrue(rss_sitation_extraction.extractSituations(self.world_model, rss_situation_snapshot))

        rss_state_snapshot = rss.RssStateSnapshot()
        self.assertTrue(rss_situation_checking.checkSituations(rss_situation_snapshot, rss_state_snapshot))

        rss_proper_response = rss.ProperResponse()
        self.assertTrue(rss_response_resolving.provideProperResponse(rss_state_snapshot, rss_proper_response))

        acceleration_restriction = rss.AccelerationRestriction()
        self.assertTrue(rss.transformProperResponse(self.world_model, rss_proper_response, acceleration_restriction))

        longitudinal_distance = float(rss_situation_snapshot.situations[0].relativePosition.longitudinalDistance)

        self.assertTrue(rss_proper_response.isSafe)
        self.assertEqual(longitudinal_distance, 95.0)

        self.world_model.timeIndex += 1

if __name__ == '__main__':
    unittest.main()
