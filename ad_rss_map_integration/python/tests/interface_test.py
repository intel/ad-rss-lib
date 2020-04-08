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
    import libad_map_access_python3 as admap
    import libad_rss_map_integration_python3 as rssmap
else:
    import libad_physics_python2 as physics
    import libad_rss_python2 as rss
    import libad_map_access_python2 as admap
    import libad_rss_map_integration_python2 as rssmap


class AdRssMapIntegrationPythonTest(unittest.TestCase):

    """
    Test class for Python interface
    """

    world_model = None

    egoVehicleId = 123
    egoPosition = admap.ENUObjectPosition()
    egoSpeed = physics.Speed()
    egoObject = admap.Object()
    egoRoute = admap.FullRoute()

    def _get_object_vehicle_dynamics(self):
        objectRssDynamics = rss.RssDynamics()
        objectRssDynamics.responseTime = physics.Duration(0.5)
        objectRssDynamics.alphaLat.accelMax = physics.Acceleration(1.)
        objectRssDynamics.alphaLat.brakeMin = physics.Acceleration(-1.)
        objectRssDynamics.alphaLon.accelMax = physics.Acceleration(4.)
        objectRssDynamics.alphaLon.brakeMax = physics.Acceleration(-8.)
        objectRssDynamics.alphaLon.brakeMinCorrect = physics.Acceleration(-4.)
        objectRssDynamics.alphaLon.brakeMin = physics.Acceleration(-4.)
        objectRssDynamics.lateralFluctuationMargin = physics.Distance(0.)
        return objectRssDynamics

    def _get_ego_vehicle_dynamics(self):
        egoRssDynamics = rss.RssDynamics()
        egoRssDynamics.responseTime = physics.Duration(0.2)
        egoRssDynamics.alphaLat.accelMax = physics.Acceleration(0.1)
        egoRssDynamics.alphaLat.brakeMin = physics.Acceleration(-0.1)
        egoRssDynamics.alphaLon.accelMax = physics.Acceleration(0.1)
        egoRssDynamics.alphaLon.brakeMax = physics.Acceleration(-8.)
        egoRssDynamics.alphaLon.brakeMinCorrect = physics.Acceleration(-4.)
        egoRssDynamics.alphaLon.brakeMin = physics.Acceleration(-4.)
        egoRssDynamics.lateralFluctuationMargin = physics.Distance(0.)
        return egoRssDynamics

    def _initialize_object(self, lon, lat, yawAngle, resultObject):
        positionGeo = admap.createGeoPoint(lon, lat, admap.Altitude(0.))

        # fill the result position
        resultObject.enuPosition.centerPoint = admap.toENU(positionGeo)
        resultObject.enuPosition.heading = admap.createENUHeading(yawAngle)
        resultObject.enuPosition.dimension.length = physics.Distance(4.5)
        resultObject.enuPosition.dimension.width = physics.Distance(2.)
        resultObject.enuPosition.dimension.height = physics.Distance(1.5)
        resultObject.enuPosition.enuReferencePoint = admap.getENUReferencePoint()

        mapMatching = admap.AdMapMatching()
        resultObject.mapMatchedBoundingBox = mapMatching.getMapMatchedBoundingBox(
            resultObject.enuPosition, physics.Distance(0.1))

        self.assertGreaterEqual(len(resultObject.mapMatchedBoundingBox.referencePointPositions),
                                admap.ObjectReferencePoints.Center)
        self.assertGreaterEqual(len(resultObject.mapMatchedBoundingBox
                                    .referencePointPositions[admap.ObjectReferencePoints.Center]), 0)

    def _initialize_ego_vehicle(self):
        # laneId: offset 240151:0.55
        self._initialize_object(admap.Longitude(8.00125444865324766),
                                admap.Latitude(48.99758627528235877),
                                math.pi / 2,
                                self.egoObject)

        self.egoSpeed = physics.Speed(5.)

        # laneId: offset  120149:0.16
        positionEndGeo = admap.createGeoPoint(admap.Longitude(8.00188527300496979),
                                              admap.Latitude(48.99821051747871792),
                                              admap.Altitude(0.))

        self.egoRoute = admap.planRoute(
            self.egoObject.mapMatchedBoundingBox.referencePointPositions[
                admap.ObjectReferencePoints.Center][0].lanePoint.paraPoint,
            positionEndGeo)

    def test_interface(self):
        """
        Main test part
        """
        self.assertTrue(admap.init("resources/Town01.txt"))
        print ("== Map Loaded ==")

        self._initialize_ego_vehicle()

        scene_creation = rssmap.RssSceneCreation(1, self._get_ego_vehicle_dynamics())

        otherVehicleId = 20
        otherVehicleSpeed = physics.Speed(10.)

        otherVehicleObject = admap.Object()

        # laneId: offset  120149:0.16  around the intersection in front same direction on ego route
        self._initialize_object(
            admap.Longitude(8.00188527300496979),
            admap.Latitude(48.99821051747871792),
            0,
            otherVehicleObject)

        self.assertTrue(scene_creation.appendScenes(
            self.egoVehicleId,
            self.egoObject,
            self.egoSpeed,
            self._get_ego_vehicle_dynamics(),
            self.egoRoute,
            otherVehicleId,
            rss.ObjectType.OtherVehicle,
            otherVehicleObject,
            otherVehicleSpeed,
            self._get_object_vehicle_dynamics(),
            rssmap.RssSceneCreation.RestrictSpeedLimitMode.IncreasedSpeedLimit10,
            admap.LandmarkIdSet()))

        self.world_model = scene_creation.getWorldModel()
        print ("== Final world model ==")
        print (self.world_model)

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

        longitudinal_distance = rss_situation_snapshot.situations[0].relativePosition.longitudinalDistance

        self.assertTrue(rss_proper_response.isSafe)
        self.assertEqual(longitudinal_distance, physics.Distance(104.413))

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
