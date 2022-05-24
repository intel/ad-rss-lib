// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2020-2022 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */
#pragma once

#include "ad/rss/unstructured/Geometry.hpp"

#include <string>
#include <utility>
#include <vector>

#define DEBUG_DRAWING_POLYGON(polygon, color, ns) (DebugDrawing::getInstance()->drawPolygon(polygon, color, ns))
#define DEBUG_DRAWING_LINE(line, color, ns) (DebugDrawing::getInstance()->drawLine(line, color, ns))
#define DEBUG_DRAWING_IS_ENABLED() (DebugDrawing::getInstance()->isEnabled())

/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace unstructured
 */
namespace unstructured {

class DebugDrawing
{
public:
  struct NullDeleter
  {
    void operator()(const void *)
    {
    }
  };
  struct DebugPoint
  {
    DebugPoint(double inX, double inY)
      : x(inX)
      , y(inY){};
    double x;
    double y;
  };

  struct DebugLine
  {
    DebugLine(Line const &iLine, std::string const &iColor, std::string const &iNs)
      : line(iLine)
      , color(iColor)
      , ns(iNs)
    {
    }
    Line line;
    std::string color{"white"};
    std::string ns;

    std::vector<DebugPoint> getVector()
    {
      std::vector<DebugPoint> vectorLine;
      for (auto const &pt : line)
      {
        vectorLine.push_back(DebugPoint(pt.x(), pt.y()));
      }
      return vectorLine;
    }
  };

  struct DebugPolygon
  {
    DebugPolygon(Polygon const &iPolygon, std::string const &iColor, std::string const &iNs)
      : polygon(iPolygon)
      , color(iColor)
      , ns(iNs)
    {
    }
    Polygon polygon;
    std::string color{"white"};
    std::string ns;

    std::vector<DebugPoint> getVector()
    {
      std::vector<DebugPoint> vectorPolygon;
      for (auto const &pt : polygon.outer())
      {
        vectorPolygon.push_back(DebugPoint(pt.x(), pt.y()));
      }
      return vectorPolygon;
    }
  };

  explicit DebugDrawing() = default;

  /**
   * @brief singelton instance getter
   */
  static std::shared_ptr<DebugDrawing> getInstance()
  {
    static DebugDrawing *mSingleton = new DebugDrawing();
    return std::shared_ptr<DebugDrawing>(mSingleton, NullDeleter());
  }

  /**
   * @brief clean up all geometries to draw (before a new cycle)
   */
  void reset()
  {
    if (!mEnabled)
    {
      return;
    }
    mLines.clear();
    mPolygons.clear();
  }

  /**
   * @brief enable/disable debug drawing
   */
  void enable(bool value)
  {
    mEnabled = value;
  }

  /**
   * @brief enable/disable debug drawing
   */
  bool isEnabled()
  {
    return mEnabled;
  }

  /**
   * @brief draw a line
   *
   * @param[in] line line to draw
   * @param[in] color line color
   * @param[in] ns namespace to identify geometry
   */
  void drawLine(Line const &line, std::string const &color = "white", std::string const &ns = "")
  {
    if (!mEnabled)
    {
      return;
    }
    mLines.push_back(DebugLine(line, color, ns));

    spdlog::trace("DRAW;{};{};{};LINE", ns, color, std::to_string(line));
  }

  /**
   * @brief draw a polygon
   *
   * @param[in] polygon polygon to draw
   * @param[in] color line color
   * @param[in] ns namespace to identify geometry
   */
  void drawPolygon(Polygon const &polygon, std::string const &color = "white", std::string const &ns = "")
  {
    if (!mEnabled)
    {
      return;
    }
    mPolygons.push_back(DebugPolygon(polygon, color, ns));
  }

  std::vector<DebugLine> mLines;
  std::vector<DebugPolygon> mPolygons;
  bool mEnabled{false};
};

} // namespace unstructured
} // namespace rss
} // namespace ad
