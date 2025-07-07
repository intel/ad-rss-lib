/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2022 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-2046
 */

#pragma once

#include <iostream>
#include <limits>
#include <memory>
#include <sstream>
#include "ad/map/point/ENUHeading.hpp"
#include "ad/map/point/ENUPoint.hpp"
#include "ad/physics/Angle.hpp"
#include "ad/physics/AngularVelocity.hpp"
#include "ad/physics/Dimension2D.hpp"
#include "ad/physics/Dimension3D.hpp"
#include "ad/physics/Probability.hpp"
#include "ad/physics/SpeedRange.hpp"
#include "ad/rss/world/ObjectId.hpp"
#include "ad/rss/world/ObjectType.hpp"

/*!
 * @brief namespace ad
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
 * \brief DataType RssObjectAdapterData
 *
 * struct describing the object data relevant to inject artificial objects
 */
struct RssObjectAdapterData
{
  /*!
   * \brief Smart pointer on RssObjectAdapterData
   */
  typedef std::shared_ptr<RssObjectAdapterData> Ptr;

  /*!
   * \brief Smart pointer on constant RssObjectAdapterData
   */
  typedef std::shared_ptr<RssObjectAdapterData const> ConstPtr;

  /*!
   * \brief standard constructor
   */
  RssObjectAdapterData()
  {
    // initialize confidence to 'ground truth'  while 0.01 is the minimum what ETSI defines for smalles valid value
    // SemiAxisLength in ETSI-ITS-CDD.asn standard message descriptions, a value of zero shall not be used
    position_confidence_ellipse_half_axis_dimension.length = ad::physics::Distance(0.01);
    position_confidence_ellipse_half_axis_dimension.width = ad::physics::Distance(0.01);
    position_confidence_ellipse_confidence_level = ad::physics::Probability(1.);
  }

  /*!
   * \brief standard destructor
   */
  virtual ~RssObjectAdapterData() = default;

  /*!
   * \brief standard copy constructor
   */
  RssObjectAdapterData(const RssObjectAdapterData &other) = default;

