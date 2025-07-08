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

#include <ad/rss/world/ObjectType.hpp>

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

/*! @brief forward declaration of RssRouteCheckerControl class */
template <class OBJECT_INSTANCE_TYPE> class RssRouteCheckerControl;

/*! @brief base type of an object instance
 */
template <class OBJECT_INSTANCE_TYPE> class RssObjectInstance
{
public:
  /*!
   * \brief Smart pointer on RssObjectAdapter
   */
  typedef std::shared_ptr<RssObjectInstance> Ptr;

  /*!
   * \brief Smart pointer on constant RssObjectAdapter
   */
  typedef std::shared_ptr<RssObjectInstance const> ConstPtr;

  using RssRouteCheckerControlPtr = std::shared_ptr<RssRouteCheckerControl<OBJECT_INSTANCE_TYPE>>;

  RssObjectInstance(OBJECT_INSTANCE_TYPE const &objectInstanceType, RssRouteCheckerControlPtr checkerControl)
    : mObjectInstanceType(objectInstanceType)
    , mCheckerControl(checkerControl)
  {
  }

  /*! @returns the object type of this.
   *
   * Pure virtual function the object instance has to reimplement.
   */
  virtual ::ad::rss::world::ObjectType getObjectType() const = 0;

  /*! @brief get the underlying vehicle instance */
  OBJECT_INSTANCE_TYPE &getObjectInstanceType()
  {
    return mObjectInstanceType;
  }

  /*! @brief get the underlying vehicle instance */
  OBJECT_INSTANCE_TYPE const &getObjectInstanceType() const
  {
    return mObjectInstanceType;
  }

  RssRouteCheckerControlPtr getCheckerControl() const
  {
    return mCheckerControl;
  }

protected:
  OBJECT_INSTANCE_TYPE mObjectInstanceType;
  RssRouteCheckerControlPtr mCheckerControl;
};

} // namespace map
} // namespace rss
} // namespace ad
