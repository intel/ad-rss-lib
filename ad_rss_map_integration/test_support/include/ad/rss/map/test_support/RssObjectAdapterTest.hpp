// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#pragma once

#include <ad/map/lane/LaneOperation.hpp>
#include <ad/map/match/MapMatchedOperation.hpp>
#include <ad/map/route/Planning.hpp>
#include <ad/rss/map/RssObjectAdapter.hpp>
#include <ad/rss/map/RssRouteCheckerControl.hpp>
#include <tuple>

namespace ad {
namespace rss {
namespace map {
namespace test_support {

class CheckerControlTest : public ::ad::rss::map::RssRouteCheckerControl<void *>
{
public:
  /*!
   * \brief Smart pointer on RssObjectAdapter
   */
  typedef std::shared_ptr<CheckerControlTest> Ptr;

  /*!
   * \brief Smart pointer on constant RssObjectAdapter
   */
  typedef std::shared_ptr<CheckerControlTest const> ConstPtr;

  static const ::ad::physics::Duration cResponseTimeEgoVehicle;
  static const ::ad::physics::Duration cResponseTimeOtherVehicles;

  static const ::ad::physics::Acceleration cMaximumLongitudinalAcceleration;
  static const ::ad::physics::Acceleration cMinimumLongitudinalBrakingDeceleleration;
  static const ::ad::physics::Acceleration cMaximumLongitudinalBrakingDeceleleration;
  static const ::ad::physics::Acceleration cMinimumLongitudinalBrakingDecelelerationCorrect;

  static const ::ad::physics::Acceleration cMaximumLateralAcceleration;
  static const ::ad::physics::Acceleration cMinimumLateralBrakingDeceleleration;

  CheckerControlTest();

  ::ad::rss::world::UnstructuredSettings getUnstructuredSettings();
  ::ad::rss::world::RssDynamics getObjectVehicleDynamics(::ad::physics::Speed const max_speed_on_acceleration
                                                         = ::ad::physics::Speed(100.));
  ::ad::rss::world::RssDynamics getEgoVehicleDynamics(::ad::physics::Speed const max_speed_on_acceleration
                                                      = ::ad::physics::Speed(100.));

  ::ad::rss::world::RssDynamics defaultPedestrianRssDynamicsCallback(void *pedestrian)
  {
    (void)pedestrian;
    return getObjectVehicleDynamics();
  }

  ::ad::rss::world::RssDynamics defaultOtherVehicleRssDynamicsCallback(void *otherVehicle)
  {
    (void)otherVehicle;
    return getObjectVehicleDynamics();
  }

  ::ad::rss::world::RssDynamics defaultEgoVehicleRssDynamicsCallback(void *egoVehicle)
  {
    (void)egoVehicle;
    return getEgoVehicleDynamics();
  }

  ::ad::rss::map::RssConstellationConfiguration
  vehicleConstellationCallback(::ad::rss::map::RssRoute const &route,
                               ::ad::rss::map::RssObjectData const &egoVehicleObject,
                               void *egoVehicle,
                               ::ad::rss::map::RssObjectData const &otherVehicleObject,
                               void *otherVehicle)
  {
    (void)route;
    (void)egoVehicle;
    (void)otherVehicle;
    ::ad::rss::map::RssConstellationConfiguration result;
    result.ego_vehicle_dynamics = egoVehicleObject.rss_dynamics;
    result.object_dynamics = otherVehicleObject.rss_dynamics;
    result.restrict_speed_limit_mode = mRestrictSpeedLimitMode;
    result.constellation_creation_mode = mVehicleWorldModelCreationMode;
    return result;
  }

  ::ad::rss::map::RssConstellationConfiguration
  pedestrianConstellationCallback(::ad::rss::map::RssRoute const &route,
                                  ::ad::rss::map::RssObjectData const &egoVehicleObject,
                                  void *egoVehicle,
                                  ::ad::rss::map::RssObjectData const &pedestrianObject,
                                  void *pedestrian)
  {
    (void)route;
    (void)egoVehicle;
    (void)pedestrian;
    ::ad::rss::map::RssConstellationConfiguration result;
    result.ego_vehicle_dynamics = egoVehicleObject.rss_dynamics;
    result.object_dynamics = pedestrianObject.rss_dynamics;
    result.restrict_speed_limit_mode = mRestrictSpeedLimitMode;
    result.constellation_creation_mode = mPedestrianWorldModelCreationMode;
    return result;
  }

