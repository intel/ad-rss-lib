// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/map/Logging.hpp"

#include <spdlog/sinks/stdout_color_sinks.h>

namespace ad {
namespace rss {
namespace map {

class Logging
{
public:
  static Logging &instance();

  std::shared_ptr<spdlog::logger> mLogger;

private:
  // Copy operators and constructors are deleted to avoid accidental copies
  Logging(Logging const &) = delete;
  Logging(Logging const &&) = delete;
  Logging &operator=(Logging &&) = delete;
  Logging &operator=(Logging const &) = delete;

  explicit Logging();
  ~Logging();
};

Logging &Logging::instance()
{
  static Logging singleton;
  return singleton;
}

Logging::Logging()
{
  mLogger = spdlog::stdout_color_mt("rss_map_integration");
}

Logging::~Logging()
{
}

std::shared_ptr<spdlog::logger> getLogger()
{
  return Logging::instance().mLogger;
}

} // namespace map
} // namespace rss
} // namespace ad
