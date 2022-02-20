#include "sys_thread.h"
#pragma once
namespace wmb {


	/*
	* ## LEVEL 1
	* ###################################################
	*/

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

	typedef void VOID;
	typedef void* VOIDP;
	typedef char ASCII;
	typedef wchar_t UNICODE;

	//확장 문자열 대응
	typedef unsigned char ANSI;
	
	//sys_fileStd 에서 wmb::sys_deck 의 커서의 위치를 표시할때 사용됨.
	typedef unsigned int BLOCK_COUNT;

	//xxx
	typedef bool FLAG;

	//개별 쓰레드 안에서 while을 돌릴때 멈춰있을 sleep의 값을 정의.
	typedef int SLEEP_N;



	typedef const ASCII* WMB_TEXT_PARAM;
	typedef const ASCII WMB_FILE_PATH;



















	/*
	* ## LEVEL 2
	* ###################################################
	*/
	typedef VOID (*_WMB_CALLBACK_VOID) (VOID);
	//typedef VOID (*_WMB_CALLBACK_SELF_THREAD) (wmb::sys_thread*);
	typedef _WMB_CALLBACK_VOID WMB_CALLBACK_VOID;

	typedef ANSI WMB_FILTER_COLLECTION_COUNT;
	typedef ANSI* WMB_FILTER_ITEM;
	typedef ANSI** WMB_FILTER_COLLECTION;

};