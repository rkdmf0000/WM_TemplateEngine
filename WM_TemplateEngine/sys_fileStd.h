#pragma once
#include "sys_typedef.h"
namespace wmb {
	

	/**
	* 힙의 문자열 크기와 값
	* 설계상 256바이트까지 쌓임
	* eof 는 넣지 말기를 바람..
	*/
	struct stream {
		wmb::DINT size = 0;
		wmb::ANSI* data = nullptr;
	};

	struct deck {
		//cursor의 크기만큼 스트림이 쌓임
		wmb::DINT size; //memory-stack-group 1
		wmb::DINT checklist_cnt; //memory-stack-group 1
		wmb::stream** streams = nullptr; //memory-stack-group variable
		wmb::DINT* checklist = nullptr; //memory-stack-group variable
		

		//unsigned char임 최대 256 바이트까지 긁도록 한다.
		wmb::BLOCK_COUNT cursor;
	};


};