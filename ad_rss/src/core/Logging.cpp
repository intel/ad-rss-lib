// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/core/Logging.hpp"

#include <spdlog/sinks/stdout_color_sinks.h>

namespace ad {
namespace rss {
namespace core {

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
  mLogger = spdlog::stdout_color_mt("rss_core");
}

Logging::~Logging()
{
}

std::shared_ptr<spdlog::logger> getLogger()
{
  return Logging::instance().mLogger;
}

spdlog::level::level_enum getLogLevel()
{
  return getLogger()->level();
}

void setLogLevel(spdlog::level::level_enum const logLevel)
{
  getLogger()->set_level(logLevel);
}

void setLogLevel(std::string const &logLevel)
{
  getLogger()->set_level(spdlog::level::from_str(logLevel));
}

} // namespace core
} // namespace rss
} // namespace ad
