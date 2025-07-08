/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2019-2021 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

#include "gtest/gtest.h"
#include <ad/rss/core/Logging.hpp>
#include "spdlog/spdlog.h"

int main(int argc, char **argv)
{
  ad::rss::core::getLogger()->set_level(spdlog::level::off);
  spdlog::set_default_logger(ad::rss::core::getLogger());
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
