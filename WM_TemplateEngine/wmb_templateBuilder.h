#pragma once
#include "sys_typedef.h"
#include "sys_fileLoader.h"
#include "sys_templateBlocker.h"
namespace wmb {
	class wmb_templateBuilder
	{
	private:
		wmb_templateBuilder();
		static wmb_templateBuilder* body;
	public:
		virtual ~wmb_templateBuilder();
		static wmb_templateBuilder* getInst();
	};
}

