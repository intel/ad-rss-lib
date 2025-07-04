/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-1988
 */

#pragma once

#include <chrono>
#include <iomanip>
#include <iostream>

#if __cplusplus <= 201703L

namespace std {
namespace chrono {

inline std::ostream &operator<<(std::ostream &os, system_clock::time_point const &value)
{
  std::ios::fmtflags os_flags(os.flags());
  std::time_t t = std::chrono::system_clock::to_time_t(value);
  os << std::put_time(std::localtime(&t), "%d.%m.%Y-%H:%M:%S");
  os << "." << std::setfill('0') << std::setw(3)
     << (std::chrono::duration_cast<std::chrono::milliseconds>(value.time_since_epoch()).count() % 1000);
  os.flags(os_flags);
  return os;
}

} // namespace chrono
} // namespace std

#endif
