#pragma once
#include "sys_exceptionCodeDefine.h"
#include "sys_commonImport.h"
#include "sys_typedef.h"
namespace wmb {
	class sys_thread : public std::thread
	{
	private:
		wmb::WMB_CALLBACK_VOID threadLife;
		wmb::VOIDP threadHandler;
		wmb::VOIDP ref;
		wmb::VOID init();
	public:
		wmb::VOID set_threadProgram(wmb::WMB_CALLBACK_VOID);
		template<typename T> void set_reference(T&);
		wmb::VOID set_callback(wmb::WMB_CALLBACK_VOID);


		//thread ½ÇÇà
		wmb::VOID start();



		sys_thread();
		sys_thread(wmb::WMB_CALLBACK_VOID);
		~sys_thread();
	};





};


