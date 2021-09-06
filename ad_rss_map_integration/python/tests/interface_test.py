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

import ad_rss_map_integration as ad


class AdRssMapIntegrationPythonTest(unittest.TestCase):

    """
    Test class for Python interface
    """

    world_model = None

    egoVehicleId = 123
    egoPosition = ad.map.match.ENUObjectPosition()
    egoSpeed = ad.physics.Speed()
    egoYawRate = ad.physics.AngularVelocity()
    egoObject = ad.map.match.Object()
    egoRoute = ad.map.route.FullRoute()

    def _getUnstructuedSettings(self):
        unstructuredSettings = ad.rss.world.UnstructuredSettings()
        unstructuredSettings.pedestrianTurningRadius = ad.physics.Distance(2.0)
        unstructuredSettings.driveAwayMaxAngle = ad.physics.Angle(2.4)
        unstructuredSettings.vehicleYawRateChange = ad.physics.AngularAcceleration(0.3)
        unstructuredSettings.vehicleMinRadius = ad.physics.Distance(3.5)
        unstructuredSettings.vehicleTrajectoryCalculationStep = ad.physics.Duration(0.2)
        return unstructuredSettings

    def _get_object_vehicle_dynamics(self):
        objectRssDynamics = ad.rss.world.RssDynamics()
        objectRssDynamics.responseTime = ad.physics.Duration(0.5)
        objectRssDynamics.maxSpeedOnAcceleration = ad.physics.Speed(0.)
        objectRssDynamics.alphaLat.accelMax = ad.physics.Acceleration(1.)
        objectRssDynamics.alphaLat.brakeMin = ad.physics.Acceleration(-1.)
        objectRssDynamics.alphaLon.accelMax = ad.physics.Acceleration(4.)
        objectRssDynamics.alphaLon.brakeMax = ad.physics.Acceleration(-8.)
        objectRssDynamics.alphaLon.brakeMinCorrect = ad.physics.Acceleration(-4.)
        objectRssDynamics.alphaLon.brakeMin = ad.physics.Acceleration(-4.)
        objectRssDynamics.lateralFluctuationMargin = ad.physics.Distance(0.)
        objectRssDynamics.unstructuredSettings = self._getUnstructuedSettings()
        return objectRssDynamics

    def _get_ego_vehicle_dynamics(self):
        egoRssDynamics = ad.rss.world.RssDynamics()
        egoRssDynamics.responseTime = ad.physics.Duration(0.2)
        egoRssDynamics.maxSpeedOnAcceleration = ad.physics.Speed(0.)
        egoRssDynamics.alphaLat.accelMax = ad.physics.Acceleration(0.1)
        egoRssDynamics.alphaLat.brakeMin = ad.physics.Acceleration(-0.1)
        egoRssDynamics.alphaLon.accelMax = ad.physics.Acceleration(0.1)
        egoRssDynamics.alphaLon.brakeMax = ad.physics.Acceleration(-8.)
        egoRssDynamics.alphaLon.brakeMinCorrect = ad.physics.Acceleration(-4.)
        egoRssDynamics.alphaLon.brakeMin = ad.physics.Acceleration(-4.)
        egoRssDynamics.lateralFluctuationMargin = ad.physics.Distance(0.)
        egoRssDynamics.unstructuredSettings = self._getUnstructuedSettings()
        return egoRssDynamics

    def _initialize_object(self, lon, lat, yawAngle, resultObject):
        positionGeo = ad.map.point.createGeoPoint(lon, lat, ad.map.point.Altitude(0.))

        # fill the result position
        resultObject.enuPosition.centerPoint = ad.map.point.toENU(positionGeo)
        resultObject.enuPosition.heading = ad.map.point.createENUHeading(yawAngle)
        resultObject.enuPosition.dimension.length = ad.physics.Distance(4.5)
        resultObject.enuPosition.dimension.width = ad.physics.Distance(2.)
        resultObject.enuPosition.dimension.height = ad.physics.Distance(1.5)
        resultObject.enuPosition.enuReferencePoint = ad.map.access.getENUReferencePoint()

        mapMatching = ad.map.match.AdMapMatching()
        resultObject.mapMatchedBoundingBox = mapMatching.getMapMatchedBoundingBox(
            resultObject.enuPosition, ad.physics.Distance(0.1))

        self.assertGreaterEqual(len(resultObject.mapMatchedBoundingBox.referencePointPositions),
                                ad.map.match.ObjectReferencePoints.Center)
        self.assertGreaterEqual(len(resultObject.mapMatchedBoundingBox
                                    .referencePointPositions[ad.map.match.ObjectReferencePoints.Center]), 0)

    def _initialize_ego_vehicle(self):
        # laneId: offset 240151:0.55
        self._initialize_object(ad.map.point.Longitude(8.00125444865324766),
                                ad.map.point.Latitude(48.99758627528235877),
                                math.pi / 2,
                                self.egoObject)

        self.egoSpeed = ad.physics.Speed(5.)
        self.egoYawRate = ad.physics.AngularVelocity(0.)

        # laneId: offset  120149:0.16
        positionEndGeo = ad.map.point.createGeoPoint(ad.map.point.Longitude(8.00188527300496979),
                                                     ad.map.point.Latitude(48.99821051747871792),
                                                     ad.map.point.Altitude(0.))

        self.egoRoute = ad.map.route.planRoute(
            self.egoObject.mapMatchedBoundingBox.referencePointPositions[
                ad.map.match.ObjectReferencePoints.Center][0].lanePoint.paraPoint,
            positionEndGeo)

    def test_interface(self):
        """
        Main test part
        """
        self.assertTrue(ad.map.access.init("resources/Town01.txt"))
        print("== Map Loaded ==")

        self._initialize_ego_vehicle()

        scene_creation = ad.rss.map.RssSceneCreation(1, self._get_ego_vehicle_dynamics())

        otherVehicleId = 20
        otherVehicleSpeed = ad.physics.Speed(10.)
        otherVehicleYawRate = ad.physics.AngularVelocity(0.)

        otherVehicleObject = ad.map.match.Object()

        # laneId: offset  120149:0.16  around the intersection in front same direction on ego route
        self._initialize_object(
            ad.map.point.Longitude(8.00188527300496979),
            ad.map.point.Latitude(48.99821051747871792),
            0,
            otherVehicleObject)

        egoObjectData = ad.rss.map.RssObjectData()
        egoObjectData.id = self.egoVehicleId
        egoObjectData.type = ad.rss.world.ObjectType.EgoVehicle
        egoObjectData.matchObject = self.egoObject
        egoObjectData.speed = self.egoSpeed
        egoObjectData.yawRate = self.egoYawRate
        egoObjectData.steeringAngle = ad.physics.Angle(0.)
        egoObjectData.rssDynamics = self._get_ego_vehicle_dynamics()

        otherObjectData = ad.rss.map.RssObjectData()
        otherObjectData.id = otherVehicleId
        otherObjectData.type = ad.rss.world.ObjectType.OtherVehicle
        otherObjectData.matchObject = otherVehicleObject
        otherObjectData.speed = otherVehicleSpeed
        otherObjectData.yawRate = otherVehicleYawRate
        otherObjectData.steeringAngle = ad.physics.Angle(0.)
        otherObjectData.rssDynamics = self._get_object_vehicle_dynamics()

        self.assertTrue(scene_creation.appendScenes(
            egoObjectData,
            self.egoRoute,
            otherObjectData,
            ad.rss.map.RssSceneCreation.RestrictSpeedLimitMode.IncreasedSpeedLimit10,
            ad.map.landmark.LandmarkIdSet(),
            ad.rss.map.RssMode.Structured))

        self.world_model = scene_creation.getWorldModel()
        print("== Final world model ==")
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

        longitudinal_distance = rss_situation_snapshot.situations[0].relativePosition.longitudinalDistance

        self.assertTrue(rss_proper_response.isSafe)
        self.assertEqual(longitudinal_distance, ad.physics.Distance(104.411))

        self.world_model.timeIndex += 1


if __name__ == '__main__':
    if os.environ.get('GTEST_OUTPUT') and os.environ['GTEST_OUTPUT'].startswith('xml:'):
        base_folder = os.environ['GTEST_OUTPUT'][4:]
        result_filename = base_folder + 'ad_rss_map_integration_interface_test_python' + \
            str(sys.version_info.major) + ".xml"
        with open(result_filename, "w+") as result_file:
            unittest.main(testRunner=xmlrunner.XMLTestRunner(output=result_file))
    else:
        unittest.main()
