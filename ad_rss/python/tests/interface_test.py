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

if sys.version_info.major == 3:
    import libad_physics_python3 as physics
    import libad_rss_python3 as rss
else:
    import libad_physics_python2 as physics
    import libad_rss_python2 as rss


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
        unstructuredSettings = rss.UnstructuredSettings()
        unstructuredSettings.pedestrianTurningRadius = physics.Distance(2.0)
        unstructuredSettings.driveAwayMaxAngle = physics.Angle(2.4)
        unstructuredSettings.vehicleYawRateChange = physics.AngularAcceleration(0.3)
        unstructuredSettings.vehicleMinRadius = physics.Distance(3.5)
        unstructuredSettings.vehicleTrajectoryCalculationStep = physics.Duration(0.2)
        return unstructuredSettings

    def _createObject(self, objectId, objectType, lonVelocity, latVelocity, occupiedRegion):
        """
        Fill basic object data
        """
        rss_vehicle = rss.Object()
        rss_vehicle.objectId = objectId
        rss_vehicle.objectType = objectType
        rss_vehicle.velocity.speedLonMin = lonVelocity
        rss_vehicle.velocity.speedLonMax = lonVelocity
        rss_vehicle.velocity.speedLatMin = latVelocity
        rss_vehicle.velocity.speedLatMax = latVelocity

        rss_vehicle.state.yaw = physics.Angle(0.0)
        rss_vehicle.state.dimension.length = physics.Distance(4.0)
        rss_vehicle.state.dimension.width = physics.Distance(2.0)
        rss_vehicle.state.yawRate = physics.AngularVelocity(0.0)
        rss_vehicle.state.centerPoint.x = physics.Distance(0.0)
        rss_vehicle.state.centerPoint.y = physics.Distance(0.0)
        rss_vehicle.state.speed = math.sqrt(lonVelocity * lonVelocity + latVelocity * latVelocity)

        rss_vehicle.occupiedRegions.append(occupiedRegion)
        return rss_vehicle

    def _prepare_world_model(self):
        """
        Setup RSS world model
        """

        occupied_region = rss.OccupiedRegion()
        occupied_region.segmentId = 0
        occupied_region.latRange.minimum = physics.ParametricValue(0)
        occupied_region.latRange.maximum = physics.ParametricValue(2.0 / self.road_width)
        occupied_region.lonRange.minimum = physics.ParametricValue(0.)
        occupied_region.lonRange.maximum = physics.ParametricValue(5.0 / self.road_length)
        rss_vehicle_a = self._createObject(0, rss.ObjectType.EgoVehicle, 20., 0., occupied_region)

        occupied_region.lonRange.minimum = physics.ParametricValue(100.0 / self.road_length)
        occupied_region.lonRange.maximum = physics.ParametricValue((5.0 + 100) / self.road_length)
        rss_vehicle_b = self._createObject(1, rss.ObjectType.OtherVehicle, 10., 0., occupied_region)

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
        rss_scene.objectRssDynamics.maxSpeedOnAcceleration = physics.Speed(0.)
        rss_scene.objectRssDynamics.alphaLat.accelMax = physics.Acceleration(1.)
        rss_scene.objectRssDynamics.alphaLat.brakeMin = physics.Acceleration(-1.)
        rss_scene.objectRssDynamics.alphaLon.accelMax = physics.Acceleration(4.)
        rss_scene.objectRssDynamics.alphaLon.brakeMax = physics.Acceleration(-8.)
        rss_scene.objectRssDynamics.alphaLon.brakeMinCorrect = physics.Acceleration(-4.)
        rss_scene.objectRssDynamics.alphaLon.brakeMin = physics.Acceleration(-4.)
        rss_scene.objectRssDynamics.lateralFluctuationMargin = physics.Distance(0.)
        rss_scene.objectRssDynamics.unstructuredSettings = self._getUnstructuedSettings()

        rss_scene.egoVehicleRssDynamics.responseTime = physics.Duration(0.2)
        rss_scene.egoVehicleRssDynamics.maxSpeedOnAcceleration = physics.Speed(0.)
        rss_scene.egoVehicleRssDynamics.alphaLat.accelMax = physics.Acceleration(0.1)
        rss_scene.egoVehicleRssDynamics.alphaLat.brakeMin = physics.Acceleration(-0.1)
        rss_scene.egoVehicleRssDynamics.alphaLon.accelMax = physics.Acceleration(0.1)
        rss_scene.egoVehicleRssDynamics.alphaLon.brakeMax = physics.Acceleration(-8.)
        rss_scene.egoVehicleRssDynamics.alphaLon.brakeMin = physics.Acceleration(-4.)
        rss_scene.egoVehicleRssDynamics.alphaLon.brakeMinCorrect = physics.Acceleration(-4.)
        rss_scene.egoVehicleRssDynamics.lateralFluctuationMargin = physics.Distance(0.)
        rss_scene.egoVehicleRssDynamics.unstructuredSettings = self._getUnstructuedSettings()

        self.world_model = rss.WorldModel()

        self.world_model.timeIndex = 1
        self.world_model.scenes.append(rss_scene)
        self.world_model.defaultEgoVehicleRssDynamics.responseTime = physics.Duration(0.2)
        self.world_model.defaultEgoVehicleRssDynamics.maxSpeedOnAcceleration = physics.Speed(0.)
        self.world_model.defaultEgoVehicleRssDynamics.alphaLat.accelMax = physics.Acceleration(0.1)
        self.world_model.defaultEgoVehicleRssDynamics.alphaLat.brakeMin = physics.Acceleration(-0.1)
        self.world_model.defaultEgoVehicleRssDynamics.alphaLon.accelMax = physics.Acceleration(0.1)
        self.world_model.defaultEgoVehicleRssDynamics.alphaLon.brakeMax = physics.Acceleration(-8.)
        self.world_model.defaultEgoVehicleRssDynamics.alphaLon.brakeMin = physics.Acceleration(-4.)
        self.world_model.defaultEgoVehicleRssDynamics.alphaLon.brakeMinCorrect = physics.Acceleration(-4.)
        self.world_model.defaultEgoVehicleRssDynamics.lateralFluctuationMargin = physics.Distance(0.)
        self.world_model.defaultEgoVehicleRssDynamics.unstructuredSettings = self._getUnstructuedSettings()

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
        self.assertTrue(rss_response_resolving.provideProperResponse(rss_state_snapshot, rss_proper_response))

        print ("== Proper Response ==")
        print (rss_proper_response)

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
