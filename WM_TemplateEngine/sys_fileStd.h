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
		wmb::DINT size; //streams cnt
		wmb::DINT checklist_cnt; //checklist cnt
		wmb::stream** streams = nullptr;//문자열
		wmb::DINT* checklist = nullptr;
		

		//unsigned char임 최대 256 바이트까지 긁도록 한다.
		wmb::BLOCK_COUNT cursor;
		wmb::FLAG inited = false;
	};


};