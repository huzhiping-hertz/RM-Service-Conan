#ifndef TASKFACTORY_H
#define TASKFACTORY_H

#include "BaseTask.h"
#include "LteDemodulation.h"
#include "LteFreqAnalysisIBE.h"
#include "TaskType.h"

using namespace std;
using namespace RM;

namespace RM {

	class TaskFactory
	{

	private:
		TaskFactory();
	public:
		static shared_ptr<BaseTask> CreateTask(string param);
	};
}
#endif 