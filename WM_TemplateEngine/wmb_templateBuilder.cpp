#include "wmb_templateBuilder.h"

//Singleton pattern body initialization
wmb::wmb_templateBuilder* wmb::wmb_templateBuilder::body = nullptr;

wmb::wmb_templateBuilder::wmb_templateBuilder()
{

}
wmb::wmb_templateBuilder::~wmb_templateBuilder()
{
}

wmb::wmb_templateBuilder* wmb::wmb_templateBuilder::getInst()
{
	if (wmb::wmb_templateBuilder::body == nullptr)
		wmb::wmb_templateBuilder::body = new wmb::wmb_templateBuilder();

	return wmb::wmb_templateBuilder::body;
};
