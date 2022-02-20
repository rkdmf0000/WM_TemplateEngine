#pragma once
#include "sys_commonImport.h"
#include "sys_typedef.h"
#include "sys_fileLoader.h"
#include "sys_templateBlocker.h"
#include "sys_fileStd.h"


#ifdef _WIN32
//define something for Windows (32-bit and 64-bit, this part is common)
#define WMB_SYSTEM_LOOP_BLOCK_N 1000

#ifdef _WIN64
//define something for Windows (64-bit only)
#define WMB_SYSTEM_LOOP_BLOCK_N 1000
#endif

#elif __linux__
// linux
#define WMB_SYSTEM_LOOP_BLOCK_N 1

#elif __unix__ // all unices not caught above
// Unix
#define WMB_SYSTEM_LOOP_BLOCK_N 1

#elif defined(_POSIX_VERSION)
#define WMB_SYSTEM_LOOP_BLOCK_N 1

// POSIX
#else
#error "Unknown compiler"
#endif


namespace wmb {
	class wmb_templateBuilder
	{
	private:
		wmb_templateBuilder();
		static wmb_templateBuilder* body;
		pthread_t handler;

		//�̰� true�� ���� ���� �ܰ迡�� �ش� �����带 �����ϴ� ������ ������.
		wmb::FLAG killFlag;
		
		//������� ������ 1s���� (����)
		//������� ������ 1ms��
		//a sleep duration.
		wmb::SLEEP_N sleepDuration; 
	public:
		virtual ~wmb_templateBuilder();
		static wmb_templateBuilder* getInst();

		//������ ų �÷��� ����
		//�����带 �����ϴ� ������ ���� ���� �������� ���̱�.
		//true : ���̱�
		//flase : �츮��
		void set_killFlag(wmb::FLAG);
		wmb::FLAG get_killFlag();

		//sleep �Լ� �ȿ� �� argument�� �����Ѵ�.
		void set_sleepDuration(wmb::SLEEP_N);
		wmb::SLEEP_N get_sleepDuration();
		
		//������ ����
		void runThread(void*);

		//�̰� �����Ű�� �ش� �����忡 ų �÷��װ� ������ ���ѷ����� ����ȴ�.
		//sleepDuration �������� ������ �����ϰ� ���Ƽ� �ý��� ������ ������ ���� �� �� �ִ�.
		void keepGoing();


	};
}

