#pragma once
#include "sys_typedef.h"
#include "sys_exceptionCodeDefine.h"
namespace wmb {
	class sys_errorException
	{
	
	private:
		~sys_errorException();
	public:

		//예외 실행 종류
		enum exceptionActionByTag {STOP, KEEP, LOGGING_STOP, LOGGING_KEEP};

		//프로그램이 에러로 인해 종료되야함.
		virtual void stopThread();
		//해당하는 PID를 종료
		virtual void stopThread(wmb::PID);

		virtual void logging();


		sys_errorException(wmb::ERRORCODE);
		sys_errorException(wmb::ERRORCODE, wmb::sys_errorException::exceptionActionByTag);
	};
};