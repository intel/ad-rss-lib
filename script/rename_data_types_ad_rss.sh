#!/bin/bash
##
# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (C) 2018-2020 Intel Corporation
#
# SPDX-License-Identifier: LGPL-2.1-only
#
# ----------------- END LICENSE BLOCK -----------------------------------
##
##
# Generated file
#
# Generator Version : 0.0.0
##

#--------------------
# Renaming of data types members from CamelCase -> underscore_case
#--------------------
#
# defines a function to perform a sed call recursively until the file doesn't change any more
#
function call_sed_inplace
{
  INFILE=$1
  BACKUPFILE="${1}.bak"
  if [ "x$3" == "x" ]; then
    SED_COMMAND="sed --in-place=.bak -r '/$2/d'"
  elif [ "x$3" == "xN" ]; then
    SED_COMMAND="sed --in-place=.bak -r 'N;/$2/d'"
  elif [ "x$3" == "xNN" ]; then
    SED_COMMAND="sed --in-place=.bak -r 'N;N;/$2/d'"
  elif [ "x$3" == "xNNN" ]; then
    SED_COMMAND="sed --in-place=.bak -r 'N;N;N;/$2/d'"
  else
    SED_COMMAND="sed --in-place=.bak -r 's/$2/$3/g'"
  fi
  #echo "Execute(${SED_COMMAND}) ..."
  SOMETHING_DONE=1
  ANYTHING_DONE=0
  while (( SOMETHING_DONE )); do
    if [ -e $BACKUPFILE ]; then
      rm ${BACKUPFILE}
    fi
    eval ${SED_COMMAND} ${INFILE}
    DIFF=`diff ${BACKUPFILE} ${INFILE}`
    if [ "x$DIFF" == "x" ]; then
      SOMETHING_DONE=0
    else
      ANYTHING_DONE=1
    fi
    if [ "x$4" == "xONCE" ]; then
      SOMETHING_DONE=0
    fi
  done
  if [ -e $BACKUPFILE ]; then
    rm ${BACKUPFILE}
  fi
  #echo "Done."
  return ${ANYTHING_DONE}
}

