
#include "sys_thread.h"
#include "sys_commonImport.h"
#include "wmb_templateBuilder.h"
#include "sys_exceptionCodeDefine.h"

#include "sys_fileStd.h"
#include "sys_fileLoader.h"



int main()
{
	/**
	* 프로그램 
	*
	*
	*/
	wmb::wmb_templateBuilder* startUp = wmb::wmb_templateBuilder::getInst();



	wmb::sys_thread tx;

	tx.set_threadProgram([]() {
		
		wmb::deck* testFileStream = new wmb::deck;
		wmb::fileLoader("ansi.txt", *testFileStream);

	});
	tx.start();


	startUp->set_sleepDuration(1000);
	startUp->keepGoing();



	return 0;
}