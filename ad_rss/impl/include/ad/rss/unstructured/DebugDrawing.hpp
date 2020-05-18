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
    Line line;
    std::string color{"white"};
    std::string ns;
  };

  struct DebugPolygon
  {
    Polygon polygon;
    std::string color{"white"};
    std::string ns;
  };

  explicit DebugDrawing()
  {
  }

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
    mLines.push_back(DebugLine{line, color, ns});
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
    mPolygons.push_back(DebugPolygon{polygon, color, ns});
  }

  std::vector<DebugLine> mLines;
  std::vector<DebugPolygon> mPolygons;
};

} // namespace unstructured
} // namespace rss
} // namespace ad
