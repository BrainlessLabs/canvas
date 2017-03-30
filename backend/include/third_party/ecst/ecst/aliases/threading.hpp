// Copyright (c) 2015-2016 Vittorio Romeo
// License: Academic Free License ("AFL") v. 3.0
// AFL License page: http://opensource.org/licenses/AFL-3.0
// http://vittorioromeo.info | vittorio.romeo@outlook.com

#pragma once

#include <ecst/config.hpp>

#define ECST_THREADING_USE_STD 1

#ifdef ECST_THREADING_USE_STD
#include "./threading/std.hpp"
#else
#include "./threading/boost.hpp"
#endif
