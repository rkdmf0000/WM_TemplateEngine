#pragma once
#include "sys_fileStd.h"
#include "sys_typedef.h"
#include "sys_commonImport.h";
#include "sys_errorException.h"
namespace wmb {

	/**
	* wmb::stream �迭 �������� ���ųִ´�
	*/
	void appendAtStreamLast(wmb::ANSI, wmb::stream*);

	/**
	* wmb::deck�� �ʱ�ȭ�Ѵ�.
	*/
	void deckInitialization(wmb::deck*);

	//void fileExists(std::filesystem::path& a);


	/**
	*	it'll make a directory.
	*	not make like Hierarchical action. please step by make.
	*/
	void makeDirectory(wmb::WMB_FILE_PATH[256]);
	void fileLoader(wmb::WMB_FILE_PATH[256], wmb::deck&);

};

