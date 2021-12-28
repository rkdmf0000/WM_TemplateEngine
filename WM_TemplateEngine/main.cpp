
#include "sys_commonImport.h"
#include "wmb_templateBuilder.h"
#include "sys_exceptionCodeDefine.h"
int main()
{
	wmb::wmb_templateBuilder* startUp = wmb::wmb_templateBuilder::getInst();

	unsigned char* x = WMB_SYS_EXCEPTION_ERROR_LOG_FORM(1, "asd");
	std::cout << x << '\n';
	return 0;
}