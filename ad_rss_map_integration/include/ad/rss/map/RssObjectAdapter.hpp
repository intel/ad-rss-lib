// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include <ad/map/match/AdMapMatching.hpp>
#include <ad/rss/map/RssObjectAdapterData.hpp>
#include <ad/rss/map/RssObjectData.hpp>
#include <ad/rss/map/RssObjectInstance.hpp>
#include "ad/rss/map/RssAppendRoadBoundariesMode.hpp"
#include "ad/rss/map/RssConstellationConfiguration.hpp"
#include "ad/rss/map/RssRouteList.hpp"

/*!
 * @brief namespace rss
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace map
 */
namespace map {

/*! @brief Base class to access basic object information required to perform the RSS checks in conjunction with the
 * RssRouteChecker class.
 *
 *  Derived from this class virtually to allows for a similar class layout
 *  on side of the concrete implementations of this to be able to handle common functionality of
 *  vehicles and pedestrians at one place. E.g.:
 *
 *  class RssObjectAdapterCustom: public virtual RssObjectAdapter {};
 *  class RssPedestrianAdapterCustom: public RssObjectAdapterCustom, public RssPedestrianAdapter {};
 *  class RssVehicleAdapterCustom: public RssObjectAdapterCustom, public virtual RssVehicleAdapter {};
 *  class RssEgoVehicleAdapterCustom: public RssVehicleAdapterCustom, public RssEgoVehicleAdapter {};
 *
 *  Where RssArtificialObjectAdapter plays a special role to be used to inject additional artificial
 *  objects to be considered in addition by the RSS calculation.
 *
 *  The pure virtual Getter-functions of this class have to be provided by some derived class.
 *  This not necessarily has to be the direct child class (e.g. RssObjectAdapterCustom), since RssObjectAdapter is not
 *  used directly.
 *  Other virtual functions might be implemented by derived classed to take care on the required steps on their own
 *  instead of letting the default implementation handle these (see details on in the function descriptions).
 */
template <class OBJECT_INSTANCE_TYPE> class RssObjectAdapter : public RssObjectAdapterData
{
public:
  /*!
   * \brief Smart pointer on RssObjectAdapter
   */
  typedef std::shared_ptr<RssObjectAdapter> Ptr;

  /*!
   * \brief Smart pointer on constant RssObjectAdapter
   */
  typedef std::shared_ptr<RssObjectAdapter const> ConstPtr;

  typedef typename RssObjectInstance<OBJECT_INSTANCE_TYPE>::Ptr ObjectInstancePtr;
  typedef typename RssObjectInstance<OBJECT_INSTANCE_TYPE>::ConstPtr ObjectInstanceConstPtr;

  /*! @brief default constructor
   */
  explicit RssObjectAdapter(ObjectInstancePtr const objectInstance)
    : mObjectInstance(objectInstance)
  {
    RssObjectAdapterData::object_type = mObjectInstance->getObjectType();
  }

  /*! @brief default destructor
   */
  virtual ~RssObjectAdapter() = default;

  /*! @returns the object type of this.
   *
   *  This function is not virtual by intension. If a derived class (e.g. RssEgoVehicleAdapter) is not used as
   *  ego-vehicle, but e.g. as other vehicle, the object type should reflect this.
   */
  ::ad::rss::world::ObjectType getObjectType() const
  {
    return object_type;
  }

  /*! @brief get the checker control instance
   */
  typename RssRouteCheckerControl<OBJECT_INSTANCE_TYPE>::Ptr getCheckerControl() const
  {
    return getObjectInstance()->getCheckerControl();
  }

  /*! @brief get the underlying object instance type
   */
  ObjectInstancePtr getObjectInstance() const
  {
    return mObjectInstance;
  }

  /*! @brief get the underlying object instance type.
   */
  OBJECT_INSTANCE_TYPE &getObjectInstanceType()
  {
    return getObjectInstance()->getObjectInstanceType();
  }

  /*! @brief get the underlying object instance type
   */
  OBJECT_INSTANCE_TYPE const &getObjectInstanceType() const
  {
    return getObjectInstance()->getObjectInstanceType();
  }

  /*! @brief get the default RSS dynamics to be used for the object.
   *
   *  Default implementation deploys RssRouteCheckerControl in conjunction with the object_type to gather results.
   */
  virtual ::ad::rss::world::RssDynamics getDefaultRssDynamics() const
  {
    return getCheckerControl()->getDefaultRssDynamics(object_type, getObjectInstanceType());
  }

  /*! @brief get the dimensions of the object to be considered:
   *  the stored (estimated) dimensions are expanded by the position confidence
   */
  ::ad::physics::Dimension3D getDimensions() const override
  {
    ::ad::physics::Dimension3D expanded_dimension = dimension;
    if (getCheckerControl()->getConsiderPositionConfidence())
    {
      expanded_dimension.length += 2.0 * position_confidence_ellipse_half_axis_dimension.length;
      expanded_dimension.width += 2.0 * position_confidence_ellipse_half_axis_dimension.width;
    }
    return expanded_dimension;
  }

  /*! @brief Perform actual map matching of the object
   *
   *  This function is called each time step ONCE to get the latest map matching results.
   *  The default implementation mainly calls into ::ad::map::match::AdMapMatching::getMapMatchedBoundingBox()
   *
   *  Can be reimplemented if the map matched position of the object is already available by other means.
   *
   *  @param[in] mapMatching the map matching object used for map matching
   *  @param[in] sampling_distance the sampling_distance parameter for the mapMatching.getMapMatchedBoundingBox() call.
   *
   *  If there is specific user implementation available for this, this can be overridden.
   */
  virtual ::ad::map::match::Object getMatchedObject(::ad::map::match::AdMapMatching const &mapMatching,
                                                    physics::Distance const sampling_distance) const
  {
    ::ad::map::match::Object matchedObject;
    matchedObject.enu_position.center_point = getCenterPoint();
    matchedObject.enu_position.heading = getHeading();
    matchedObject.enu_position.dimension = getDimensions();
    matchedObject.enu_position.enu_reference_point = ::ad::map::access::getENUReferencePoint();
    matchedObject.map_matched_bounding_box
      = mapMatching.getMapMatchedBoundingBox(matchedObject.enu_position, sampling_distance);
    return matchedObject;
  }

  /*!
   * @brief Indicate if the object id of this remains unique over time
   *
   * If the object is re-associated over time e.g. the object is tracked, this is \c true.
   * In that case it is assumed that the same real/artificial object keeps the same object id in the next time step,
   * so the RSS state of the previous time step can be taken into account for deriving the proper response.
   * But if the object data is delivered by lower level object detectors where IDs are not re-associated to the last
   * time step objects, this should return \c false.
   *
   * @returns \c true by default implementation.
   */
  virtual bool isObjectIdUniqueOverTime() const
  {
    return true;
  }

protected:
  ObjectInstancePtr mObjectInstance;
};

template <class OBJECT_INSTANCE_TYPE> class RssPedestrianAdapter : public virtual RssObjectAdapter<OBJECT_INSTANCE_TYPE>
{
public:
  /*!
   * \brief Smart pointer on RssPedestrianAdapter
   */
  typedef std::shared_ptr<RssPedestrianAdapter> Ptr;

  /*!
   * \brief Smart pointer on constant RssPedestrianAdapter
   */
  typedef std::shared_ptr<RssPedestrianAdapter const> ConstPtr;

  using typename RssObjectAdapter<OBJECT_INSTANCE_TYPE>::ObjectInstancePtr;

  /*! @brief constructor
   */
  explicit RssPedestrianAdapter(ObjectInstancePtr const objectInstance)
    : RssObjectAdapter<OBJECT_INSTANCE_TYPE>(objectInstance)
  {
  }

  /*! @brief default destructor
   */
  virtual ~RssPedestrianAdapter() = default;
};

/*!
 * \brief typedef for a list of RssPedestrianAdapter smart pointers
 */
template <class OBJECT_INSTANCE_TYPE>
using RssPedestrianAdapterList = std::vector<typename RssPedestrianAdapter<OBJECT_INSTANCE_TYPE>::Ptr>;

/*! @brief Base class to access artificialObject information required to perform the RSS checks in conjunction with the
 * RssRouteChecker class.
 *
 *  This class specializes the RssObjectAdapter by functionality required specifically for artificialObjects.
 *  This class derives virtually from the RssObjectAdapter which allows for a similar class layout
 *  on side of the concrete implementations of this to be able to handle common functionality of
 *  vehicles, pedestrians and artificialObjects at one place. E.g.:
 *
 *  class RssObjectAdapterCustom: public virtual RssObjectAdapter {};
 *  class RssPedestrianAdapterCustom: public RssObjectAdapterCustom, public RssPedestrianAdapter {};
 *  class RssVehicleAdapterCustom: public RssObjectAdapterCustom, public virtual RssVehicleAdapter {};
 *
 *  Where RssArtificialObjectAdapter plays a special role to be used to inject additional artificial
 *  objects to be considered in addition by the RSS calculation.
 *
 *  Since this class is already constructed with all information required, all virtual functions of the base class
 *  RssObjectAdapter are already handled. There is no need to derive from this.
 *
 *  Artificial objects are already used to inject road boundaries within RssWorldModelCreation as virtual borders at the
 *  border of the lanes. But one is able to make use of this in may ways, since these are considered RSS internally just
 *  as everything else. You can inject a duplicate of a real vehicle to enforce a different RSS operation mode or to
 * have two
 *  sets of RSS parameters of one vehicle considered at once
 *  (you have to ensure that the object id of this is different from all duplicates for sure).
 *  Or, if you want to enforce a vehicle to stop in front of a red light, you might be able to inject an artificial
 * object
 *  in the middle of the lane at the Stopline to achieve such (and remove the virtual object when it becomes green).
 *  Especially for research tasks this provides some freedom to the user.
 */
template <class OBJECT_INSTANCE_TYPE>
class RssArtificialObjectAdapter : public virtual RssObjectAdapter<OBJECT_INSTANCE_TYPE>
{
public:
  /*!
   * \brief Smart pointer on RssArtificialObjectAdapter
   */
  typedef std::shared_ptr<RssArtificialObjectAdapter> Ptr;

