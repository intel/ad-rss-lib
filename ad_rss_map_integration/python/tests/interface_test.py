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
        unstructured_settings = ad.rss.world.UnstructuredSettings()
        unstructured_settings.pedestrian_turning_radius = ad.physics.Distance(2.0)
        unstructured_settings.drive_away_max_angle = ad.physics.Angle(2.4)
        unstructured_settings.vehicle_yaw_rate_change = ad.physics.AngularAcceleration(0.3)
        unstructured_settings.vehicle_min_radius = ad.physics.Distance(3.5)
        unstructured_settings.vehicle_trajectory_calculation_step = ad.physics.Duration(0.2)
        return unstructured_settings

    def _get_object_vehicle_dynamics(self):
        object_rss_dynamics = ad.rss.world.RssDynamics()
        object_rss_dynamics.response_time = ad.physics.Duration(0.5)
        object_rss_dynamics.max_speed_on_acceleration = ad.physics.Speed(0.)
        object_rss_dynamics.alpha_lat.accel_max = ad.physics.Acceleration(1.)
        object_rss_dynamics.alpha_lat.brake_min = ad.physics.Acceleration(-1.)
        object_rss_dynamics.alpha_lon.accel_max = ad.physics.Acceleration(4.)
        object_rss_dynamics.alpha_lon.brake_max = ad.physics.Acceleration(-8.)
        object_rss_dynamics.alpha_lon.brake_min_correct = ad.physics.Acceleration(-4.)
        object_rss_dynamics.alpha_lon.brake_min = ad.physics.Acceleration(-4.)
        object_rss_dynamics.lateral_fluctuation_margin = ad.physics.Distance(0.)
        object_rss_dynamics.unstructured_settings = self._getUnstructuedSettings()
        return object_rss_dynamics

    def _get_ego_vehicle_dynamics(self):
        egoRssDynamics = ad.rss.world.RssDynamics()
        egoRssDynamics.response_time = ad.physics.Duration(0.2)
        egoRssDynamics.max_speed_on_acceleration = ad.physics.Speed(0.)
        egoRssDynamics.alpha_lat.accel_max = ad.physics.Acceleration(0.1)
        egoRssDynamics.alpha_lat.brake_min = ad.physics.Acceleration(-0.1)
        egoRssDynamics.alpha_lon.accel_max = ad.physics.Acceleration(0.1)
        egoRssDynamics.alpha_lon.brake_max = ad.physics.Acceleration(-8.)
        egoRssDynamics.alpha_lon.brake_min_correct = ad.physics.Acceleration(-4.)
        egoRssDynamics.alpha_lon.brake_min = ad.physics.Acceleration(-4.)
        egoRssDynamics.lateral_fluctuation_margin = ad.physics.Distance(0.)
        egoRssDynamics.unstructured_settings = self._getUnstructuedSettings()
        return egoRssDynamics

    def _get_enu_position(self, lon, lat):
        positionGeo = ad.map.point.createGeoPoint(lon, lat, ad.map.point.AltitudeUnknown)
        mapMatching = ad.map.match.AdMapMatching()
        matchResults = mapMatching.findLanes(positionGeo, ad.physics.Distance(10.))
        self.assertGreaterEqual(len(matchResults), 1)
        positionENU = ad.map.point.toENU(matchResults[0].matched_point)
        return positionENU

    def _initialize_object(self, lon, lat, yawAngle, resultObject):
        # fill the result position
        resultObject.enu_position.center_point = self._get_enu_position(lon, lat)
        resultObject.enu_position.heading = ad.map.point.createENUHeading(yawAngle)
        resultObject.enu_position.dimension.length = ad.physics.Distance(4.5)
        resultObject.enu_position.dimension.width = ad.physics.Distance(2.)
        resultObject.enu_position.dimension.height = ad.physics.Distance(1.5)
        resultObject.enu_position.enu_reference_point = ad.map.access.getENUReferencePoint()

        mapMatching = ad.map.match.AdMapMatching()
        resultObject.map_matched_bounding_box = mapMatching.getMapMatchedBoundingBox(
            resultObject.enu_position, ad.physics.Distance(0.1))

        self.assertGreaterEqual(len(resultObject.map_matched_bounding_box.reference_point_positions),
                                ad.map.match.ObjectReferencePoints.Center)
        self.assertGreaterEqual(len(resultObject.map_matched_bounding_box
                                    .reference_point_positions[ad.map.match.ObjectReferencePoints.Center]), 0)

    def _initialize_ego_vehicle(self):
        # lane_id: offset 240151:0.15
        self._initialize_object(ad.map.point.Longitude(8.0012612),
                                ad.map.point.Latitude(48.9979781),
                                math.pi / 2,
                                self.egoObject)

        self.egoSpeed = ad.physics.Speed(5.)
        self.egoYawRate = ad.physics.AngularVelocity(0.)

        # lane_id: offset  120149:0.16
        positionEndENU = self._get_enu_position(ad.map.point.Longitude(8.00188527300496979),
                                                ad.map.point.Latitude(48.99821051747871792))
        self.egoRoute = ad.map.route.planRoute(
            self.egoObject.map_matched_bounding_box.reference_point_positions[
                ad.map.match.ObjectReferencePoints.Center][0].lane_point.para_point,
            positionEndENU)

    def test_interface(self):
        """
        Main test part
        """
        self.assertTrue(ad.map.access.init("resources/Town01.txt"))
        ad.rss.map.setLogLevel("warn")
        print("== Map Loaded ==")

        self._initialize_ego_vehicle()

        world_model_creation = ad.rss.map.RssWorldModelCreation(1, self._get_ego_vehicle_dynamics())

        otherVehicleId = 20
        otherVehicleSpeed = ad.physics.Speed(10.)
        otherVehicleYawRate = ad.physics.AngularVelocity(0.)

        otherVehicleObject = ad.map.match.Object()

        # lane_id: offset  120149:0.16  around the intersection in front same direction on ego route
        self._initialize_object(
            ad.map.point.Longitude(8.00188527300496979),
            ad.map.point.Latitude(48.99821051747871792),
            0,
            otherVehicleObject)

        egoObjectData = ad.rss.map.RssObjectData()
        egoObjectData.id = self.egoVehicleId
        egoObjectData.type = ad.rss.world.ObjectType.EgoVehicle
        egoObjectData.match_object = self.egoObject
        egoObjectData.speed_range.minimum = self.egoSpeed
        egoObjectData.speed_range.maximum = self.egoSpeed
        egoObjectData.yaw_rate = self.egoYawRate
        egoObjectData.steering_angle = ad.physics.Angle(0.)
        egoObjectData.rss_dynamics = self._get_ego_vehicle_dynamics()

        otherObjectData = ad.rss.map.RssObjectData()
        otherObjectData.id = otherVehicleId
        otherObjectData.type = ad.rss.world.ObjectType.OtherVehicle
        otherObjectData.match_object = otherVehicleObject
        otherObjectData.speed_range.minimum = otherVehicleSpeed
        otherObjectData.speed_range.maximum = otherVehicleSpeed
        otherObjectData.yaw_rate = otherVehicleYawRate
        otherObjectData.steering_angle = ad.physics.Angle(0.)
        otherObjectData.rss_dynamics = self._get_object_vehicle_dynamics()

        self.assertTrue(world_model_creation.appendConstellations(
            egoObjectData,
            self.egoRoute,
            otherObjectData,
            ad.rss.map.RssRestrictSpeedLimitMode.IncreasedSpeedLimit10,
            ad.map.landmark.LandmarkIdSet(),
            ad.rss.map.RssConstellationCreationMode.Structured))

        self.world_model = world_model_creation.getWorldModel()
        print("== Final world model ==")
        print(self.world_model)

        rss_response_resolving = ad.rss.core.RssResponseResolving()
        rss_situation_checking = ad.rss.core.RssSituationChecking()
        rss_sitation_extraction = ad.rss.core.RssSituationExtraction()

        rss_situation_snapshot = ad.rss.core.RssSituationSnapshot()
        self.assertTrue(rss_sitation_extraction.extractSituation(self.world_model, rss_situation_snapshot))

        print("== Situation Snaphost ==")
        print(rss_situation_snapshot)

        rss_state_snapshot = ad.rss.state.RssStateSnapshot()
        self.assertTrue(rss_situation_checking.checkSituation(rss_situation_snapshot, rss_state_snapshot))

        rss_proper_response = ad.rss.state.ProperResponse()
        self.assertTrue(rss_response_resolving.provideProperResponse(rss_state_snapshot, rss_proper_response))

        print("== Proper Response ==")
        print(rss_proper_response)

        self.assertGreaterEqual(len(rss_situation_snapshot.constellations), 1)

        self.assertEqual(
            rss_situation_snapshot.constellations[0].constellation_type, ad.rss.world.ConstellationType.SameDirection)

        longitudinal_distance = rss_situation_snapshot.constellations[0].relative_position.longitudinal_distance
        self.assertEqual(longitudinal_distance, ad.physics.Distance(60.8363))

        self.assertTrue(rss_proper_response.is_safe)

        self.world_model.time_index += 1


if __name__ == '__main__':
    if os.environ.get('GTEST_OUTPUT') and os.environ['GTEST_OUTPUT'].startswith('xml:'):
        base_folder = os.environ['GTEST_OUTPUT'][4:]
        unittest.main(testRunner=xmlrunner.XMLTestRunner(output=base_folder))
    else:
        unittest.main()
