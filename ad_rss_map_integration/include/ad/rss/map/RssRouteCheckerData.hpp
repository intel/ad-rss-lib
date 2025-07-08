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

#include <map>
#include "ad/rss/core/RssCheck.hpp"
#include "ad/rss/map/RssObjectAdapter.hpp"

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

/*!
 * @brief Class to store data of RssObjectAdapter
 */
class RssRouteCheckerObjectData
{
public:
  /*! @brief default constructor
   */
  RssRouteCheckerObjectData() = default;

  /*! @brief default copy constructor
   */
  RssRouteCheckerObjectData(const RssRouteCheckerObjectData &other) = default;

  /*! @brief default destrutor
   */
  ~RssRouteCheckerObjectData() = default;

  /*! @brief default assignment operator
   */
  RssRouteCheckerObjectData &operator=(const RssRouteCheckerObjectData &other) = default;

  /*! @brief sorting operator to enable map usage
   */
  bool operator<(RssRouteCheckerObjectData const &other)
  {
    return mRssObjectData.id < other.mRssObjectData.id;
  }

  //! flag indicating if the object is active
  bool mActive{false};

  //! flag indicating if the object's history has to be cleared
  bool mClearObjectHistory{false};

  //! the actual RssObjectData of this
  RssObjectData mRssObjectData;
};

/*!
 * @brief Class to store data of RssPedestrianAdapter
 */
template <class OBJECT_INSTANCE_TYPE> class RssRouteCheckerPedestrianData : public RssRouteCheckerObjectData
{
public:
  /*! @brief default constructor
   */
  RssRouteCheckerPedestrianData() = default;

  /*! @brief default copy constructor
   */
  RssRouteCheckerPedestrianData(RssRouteCheckerPedestrianData const &other) = default;

  /*! @brief default destrutor
   */
  ~RssRouteCheckerPedestrianData() = default;

  /*! @brief default assignment operator
   */
  RssRouteCheckerPedestrianData &operator=(const RssRouteCheckerPedestrianData &other) = default;

  typedef RssPedestrianAdapter<OBJECT_INSTANCE_TYPE> RssPedestrianAdapterType;

  //! function to update the adapter class of this
  void updateAdapter(typename RssPedestrianAdapterType::Ptr artificialObjectAdapter)
  {
    mPedestrianAdapter = artificialObjectAdapter;
  }

  //! function to get the adapter class of this
  typename RssPedestrianAdapterType::Ptr getAdapter()
  {
    return mPedestrianAdapter;
  }

  //! function to get the adapter class of this
  typename RssPedestrianAdapterType::ConstPtr getAdapter() const
  {
    return mPedestrianAdapter;
  }

  using RssRouteCheckerObjectData::mActive;
  using RssRouteCheckerObjectData::mRssObjectData;

protected:
  //! the current RssPedestrianAdapter
  typename RssPedestrianAdapterType::Ptr mPedestrianAdapter;
};

/*!
 * @brief Class to store data of RssVehicleAdapter
 */