  /*!
   * \brief Smart pointer on constant RssArtificialObjectAdapter
   */
  typedef std::shared_ptr<RssArtificialObjectAdapter const> ConstPtr;

  using typename RssObjectAdapter<OBJECT_INSTANCE_TYPE>::ObjectInstancePtr;

  /*! @brief constructor
   *
   * @param[in] objectAdapterData the RSS relevant data for the artificial object to be considered
   *   which describes all required field for RssObjectAdapter to operate on this.
   */
  explicit RssArtificialObjectAdapter(RssObjectAdapterData const &objectAdapterData,
                                      ::ad::rss::world::RssDynamics rssDynamics,
                                      typename RssRouteCheckerControl<OBJECT_INSTANCE_TYPE>::Ptr checkerControl)
    : RssObjectAdapter<OBJECT_INSTANCE_TYPE>(
      std::make_shared<RssObjectInstanceDummy<OBJECT_INSTANCE_TYPE>>(objectAdapterData, checkerControl))
    , mRssDynamics(rssDynamics)
  {
    // directly fill the objectAdapterData
    *static_cast<RssObjectAdapterData *>(this) = objectAdapterData;
  }

  /*! @brief default destructor
   */
  virtual ~RssArtificialObjectAdapter() = default;

  /*! @brief get the default RSS dynamics to be used for the object.
   *
   *  Reimplementation returns respective data from RssObjectAdapterData passed at construction time.
   */
  ::ad::rss::world::RssDynamics getDefaultRssDynamics() const override
  {
    return mRssDynamics;
  }

protected:
  ::ad::rss::world::RssDynamics const mRssDynamics;

