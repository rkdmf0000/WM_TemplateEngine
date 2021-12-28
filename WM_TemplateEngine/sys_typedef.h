#pragma once
namespace wmb {

	typedef int INT;

	//프로그램의 실행 ID를 의미.
	typedef int PID;
	//쓰레드의 번호를 의미.
	typedef int TID;

	//프로그램의 에러 반환 코드를 의미
	//sys_exceptionCodeDefine에 작성되있지만!! 어쩌라고!!
	typedef int ERRORCODE;

	//*double int
	typedef unsigned int DINT;

	typedef void* VOIDP;
	typedef char ASCII;

	//확장 문자열 대응
	typedef unsigned char ANSI;
	
	//sys_fileStd 에서 wmb::sys_deck 의 커서의 위치를 표시할때 사용됨.
	typedef unsigned char BLOCK_COUNT;


};