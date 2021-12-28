#pragma once
#include "sys_fileStd.h"
#include "sys_typedef.h"
#include "sys_commonImport.h";
namespace wmb {
	void appendAtStreamLast(wmb::ANSI, wmb::stream*);
	void deckInitialization(wmb::deck*);

	//void fileExists(std::filesystem::path& a);


	/**
	*	it'll make a directory.
	*	not make like Hierarchical action. please step by make.
	*/
	void makeDirectory(wmb::ANSI[256]);
	void fileLoader(wmb::ANSI[256], wmb::deck*);

};