  template <class OBJECT_INSTANCE_TYPE_INNER>
  class RssObjectInstanceDummy : public RssObjectInstance<OBJECT_INSTANCE_TYPE_INNER>
  {
  public:
    RssObjectInstanceDummy(RssObjectAdapterData const &objectAdapterData,
                           typename RssRouteCheckerControl<OBJECT_INSTANCE_TYPE_INNER>::Ptr checkerControl)
      : RssObjectInstance<OBJECT_INSTANCE_TYPE_INNER>(mDummyObjectInstanceType, checkerControl)
      , mObjectAdapterData(objectAdapterData)
    {
    }

    virtual ~RssObjectInstanceDummy() = default;

    /*! @brief get the object type
     *
     *  Reimplemented from RssObjectInstance.
     */
    ::ad::rss::world::ObjectType getObjectType() const override
    {
      // fallback to the standard RssObjectAdapter function
      return mObjectAdapterData.object_type;
    }

    RssObjectAdapterData const &mObjectAdapterData;
    OBJECT_INSTANCE_TYPE_INNER mDummyObjectInstanceType{};
  };
};

/*!
 * \brief typedef for a list of RssArtificialObjectAdapter smart pointers
 */
template <class OBJECT_INSTANCE_TYPE>
using RssArtificialObjectAdapterList = std::vector<typename RssArtificialObjectAdapter<OBJECT_INSTANCE_TYPE>::Ptr>;

/*! @brief Base class to access vehicle information required to perform the RSS checks in conjunction with the
 * RssRouteChecker class.
 *
 *  This class specializes the RssObjectAdapter by functionality required specifically for vehicles.
 *  This class derives virtually from the RssObjectAdapter which allows for a similar class layout
 *  on side of the concrete implementations of this to be able to handle common functionality of
 *  vehicles and pedestrians at one place. E.g.:
 *
 *  class RssObjectAdapterCustom: public virtual RssObjectAdapter {};
 *  class RssPedestrianAdapterCustom: public RssObjectAdapterCustom, public RssPedestrianAdapter {};
 *  class RssVehicleAdapterCustom: public RssObjectAdapterCustom, public virtual RssVehicleAdapter {};
 *  class RssEgoVehicleAdapterCustom: public RssVehicleAdapterCustom, public RssEgoVehicleAdapter {};
 *
 *  Where RssArtificialObjectAdapter plays a special role to be used to inject additional artificial
 *  objects to be considered in addition by the RSS calculation.
 *
 *  The pure virtual Getter-functions of this class have to be provided by some derived class.
 *  Other virtual functions might be implemented by derived classed to take care on the required steps on their own
 *  instead of letting the default implementation handle these (see details on in the function descriptions).
 *
 *  The main aspect of RssVehicleAdapter class are the route predictions of the vehicle.
 *  These are used by RSS to evaluate the potential route constellations between a
 *  RssEgoVehicleAdapter and a RssVehicleAdapter.
 *  The default functionality for route prediction is actually implemented by the RssRouteChecker class.
 *  Therefore, it is not required to provide any information on those by this class.
 *
 */
template <class OBJECT_INSTANCE_TYPE> class RssVehicleAdapter : public virtual RssObjectAdapter<OBJECT_INSTANCE_TYPE>
{
public:
  /*!
   * \brief Smart pointer on RssVehicleAdapter
   */
  typedef std::shared_ptr<RssVehicleAdapter> Ptr;

  /*!
   * \brief Smart pointer on constant RssVehicleAdapter
   */
  typedef std::shared_ptr<RssVehicleAdapter const> ConstPtr;

  using typename RssObjectAdapter<OBJECT_INSTANCE_TYPE>::ObjectInstancePtr;
  using RssObjectAdapter<OBJECT_INSTANCE_TYPE>::getCheckerControl;
  using RssObjectAdapter<OBJECT_INSTANCE_TYPE>::getObjectInstance;
  using RssObjectAdapter<OBJECT_INSTANCE_TYPE>::getObjectInstanceType;
  using RssObjectAdapterData::getObjectId;

  /*! @brief default constructor
   */
  RssVehicleAdapter(ObjectInstancePtr const objectInstance)
    : RssObjectAdapter<OBJECT_INSTANCE_TYPE>(objectInstance)
  {
  }

  /*! @brief default destructor
   */
  virtual ~RssVehicleAdapter() = default;

  /*!
   * @brief Return the list of route predictions of the object (optionally).
   *
   *  The default implementation returns an empty list.
   *
   *  If the specialized function RssVehicleAdapter::getRoutePredictions() returns anything else than an empty list,
   *  the returned routes are used for further RSS calculations.
   *  In this case only the field RssRoute::vehicle_dynamics_on_route is updated for ego vehicles by RssRouteChecker.
   *  All other fields have to be taken care on, including Route::route_id and Route::likelihood (normalization is taken
   * care by RssRouteChecker).
   *
   *  Otherwise, RssRouteChecker will take care on calculating the route predictions.
   *
   *  Another possibility to influence the route predictions is overriding the routing targets functionality (see
   * below).
   */
  virtual ::ad::rss::map::RssRouteList getRoutePredictions() const
  {
    return ::ad::rss::map::RssRouteList();
  }

  /*! @name Routing targets specific functions
   *
   *  The following group of functions are used to handle routing targets of the vehicle.
   *
   *  The default implementation returns an empty list, which disables the routing target functionality
   *  and RssRouteChecker will take care on calculating the route predictions.
   *
   *  Be aware: if the getRoutePredictions() function returns anything else than an empty list,
   *  the routing target functionality is not used/called at all!
   */
  ///@{
  /*!
   * @brief The mode to be applied on routing target operation
   */
  enum class RssRoutingTargetCommand
  {
    None,          //!< no operation (default)
    AppendTargets, //!< append the provided routing targets to the current routing targets and extend the route(s)
                   //! accordingly
    ReplaceTargets //!< clear the current route and replace the current routing targets by the new ones;
                   //!< in case the new routing targets are empty, route is created using predictions
  };

  /*!
   * @brief The mode to be applied on routing target operation
   */
  struct RssRoutingTargetOperation
  {
    RssRoutingTargetCommand command{RssRoutingTargetCommand::None};
    ::ad::map::point::ENUPointList routingTargets{};
  };

  /*! @brief Return a routing target operation to be applied (optional)
   *
   *  In case getRoutePredictions() returns an empty list, RssRouteChecker will query for
   *  routing target operations via this function. If this returns anything else than RoutingTargetCommand::None,
   *  the route for the vehicle is created/extended according to the routing target operation;
   *  further route prediction operations are only performed in case the resulting route is empty.
   *
   *  Default implementation deploys RssRouteCheckerControl to gather results.
   */
  virtual RssRoutingTargetOperation getRoutingTargetOperation()
  {
    return getCheckerControl()->getCurrentRoutingTargetOperation(getObjectId());
  }

  /*! @brief Defines the distance at which a given routing target is interpreted to be reached
   *
   *  The default implementation returns 3 meters.
   *
   *  Be aware: only relevant if routing target functionality is active.
   */
  virtual ad::physics::Distance getRoutingTargetReachedDistance() const
  {
    return ad::physics::Distance(3.);
  }

  /*! @brief Provides information on the currently active routing targets
   *
   *  Default implementation deploys RssRouteCheckerControl to collect results.
   *
   *  Be aware: only relevant if routing target functionality is active.
   */
  virtual void activeRoutingTargets(::ad::map::point::ENUPointList const &activeRoutingTargets)
  {
    getCheckerControl()->setActiveRoutingTargets(getObjectId(), activeRoutingTargets);
  }
  ///@}

  /*! @brief Defines the distance at which a delta in vehicle position is considered as
   *  unexpected jump. A jump in the position (can occur in simulation on resetting a vehicle's position)
   *  triggers automatically the clearing of the current routes and enforces a re-creation of them.
   *
   *  Default implementation deploys RssRouteCheckerControl to gather results.
   */
  virtual ad::physics::Distance getPositionJumpTraveledDistance() const
  {
    return getCheckerControl()->getPositionJumpTraveledDistance();
  }

  /*! @brief Defines the distance below which a detailed analysis becomes necessary regardless of the objects stopping
   * distance estimates.
   *
   *  Far away object might not be analyzed in detail, if the stopping distances allow it
   *
   *  Default implementation deploys RssRouteCheckerControl to gather results.
   */
  virtual ad::physics::Distance getMinimumDistanceToObjectsThatHaveToBeAnalyzed() const
  {
    return getCheckerControl()->getMinimumDistanceToObjectsThatHaveToBeAnalyzed();
  }
};

/*!
 * \brief typedef for a list of RssEgoVehicleAdapter smart pointers
 */
template <class OBJECT_INSTANCE_TYPE>
using RssVehicleAdapterList = std::vector<typename RssVehicleAdapter<OBJECT_INSTANCE_TYPE>::Ptr>;

/*! @brief Base class to access ego vehicle information required to perform the RSS checks in conjunction with the
 * RssRouteChecker class.
 *
 *  This class specializes the RssVehicleAdapter by functionality required specifically for ego vehicles.
 *  This class derives virtually from the RssVehicleAdapter which allows for a similar class layout
 *  on side of the concrete implementations of this to be able to handle common functionality of
 *  vehicles and pedestrians at one place. E.g.:
 *
 *  class RssObjectAdapterCustom: public virtual RssObjectAdapter {};
 *  class RssPedestrianAdapterCustom: public RssObjectAdapterCustom, public RssPedestrianAdapter {};
 *  class RssVehicleAdapterCustom: public RssObjectAdapterCustom, public virtual RssVehicleAdapter {};
 *  class RssEgoVehicleAdapterCustom: public RssVehicleAdapterCustom, public RssEgoVehicleAdapter {};
 *  class RssArtificialObjectAdapterCustom: public RssObjectAdapterCustom, public RssArtificialObjectAdapter {};
 *
 *  The pure virtual Getter-functions of this class have to be provided by some derived class.
 *  The virtual Update-functions might be implemented by derived classed to take care on the required steps on their own
 *  instead of letting the default implementation handle these (see details on in the function descriptions).
 */
template <class OBJECT_INSTANCE_TYPE>
class RssEgoVehicleAdapter : public virtual RssVehicleAdapter<OBJECT_INSTANCE_TYPE>
{
public:
  /*!
   * \brief Smart pointer on RssEgoVehicleAdapter
   */
  typedef std::shared_ptr<RssEgoVehicleAdapter> Ptr;

