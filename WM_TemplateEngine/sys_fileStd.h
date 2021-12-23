#pragma once
#include "sys_typedef.h"
namespace wmb {
	struct aFile {
		wmb::DINT size = 0;
		wmb::ANSI* data = nullptr;
	};
};