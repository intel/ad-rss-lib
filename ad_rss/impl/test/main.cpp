/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

#include "gtest/gtest.h"
#include "spdlog/sinks/null_sink.h"
#include "spdlog/spdlog.h"

int main(int argc, char **argv)
{
  auto logger = spdlog::create<spdlog::sinks::null_sink_st>("null_logger");
  spdlog::set_default_logger(logger);

  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
