/*
 * Copyright (C) 2026 Zhou Qiankang <wszqkzqk@qq.com>
 *
 * SPDX-License-Identifier: LGPL-3.0-or-later
 *
 * This file is part of PvZ-Portable.
 */

#pragma once

#if defined(__has_include)
#	if __has_include(<format>)
#		include <format>
#		define PVZP_HAS_STD_FORMAT 1
#	endif
#endif

#ifndef PVZP_HAS_STD_FORMAT
#	include <fmt/format.h>

namespace std
{
using fmt::format;
using fmt::make_format_args;
using fmt::make_wformat_args;
using fmt::vformat;
using fmt::wformat_args;
using fmt::format_args;
}
#endif