template <class OBJECT_INSTANCE_TYPE> class RssRouteCheckerVehicleData : public RssRouteCheckerObjectData
{
public:
  /*! @brief default constructor
   */
  RssRouteCheckerVehicleData() = default;

  /*! @brief default copy constructor
   */
  RssRouteCheckerVehicleData(RssRouteCheckerVehicleData const &other) = default;

  /*! @brief default destrutor
   */
  ~RssRouteCheckerVehicleData();

  /*! @brief default assignment operator
   */
  RssRouteCheckerVehicleData &operator=(const RssRouteCheckerVehicleData &other) = default;

  typedef RssVehicleAdapter<OBJECT_INSTANCE_TYPE> RssVehicleAdapterType;

  //! function to update the adapter class of this

  void updateAdapter(typename RssVehicleAdapterType::Ptr vehicleAdapter)
  {
    mVehicleAdapter = vehicleAdapter;
  }

  //! function to get the adapter class of this
  typename RssVehicleAdapterType::Ptr getAdapter()
  {
    return mVehicleAdapter;
  }

  //! function to get the adapter class of this
  typename RssVehicleAdapterType::ConstPtr getAdapter() const
  {
    return mVehicleAdapter;
  }

  //! enumeration defining the mode on route extension
  enum class RouteExtensionMode
  {
    eAllowMultipleRoutes,  //!< allow the creation of all possible route candidates
    eAllowOnlySingleRoute, //!< only allow the processing of one single route, additional route candidates with lower
                           //!< likelyhood are dropped
    eAllowOnlyTargetRoute  //!< only allow the processing of the externally provided targets for routing.
                           //!< No further automatic expansions, or route creations are performed.
  };

  /*!
   * @brief Supporting function to update the routes of this
   *
   * @param[in] routePreviewDistance indicator for the desired length of the routes
   * @param[in] mapAreaLanes resticted set of lanes from a map to be considered (allows speed up)
   * @param[in] routeExtensionMode defines the mode of the route extension (default:
   * RouteExtensionMode::eAllowMultipleRoutes)
   */
  void updateRoutes(::ad::physics::Distance const routePreviewDistance,
                    ::ad::map::lane::LaneIdSet const &mapAreaLanes,
                    RouteExtensionMode routeExtensionMode = RouteExtensionMode::eAllowMultipleRoutes);

  /*!
   * @brief Supporting function to normalize the sum of the route likelihood to 1.0 and reorder the list in descending
   * likelihood order.
   */
  void normalizeAndOrderRoutes();

  //! the current active route extension mode
  RouteExtensionMode mRouteExtensionMode;
  //! the sorted list of routes
  RssRouteList mRoutes;

  using RssRouteCheckerObjectData::mActive;
  using RssRouteCheckerObjectData::mRssObjectData;

  //! the list of routing target to be used for routing purposes
  std::vector<::ad::map::point::ENUPoint> mRoutingTargets;

protected:
  /*!
   * @brief Supporting function to process routing targets
   */
  std::vector<::ad::map::point::ENUPoint> handleRoutingTargets();

  /*!
   * @brief Supporting function to create new routes
   *
   * If there are routing targets present, these are considered to create new routes to be considered
   * (usually this results in one single route, but depending on the current vehicle positioning, this can also create a
   * set of routes).
   * Otherwise ::ad::map::route::planning::predictRoutesOnDistance() is used to create the routes.
   *
   * @param[in] routePreviewDistance indicator for the desired length of the routes
   */
  std::vector<::ad::map::route::FullRoute> createRoutes(::ad::physics::Distance const routePreviewDistance,
                                                        ::ad::map::lane::LaneIdSet const &mapAreaLanes);

  /*!
   * @brief Supporting function to shorten the predicted routes
   *
   * remove the parts of the route already taken, try to prepend route sections
   * (i.e. when driving backwards a bit)
   * try to ensure that the back of the vehicle is still within the route to
   * support proper orientation calculations on route
   */
  void shortenRoutes();

  /*!
   * @brief Supporting function to extend the predicted routes
   *
   * @param[in] routePreviewDistance indicator for the desired length of the routes
   * @param[in] routingTargetsToAppend extend the route according to the routing targets to be appended
   */
  void extendRoutes(::ad::physics::Distance const routePreviewDistance,
                    std::vector<::ad::map::point::ENUPoint> const &routingTargetsToAppend,
                    ::ad::map::lane::LaneIdSet const &mapAreaLanes);

  RssRouteId mNextRouteId{1};
  bool mExternalRoutes{false};

  //! the current RssVehicleAdapter
  typename RssVehicleAdapterType::Ptr mVehicleAdapter;
};

/*!
 * @brief typedef for a RssCheck map in respect to the RssRouteId
 */
typedef std::map<RssRouteId, ::ad::rss::core::RssCheck::Ptr> RssRouteCheckMap;

/*!
 * @brief Class to store data of RssVehicleAdapter
 */
template <class OBJECT_INSTANCE_TYPE>
class RssRouteCheckerEgoVehicleData : public RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE>
{
public:
  /*! @brief default constructor
   */
  RssRouteCheckerEgoVehicleData() = default;

  /*! @brief default copy constructor
   */
  RssRouteCheckerEgoVehicleData(RssRouteCheckerEgoVehicleData const &other) = default;

  /*! @brief default destrutor
   */
  ~RssRouteCheckerEgoVehicleData() = default;

  /*! @brief default assignment operator
   */
  RssRouteCheckerEgoVehicleData &operator=(const RssRouteCheckerEgoVehicleData &other) = default;

  typedef RssEgoVehicleAdapter<OBJECT_INSTANCE_TYPE> RssEgoVehicleAdapterType;

  //! function to update the adapter class of this
  void updateAdapter(typename RssEgoVehicleAdapterType::Ptr egoVehicleAdapter)
  {
    RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE>::updateAdapter(egoVehicleAdapter);
    mEgoVehicleAdapter = egoVehicleAdapter;
  }

