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
        unstructuredSettings = ad.rss.world.UnstructuredSettings()
        unstructuredSettings.pedestrianTurningRadius = ad.physics.Distance(2.0)
        unstructuredSettings.driveAwayMaxAngle = ad.physics.Angle(2.4)
        unstructuredSettings.vehicleYawRateChange = ad.physics.AngularAcceleration(0.3)
        unstructuredSettings.vehicleMinRadius = ad.physics.Distance(3.5)
        unstructuredSettings.vehicleTrajectoryCalculationStep = ad.physics.Duration(0.2)
        return unstructuredSettings

    def _createObject(self, objectId, objectType, lonVelocity, latVelocity, occupiedRegion):
        """
        Fill basic object data
        """
        rss_vehicle = ad.rss.world.Object()
        rss_vehicle.objectId = objectId
        rss_vehicle.objectType = objectType
        rss_vehicle.velocity.speedLonMin = lonVelocity
        rss_vehicle.velocity.speedLonMax = lonVelocity
        rss_vehicle.velocity.speedLatMin = latVelocity
        rss_vehicle.velocity.speedLatMax = latVelocity

        rss_vehicle.state.yaw = ad.physics.Angle(0.0)
        rss_vehicle.state.dimension.length = ad.physics.Distance(4.0)
        rss_vehicle.state.dimension.width = ad.physics.Distance(2.0)
        rss_vehicle.state.yawRate = ad.physics.AngularVelocity(0.0)
        rss_vehicle.state.centerPoint.x = ad.physics.Distance(0.0)
        rss_vehicle.state.centerPoint.y = ad.physics.Distance(0.0)
        rss_vehicle.state.speed = math.sqrt(lonVelocity * lonVelocity + latVelocity * latVelocity)
        rss_vehicle.state.steeringAngle = ad.physics.Angle(0.0)

        rss_vehicle.occupiedRegions.append(occupiedRegion)
        return rss_vehicle

    def _prepare_world_model(self):
        """
        Setup RSS world model
        """

        occupied_region = ad.rss.world.OccupiedRegion()
        occupied_region.segmentId = 0
        occupied_region.latRange.minimum = ad.physics.ParametricValue(0)
        occupied_region.latRange.maximum = ad.physics.ParametricValue(2.0 / self.road_width)
        occupied_region.lonRange.minimum = ad.physics.ParametricValue(0.)
        occupied_region.lonRange.maximum = ad.physics.ParametricValue(5.0 / self.road_length)
        rss_vehicle_a = self._createObject(0, ad.rss.world.ObjectType.EgoVehicle, 20., 0., occupied_region)

        occupied_region.lonRange.minimum = ad.physics.ParametricValue(100.0 / self.road_length)
        occupied_region.lonRange.maximum = ad.physics.ParametricValue((5.0 + 100) / self.road_length)
        rss_vehicle_b = self._createObject(1, ad.rss.world.ObjectType.OtherVehicle, 10., 0., occupied_region)

        rss_scene = ad.rss.world.Scene()

        rss_scene.egoVehicle = rss_vehicle_a
        rss_scene.object = rss_vehicle_b
        rss_scene.situationType = ad.rss.situation.SituationType.SameDirection

        road_segment = ad.rss.world.RoadSegment()
        lane_segment = ad.rss.world.LaneSegment()
        lane_segment.id = 0
        lane_segment.length.minimum = ad.physics.Distance(self.road_length)
        lane_segment.length.maximum = ad.physics.Distance(self.road_length)
        lane_segment.width.minimum = ad.physics.Distance(self.road_width)
        lane_segment.width.maximum = ad.physics.Distance(self.road_width)
        lane_segment.type = ad.rss.world.LaneSegmentType.Normal
        lane_segment.drivingDirection = ad.rss.world.LaneDrivingDirection.Positive
        road_segment.append(lane_segment)
        rss_scene.egoVehicleRoad.append(road_segment)
        rss_scene.objectRssDynamics.responseTime = ad.physics.Duration(0.5)
        rss_scene.objectRssDynamics.maxSpeedOnAcceleration = ad.physics.Speed(0.)
        rss_scene.objectRssDynamics.alphaLat.accelMax = ad.physics.Acceleration(1.)
        rss_scene.objectRssDynamics.alphaLat.brakeMin = ad.physics.Acceleration(-1.)
        rss_scene.objectRssDynamics.alphaLon.accelMax = ad.physics.Acceleration(4.)
        rss_scene.objectRssDynamics.alphaLon.brakeMax = ad.physics.Acceleration(-8.)
        rss_scene.objectRssDynamics.alphaLon.brakeMinCorrect = ad.physics.Acceleration(-4.)
        rss_scene.objectRssDynamics.alphaLon.brakeMin = ad.physics.Acceleration(-4.)
        rss_scene.objectRssDynamics.lateralFluctuationMargin = ad.physics.Distance(0.)
        rss_scene.objectRssDynamics.unstructuredSettings = self._getUnstructuedSettings()

        rss_scene.egoVehicleRssDynamics.responseTime = ad.physics.Duration(0.2)
        rss_scene.egoVehicleRssDynamics.maxSpeedOnAcceleration = ad.physics.Speed(0.)
        rss_scene.egoVehicleRssDynamics.alphaLat.accelMax = ad.physics.Acceleration(0.1)
        rss_scene.egoVehicleRssDynamics.alphaLat.brakeMin = ad.physics.Acceleration(-0.1)
        rss_scene.egoVehicleRssDynamics.alphaLon.accelMax = ad.physics.Acceleration(0.1)
        rss_scene.egoVehicleRssDynamics.alphaLon.brakeMax = ad.physics.Acceleration(-8.)
        rss_scene.egoVehicleRssDynamics.alphaLon.brakeMin = ad.physics.Acceleration(-4.)
        rss_scene.egoVehicleRssDynamics.alphaLon.brakeMinCorrect = ad.physics.Acceleration(-4.)
        rss_scene.egoVehicleRssDynamics.lateralFluctuationMargin = ad.physics.Distance(0.)
        rss_scene.egoVehicleRssDynamics.unstructuredSettings = self._getUnstructuedSettings()

        self.world_model = ad.rss.world.WorldModel()

        self.world_model.timeIndex = 1
        self.world_model.scenes.append(rss_scene)
        self.world_model.defaultEgoVehicleRssDynamics.responseTime = ad.physics.Duration(0.2)
        self.world_model.defaultEgoVehicleRssDynamics.maxSpeedOnAcceleration = ad.physics.Speed(0.)
        self.world_model.defaultEgoVehicleRssDynamics.alphaLat.accelMax = ad.physics.Acceleration(0.1)
        self.world_model.defaultEgoVehicleRssDynamics.alphaLat.brakeMin = ad.physics.Acceleration(-0.1)
        self.world_model.defaultEgoVehicleRssDynamics.alphaLon.accelMax = ad.physics.Acceleration(0.1)
        self.world_model.defaultEgoVehicleRssDynamics.alphaLon.brakeMax = ad.physics.Acceleration(-8.)
        self.world_model.defaultEgoVehicleRssDynamics.alphaLon.brakeMin = ad.physics.Acceleration(-4.)
        self.world_model.defaultEgoVehicleRssDynamics.alphaLon.brakeMinCorrect = ad.physics.Acceleration(-4.)
        self.world_model.defaultEgoVehicleRssDynamics.lateralFluctuationMargin = ad.physics.Distance(0.)
        self.world_model.defaultEgoVehicleRssDynamics.unstructuredSettings = self._getUnstructuedSettings()

    def test_getHeadingOverlap(self):
        """
        Additional test for unstructured
        """
        heading_range = ad.rss.state.HeadingRange()
        heading_range.begin = ad.physics.Angle(0)
        heading_range.end = ad.physics.cPI

        overlap_ranges = ad.rss.state.HeadingRangeVector()
        result_range = ad.rss.state.HeadingRange()
        result_range.begin = ad.physics.Angle(0)
        result_range.end = ad.physics.Angle(0)
        overlap_ranges.append(result_range)

        result_range.begin = ad.physics.Angle(1. / 4. * ad.physics.cPI)
        result_range.end = ad.physics.Angle(1. / 2. * ad.physics.cPI)
        overlap_ranges.append(result_range)

        self.assertTrue(ad.rss.unstructured.getHeadingOverlap(heading_range, overlap_ranges))
        self.assertEqual(2, len(overlap_ranges))
        self.assertEqual(ad.physics.Angle(0.0), overlap_ranges[0].begin)
        self.assertEqual(ad.physics.Angle(0.0), overlap_ranges[0].end)
        self.assertEqual(1. / 4. * ad.physics.cPI, overlap_ranges[1].begin)
        self.assertEqual(1. / 2. * ad.physics.cPI, overlap_ranges[1].end)



    def test_interface(self):
        """
        Main test part
        """

        self._prepare_world_model()

        print("== Input World Model ==")
        print(self.world_model)

        rss_response_resolving = ad.rss.core.RssResponseResolving()
        rss_situation_checking = ad.rss.core.RssSituationChecking()
        rss_sitation_extraction = ad.rss.core.RssSituationExtraction()

        rss_situation_snapshot = ad.rss.situation.SituationSnapshot()
        self.assertTrue(rss_sitation_extraction.extractSituations(self.world_model, rss_situation_snapshot))

        print("== Situation Snaphost ==")
        print(rss_situation_snapshot)

        rss_state_snapshot = ad.rss.state.RssStateSnapshot()
        self.assertTrue(rss_situation_checking.checkSituations(rss_situation_snapshot, rss_state_snapshot))

        rss_proper_response = ad.rss.state.ProperResponse()
        self.assertTrue(rss_response_resolving.provideProperResponse(rss_state_snapshot, rss_proper_response))

        print("== Proper Response ==")
        print(rss_proper_response)

        longitudinal_distance = float(rss_situation_snapshot.situations[0].relativePosition.longitudinalDistance)

        self.assertTrue(rss_proper_response.isSafe)
        self.assertEqual(longitudinal_distance, 95.0)

        self.world_model.timeIndex += 1


if __name__ == '__main__':
    if os.environ.get('GTEST_OUTPUT') and os.environ['GTEST_OUTPUT'].startswith('xml:'):
        base_folder = os.environ['GTEST_OUTPUT'][4:]
        result_filename = base_folder + 'ad_rss_interface_test_python' + str(sys.version_info.major) + ".xml"
        with open(result_filename, "w+") as result_file:
            unittest.main(testRunner=xmlrunner.XMLTestRunner(output=result_file))
    else:
        unittest.main()
