/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-1917
 */

#pragma once

#include <iostream>
#include <memory>
#include <sstream>
#include "ad/rss/situation/SituationType.hpp"
#include "ad/rss/world/Object.hpp"
#include "ad/rss/world/RoadArea.hpp"
#include "ad/rss/world/RssDynamics.hpp"
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace world
 */
namespace world {

/*!
 * \brief DataType Scene
 *
 * A Scene defines the relation between the ego vehicle and another object. It consists of the type of situation between
 * these two, the objects rss dynamics and the corresponding road areas of interest. All lane segments on the route
 * between ego vehicle and the object have to be part of this. RSS has to be able to calculate minimum and maximum
 * distances between ego vehicle and object as well as accelerated movements within this area.
 */
struct Scene
{
  /*!
   * \brief Smart pointer on Scene
   */
  typedef std::shared_ptr<Scene> Ptr;

  /*!
   * \brief Smart pointer on constant Scene
   */
  typedef std::shared_ptr<Scene const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  Scene() = default;

  /*!
   * \brief standard destructor
   */
  ~Scene() = default;

  /*!
   * \brief standard copy constructor
   */
  Scene(const Scene &other) = default;

  /*!
   * \brief standard move constructor
   */
  Scene(Scene &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other Scene
   *
   * \returns Reference to this Scene.
   */
  Scene &operator=(const Scene &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other Scene
   *
   * \returns Reference to this Scene.
   */
  Scene &operator=(Scene &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Scene
   *
   * \returns \c true if both Scene are equal
   */
  bool operator==(const Scene &other) const
  {
    return (situationType == other.situationType) && (egoVehicle == other.egoVehicle)
      && (egoVehicleRssDynamics == other.egoVehicleRssDynamics) && (object == other.object)
      && (objectRssDynamics == other.objectRssDynamics) && (intersectingRoad == other.intersectingRoad)
      && (egoVehicleRoad == other.egoVehicleRoad);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other Scene.
   *
   * \returns \c true if both Scene are different
   */
  bool operator!=(const Scene &other) const
  {
    return !operator==(other);
  }

  /*!
   * The type of the current situation. Depending on this type the other fields of the RssArea might be left empty.
   */
  ::ad::rss::situation::SituationType situationType{::ad::rss::situation::SituationType::SameDirection};

  /*!
   * The ego vehicle in the context of this scene.
   */
  ::ad::rss::world::Object egoVehicle;

  /*!
   * Defines the ego vehicle dynamics to be applied.
   * This parameters are provided on a per situation basis to be able to adapt these
   * e.g. in respect to object type.
   */
  ::ad::rss::world::RssDynamics egoVehicleRssDynamics;

  /*!
   * The object this scene refers to.
   */
  ::ad::rss::world::Object object;

  /*!
   * Defines the objects dynamics to be applied. This parameters are provided on a per object basis to be able to adapt
   * these e.g. in respect to object type or the weather conditions.
   */
  ::ad::rss::world::RssDynamics objectRssDynamics;

  /*!
   * The RssRoadArea an intersecting vehicle is driving in. The driving direction of the intersecting vehicle define the
   * ordering of the road segments. The road area should contain all neigboring lanes the other vehcile is able to drive
   * in.  In non-intersection situations this road area is empty.
   */
  ::ad::rss::world::RoadArea intersectingRoad;

  /*!
   * The RssRoadArea the ego vehicle is driving in. The driving direction of the ego vehicle define the ordering of the
   * road segments. In non-intersection situations the object is also driving in this road area.
   */
  ::ad::rss::world::RoadArea egoVehicleRoad;
};

} // namespace world
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_WORLD_SCENE
#define GEN_GUARD_AD_RSS_WORLD_SCENE
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace world
 */
namespace world {

/**
 * \brief standard ostream operator
 *
 * \param[in] os The output stream to write to
 * \param[in] _value Scene value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, Scene const &_value)
{
  os << "Scene(";
  os << "situationType:";
  os << _value.situationType;
  os << ",";
  os << "egoVehicle:";
  os << _value.egoVehicle;
  os << ",";
  os << "egoVehicleRssDynamics:";
  os << _value.egoVehicleRssDynamics;
  os << ",";
  os << "object:";
  os << _value.object;
  os << ",";
  os << "objectRssDynamics:";
  os << _value.objectRssDynamics;
  os << ",";
  os << "intersectingRoad:";
  os << _value.intersectingRoad;
  os << ",";
  os << "egoVehicleRoad:";
  os << _value.egoVehicleRoad;
  os << ")";
  return os;
}

} // namespace world
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for Scene
 */
inline std::string to_string(::ad::rss::world::Scene const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std
#endif // GEN_GUARD_AD_RSS_WORLD_SCENE