  /*!
   * \brief Smart pointer on constant RssEgoVehicleAdapter
   */
  typedef std::shared_ptr<RssEgoVehicleAdapter const> ConstPtr;

  using typename RssObjectAdapter<OBJECT_INSTANCE_TYPE>::ObjectInstancePtr;
  using RssObjectAdapter<OBJECT_INSTANCE_TYPE>::getCheckerControl;
  using RssObjectAdapter<OBJECT_INSTANCE_TYPE>::getObjectInstance;
  using RssObjectAdapter<OBJECT_INSTANCE_TYPE>::getObjectInstanceType;

  /*! @brief default constructor
   */
  RssEgoVehicleAdapter(ObjectInstancePtr const objectInstance)
    : RssObjectAdapter<OBJECT_INSTANCE_TYPE>(objectInstance)
    , RssVehicleAdapter<OBJECT_INSTANCE_TYPE>(objectInstance)
  {
  }

  /*! @brief default destructor
   */
  virtual ~RssEgoVehicleAdapter() = default;
  /*! @brief get the green traffic lights along the investigated route
   *
   *  Virtual function. Default implementation deploys RssRouteCheckerControl to gather results.
   */
  virtual ::ad::map::landmark::LandmarkIdSet
  getGreenTrafficLightsOnRoute(::ad::map::route::FullRoute const &route) const
  {
    // the default implementation is independent from route...
    (void)route;
    return getCheckerControl()->getCurrentGreenTrafficLights();
  }

