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

		//이게 true면 루프 다음 단계에서 해당 쓰레드를 유지하는 생명이 끝난다.
		wmb::FLAG killFlag;
		
		//우분투면 단위당 1s지만 (기준)
		//윈도우면 단위당 1ms다
		//a sleep duration.
		wmb::SLEEP_N sleepDuration; 
	public:
		virtual ~wmb_templateBuilder();
		static wmb_templateBuilder* getInst();

		//쓰레드 킬 플레그 설정
		//쓰레드를 유지하는 루프를 다음 루프 검증에서 죽이기.
		//true : 죽이기
		//flase : 살리기
		void set_killFlag(wmb::FLAG);
		wmb::FLAG get_killFlag();

		//sleep 함수 안에 들어갈 argument를 정의한다.
		void set_sleepDuration(wmb::SLEEP_N);
		wmb::SLEEP_N get_sleepDuration();
		
		//쓰레드 실행
		void runThread(void*);

		//이걸 실행시키면 해당 쓰레드에 킬 플레그가 설정된 무한루프가 실행된다.
		//sleepDuration 설정으로 루프가 과도하게 돌아서 시스템 부하의 정도를 설정 할 수 있다.
		void keepGoing();


	};
}

