#include "sys_templateBlocker.h"

wmb::DINT wmb::sys_templateBlocker::cntTheBlockLength = 0;
void wmb::sys_templateBlocker::_cntTheBlockLengthSetter(wmb::DINT n)
{
	wmb::sys_templateBlocker::cntTheBlockLength = n;
};
