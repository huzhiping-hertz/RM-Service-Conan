#ifndef TASKTYPE_H
#define TASKTYPE_H
#include <string>

using namespace std; 
using namespace RM;

namespace RM {

	class TaskType
	{

	private:
		TaskType();
	public:
		static string LTE_Demodulation()
		{
			return "lte_demodulation";
		}
		static string LTE_FreqAnalysisIBE()
		{
			return "lte_freq_analysis_ibe";
		}
		static string LTE_FreqAnalysisACLR()
		{
			return "lte_freq_analysis_aclr";
		}
	};
}
#endif 