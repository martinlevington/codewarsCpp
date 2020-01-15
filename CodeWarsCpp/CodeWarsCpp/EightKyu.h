#pragma once
#include <vector>


namespace CodeWarsCpp
{
	class EightKyu
	{
	public:
		static __declspec(dllexport) std::vector<int> digitize(unsigned long n);

		static __declspec(dllexport) unsigned short int expressionsMatter(
			unsigned short int a, unsigned short int b, unsigned short int c);
	};
}
