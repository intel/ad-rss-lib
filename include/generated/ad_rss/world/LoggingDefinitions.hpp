/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2019 Intel Corporation
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 *    may be used to endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 *    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 *    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 *    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 *    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 *    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 *    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *    POSSIBILITY OF SUCH DAMAGE.
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 */

#pragma once

#if DLT_NOT_AVAILABLE == 1

#ifndef DLT_LOG_CXX
typedef struct
{
} DltContext;

/**
 * Definitions of DLT log level
 */
typedef enum {
  DLT_LOG_DEFAULT = -1,   /**< Default log level */
  DLT_LOG_OFF = 0x00,     /**< Log level off */
  DLT_LOG_FATAL = 0x01,   /**< fatal system error */
  DLT_LOG_ERROR = 0x02,   /**< error with impact to correct functionality */
  DLT_LOG_WARN = 0x03,    /**< warning, correct behaviour could not be ensured */
  DLT_LOG_INFO = 0x04,    /**< informational */
  DLT_LOG_DEBUG = 0x05,   /**< debug  */
  DLT_LOG_VERBOSE = 0x06, /**< highest grade of information */
  DLT_LOG_MAX             /**< maximum value, used for range check */
} DltLogLevelType;

#define DLT_LOG_CXX(CONTEXT, LOGLEVEL, ...)                                                                            \
  do                                                                                                                   \
  {                                                                                                                    \
    (void)CONTEXT;                                                                                                     \
    (void)LOGLEVEL;                                                                                                    \
  } while (0)
#endif

#ifndef DLT_REGISTER_CONTEXT
#define DLT_REGISTER_CONTEXT(CONTEXT, CONTEXTID, DESCRIPTION)                                                          \
  do                                                                                                                   \
  {                                                                                                                    \
  } while (0)
#endif

#ifndef DLT_UNREGISTER_CONTEXT
#define DLT_UNREGISTER_CONTEXT(CONTEXT)                                                                                \
  do                                                                                                                   \
  {                                                                                                                    \
  } while (0)
#endif

#else

#include <dlt/dlt_cpp_extension.hpp>

#endif

/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace world
 */
namespace world {

/*!
 * @returns logging context
 */
DltContext &getLoggingContext();

} // namespace world
} // namespace ad_rss