  /*!
   * \brief standard move constructor
   */
  RssObjectAdapterData(RssObjectAdapterData &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other RssObjectAdapterData
   *
   * \returns Reference to this RssObjectAdapterData.
   */
  RssObjectAdapterData &operator=(const RssObjectAdapterData &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other RssObjectAdapterData
   *
   * \returns Reference to this RssObjectAdapterData.
   */
  RssObjectAdapterData &operator=(RssObjectAdapterData &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssObjectAdapterData
   *
   * \returns \c true if both RssObjectAdapterData are equal
   */
  bool operator==(const RssObjectAdapterData &other) const
  {
    return (id == other.id) && (object_type == other.object_type) && (center_point == other.center_point)
      && (position_confidence_ellipse_half_axis_dimension == other.position_confidence_ellipse_half_axis_dimension)
      && (position_confidence_ellipse_confidence_level == other.position_confidence_ellipse_confidence_level)
      && (heading == other.heading) && (dimension == other.dimension) && (speed_range == other.speed_range)
      && (yaw_rate == other.yaw_rate) && (steering_angle == other.steering_angle);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other RssObjectAdapterData.
   *
   * \returns \c true if both RssObjectAdapterData are different
   */
  bool operator!=(const RssObjectAdapterData &other) const
  {
    return !operator==(other);
  }

  /*! @brief get the id of the object
   */
  ::ad::rss::world::ObjectId getObjectId() const
  {
    return id;
  }

  /*! @brief get the type of the object
   */
  ::ad::rss::world::ObjectType getObjectType() const
  {
    return object_type;
  }

  /*! @brief get the center point of the object
   */
  ::ad::map::point::ENUPoint getCenterPoint() const
  {
    return center_point;
  }

  /*! @brief get the position confidence of the center point
   */
  ::ad::physics::Dimension2D getPositionConfidence() const
  {
    return position_confidence_ellipse_half_axis_dimension;
  }

  /*! @brief get the position confidence level of the center point
   */
  ::ad::physics::Probability getPositionConfidenceLevel() const
  {
    return position_confidence_ellipse_confidence_level;
  }

  /*! @brief get the heading of the object
   */
  ::ad::map::point::ENUHeading getHeading() const
  {
    return heading;
  }

  /*! @brief get the dimensions of the object to be considered
   */
  virtual ::ad::physics::Dimension3D getDimensions() const
  {
    return dimension;
  }

  /*! @brief get the speed of the object
   */
  ::ad::physics::SpeedRange getSpeedRange() const
  {
    return speed_range;
  }

  /*! @brief get the change of the heading (which is the yaw rate) of the object
   */
  ::ad::physics::AngularVelocity getYawRate() const
  {
    return yaw_rate;
  }

  /*! @brief get the steering angle of the vehicle. Might be invalid if not available.
   */
  ::ad::physics::Angle getSteeringAngle() const
  {
    return steering_angle;
  }

  /*!
   * the object id
   */
  ::ad::rss::world::ObjectId id{0};

  /*!
   * The objects type.
   */
  ::ad::rss::world::ObjectType object_type{::ad::rss::world::ObjectType::Invalid};

  /*!
   * the object's position in ENU coordinates
   */
  ::ad::map::point::ENUPoint center_point;

  // Indicates the position confidence value which represents the estimated absolute position accuracy, in the
  // respective axis direction as defined in a shape of ellipse with a confidence level of
  // mPositionConfidenceEllipseConfidence. the value represents the half axis length and is added to the respective
  // vehicle dimensions in RSS calcualation
  ::ad::physics::Dimension2D position_confidence_ellipse_half_axis_dimension;
  ::ad::physics::Probability position_confidence_ellipse_confidence_level;

  /*!
   * The objects heading in ENU coordinate system as angle measured from East to North axis (yaw) in radians.
   */
  ::ad::map::point::ENUHeading heading{std::numeric_limits<double>::quiet_NaN()};

  /*!
   * the dimension of the object
   */
  ::ad::physics::Dimension3D dimension;

  /*!
   * the object's speed
   */
  ::ad::physics::SpeedRange speed_range;

  /*!
   * the object's yaw rate
   */
  ::ad::physics::AngularVelocity yaw_rate;

  /*!
   * the ego vehicles' steering angle, if available
   *
   * If the steering angle is not available, this field is left invalid. (see ::ad::physics::Angle::isValid())
   *
   * The steering angle is especially relevant for unstructured constellations to be able to decide if the steering
   * angle of the ego vehicle is in the allowed range for drive away. Otherwise that cannot be decided.
   */
  ::ad::physics::Angle steering_angle{std::numeric_limits<double>::quiet_NaN()};
};

} // namespace map
} // namespace rss
} // namespace ad

/*!
 * \brief protect the definition of functions from duplicates by typedef usage within other data types
 */
#ifndef GEN_GUARD_AD_RSS_MAP_RSSObjectAdapterData
#define GEN_GUARD_AD_RSS_MAP_RSSObjectAdapterData
/*!
 * @brief namespace ad
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

/**
 * \brief standard ostream operator
 *
 * \param[in] os The output stream to write to
 * \param[in] _value RssObjectAdapterData value
 *
 * \returns The stream object.
 *
 */
inline std::ostream &operator<<(std::ostream &os, RssObjectAdapterData const &_value)
{
  os << "RssObjectAdapterData(";
  os << "id:";
  os << _value.id;
  os << ",";
  os << "object_type:";
  os << _value.object_type;
  os << ",";
  os << "center_point:";
  os << _value.center_point;
  os << ",";
  os << "center_point_confidence:";
  os << _value.position_confidence_ellipse_half_axis_dimension;
  os << ",";
  os << "center_point_confidence_level:";
  os << _value.position_confidence_ellipse_confidence_level;
  os << ",";
  os << "heading:";
  os << _value.heading;
  os << ",";
  os << "dimension:";
  os << _value.dimension;
  os << ",";
  os << "speed_range:";
  os << _value.speed_range;
  os << ",";
  os << "yaw_rate:";
  os << _value.yaw_rate;
  os << ",";
  os << "steering_angle:";
  os << _value.steering_angle;
  os << ")";
  return os;
}

} // namespace map
} // namespace rss
} // namespace ad

namespace std {
/*!
 * \brief overload of the std::to_string for RssObjectAdapterData
 */
inline std::string to_string(::ad::rss::map::RssObjectAdapterData const &value)
{
  stringstream sstream;
  sstream << value;
  return sstream.str();
}
} // namespace std

/*!
 * \brief overload of fmt::formatter calling std::to_string
 */
template <> struct fmt::formatter<::ad::rss::map::RssObjectAdapterData> : formatter<string_view>
{
  template <typename FormatContext> auto format(::ad::rss::map::RssObjectAdapterData const &value, FormatContext &ctx)
  {
    return formatter<string_view>::format(std::to_string(value), ctx);
  }
};
#endif // GEN_GUARD_AD_RSS_MAP_RSSObjectAdapterData
