// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/map/test_support/RssMapIntegrationTestBase.hpp"
#include "ad/rss/map/test_support/RssObjectAdapterTest.hpp"

namespace ad {
namespace rss {
namespace map {
namespace test_support {

std::shared_ptr<CheckerControlTest> RssMapIntegrationTestBase::mCheckerControlTest
  = std::shared_ptr<CheckerControlTest>();

} // namespace test_support
} // namespace map
} // namespace rss
} // namespace ad
