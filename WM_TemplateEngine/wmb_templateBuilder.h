#pragma once
#include "sys_typedef.h"
#include "sys_fileLoader.h"
#include "sys_templateBlocker.h"
namespace wmb {
	class wmb_templateBuilder
	{
	private:
		static wmb_templateBuilder* body;
	public:
		wmb_templateBuilder();
		~wmb_templateBuilder();
		static wmb::wmb_templateBuilder* getInstance();
	};
}

