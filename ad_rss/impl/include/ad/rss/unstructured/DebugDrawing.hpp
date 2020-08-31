// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2020 Intel Corporation
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

/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace situation
 */
namespace unstructured {

class DebugDrawing
{
public:
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
  };

  explicit DebugDrawing() = default;

  /**
   * @brief singelton instance getter
   */
  static DebugDrawing *getInstance()
  {
    static DebugDrawing *mSingleton = new DebugDrawing();
    return mSingleton;
  }

  /**
   * @brief clean up all geometries to draw (before a new cycle)
   */
  void reset()
  {
    mLines.clear();
    mPolygons.clear();
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
    mPolygons.push_back(DebugPolygon(polygon, color, ns));

    spdlog::trace("DRAW;{};{};{};POLYGON", ns, color, std::to_string(polygon));
  }

  std::vector<DebugLine> mLines;
  std::vector<DebugPolygon> mPolygons;
};

} // namespace unstructured
} // namespace rss
} // namespace ad
