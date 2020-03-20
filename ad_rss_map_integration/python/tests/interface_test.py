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
import math

import libad_rss_python as rss
import libad_physics_python as physics
import libad_map_access_python as admap
import libad_rss_map_integration_python as rssmap


class InterfaceTest(unittest.TestCase):

    """
    Test class for Python interface
    """

    world_model = None

    egoVehicleId = 123
    egoPosition = admap.ENUObjectPosition()
    egoSpeed = physics.Speed()
    egoMapMatchedBoundingBox = admap.MapMatchedObjectBoundingBox()
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

    def _initialize_object(self, lon, lat, yawAngle, resultPosition, resultMapMatchedBoundingBox):
        positionGeo = admap.createGeoPoint(lon, lat, admap.Altitude(0.))

        # fill the result position
        resultPosition.centerPoint = admap.toENU(positionGeo)
        resultPosition.heading = admap.createENUHeading(yawAngle)
        resultPosition.dimension.length = physics.Distance(4.5)
        resultPosition.dimension.width = physics.Distance(2.)
        resultPosition.dimension.height = physics.Distance(1.5)
        resultPosition.enuReferencePoint = admap.getENUReferencePoint()

        mapMatching = admap.AdMapMatching()
        mapMatchedBoundingBox = mapMatching.getMapMatchedBoundingBox(
            resultPosition, physics.Distance(0.1), physics.Probability(0.5))

        self.assertGreaterEqual(len(mapMatchedBoundingBox.referencePointPositions),
                                admap.ObjectReferencePoints.Center)
        self.assertGreaterEqual(len(mapMatchedBoundingBox
                                    .referencePointPositions[admap.ObjectReferencePoints.Center]), 0)

        # fill the result bounding box
        resultMapMatchedBoundingBox.laneOccupiedRegions = mapMatchedBoundingBox.laneOccupiedRegions
        resultMapMatchedBoundingBox.referencePointPositions = mapMatchedBoundingBox.referencePointPositions

    def _initialize_ego_vehicle(self):
        # laneId: offset 240151:0.55
        self._initialize_object(admap.Longitude(8.00125444865324766),
                                admap.Latitude(48.99758627528235877),
                                math.pi / 2,
                                self.egoPosition,
                                self.egoMapMatchedBoundingBox)

        self.egoSpeed = physics.Speed(5.)

        # laneId: offset  120149:0.16
        positionEndGeo = admap.createGeoPoint(admap.Longitude(8.00188527300496979),
                                              admap.Latitude(48.99821051747871792),
                                              admap.Altitude(0.))

        self.egoRoute = admap.planRoute(
            self.egoMapMatchedBoundingBox.referencePointPositions[
                admap.ObjectReferencePoints.Center][0].lanePoint.paraPoint,
            positionEndGeo)

    def test_interface(self):
        """
        Main test part
        """
        self.assertTrue(admap.init("resources/Town01.txt"))
        print ("== Map Loaded ==")

        self._initialize_ego_vehicle()

        self.world_model = rssmap.initializeWorldModel(1, self._get_ego_vehicle_dynamics())
        print ("== Initial world model ==")
        print (self.world_model)

        otherVehicleId = 20
        otherVehicleSpeed = physics.Speed(10.)

        otherVehiclePosition = admap.ENUObjectPosition()
        otherVehicleMapMatchedBoundingBox = admap.MapMatchedObjectBoundingBox()

        # laneId: offset  120149:0.16  around the intersection in front same direction on ego route
        self._initialize_object(
            admap.Longitude(8.00188527300496979),
            admap.Latitude(48.99821051747871792),
            0,
            otherVehiclePosition,
            otherVehicleMapMatchedBoundingBox)

        self.assertTrue(rssmap.appendScenes(
            self.egoVehicleId,
            self.egoMapMatchedBoundingBox,
            self.egoSpeed,
            self.egoRoute,
            otherVehicleId,
            rss.ObjectType.OtherVehicle,
            otherVehicleMapMatchedBoundingBox,
            otherVehicleSpeed,
            self._get_object_vehicle_dynamics(),
            rssmap.RestrictSpeedLimitMode.IncreasedSpeedLimit10,
            admap.LandmarkIdSet(),
            self.world_model))

        self.assertTrue(rssmap.finalizeWorldModel(self._get_ego_vehicle_dynamics(), self.world_model))
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
        self.assertTrue(rss_response_resolving.provideProperResponse(rss_state_snapshot, rss_proper_response))

        acceleration_restriction = rss.AccelerationRestriction()
        self.assertTrue(rss.transformProperResponse(self.world_model, rss_proper_response, acceleration_restriction))

        print ("== Acceleration Restrictions ==")
        print (acceleration_restriction)

        longitudinal_distance = rss_situation_snapshot.situations[0].relativePosition.longitudinalDistance

        self.assertTrue(rss_proper_response.isSafe)
        self.assertEqual(longitudinal_distance, physics.Distance(104.413))

        self.world_model.timeIndex += 1


if __name__ == '__main__':
    unittest.main()