  /*! @brief get the road boundaries mode on the investigated route
   *
   *  Virtual function. Default implementation deploys RssRouteCheckerControl to gather results.
   */
  virtual RssAppendRoadBoundariesMode getRoadBoundariesMode(::ad::map::route::FullRoute const &route) const
  {
    // the default implementation is independent from route...
    (void)route;
    return getCheckerControl()->getRoadBoundariesMode();
  }

  /*! @brief get the parameters to be used for the vehicle constellation on the route.
   *
   *  Virtual function. Default implementation deploys RssRouteCheckerControl to gather results.
   *
   *  @param[in] route the ego-route of this constellation
   *  @param[in] egoVehicleObject the ego vehicle object data of this constellation
   *  @param[in] otherVehicle the other vehicle of this constellation
   *  @param[in] otherVehicleObject the other vehicle object data of this constellation
   *
   */
  virtual RssConstellationConfiguration
  getVehicleConstellationOnRoute(RssRoute const &route,
                                 RssObjectData const &egoVehicleObject,
                                 typename RssVehicleAdapter<OBJECT_INSTANCE_TYPE>::ConstPtr otherVehicle,
                                 RssObjectData const &otherVehicleObject) const
  {
    return getCheckerControl()->getVehicleConstellation(
      route, egoVehicleObject, getObjectInstanceType(), otherVehicleObject, otherVehicle->getObjectInstanceType());
  }

