/*
 *  @COPYRIGHT_TAG@
 */

/**
 * Generated file
 * @file
 *
 * Model Library     : RSS.ad_rss_data_type_lib
 * Model Version     : 0.0.0
 * Generator         : mo2ive_generator_mockup
 * Generator Version : 10.5.6-1843
 */

#pragma once

#include <memory>
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
  using Ptr = std::shared_ptr<Scene>;
  using ConstPtr = std::shared_ptr<Scene const>;

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
    return (situationType == other.situationType) && (egoVehicle == other.egoVehicle) && (object == other.object)
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
