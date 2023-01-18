#include "TaskFactory.h"

TaskFactory::TaskFactory()
{
}

shared_ptr<BaseTask> TaskFactory::CreateTask(string param)
{
	json paramObj = json::parse(param);
	string typestr=Poco::toLower(paramObj["type"].get<string>());
	
	if (typestr == TaskType::LTE_Demodulation())
	{
		return std::make_shared<LteDemodulation>(param);
	}

	if (typestr == TaskType::LTE_FreqAnalysisIBE())
	{
		return std::make_shared<LteFreqAnalysisIBE>(param);
	}

	//if (typestr == TaskType::LTE_FreqAnalysisACLR())
	//{
	//}
}