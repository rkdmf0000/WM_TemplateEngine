#pragma once
#include "sys_typedef.h"
namespace wmb {
	class wmb_filterGuide
	{
	private:
		wmb::WMB_FILTER_COLLECTION_COUNT lpstrOfFilterCnt;
		wmb::WMB_FILTER_COLLECTION lpstrOfFilter;
		~wmb_filterGuide();
	public:
		static wmb::FLAG filterDefaultShortVariableFlag;
		static wmb::ANSI** filterDefaultShortVariable;
		static wmb::VOID init(wmb::WMB_TEXT_PARAM);
		wmb_filterGuide();
		wmb_filterGuide(wmb::WMB_TEXT_PARAM);

	};
};

