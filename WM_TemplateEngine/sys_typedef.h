#include "sys_thread.h"
#pragma once
namespace wmb {


	/*
	* ## LEVEL 1
	* ###################################################
	*/

	typedef int INT;

	//���α׷��� ���� ID�� �ǹ�.
	typedef int PID;
	//�������� ��ȣ�� �ǹ�.
	typedef int TID;

	//���α׷��� ���� ��ȯ �ڵ带 �ǹ�
	//sys_exceptionCodeDefine�� �ۼ���������!! ��¼���!!
	typedef int ERRORCODE;

	//*double int
	typedef unsigned int DINT;

	typedef void VOID;
	typedef void* VOIDP;
	typedef char ASCII;
	typedef wchar_t UNICODE;

	//Ȯ�� ���ڿ� ����
	typedef unsigned char ANSI;
	
	//sys_fileStd ���� wmb::sys_deck �� Ŀ���� ��ġ�� ǥ���Ҷ� ����.
	typedef unsigned int BLOCK_COUNT;

	//xxx
	typedef bool FLAG;

	//���� ������ �ȿ��� while�� ������ �������� sleep�� ���� ����.
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