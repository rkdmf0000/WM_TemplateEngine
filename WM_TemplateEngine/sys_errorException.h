#pragma once
#include "sys_typedef.h"
#include "sys_exceptionCodeDefine.h"
namespace wmb {
	class sys_errorException
	{
	
	private:
		~sys_errorException();
	public:

		//���� ���� ����
		enum exceptionActionByTag {STOP, KEEP, LOGGING_STOP, LOGGING_KEEP};

		//���α׷��� ������ ���� ����Ǿ���.
		virtual void stopThread();
		//�ش��ϴ� PID�� ����
		virtual void stopThread(wmb::PID);

		virtual void logging();


		sys_errorException(wmb::ERRORCODE);
		sys_errorException(wmb::ERRORCODE, wmb::sys_errorException::exceptionActionByTag);
	};
};