  //! function to get the adapter class of this
  typename RssEgoVehicleAdapterType::Ptr getAdapter()
  {
    return mEgoVehicleAdapter;
  }

  //! function to get the adapter class of this
  typename RssEgoVehicleAdapterType::ConstPtr getAdapter() const
  {
    return mEgoVehicleAdapter;
  }

  /*! @brief Supporting function to update the vehicle dynamics on route
   *
   *  This function is used to update the vehicle dynamics on route of ego vehicles.
   */
  void updateVehicleDynamicsOnRoutes();

  /*!
   * @brief Supporting function to evaluate current route likelihood in respect to the VehicleDynamicsOnRoute
   *
   * Has only effect if routes have been created internally.
   */
  void evaluateRoutes();

  //! the current RssRouteCheckMap
  RssRouteCheckMap mRssRouteCheckMap;

  using RssRouteCheckerObjectData::mActive;
  using RssRouteCheckerObjectData::mRssObjectData;
  using RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE>::mRoutes;

protected:
  //! the current RssEgoVehicleAdapter
  typename RssEgoVehicleAdapterType::Ptr mEgoVehicleAdapter;

  using RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE>::mNextRouteId;
  using RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE>::mRoutingTargets;
  using RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE>::mExternalRoutes;
};

/*!
 * @brief Class to store data of RssArtificialObjectAdapter
 */
template <class OBJECT_INSTANCE_TYPE> class RssRouteCheckerArtificialObjectData : public RssRouteCheckerObjectData
{
public:
  /*! @brief default constructor
   */
  RssRouteCheckerArtificialObjectData() = default;

  /*! @brief default copy constructor
   */
  RssRouteCheckerArtificialObjectData(RssRouteCheckerArtificialObjectData const &other) = default;

  /*! @brief default destrutor
   */
  ~RssRouteCheckerArtificialObjectData() = default;

  /*! @brief default assignment operator
   */
  RssRouteCheckerArtificialObjectData &operator=(const RssRouteCheckerArtificialObjectData &other) = default;

  //! function to update the adapter class of this
  void updateAdapter(typename RssArtificialObjectAdapter<OBJECT_INSTANCE_TYPE>::Ptr artificialObjectAdapter)
  {
    mArtificialObjectAdapter = artificialObjectAdapter;
  }

  //! function to get the adapter class of this
  typename RssArtificialObjectAdapter<OBJECT_INSTANCE_TYPE>::Ptr getAdapter()
  {
    return mArtificialObjectAdapter;
  }

  //! function to get the adapter class of this
  typename RssArtificialObjectAdapter<OBJECT_INSTANCE_TYPE>::ConstPtr getAdapter() const
  {
    return mArtificialObjectAdapter;
  }

protected:
  //! the current RssArtificialObjectAdapter
  typename RssArtificialObjectAdapter<OBJECT_INSTANCE_TYPE>::Ptr mArtificialObjectAdapter;
};

/*! Typedef for a map on RssRouteCheckPedestrianData
 */
template <class OBJECT_INSTANCE_TYPE>
using RssRouteCheckerPedestrianDataMap
  = std::map<::ad::rss::world::ObjectId, RssRouteCheckerPedestrianData<OBJECT_INSTANCE_TYPE>>;

/*! Typedef for a map on RssRouteCheckVehicleData
 */
template <class OBJECT_INSTANCE_TYPE>
using RssRouteCheckerVehicleDataMap
  = std::map<::ad::rss::world::ObjectId, RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE>>;

/*! Typedef for a map on RssRouteCheckEgoVehicleData
 */
template <class OBJECT_INSTANCE_TYPE>
using RssRouteCheckerEgoVehicleDataMap
  = std::map<::ad::rss::world::ObjectId, RssRouteCheckerEgoVehicleData<OBJECT_INSTANCE_TYPE>>;

/*! Typedef for a map on RssRouteCheckerArtificialObjectData
 */
template <class OBJECT_INSTANCE_TYPE>
using RssRouteCheckerArtificialObjectDataMap
  = std::map<::ad::rss::world::ObjectId, RssRouteCheckerArtificialObjectData<OBJECT_INSTANCE_TYPE>>;

} // namespace map
} // namespace rss
} // namespace ad

#include "ad/rss/map/detail/RssRouteCheckerDataDetail.hpp"