  ::ad::rss::map::RssConstellationConfiguration
  artificialObjectConstellationCallback(::ad::rss::map::RssRoute const &route,
                                        ::ad::rss::map::RssObjectData const &egoVehicleObject,
                                        void *egoVehicle,
                                        ::ad::rss::map::RssObjectData const &artificialObject)
  {
    (void)route;
    (void)egoVehicle;
    ::ad::rss::map::RssConstellationConfiguration result;
    result.ego_vehicle_dynamics = egoVehicleObject.rss_dynamics;
    result.object_dynamics = artificialObject.rss_dynamics;
    result.restrict_speed_limit_mode = mRestrictSpeedLimitMode;
    if (artificialObject.type == ::ad::rss::world::ObjectType::ArtificialVehicle)
    {
      result.constellation_creation_mode = mArtificialVehicleWorldModelCreationMode;
    }
    else if (artificialObject.type == ::ad::rss::world::ObjectType::ArtificialPedestrian)
    {
      result.constellation_creation_mode = mArtificialPedestrianWorldModelCreationMode;
    }
    else
    {
      result.constellation_creation_mode = mArtificialObjectWorldModelCreationMode;
    }
    return result;
  }

  ::ad::rss::map::RssRestrictSpeedLimitMode mRestrictSpeedLimitMode;
  ::ad::rss::map::RssConstellationCreationMode mPedestrianWorldModelCreationMode;
  ::ad::rss::map::RssConstellationCreationMode mVehicleWorldModelCreationMode;
  ::ad::rss::map::RssConstellationCreationMode mArtificialObjectWorldModelCreationMode;
  ::ad::rss::map::RssConstellationCreationMode mArtificialPedestrianWorldModelCreationMode;
  ::ad::rss::map::RssConstellationCreationMode mArtificialVehicleWorldModelCreationMode;
};

class RssObjectInstanceTest : public RssObjectInstance<void *>
{
public:
  /*!
   * \brief Smart pointer on RssObjectAdapter
   */
  typedef std::shared_ptr<RssObjectInstanceTest> Ptr;

  /*!
   * \brief Smart pointer on constant RssObjectAdapter
   */
  typedef std::shared_ptr<RssObjectInstanceTest const> ConstPtr;

  RssObjectInstanceTest(::ad::rss::world::ObjectId const &objectId,
                        ::ad::rss::world::ObjectType const &objectType,
                        CheckerControlTest::Ptr checkerControl)
    : RssObjectInstance<void *>(nullptr, checkerControl)
    , mObjectId(objectId)
    , mObjectType(objectType)
  {
  }

  virtual ~RssObjectInstanceTest() = default;

  ::ad::rss::world::ObjectType getObjectType() const override
  {
    return mObjectType;
  }

  ::ad::rss::world::ObjectId mObjectId;
  ::ad::rss::world::ObjectType mObjectType;
};

class RssObjectAdapterTest : virtual public ::ad::rss::map::RssObjectAdapter<void *>
{
public:
  /*!
   * \brief Smart pointer on RssObjectAdapterTest
   */
  typedef std::shared_ptr<RssObjectAdapterTest> Ptr;

  /*!
   * \brief Smart pointer on constant RssObjectAdapterTest
   */
  typedef std::shared_ptr<RssObjectAdapterTest const> ConstPtr;

  typedef std::tuple<::ad::map::point::Longitude, ::ad::map::point::Latitude, double> ObjectGeoLocationTuple;

  static ::ad::map::point::GeoPoint getGeoPoint(ObjectGeoLocationTuple const &objectLocation)
  {
    auto const lon = std::get<0>(objectLocation);
    auto const lat = std::get<1>(objectLocation);
    if (lon.isValid() && lat.isValid())
    {
      return ::ad::map::point::createGeoPoint(lon, lat, ::ad::map::point::AltitudeUnknown);
    }
    else
    {
      return ::ad::map::point::GeoPoint();
    }
  }

  static ::ad::map::point::ENUPoint getENUPoint(ad::map::point::GeoPoint const &geo_point)
  {
    if (isValid(geo_point, false))
    {
      if (geo_point.altitude == ::ad::map::point::AltitudeUnknown)
      {
        ::ad::map::match::AdMapMatching mapMatching;
        auto matchResults = mapMatching.findLanes(geo_point, ad::physics::Distance(0.1));
        if (!matchResults.empty())
        {
          return ::ad::map::point::toENU(matchResults[0].matched_point);
        }
        return ::ad::map::point::ENUPoint();
      }
      return ::ad::map::point::toENU(geo_point);
    }
    else
    {
      return ::ad::map::point::ENUPoint();
    }
  }

