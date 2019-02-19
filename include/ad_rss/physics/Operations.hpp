// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors
//    may be used to endorse or promote products derived from this software without
//    specific prior written permission.
//
//    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
//    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
//    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
//    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
//    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//    POSSIBILITY OF SUCH DAMAGE.
//
// ----------------- END LICENSE BLOCK -----------------------------------

/**
 * @file
 */

#pragma once

#include "ad_rss/physics/Acceleration.hpp"
#include "ad_rss/physics/Distance.hpp"
#include "ad_rss/physics/DistanceSquared.hpp"
#include "ad_rss/physics/Duration.hpp"
#include "ad_rss/physics/DurationSquared.hpp"
#include "ad_rss/physics/Speed.hpp"
#include "ad_rss/physics/SpeedSquared.hpp"

/*!
 * \brief Arithmetic physics operation v = a * t
 *
 * \param[in] a acceleration value
 * \param[in] t duration value
 *
 * \returns v = a * t as speed value
 *
 * \note throws a std::out_of_range exception if one of the two operands or the result of
 *   the operation is not valid
 */
inline ad_rss::physics::Speed operator*(ad_rss::physics::Acceleration const &a, ad_rss::physics::Duration const &t)
{
  a.ensureValid();
  t.ensureValid();
  ad_rss::physics::Speed const v(static_cast<double>(a) * static_cast<double>(t));
  v.ensureValid();
  return v;
}

/*!
 * \brief Arithmetic physics operation v = t * a
 *
 * \param[in] t duration value
 * \param[in] a acceleration value
 *
 * \returns v = a * t as speed value
 *
 * \note throws a std::out_of_range exception if one of the two operands or the result of
 *   the operation is not valid
 */
inline ad_rss::physics::Speed operator*(ad_rss::physics::Duration const &t, ad_rss::physics::Acceleration const &a)
{
  return operator*(a, t);
}

/*!
 * \brief Arithmetic physics operation s = v * t
 *
 * \param[in] v speed value
 * \param[in] t duration value
 *
 * \returns s = v * t as distance value
 *
 * \note throws a std::out_of_range exception if one of the two operands or the result of
 *   the operation is not valid
 */
inline ad_rss::physics::Distance operator*(ad_rss::physics::Speed const &v, ad_rss::physics::Duration const &t)
{
  v.ensureValid();
  t.ensureValid();
  ad_rss::physics::Distance const s(static_cast<double>(v) * static_cast<double>(t));
  s.ensureValid();
  return s;
}

/*!
 * \brief Arithmetic physics operation s = t * v
 *
 * \param[in] t duration value
 * \param[in] v speed value
 *
 * \returns s = v * t as distance value
 *
 * \note throws a std::out_of_range exception if one of the two operands or the result of
 *   the operation is not valid
 */
inline ad_rss::physics::Distance operator*(ad_rss::physics::Duration const &t, ad_rss::physics::Speed const &v)
{
  return operator*(v, t);
}

/*!
 * \brief Arithmetic physics operation t = v / a
 *
 * \param[in] v speed value
 * \param[in] a acceleration value
 *
 * \returns t = v / a as duration value
 *
 * \note throws a std::out_of_range exception if one of the two operands or the result of
 *   the operation is not valid or if the divisor is zero
 */
inline ad_rss::physics::Duration operator/(ad_rss::physics::Speed const &v, ad_rss::physics::Acceleration const &a)
{
  v.ensureValid();
  a.ensureValidNonZero();
  ad_rss::physics::Duration const t(static_cast<double>(v) / static_cast<double>(a));
  t.ensureValid();
  return t;
}

/*!
 * \brief Arithmetic physics operation s = v^2 / a
 *
 * \param[in] v2 squared speed value
 * \param[in] a acceleration value
 *
 * \returns s = v^2 / a as distance value
 *
 * \note throws a std::out_of_range exception if one of the two operands or the result of
 *   the operation is not valid or if the divisor is zero
 */
inline ad_rss::physics::Distance operator/(ad_rss::physics::SpeedSquared const &v2,
                                           ad_rss::physics::Acceleration const &a)
{
  v2.ensureValid();
  a.ensureValidNonZero();
  ad_rss::physics::Distance const t(static_cast<double>(v2) / static_cast<double>(a));
  t.ensureValid();
  return t;
}

/*!
 * \brief Arithmetic physics operation t^2 = s / a
 *
 * \param[in] s distance value
 * \param[in] a acceleration value
 *
 * \returns t^2 = s / a as squared duration value
 *
 * \note throws a std::out_of_range exception if one of the two operands or the result of
 *   the operation is not valid or if the divisor is zero
 */
inline ad_rss::physics::DurationSquared operator/(ad_rss::physics::Distance const &s,
                                                  ad_rss::physics::Acceleration const &a)
{
  s.ensureValid();
  a.ensureValidNonZero();
  ad_rss::physics::DurationSquared const t2(static_cast<double>(s) / static_cast<double>(a));
  t2.ensureValid();
  return t2;
}

/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace for RSS physics datatypes and operations
 */
namespace physics {

/*!
 * \brief ensure the physics operators defined at global scope are also found within ad_rss::physics namespace
 */
using ::operator*;

/*!
 * \brief ensure the physics operators defined at global scope are also found within ad_rss::physics namespace
 */
using ::operator/;

} // namespace physics

} // namespace ad_rss
