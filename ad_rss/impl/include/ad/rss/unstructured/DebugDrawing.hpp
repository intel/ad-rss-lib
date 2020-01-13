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
    ad::rss::unstructured::Line line;
    std::string color{"white"};
    std::string ns;
  };

  struct DebugPolygon
  {
    ad::rss::unstructured::Polygon polygon;
    std::string color{"white"};
    std::string ns;
  };

  explicit DebugDrawing()
  {
  }

  static DebugDrawing *getInstance()
  {
    static DebugDrawing *mSingleton = new DebugDrawing();
    return mSingleton;
  }

  void reset()
  {
    mLines.clear();
    mPolygons.clear();
  }

  void drawLine(ad::rss::unstructured::Line const &line, std::string const &color = "white", std::string const &ns = "")
  {
    mLines.push_back(DebugLine{line, color, ns});
  }

  void drawPolygon(ad::rss::unstructured::Polygon const &polygon,
                   std::string const &color = "white",
                   std::string const &ns = "")
  {
    mPolygons.push_back(DebugPolygon{polygon, color, ns});
  }

  std::vector<DebugLine> mLines;
  std::vector<DebugPolygon> mPolygons;
};

} // namespace unstructured
} // namespace rss
} // namespace ad
