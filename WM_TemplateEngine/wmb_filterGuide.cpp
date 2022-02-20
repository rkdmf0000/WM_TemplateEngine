#include "wmb_filterGuide.h"


wmb::FLAG wmb::wmb_filterGuide::filterDefaultShortVariableFlag = 0;
wmb::ANSI** wmb::wmb_filterGuide::filterDefaultShortVariable = new wmb::ANSI*[1];



wmb::VOID wmb::wmb_filterGuide::init(wmb::WMB_TEXT_PARAM customParam)
{












	if (wmb::wmb_filterGuide::filterDefaultShortVariableFlag) 
		return;

	wmb::wmb_filterGuide::filterDefaultShortVariableFlag = 1;


	wmb::ANSI* stringVariable = new wmb::ANSI['%', 's', '\0'];
	wmb::wmb_filterGuide::filterDefaultShortVariable[0] = stringVariable;
};

wmb::wmb_filterGuide::wmb_filterGuide()
{
	wmb::wmb_filterGuide::init(nullptr);
};

wmb::wmb_filterGuide::wmb_filterGuide(wmb::WMB_TEXT_PARAM)
{
	wmb::wmb_filterGuide::init(nullptr);
};

wmb::wmb_filterGuide::~wmb_filterGuide()
{

};