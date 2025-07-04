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
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)constellationCreationMode([^a-zA-Z0-9(]+|$)" "\1constellation_creation_mode\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)restrictSpeedLimitMode([^a-zA-Z0-9(]+|$)" "\1restrict_speed_limit_mode\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)egoVehicleDynamics([^a-zA-Z0-9(]+|$)" "\1ego_vehicle_dynamics\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)objectDynamics([^a-zA-Z0-9(]+|$)" "\1object_dynamics\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)lastUpdate([^a-zA-Z0-9(]+|$)" "\1last_update\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)routeAccelLon([^a-zA-Z0-9(]+|$)" "\1route_accel_lon\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)routeAccelLat([^a-zA-Z0-9(]+|$)" "\1route_accel_lat\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)avgRouteAccelLon([^a-zA-Z0-9(]+|$)" "\1avg_route_accel_lon\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)avgRouteAccelLat([^a-zA-Z0-9(]+|$)" "\1avg_route_accel_lat\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)lastUpdate([^a-zA-Z0-9(]+|$)" "\1last_update\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)matchObject([^a-zA-Z0-9(]+|$)" "\1match_object\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)yawRate([^a-zA-Z0-9(]+|$)" "\1yaw_rate\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)steeringAngle([^a-zA-Z0-9(]+|$)" "\1steering_angle\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)rssDynamics([^a-zA-Z0-9(]+|$)" "\1rss_dynamics\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)routeHeading([^a-zA-Z0-9(]+|$)" "\1route_heading\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)routeHeadingDelta([^a-zA-Z0-9(]+|$)" "\1route_heading_delta\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)routeSpeedLat([^a-zA-Z0-9(]+|$)" "\1route_speed_lat\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)routeSpeedLon([^a-zA-Z0-9(]+|$)" "\1route_speed_lon\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)objectCenterWithinRoute([^a-zA-Z0-9(]+|$)" "\1object_center_within_route\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)objectWithinRoute([^a-zA-Z0-9(]+|$)" "\1object_within_route\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)objectCenterPositionProjectedOnRoute([^a-zA-Z0-9(]+|$)" "\1object_center_position_projected_on_route\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)isValid([^a-zA-Z0-9(]+|$)" "\1is_valid\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)objectCenterDistanceToRoute([^a-zA-Z0-9(]+|$)" "\1object_center_distance_to_route\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)objectCenterPositionProjectedOnLaneInNominalRouteDirection([^a-zA-Z0-9(]+|$)" "\1object_center_position_projected_on_lane_in_nominal_route_direction\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)objectCenterDistanceAlongRoute([^a-zA-Z0-9(]+|$)" "\1object_center_distance_along_route\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)nominalCenterPositionOfLaneInNominalRouteDirection([^a-zA-Z0-9(]+|$)" "\1nominal_center_position_of_lane_in_nominal_route_direction\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)objectData([^a-zA-Z0-9(]+|$)" "\1object_data\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)situationCheckResults([^a-zA-Z0-9(]+|$)" "\1situation_check_results\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)routeId([^a-zA-Z0-9(]+|$)" "\1route_id\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)vehicleDynamicsOnRoute([^a-zA-Z0-9(]+|$)" "\1vehicle_dynamics_on_route\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)parentRouteId([^a-zA-Z0-9(]+|$)" "\1parent_route_id\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)progressOnRoute([^a-zA-Z0-9(]+|$)" "\1progress_on_route\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)objectDataOnRoute([^a-zA-Z0-9(]+|$)" "\1object_data_on_route\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)rssRoute([^a-zA-Z0-9(]+|$)" "\1rss_route\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)isValid([^a-zA-Z0-9(]+|$)" "\1is_valid\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)worldModel([^a-zA-Z0-9(]+|$)" "\1world_model\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)rssSituationSnapshot([^a-zA-Z0-9(]+|$)" "\1rss_situation_snapshot\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)rssStateSnapshot([^a-zA-Z0-9(]+|$)" "\1rss_state_snapshot\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)properResponse([^a-zA-Z0-9(]+|$)" "\1proper_response\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)resultAnalysis([^a-zA-Z0-9(]+|$)" "\1result_analysis\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)dangerousState([^a-zA-Z0-9(]+|$)" "\1dangerous_state\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)dangerousVehicle([^a-zA-Z0-9(]+|$)" "\1dangerous_vehicle\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)dangerousOppositeState([^a-zA-Z0-9(]+|$)" "\1dangerous_opposite_state\2"
  call_sed_inplace ${FILE} "([^a-zA-Z0-9]+|^)vehicleCrossingRoadBoundaries([^a-zA-Z0-9(]+|$)" "\1vehicle_crossing_road_boundaries\2"
}

for FILE in $@; do
  if [ -f $FILE ]; then
    convert_camel_case_to_underscore $FILE
  fi
done