  static ::ad::map::point::ENUPoint getENUPoint(ObjectGeoLocationTuple const &objectLocation)
  {
    auto const geo_point = getGeoPoint(objectLocation);
    return getENUPoint(geo_point);
  }

  static ::ad::map::point::ENUHeading getENUHeading(ObjectGeoLocationTuple const &objectLocation)
  {
    auto const heading = ::ad::physics::Angle(std::get<2>(objectLocation));
    if (std::fabs(heading) > ::ad::physics::c2PI)
    {
      ::ad::map::match::AdMapMatching mapMatching;
      auto const matchPositionRouteStart = mapMatching.getMapMatchedPositions(
        getGeoPoint(objectLocation), ::ad::physics::Distance(1), ::ad::physics::Probability(0.5));
      if (!matchPositionRouteStart.empty())
      {
        return ::ad::map::lane::getLaneENUHeading(matchPositionRouteStart.front());
      }
      else
      {
        return ::ad::map::point::ENUHeading();
      }
    }
    return ::ad::map::point::createENUHeading(heading);
  }

  void prepareMatchPosition()
  {
    ::ad::map::match::AdMapMatching mapMatching;
    mTestMatchObject = getMatchedObject(mapMatching, ::ad::physics::Distance(2.));
  }

  ::ad::rss::map::RssObjectData getTestRssObjecData()
  {
    ::ad::rss::map::RssObjectData rssObjectData;
    rssObjectData.id = getObjectId();
    rssObjectData.type = getObjectType();
    rssObjectData.last_update = std::chrono::system_clock::now();
    if (mTestMatchObject.map_matched_bounding_box.reference_point_positions.empty())
    {
      prepareMatchPosition();
    }
    rssObjectData.match_object = mTestMatchObject;
    rssObjectData.speed_range = getSpeedRange();
    rssObjectData.yaw_rate = getYawRate();
    rssObjectData.rss_dynamics = getDefaultRssDynamics();
    rssObjectData.steering_angle = getSteeringAngle();
    return rssObjectData;
  }

  RssObjectInstanceTest::Ptr getObjectInstance()
  {
    return std::dynamic_pointer_cast<RssObjectInstanceTest>(mObjectInstance);
  }

  explicit RssObjectAdapterTest(RssObjectInstanceTest::Ptr objectInstance, ObjectGeoLocationTuple const &objectLocation)
    : RssObjectAdapter<void *>(objectInstance)
  {
    id = getObjectInstance()->mObjectId;
    yaw_rate = ad::physics::AngularVelocity(0.);
    updatePosition(objectLocation);
    dimension.length = ::ad::physics::Distance(4.5);
    dimension.width = ::ad::physics::Distance(2.);
    dimension.height = ::ad::physics::Distance(1.5);
    speed_range.minimum = ::ad::physics::Speed(0.);
    speed_range.maximum = ::ad::physics::Speed(0.);
    steering_angle = ::ad::physics::Angle(0.);
  }

  void updatePosition(ObjectGeoLocationTuple const &objectLocation)
  {
    auto enuPoint = getENUPoint(objectLocation);
    if (withinValidInputRange(enuPoint, false))
    {
      heading = getENUHeading(objectLocation);
      center_point = enuPoint;
    }
  }

  virtual ~RssObjectAdapterTest() = default;

  ::ad::rss::world::RssDynamics mDefaultRssDynamics;

  ::ad::map::match::Object mTestMatchObject;
};

class RssPedestrianAdapterTest : public ::ad::rss::map::RssPedestrianAdapter<void *>, public RssObjectAdapterTest
{
public:
  /*!
   * \brief Smart pointer on RssPedestrianAdapterTest
   */
  typedef std::shared_ptr<RssPedestrianAdapterTest> Ptr;

  /*!
   * \brief Smart pointer on constant RssPedestrianAdapterTest
   */
  typedef std::shared_ptr<RssPedestrianAdapterTest const> ConstPtr;

  ::ad::rss::map::RssObjectData getTestRssObjecData()
  {
    return RssObjectAdapterTest::getTestRssObjecData();
  }