function convert_camel_case_to_underscore
{
  FILE=$1
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)lateralLeftRange([^a-zA-Z0-9(]+|$)" "\1lateral_left_range\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)longitudinalRange([^a-zA-Z0-9(]+|$)" "\1longitudinal_range\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)lateralRightRange([^a-zA-Z0-9(]+|$)" "\1lateral_right_range\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)constellationType([^a-zA-Z0-9(]+|$)" "\1constellation_type\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)egoVehicle([^a-zA-Z0-9(]+|$)" "\1ego_vehicle\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)egoVehicleRssDynamics([^a-zA-Z0-9(]+|$)" "\1ego_vehicle_rss_dynamics\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)objectRssDynamics([^a-zA-Z0-9(]+|$)" "\1object_rss_dynamics\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)intersectingRoad([^a-zA-Z0-9(]+|$)" "\1intersecting_road\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)egoVehicleRoad([^a-zA-Z0-9(]+|$)" "\1ego_vehicle_road\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)drivingDirection([^a-zA-Z0-9(]+|$)" "\1driving_direction\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)accelMax([^a-zA-Z0-9(]+|$)" "\1accel_max\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)brakeMin([^a-zA-Z0-9(]+|$)" "\1brake_min\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)isSafe([^a-zA-Z0-9(]+|$)" "\1is_safe\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)alphaLat([^a-zA-Z0-9(]+|$)" "\1alpha_lat\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)rssStateInformation([^a-zA-Z0-9(]+|$)" "\1rss_state_information\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)accelMax([^a-zA-Z0-9(]+|$)" "\1accel_max\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)brakeMax([^a-zA-Z0-9(]+|$)" "\1brake_max\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)brakeMin([^a-zA-Z0-9(]+|$)" "\1brake_min\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)brakeMinCorrect([^a-zA-Z0-9(]+|$)" "\1brake_min_correct\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)isSafe([^a-zA-Z0-9(]+|$)" "\1is_safe\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)alphaLon([^a-zA-Z0-9(]+|$)" "\1alpha_lon\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)rssStateInformation([^a-zA-Z0-9(]+|$)" "\1rss_state_information\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)objectId([^a-zA-Z0-9(]+|$)" "\1object_id\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)objectType([^a-zA-Z0-9(]+|$)" "\1object_type\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)occupiedRegions([^a-zA-Z0-9(]+|$)" "\1occupied_regions\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)yawRate([^a-zA-Z0-9(]+|$)" "\1yaw_rate\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)centerPoint([^a-zA-Z0-9(]+|$)" "\1center_point\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)steeringAngle([^a-zA-Z0-9(]+|$)" "\1steering_angle\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)segmentId([^a-zA-Z0-9(]+|$)" "\1segment_id\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)lonRange([^a-zA-Z0-9(]+|$)" "\1lon_range\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)latRange([^a-zA-Z0-9(]+|$)" "\1lat_range\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)timeIndex([^a-zA-Z0-9(]+|$)" "\1time_index\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)isSafe([^a-zA-Z0-9(]+|$)" "\1is_safe\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)dangerousObjects([^a-zA-Z0-9(]+|$)" "\1dangerous_objects\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)longitudinalResponse([^a-zA-Z0-9(]+|$)" "\1longitudinal_response\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)lateralResponseRight([^a-zA-Z0-9(]+|$)" "\1lateral_response_right\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)lateralResponseLeft([^a-zA-Z0-9(]+|$)" "\1lateral_response_left\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)headingRanges([^a-zA-Z0-9(]+|$)" "\1heading_ranges\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)accelerationRestrictions([^a-zA-Z0-9(]+|$)" "\1acceleration_restrictions\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)unstructuredConstellationResponse([^a-zA-Z0-9(]+|$)" "\1unstructured_constellation_response\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)constellationId([^a-zA-Z0-9(]+|$)" "\1constellation_id\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)objectId([^a-zA-Z0-9(]+|$)" "\1object_id\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)constellationType([^a-zA-Z0-9(]+|$)" "\1constellation_type\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)egoState([^a-zA-Z0-9(]+|$)" "\1ego_state\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)otherState([^a-zA-Z0-9(]+|$)" "\1other_state\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)relativePosition([^a-zA-Z0-9(]+|$)" "\1relative_position\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)objectType([^a-zA-Z0-9(]+|$)" "\1object_type\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)unstructuredObjectState([^a-zA-Z0-9(]+|$)" "\1unstructured_object_state\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)structuredObjectState([^a-zA-Z0-9(]+|$)" "\1structured_object_state\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)longitudinalPosition([^a-zA-Z0-9(]+|$)" "\1longitudinal_position\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)longitudinalDistance([^a-zA-Z0-9(]+|$)" "\1longitudinal_distance\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)lateralPosition([^a-zA-Z0-9(]+|$)" "\1lateral_position\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)lateralDistance([^a-zA-Z0-9(]+|$)" "\1lateral_distance\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)alphaLon([^a-zA-Z0-9(]+|$)" "\1alpha_lon\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)alphaLat([^a-zA-Z0-9(]+|$)" "\1alpha_lat\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)lateralFluctuationMargin([^a-zA-Z0-9(]+|$)" "\1lateral_fluctuation_margin\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)responseTime([^a-zA-Z0-9(]+|$)" "\1response_time\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)maxSpeedOnAcceleration([^a-zA-Z0-9(]+|$)" "\1max_speed_on_acceleration\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)unstructuredSettings([^a-zA-Z0-9(]+|$)" "\1unstructured_settings\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)timeIndex([^a-zA-Z0-9(]+|$)" "\1time_index\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)defaultEgoVehicleRssDynamics([^a-zA-Z0-9(]+|$)" "\1default_ego_vehicle_rss_dynamics\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)objectId([^a-zA-Z0-9(]+|$)" "\1object_id\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)constellationId([^a-zA-Z0-9(]+|$)" "\1constellation_id\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)longitudinalState([^a-zA-Z0-9(]+|$)" "\1longitudinal_state\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)lateralStateRight([^a-zA-Z0-9(]+|$)" "\1lateral_state_right\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)lateralStateLeft([^a-zA-Z0-9(]+|$)" "\1lateral_state_left\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)unstructuredConstellationState([^a-zA-Z0-9(]+|$)" "\1unstructured_constellation_state\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)constellationType([^a-zA-Z0-9(]+|$)" "\1constellation_type\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)safeDistance([^a-zA-Z0-9(]+|$)" "\1safe_distance\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)currentDistance([^a-zA-Z0-9(]+|$)" "\1current_distance\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)timeIndex([^a-zA-Z0-9(]+|$)" "\1time_index\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)defaultEgoVehicleRssDynamics([^a-zA-Z0-9(]+|$)" "\1default_ego_vehicle_rss_dynamics\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)individualResponses([^a-zA-Z0-9(]+|$)" "\1individual_responses\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)unstructuredConstellationEgoInformation([^a-zA-Z0-9(]+|$)" "\1unstructured_constellation_ego_information\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)hasPriority([^a-zA-Z0-9(]+|$)" "\1has_priority\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)isInCorrectLane([^a-zA-Z0-9(]+|$)" "\1is_in_correct_lane\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)distanceToEnterIntersection([^a-zA-Z0-9(]+|$)" "\1distance_to_enter_intersection\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)distanceToLeaveIntersection([^a-zA-Z0-9(]+|$)" "\1distance_to_leave_intersection\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)isSafe([^a-zA-Z0-9(]+|$)" "\1is_safe\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)headingRange([^a-zA-Z0-9(]+|$)" "\1heading_range\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)rssStateInformation([^a-zA-Z0-9(]+|$)" "\1rss_state_information\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)alphaLon([^a-zA-Z0-9(]+|$)" "\1alpha_lon\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)brakeTrajectorySet([^a-zA-Z0-9(]+|$)" "\1brake_trajectory_set\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)continueForwardTrajectorySet([^a-zA-Z0-9(]+|$)" "\1continue_forward_trajectory_set\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)pedestrianTurningRadius([^a-zA-Z0-9(]+|$)" "\1pedestrian_turning_radius\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)driveAwayMaxAngle([^a-zA-Z0-9(]+|$)" "\1drive_away_max_angle\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)vehicleYawRateChange([^a-zA-Z0-9(]+|$)" "\1vehicle_yaw_rate_change\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)vehicleMinRadius([^a-zA-Z0-9(]+|$)" "\1vehicle_min_radius\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)vehicleTrajectoryCalculationStep([^a-zA-Z0-9(]+|$)" "\1vehicle_trajectory_calculation_step\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)vehicleFrontIntermediateYawRateChangeRatioSteps([^a-zA-Z0-9(]+|$)" "\1vehicle_front_intermediate_yaw_rate_change_ratio_steps\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)vehicleBackIntermediateYawRateChangeRatioSteps([^a-zA-Z0-9(]+|$)" "\1vehicle_back_intermediate_yaw_rate_change_ratio_steps\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)vehicleBrakeIntermediateAccelerationSteps([^a-zA-Z0-9(]+|$)" "\1vehicle_brake_intermediate_acceleration_steps\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)vehicleContinueForwardIntermediateAccelerationSteps([^a-zA-Z0-9(]+|$)" "\1vehicle_continue_forward_intermediate_acceleration_steps\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)vehicleContinueForwardIntermediateYawRateChangeRatioSteps([^a-zA-Z0-9(]+|$)" "\1vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)pedestrianContinueForwardIntermediateHeadingChangeRatioSteps([^a-zA-Z0-9(]+|$)" "\1pedestrian_continue_forward_intermediate_heading_change_ratio_steps\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)pedestrianContinueForwardIntermediateAccelerationSteps([^a-zA-Z0-9(]+|$)" "\1pedestrian_continue_forward_intermediate_acceleration_steps\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)pedestrianBrakeIntermediateAccelerationSteps([^a-zA-Z0-9(]+|$)" "\1pedestrian_brake_intermediate_acceleration_steps\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)pedestrianFrontIntermediateHeadingChangeRatioSteps([^a-zA-Z0-9(]+|$)" "\1pedestrian_front_intermediate_heading_change_ratio_steps\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)pedestrianBackIntermediateHeadingChangeRatioSteps([^a-zA-Z0-9(]+|$)" "\1pedestrian_back_intermediate_heading_change_ratio_steps\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)speedLonMin([^a-zA-Z0-9(]+|$)" "\1speed_lon_min\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)speedLonMax([^a-zA-Z0-9(]+|$)" "\1speed_lon_max\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)speedLatMin([^a-zA-Z0-9(]+|$)" "\1speed_lat_min\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)speedLatMax([^a-zA-Z0-9(]+|$)" "\1speed_lat_max\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)timeIndex([^a-zA-Z0-9(]+|$)" "\1time_index\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)defaultEgoVehicleRssDynamics([^a-zA-Z0-9(]+|$)" "\1default_ego_vehicle_rss_dynamics\2"
}

for FILE in $@; do
  if [ -f $FILE ]; then
    convert_camel_case_to_underscore $FILE
  fi
done