  /*! @brief get the parameters to be used for the pedestrian constellation on the route.
   *
   *  Virtual function. Default implementation deploys RssRouteCheckerControl to gather results.
   *
   *  @param[in] route the ego-route of this constellation
   *  @param[in] egoVehicleObject the ego vehicle object data of this constellation
   *  @param[in] pedestrian the pedestrian of this constellation
   *  @param[in] pedestrianObject the pedestrian object data of this constellation
   *
   */
  virtual RssConstellationConfiguration
  getPedestrianConstellationOnRoute(RssRoute const &route,
                                    RssObjectData const &egoVehicleObject,
                                    typename RssPedestrianAdapter<OBJECT_INSTANCE_TYPE>::ConstPtr pedestrian,
                                    RssObjectData const &pedestrianObject) const
  {
    return getCheckerControl()->getPedestrianConstellation(
      route, egoVehicleObject, getObjectInstanceType(), pedestrianObject, pedestrian->getObjectInstanceType());
  }

  /*! @brief get the parameters to be used for the artificialObject constellation on the route.
   *
   *  Virtual function. Default implementation deploys RssRouteCheckerControl to gather results.
   *
   *  @param[in] route the ego-route of this constellation
   *  @param[in] egoVehicleObject the ego vehicle object data of this constellation
   *  @param[in] artificialObject the artificialObject of this constellation
   *  @param[in] artificialObjectObject the artificialObject object data of this constellation
   *
   */
  virtual RssConstellationConfiguration getArtificialObjectConstellationOnRoute(
    RssRoute const &route,
    RssObjectData const &egoVehicleObject,
    typename RssArtificialObjectAdapter<OBJECT_INSTANCE_TYPE>::ConstPtr artificialObjectAdapter,
    RssObjectData const &artificialObject) const
  {
    (void)artificialObjectAdapter;
    return getCheckerControl()->getArtificialObjectConstellation(
      route, egoVehicleObject, getObjectInstanceType(), artificialObject);
  }

  /*! @returns ::ad::rss::world::ObjectType::EgoVehicle as type of this.
   *
   *  This overloaded function is not virtual by intension. If this class is not used as ego-vehicle,
   *  but other vehicle, the object type of the base class RssVehicleAdapter should be returned.
   */
  ::ad::rss::world::ObjectType getObjectType() const
  {
    return ::ad::rss::world::ObjectType::EgoVehicle;
  }

  /*! @brief get the default RSS dynamics to be used for the object.
   *
   *  Reimplemented from RssObjectAdapter.
   *  Default implementation deploys RssRouteCheckerControl to gather results.
   */
  ::ad::rss::world::RssDynamics getDefaultRssDynamics() const override
  {
    return getCheckerControl()->getDefaultRssDynamics(::ad::rss::world::ObjectType::EgoVehicle,
                                                      getObjectInstanceType());
  }
};

/*!
 * \brief typedef for a list of RssEgoVehicleAdapter smart pointers
 */
template <class OBJECT_INSTANCE_TYPE>
using RssEgoVehicleAdapterList = std::vector<typename RssEgoVehicleAdapter<OBJECT_INSTANCE_TYPE>::Ptr>;

} // namespace map
} // namespace rss
} // namespace ad
