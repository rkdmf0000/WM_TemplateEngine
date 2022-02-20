#include "wmb_templateBuilder.h"

//Singleton pattern body initialization
wmb::wmb_templateBuilder* wmb::wmb_templateBuilder::body = nullptr;

wmb::wmb_templateBuilder::wmb_templateBuilder()
{
	this->set_killFlag(false);
	this->set_sleepDuration(WMB_SYSTEM_LOOP_BLOCK_N);
};
wmb::wmb_templateBuilder::~wmb_templateBuilder()
{

};

wmb::wmb_templateBuilder* wmb::wmb_templateBuilder::getInst()
{
	if (wmb::wmb_templateBuilder::body == nullptr)
		wmb::wmb_templateBuilder::body = new wmb::wmb_templateBuilder();

	return wmb::wmb_templateBuilder::body;
};


void wmb::wmb_templateBuilder::set_killFlag(wmb::FLAG booleanStatus)
{
	this->killFlag = booleanStatus;
};
wmb::FLAG wmb::wmb_templateBuilder::get_killFlag()
{
	return this->killFlag;
};


void wmb::wmb_templateBuilder::set_sleepDuration(wmb::SLEEP_N n)
{
	this->sleepDuration = n;
};
wmb::SLEEP_N wmb::wmb_templateBuilder::get_sleepDuration()
{
	return this->sleepDuration;
};



void wmb::wmb_templateBuilder::keepGoing()
{
	//해당 쓰레드의 생명주기
	while (this->killFlag != true) {
		std::cout << "loop" << '\n';
		
		//아래 this_thread로 대체됨.
		//sleep(this->sleepDuration);
		std::this_thread::sleep_for(std::chrono::milliseconds(this->sleepDuration));
	};
};

