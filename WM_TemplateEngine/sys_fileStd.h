#pragma once
#include "sys_typedef.h"
namespace wmb {
	

	/**
	* ���� ���ڿ� ũ��� ��
	* ����� 256����Ʈ���� ����
	* eof �� ���� ���⸦ �ٶ�..
	*/
	struct stream {
		wmb::DINT size = 0;
		wmb::ANSI* data = nullptr;
	};

	struct deck {
		//cursor�� ũ�⸸ŭ ��Ʈ���� ����
		wmb::DINT size; //memory-stack-group 1
		wmb::DINT checklist_cnt; //memory-stack-group 1
		wmb::stream** streams = nullptr; //memory-stack-group variable
		wmb::DINT* checklist = nullptr; //memory-stack-group variable
		

		//unsigned char�� �ִ� 256 ����Ʈ���� �ܵ��� �Ѵ�.
		wmb::BLOCK_COUNT cursor;
	};


};