#include "sys_thread.h"

wmb::VOID wmb::sys_thread::init()
{
	this->threadLife	= nullptr;
	this->threadHandler = nullptr;
	this->ref			= nullptr;
};

void wmb::sys_thread::set_threadProgram(wmb::WMB_CALLBACK_VOID fn)
{
	this->threadLife = fn;
};

void wmb::sys_thread::set_callback(wmb::WMB_CALLBACK_VOID fn)
{

};

void* aa() {

};

wmb::VOID wmb::sys_thread::start()
{
	if (!this->threadLife || this->threadLife == nullptr) {
		WMB_SYS_EXCEPTION_ERROR_LOG_FORM(1, "CHECKED!");
	} else {
		std::thread t(this->threadLife);
		t.detach();
		if (t.joinable())
		{
			t.join();
		};
	};
};

wmb::sys_thread::sys_thread()
{
	this->init();
};
wmb::sys_thread::sys_thread(wmb::WMB_CALLBACK_VOID fn)
{
	this->init();
	this->set_threadProgram(fn);
};
wmb::sys_thread::~sys_thread()
{
	WMB_SYS_EXCEPTION_ERROR_LOG_FORM(1, "thread die");
	delete this->threadHandler;
	delete this->ref;
};


template<typename T> inline void wmb::sys_thread::set_reference(T& ref)
{

};