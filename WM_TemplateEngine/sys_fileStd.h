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
		wmb::DINT size; //streams cnt
		wmb::DINT checklist_cnt; //checklist cnt
		wmb::stream** streams = nullptr;//���ڿ�
		wmb::DINT* checklist = nullptr;
		

		//unsigned char�� �ִ� 256 ����Ʈ���� �ܵ��� �Ѵ�.
		wmb::BLOCK_COUNT cursor;
		wmb::FLAG inited = false;
	};


};