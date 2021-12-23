#pragma once
#include "sys_typedef.h"

namespace wmb {
	class sys_templateBlocker
	{
		sys_templateBlocker() {
			cntTheBlockLength = 0;
		};


	private:
		static void _cntTheBlockLengthSetter(wmb::DINT n);
	public:
		static wmb::DINT cntTheBlockLength;

	};
};