  RssPedestrianAdapterTest(RssObjectInstanceTest::Ptr objectInstance, ObjectGeoLocationTuple const &objectLocation)
    : ::ad::rss::map::RssObjectAdapter<void *>(objectInstance)
    , ::ad::rss::map::RssPedestrianAdapter<void *>(objectInstance)
    , RssObjectAdapterTest(objectInstance, objectLocation)
  {
  }
};

class RssVehicleAdapterTest : public virtual ::ad::rss::map::RssVehicleAdapter<void *>, public RssObjectAdapterTest
{
public:
  /*!
   * \brief Smart pointer on RssVehicleAdapterTest
   */
  typedef std::shared_ptr<RssVehicleAdapterTest> Ptr;

  /*!
   * \brief Smart pointer on constant RssVehicleAdapterTest
   */
  typedef std::shared_ptr<RssVehicleAdapterTest const> ConstPtr;

  ::ad::rss::map::RssObjectData getTestRssObjecData()
  {
    return RssObjectAdapterTest::getTestRssObjecData();
  }

  void prepareRoute()
  {
    auto const routingTargetOperation = getCheckerControl()->getCurrentRoutingTargetOperation(getObjectId());
    if (routingTargetOperation.command != RssRoutingTargetCommand::None)
    {
      ::ad::map::point::ParaPoint startPoint;
      if (!mTestMatchObject.map_matched_bounding_box.reference_point_positions.empty())
      {
        startPoint
          = mTestMatchObject.map_matched_bounding_box
              .reference_point_positions[static_cast<uint64_t>(::ad::map::match::ObjectReferencePoints::Center)][0]
              .lane_point.para_point;
      }
      else
      {
        startPoint = ::ad::map::lane::uniqueParaPoint(::ad::map::point::toGeo(getCenterPoint()));
      }
      mTestRoute = ::ad::map::route::planning::planRoute(
        ::ad::map::route::planning::createRoutingPoint(startPoint, getHeading()),
        routingTargetOperation.routingTargets);
    }
  }

  void shortenRoute()
  {
    if (!mTestMatchObject.map_matched_bounding_box.reference_point_positions.empty())
    {
      ad::map::point::ParaPointList allLaneMatches;
      for (auto referencePoint :
           {::ad::map::match::ObjectReferencePoints::RearRight, ::ad::map::match::ObjectReferencePoints::RearLeft})
      {
        auto const &referencePosition
          = mTestMatchObject.map_matched_bounding_box.reference_point_positions[size_t(referencePoint)];
        auto const paraPoints = ::ad::map::match::getParaPoints(referencePosition);
        allLaneMatches.insert(allLaneMatches.end(), paraPoints.begin(), paraPoints.end());
      }

      ::ad::map::route::shortenRoute(
        allLaneMatches,
        mTestRoute,
        ::ad::map::route::ShortenRouteMode::DontCutIntersectionAndPrependIfSucceededBeforeRoute);
    }
  }

  RssVehicleAdapterTest(RssObjectInstanceTest::Ptr objectInstance, ObjectGeoLocationTuple const &objectLocation)
    : ::ad::rss::map::RssObjectAdapter<void *>(objectInstance)
    , ::ad::rss::map::RssVehicleAdapter<void *>(objectInstance)
    , RssObjectAdapterTest(objectInstance, objectLocation)
  {
  }

  ::ad::map::route::FullRoute mTestRoute;
};

class RssEgoVehicleAdapterTest : public ::ad::rss::map::RssEgoVehicleAdapter<void *>, public RssVehicleAdapterTest
{
public:
  /*!
   * \brief Smart pointer on RssEgoVehicleAdapterTest
   */
  typedef std::shared_ptr<RssEgoVehicleAdapterTest> Ptr;

  /*!
   * \brief Smart pointer on constant RssEgoVehicleAdapterTest
   */
  typedef std::shared_ptr<RssEgoVehicleAdapterTest const> ConstPtr;

  ::ad::rss::map::RssObjectData getTestRssObjecData()
  {
    return RssObjectAdapterTest::getTestRssObjecData();
  }

  RssEgoVehicleAdapterTest(RssObjectInstanceTest::Ptr objectInstance, ObjectGeoLocationTuple const &objectLocation)
    : ::ad::rss::map::RssObjectAdapter<void *>(objectInstance)
    , ::ad::rss::map::RssVehicleAdapter<void *>(objectInstance)
    , ::ad::rss::map::RssEgoVehicleAdapter<void *>(objectInstance)
    , RssVehicleAdapterTest(objectInstance, objectLocation)
  {
  }
};

} // namespace test_support
} // namespace map
} // namespace rss
} // namespace ad
