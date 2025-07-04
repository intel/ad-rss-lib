// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/core/RssSituationExtraction.hpp"
#include <algorithm>
#include "ad/rss/core/Logging.hpp"
#include "ad/rss/structured/RssConstellationIdProvider.hpp"
#include "ad/rss/structured/RssLaneCoordinateSystemConversion.hpp"
#include "ad/rss/world/WorldModelValidInputRange.hpp"

namespace ad {
namespace rss {
namespace core {

using physics::Distance;
using physics::MetricRange;

void RssSituationExtraction::dropObjectHistory(world::ObjectId const &object_id)
{
  mConstellationIdProvider.dropConstellationIds(object_id);
}

void RssSituationExtraction::calcluateRelativeLongitudinalPosition(MetricRange const &egoMetricRange,
                                                                   MetricRange const &otherMetricRange,
                                                                   LongitudinalRelativePosition &longitudinal_position,
                                                                   Distance &longitudinal_distance)
{
  if (egoMetricRange.minimum > otherMetricRange.maximum)
  {
    longitudinal_position = LongitudinalRelativePosition::InFront;
    longitudinal_distance = egoMetricRange.minimum - otherMetricRange.maximum;
  }
  else if (otherMetricRange.minimum > egoMetricRange.maximum)
  {
    longitudinal_position = LongitudinalRelativePosition::AtBack;
    longitudinal_distance = otherMetricRange.minimum - egoMetricRange.maximum;
  }
  else
  {
    longitudinal_distance = Distance(0.);
    if ((egoMetricRange.minimum > otherMetricRange.minimum) && (egoMetricRange.maximum > otherMetricRange.maximum))
    {
      longitudinal_position = LongitudinalRelativePosition::OverlapFront;
    }
    else if ((egoMetricRange.minimum < otherMetricRange.minimum) && (egoMetricRange.maximum < otherMetricRange.maximum))
    {
      longitudinal_position = LongitudinalRelativePosition::OverlapBack;
    }
    else
    {
      longitudinal_position = LongitudinalRelativePosition::Overlap;
    }
  }
}

void RssSituationExtraction::calcluateRelativeLongitudinalPositionIntersection(
  MetricRange const &egoMetricRange,
  MetricRange const &otherMetricRange,
  LongitudinalRelativePosition &longitudinal_position,
  Distance &longitudinal_distance)
{
  if (egoMetricRange.maximum < otherMetricRange.minimum)
  {
    longitudinal_position = LongitudinalRelativePosition::InFront;
    longitudinal_distance = otherMetricRange.minimum - egoMetricRange.maximum;
  }
  else if (otherMetricRange.maximum < egoMetricRange.minimum)
  {
    longitudinal_position = LongitudinalRelativePosition::AtBack;
    longitudinal_distance = egoMetricRange.minimum - otherMetricRange.maximum;
  }
  else
  {
    longitudinal_distance = Distance(0.);
    if ((egoMetricRange.minimum < otherMetricRange.minimum) && (egoMetricRange.maximum < otherMetricRange.maximum))
    {
      longitudinal_position = LongitudinalRelativePosition::OverlapFront;
    }
    else if ((egoMetricRange.minimum > otherMetricRange.minimum) && (egoMetricRange.maximum > otherMetricRange.maximum))
    {
      longitudinal_position = LongitudinalRelativePosition::OverlapBack;
    }
    else
    {
      longitudinal_position = LongitudinalRelativePosition::Overlap;
    }
  }
}

void RssSituationExtraction::calcluateRelativeLateralPosition(MetricRange const &egoMetricRange,
                                                              MetricRange const &otherMetricRange,
                                                              LateralRelativePosition &lateral_position,
                                                              Distance &lateral_distance)
{
  if (egoMetricRange.minimum > otherMetricRange.maximum)
  {
    lateral_position = LateralRelativePosition::AtRight;
    lateral_distance = egoMetricRange.minimum - otherMetricRange.maximum;
  }
  else if (otherMetricRange.minimum > egoMetricRange.maximum)
  {
    lateral_position = LateralRelativePosition::AtLeft;
    lateral_distance = otherMetricRange.minimum - egoMetricRange.maximum;
  }
  else
  {
    lateral_distance = Distance(0.);
    if ((egoMetricRange.minimum > otherMetricRange.minimum) && (egoMetricRange.maximum > otherMetricRange.maximum))
    {
      lateral_position = LateralRelativePosition::OverlapRight;
    }
    else if ((egoMetricRange.minimum < otherMetricRange.minimum) && (egoMetricRange.maximum < otherMetricRange.maximum))
    {
      lateral_position = LateralRelativePosition::OverlapLeft;
    }
    else
    {
      lateral_position = LateralRelativePosition::Overlap;
    }
  }
}

bool RssSituationExtraction::convertObjectsNonIntersection(world::Constellation const &currentConstellation,
                                                           core::RelativeConstellation &constellation)
{
  if (!currentConstellation.intersecting_road.empty())
  {
    core::getLogger()->error(
      "RssSituationExtraction::convertObjectsNonIntersection[{}->{}]>> Intersecting road not empty {}",
      currentConstellation.ego_vehicle.object_id,
      currentConstellation.object.object_id,
      currentConstellation);
    return false;
  }

  bool result = true;

  structured::ObjectDimensions egoVehicleDimension;
  structured::ObjectDimensions objectToBeCheckedDimension;
  result = structured::calculateObjectDimensions(currentConstellation, egoVehicleDimension, objectToBeCheckedDimension);

  LongitudinalRelativePosition longitudinal_position;
  Distance longitudinal_distance;
  calcluateRelativeLongitudinalPosition(egoVehicleDimension.longitudinalDimensions,
                                        objectToBeCheckedDimension.longitudinalDimensions,
                                        longitudinal_position,
                                        longitudinal_distance);

  constellation.relative_position.longitudinal_position = longitudinal_position;
  constellation.relative_position.longitudinal_distance = longitudinal_distance;

  constellation.ego_state.structured_object_state.is_in_correct_lane = !egoVehicleDimension.onNegativeLane;

  if (currentConstellation.constellation_type == ::ad::rss::world::ConstellationType::OppositeDirection)
  {
    constellation.other_state.structured_object_state.is_in_correct_lane = !objectToBeCheckedDimension.onPositiveLane;
  }
  else
  {
    constellation.other_state.structured_object_state.is_in_correct_lane = !objectToBeCheckedDimension.onNegativeLane;
  }

  /**
   * Set lateral restrictions
   */
  if (result)
  {
    LateralRelativePosition lateral_position;
    Distance lateral_distance;
    calcluateRelativeLateralPosition(egoVehicleDimension.lateralDimensions,
                                     objectToBeCheckedDimension.lateralDimensions,
                                     lateral_position,
                                     lateral_distance);

    constellation.relative_position.lateral_position = lateral_position;
    constellation.relative_position.lateral_distance = lateral_distance;
  }
  return result;
}

void RssSituationExtraction::convertToIntersectionCentric(MetricRange const &objectDimension,
                                                          MetricRange const &intersectionPosition,
                                                          MetricRange &dimensionsIntersection)
{
  dimensionsIntersection.maximum = intersectionPosition.minimum - objectDimension.minimum;
  dimensionsIntersection.minimum = intersectionPosition.minimum - objectDimension.maximum;
}

bool RssSituationExtraction::convertObjectsIntersection(world::Constellation const &currentConstellation,
                                                        core::RelativeConstellation &constellation)
{
  structured::ObjectDimensions egoVehicleDimension;
  structured::ObjectDimensions objectDimension;

  bool result = structured::calculateObjectDimensions(
    currentConstellation.ego_vehicle, currentConstellation.ego_vehicle_road, egoVehicleDimension);

  result = result
    && structured::calculateObjectDimensions(
             currentConstellation.object, currentConstellation.intersecting_road, objectDimension);

  if (result)
  {
    constellation.ego_state.structured_object_state.is_in_correct_lane = !egoVehicleDimension.onNegativeLane;
    constellation.other_state.structured_object_state.is_in_correct_lane = !objectDimension.onNegativeLane;

    // For intersection the lanes don't have the same origin so the positions cannot be directly compared
    // Intersection entry should be the common point so convert the positions to this reference point
    MetricRange egoDimensionsIntersection;
    convertToIntersectionCentric(
      egoVehicleDimension.longitudinalDimensions, egoVehicleDimension.intersectionPosition, egoDimensionsIntersection);

    MetricRange objectDimensionsIntersection;

    convertToIntersectionCentric(
      objectDimension.longitudinalDimensions, objectDimension.intersectionPosition, objectDimensionsIntersection);

    constellation.ego_state.structured_object_state.distance_to_enter_intersection
      = std::max(Distance(0.), egoDimensionsIntersection.minimum);
    constellation.ego_state.structured_object_state.distance_to_leave_intersection
      = std::max(Distance(0.),
                 egoVehicleDimension.intersectionPosition.maximum - egoVehicleDimension.longitudinalDimensions.minimum);

    constellation.other_state.structured_object_state.distance_to_enter_intersection
      = std::max(Distance(0.), objectDimensionsIntersection.minimum);
    constellation.other_state.structured_object_state.distance_to_leave_intersection = std::max(
      Distance(0.), objectDimension.intersectionPosition.maximum - objectDimension.longitudinalDimensions.minimum);

    LongitudinalRelativePosition longitudinal_position;
    Distance longitudinal_distance;
    calcluateRelativeLongitudinalPositionIntersection(
      egoDimensionsIntersection, objectDimensionsIntersection, longitudinal_position, longitudinal_distance);

    constellation.relative_position.longitudinal_position = longitudinal_position;
    constellation.relative_position.longitudinal_distance = longitudinal_distance;

    constellation.relative_position.lateral_position = LateralRelativePosition::Overlap;
    constellation.relative_position.lateral_distance = Distance(0.);
  }

  if (currentConstellation.constellation_type == world::ConstellationType::IntersectionEgoHasPriority)
  {
    constellation.ego_state.structured_object_state.has_priority = true;
    constellation.other_state.structured_object_state.has_priority = false;
  }
  else if (currentConstellation.constellation_type == world::ConstellationType::IntersectionObjectHasPriority)
  {
    constellation.ego_state.structured_object_state.has_priority = false;
    constellation.other_state.structured_object_state.has_priority = true;
  }
  else if (currentConstellation.constellation_type == world::ConstellationType::IntersectionSamePriority)
  {
    constellation.ego_state.structured_object_state.has_priority = false;
    constellation.other_state.structured_object_state.has_priority = false;
  }
  else
  {
    // This function should never be called if we are not in intersection constellation
    core::getLogger()->error(
      "RssSituationExtraction::convertObjectsIntersection[{}->{}]>> Unexpected constellation_type {}",
      currentConstellation.ego_vehicle.object_id,
      currentConstellation.object.object_id,
      currentConstellation);
    result = false; // LCOV_EXCL_LINE: unreachable code, keep to be on the safe side
  }

  return result;
}

bool RssSituationExtraction::extractConstellationInputRangeChecked(world::TimeIndex const &time_index,
                                                                   world::Constellation const &worldConstellation,
                                                                   core::RelativeConstellation &relativeConstellation)
{
  // ensure the object types are semantically correct
  // @toDo: add this restriction to the data type model
  //       and extend generated withinValidInputRange by these
  if (((worldConstellation.object.object_type != world::ObjectType::OtherVehicle)
       && (worldConstellation.object.object_type != world::ObjectType::ArtificialObject)
       && (worldConstellation.object.object_type != world::ObjectType::ArtificialPedestrian)
       && (worldConstellation.object.object_type != world::ObjectType::ArtificialVehicle)
       && (worldConstellation.object.object_type != world::ObjectType::Pedestrian)
       && (worldConstellation.object.object_type != world::ObjectType::Bicycle)
       && (worldConstellation.object.object_type != world::ObjectType::OtherObject))
      || (worldConstellation.ego_vehicle.object_type != world::ObjectType::EgoVehicle))
  {
    core::getLogger()->error(
      "RssSituationExtraction::extractConstellationInputRangeChecked[{}->{}]>> Invalid object type. Ego: "
      "{} Object: {}",
      worldConstellation.ego_vehicle.object_id,
      worldConstellation.object.object_id,
      worldConstellation.ego_vehicle,
      worldConstellation.object);
    return false;
  }
  if (worldConstellation.object.object_id == worldConstellation.ego_vehicle.object_id)
  {
    core::getLogger()->error(
      "RssSituationExtraction::extractConstellationInputRangeChecked[{}->{}]>> Object and ego vehicle must not have "
      "the same id. Ego: {} Object: {}",
      worldConstellation.ego_vehicle.object_id,
      worldConstellation.object.object_id,
      worldConstellation.ego_vehicle,
      worldConstellation.object);
    return false;
  }
  bool result = false;

  try
  {
    relativeConstellation.constellation_id
      = mConstellationIdProvider.getConstellationId(time_index, worldConstellation);
    relativeConstellation.ego_id = worldConstellation.ego_vehicle.object_id;
    relativeConstellation.object_id = worldConstellation.object.object_id;
    relativeConstellation.constellation_type = worldConstellation.constellation_type;

    relativeConstellation.ego_state.object_type = worldConstellation.ego_vehicle.object_type;
    relativeConstellation.other_state.object_type = worldConstellation.object.object_type;

    relativeConstellation.ego_state.unstructured_object_state = worldConstellation.ego_vehicle.state;
    relativeConstellation.other_state.unstructured_object_state = worldConstellation.object.state;

    relativeConstellation.ego_state.structured_object_state.has_priority = false;
    relativeConstellation.other_state.structured_object_state.has_priority = false;

    relativeConstellation.ego_state.structured_object_state.is_in_correct_lane = true;
    relativeConstellation.other_state.structured_object_state.is_in_correct_lane = true;

    relativeConstellation.ego_state.structured_object_state.distance_to_enter_intersection = Distance(0.);
    relativeConstellation.ego_state.structured_object_state.distance_to_leave_intersection = Distance(1000.);

    relativeConstellation.other_state.structured_object_state.distance_to_enter_intersection = Distance(0.);
    relativeConstellation.other_state.structured_object_state.distance_to_leave_intersection = Distance(1000.);

    structured::convertVehicleStateDynamics(
      worldConstellation.ego_vehicle, worldConstellation.ego_vehicle_rss_dynamics, relativeConstellation.ego_state);
    structured::convertVehicleStateDynamics(
      worldConstellation.object, worldConstellation.object_rss_dynamics, relativeConstellation.other_state);

    switch (worldConstellation.constellation_type)
    {
      case ad::rss::world::ConstellationType::SameDirection:
      case ad::rss::world::ConstellationType::OppositeDirection:
      {
        result = convertObjectsNonIntersection(worldConstellation, relativeConstellation);

        break;
      }
      case ad::rss::world::ConstellationType::IntersectionEgoHasPriority:
      case ad::rss::world::ConstellationType::IntersectionObjectHasPriority:
      case ad::rss::world::ConstellationType::IntersectionSamePriority:
      {
        result = convertObjectsIntersection(worldConstellation, relativeConstellation);
        break;
      }
      case ad::rss::world::ConstellationType::NotRelevant:
      case ad::rss::world::ConstellationType::Unstructured:
      {
        result = true;
        break;
      }
      default:
      {
        core::getLogger()->error(
          "RssSituationExtraction::extractConstellationInputRangeChecked[{}->{}]>> Invalid constellation type {}",
          worldConstellation.ego_vehicle.object_id,
          worldConstellation.object.object_id,
          worldConstellation);
        result = false;
        break;
      }
    }
  }
  catch (std::exception &e)
  {
    core::getLogger()->critical(
      "RssSituationExtraction::extractConstellationInputRangeChecked[{}->{}]>> Exception caught '{}' {} {}",
      worldConstellation.ego_vehicle.object_id,
      worldConstellation.object.object_id,
      e.what(),
      time_index,
      worldConstellation);
    result = false;
  }
  catch (...)
  {
    core::getLogger()->critical(
      "RssSituationExtraction::extractConstellationInputRangeChecked[{}->{}]>> Exception caught {} {}",
      worldConstellation.ego_vehicle.object_id,
      worldConstellation.object.object_id,
      time_index,
      worldConstellation);
    result = false;
  }

  return result;
}

bool RssSituationExtraction::mergeVehicleStates(MergeMode const &mergeMode,
                                                core::RelativeObjectState const &other_state,
                                                core::RelativeObjectState &mergedVehicleState)
{
  // on vehicle states there are only differences in intersection distances allowed due to different road definitions
  if ((other_state.dynamics.alpha_lat.accel_max != mergedVehicleState.dynamics.alpha_lat.accel_max)
      || (other_state.dynamics.alpha_lat.brake_min != mergedVehicleState.dynamics.alpha_lat.brake_min)
      || (other_state.dynamics.alpha_lon.accel_max != mergedVehicleState.dynamics.alpha_lon.accel_max)
      || (other_state.dynamics.alpha_lon.brake_min_correct != mergedVehicleState.dynamics.alpha_lon.brake_min_correct)
      || (other_state.dynamics.alpha_lon.brake_min != mergedVehicleState.dynamics.alpha_lon.brake_min)
      || (other_state.dynamics.alpha_lon.brake_max != mergedVehicleState.dynamics.alpha_lon.brake_max)
      || (other_state.dynamics.lateral_fluctuation_margin != mergedVehicleState.dynamics.lateral_fluctuation_margin)
      || (other_state.dynamics.response_time != mergedVehicleState.dynamics.response_time)
      || (other_state.structured_object_state.has_priority != mergedVehicleState.structured_object_state.has_priority))
  {
    return false;
  }
  // consider the worst cases
  if (mergeMode == MergeMode::EgoVehicle)
  {
    // worst case for ego vehicle is not driving in correct lane
    mergedVehicleState.structured_object_state.is_in_correct_lane
      = mergedVehicleState.structured_object_state.is_in_correct_lane
      && other_state.structured_object_state.is_in_correct_lane;
  }
  else
  {
    // worst case for other vehicle is driving in correct lane
    mergedVehicleState.structured_object_state.is_in_correct_lane
      = mergedVehicleState.structured_object_state.is_in_correct_lane
      || other_state.structured_object_state.is_in_correct_lane;
  }

  mergedVehicleState.structured_object_state.distance_to_enter_intersection
    = std::min(mergedVehicleState.structured_object_state.distance_to_enter_intersection,
               other_state.structured_object_state.distance_to_enter_intersection);
  mergedVehicleState.structured_object_state.distance_to_leave_intersection
    = std::max(mergedVehicleState.structured_object_state.distance_to_leave_intersection,
               other_state.structured_object_state.distance_to_leave_intersection);
  mergedVehicleState.structured_object_state.velocity.speed_lon_min
    = std::min(mergedVehicleState.structured_object_state.velocity.speed_lon_min,
               other_state.structured_object_state.velocity.speed_lon_min);
  mergedVehicleState.structured_object_state.velocity.speed_lon_max
    = std::max(mergedVehicleState.structured_object_state.velocity.speed_lon_max,
               other_state.structured_object_state.velocity.speed_lon_max);
  mergedVehicleState.structured_object_state.velocity.speed_lat_min
    = std::min(mergedVehicleState.structured_object_state.velocity.speed_lat_min,
               other_state.structured_object_state.velocity.speed_lat_min);
  mergedVehicleState.structured_object_state.velocity.speed_lat_max
    = std::max(mergedVehicleState.structured_object_state.velocity.speed_lat_max,
               other_state.structured_object_state.velocity.speed_lat_max);

  return true;
}

bool RssSituationExtraction::mergeConstellations(core::RelativeConstellation const &otherConstellation,
                                                 core::RelativeConstellation &mergedConstellation)
{
  if ( // basic data has to match
    (otherConstellation.constellation_id != mergedConstellation.constellation_id)
    || (otherConstellation.ego_id != mergedConstellation.ego_id)
    || (otherConstellation.object_id != mergedConstellation.object_id)
    || (otherConstellation.constellation_type != mergedConstellation.constellation_type)
    || !mergeVehicleStates(MergeMode::EgoVehicle, otherConstellation.ego_state, mergedConstellation.ego_state)
    || !mergeVehicleStates(MergeMode::OtherVehicle, otherConstellation.other_state, mergedConstellation.other_state))
  {
    return false;
  }

  // worst case
  mergedConstellation.relative_position.longitudinal_distance
    = std::min(mergedConstellation.relative_position.longitudinal_distance,
               otherConstellation.relative_position.longitudinal_distance);
  if (otherConstellation.relative_position.longitudinal_position
      != mergedConstellation.relative_position.longitudinal_position)
  {
    if ((mergedConstellation.relative_position.longitudinal_position == LongitudinalRelativePosition::Overlap)
        || (otherConstellation.relative_position.longitudinal_position == LongitudinalRelativePosition::Overlap)
        || ((mergedConstellation.relative_position.longitudinal_position < LongitudinalRelativePosition::Overlap)
            && (otherConstellation.relative_position.longitudinal_position > LongitudinalRelativePosition::Overlap))
        || ((mergedConstellation.relative_position.longitudinal_position > LongitudinalRelativePosition::Overlap)
            && (otherConstellation.relative_position.longitudinal_position < LongitudinalRelativePosition::Overlap)))
    {
      // overlap is also worst case for contradicting input, ensure the longitudinal distance becomes 0.
      mergedConstellation.relative_position.longitudinal_position = LongitudinalRelativePosition::Overlap;
      mergedConstellation.relative_position.longitudinal_distance = Distance(0.);
    }
    else if ((mergedConstellation.relative_position.longitudinal_position == LongitudinalRelativePosition::OverlapFront)
             || (otherConstellation.relative_position.longitudinal_position
                 == LongitudinalRelativePosition::OverlapFront))
    {
      // one of the both is overlap font (the other then only can be InFront in here)
      mergedConstellation.relative_position.longitudinal_position = LongitudinalRelativePosition::OverlapFront;
    }
    else if ((mergedConstellation.relative_position.longitudinal_position == LongitudinalRelativePosition::OverlapBack)
             || (otherConstellation.relative_position.longitudinal_position
                 == LongitudinalRelativePosition::OverlapBack))
    {
      // one of the both is overlap back (the other then only can be AtBack in here)
      mergedConstellation.relative_position.longitudinal_position = LongitudinalRelativePosition::OverlapBack;
    }
    else
    {
      // LCOV_EXCL_START: unreachable code, keep to be on the safe side
      // this is impossible to reach, set to overlap having longitudinal distance to 0. to be on the safe side
      mergedConstellation.relative_position.longitudinal_position = LongitudinalRelativePosition::Overlap;
      mergedConstellation.relative_position.longitudinal_distance = Distance(0.);
      // LCOV_EXCL_STOP: unreachable code, keep to be on the safe side
    }
  }

  mergedConstellation.relative_position.lateral_distance = std::min(
    mergedConstellation.relative_position.lateral_distance, otherConstellation.relative_position.lateral_distance);
  if (otherConstellation.relative_position.lateral_position != mergedConstellation.relative_position.lateral_position)
  {
    if ((mergedConstellation.relative_position.lateral_position == LateralRelativePosition::Overlap)
        || (otherConstellation.relative_position.lateral_position == LateralRelativePosition::Overlap)
        || ((mergedConstellation.relative_position.lateral_position < LateralRelativePosition::Overlap)
            && (otherConstellation.relative_position.lateral_position > LateralRelativePosition::Overlap))
        || ((mergedConstellation.relative_position.lateral_position > LateralRelativePosition::Overlap)
            && (otherConstellation.relative_position.lateral_position < LateralRelativePosition::Overlap)))
    {
      // overlap is also worst case for contradicting input, ensure the lateral distance becomes 0.
      mergedConstellation.relative_position.lateral_position = LateralRelativePosition::Overlap;
      mergedConstellation.relative_position.lateral_distance = Distance(0.);
    }
    else if ((mergedConstellation.relative_position.lateral_position == LateralRelativePosition::OverlapLeft)
             || (otherConstellation.relative_position.lateral_position == LateralRelativePosition::OverlapLeft))
    {
      // one of the both is overlap left (the other then only can be AtLeft in here)
      mergedConstellation.relative_position.lateral_position = LateralRelativePosition::OverlapLeft;
    }
    else if ((mergedConstellation.relative_position.lateral_position == LateralRelativePosition::OverlapRight)
             || (otherConstellation.relative_position.lateral_position == LateralRelativePosition::OverlapRight))
    {
      // one of the both is overlap right (the other then only can be AtRight in here)
      mergedConstellation.relative_position.lateral_position = LateralRelativePosition::OverlapRight;
    }
    else
    {
      // LCOV_EXCL_START: unreachable code, keep to be on the safe side
      // this is impossible to reach, set to overlap having lateral distance to 0. to be on the safe side
      mergedConstellation.relative_position.lateral_position = LateralRelativePosition::Overlap;
      mergedConstellation.relative_position.lateral_distance = Distance(0.);
      // LCOV_EXCL_STOP: unreachable code, keep to be on the safe side
    }
  }

  mergedConstellation.world_model_indices.insert(mergedConstellation.world_model_indices.end(),
                                                 otherConstellation.world_model_indices.begin(),
                                                 otherConstellation.world_model_indices.end());

  return true;
}

bool RssSituationExtraction::extractSituation(world::WorldModel const &worldModel,
                                              core::RssSituationSnapshot &situationSnapshot)
{
  if (!withinValidInputRange(worldModel))
  {
    core::getLogger()->error("RssSituationExtraction::extractSituation>> Invalid input {}", worldModel);
    return false;
  }

  bool result = true;
  try
  {
    situationSnapshot.time_index = worldModel.time_index;
    situationSnapshot.default_ego_vehicle_rss_dynamics = worldModel.default_ego_vehicle_rss_dynamics;
    situationSnapshot.constellations.clear();
    for (uint64_t world_model_index = 0u; world_model_index < worldModel.constellations.size(); world_model_index++)
    {
      auto const worldConstellation = worldModel.constellations[world_model_index];
      core::RelativeConstellation relativeConstellation;
      relativeConstellation.world_model_indices.push_back(world_model_index);
      bool const extractResult
        = extractConstellationInputRangeChecked(worldModel.time_index, worldConstellation, relativeConstellation);
      if (extractResult)
      {
        // constellation id creation might detect that different world constellations are representing identical
        // relative constellations
        // ensure the situationSnapshot is unique while containing the merged constellation
        auto findResult
          = std::find_if(situationSnapshot.constellations.begin(),
                         situationSnapshot.constellations.end(),
                         [&relativeConstellation](core::RelativeConstellation const &checkConstellation) {
                           return checkConstellation.constellation_id == relativeConstellation.constellation_id;
                         });
        if (findResult == situationSnapshot.constellations.end())
        {
          situationSnapshot.constellations.push_back(relativeConstellation);
        }
        else if (!mergeConstellations(relativeConstellation, *findResult))
        {
          result = false;
        }
      }
      else
      {
        core::getLogger()->error("RssSituationExtraction::extractSituation>> Extraction failed {}", worldConstellation);
        result = false;
      }
    }
  }
  catch (std::exception &e)
  {
    core::getLogger()->critical(
      "RssSituationExtraction::extractSituation>> Exception caught '{}' {}", e.what(), worldModel);
    result = false;
  }
  catch (...)
  {
    core::getLogger()->critical("RssSituationExtraction::extractSituation>> Exception caught {}", worldModel);
    result = false;
  }
  return result;
}

} // namespace core
} // namespace rss
} // namespace ad
