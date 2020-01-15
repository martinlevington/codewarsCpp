#include "EightKyu.h"
#include <stack>
#include <array>

namespace CodeWarsCpp
{
	std::vector<int> EightKyu::digitize(unsigned long n)
	{
		std::stack<int> sd;

		while (n > 0)
		{
			int digit = n % 10;
			n /= 10;
			sd.push(digit);
		}

		std::vector<int> result;
		while (!sd.empty())
		{
			int digit = sd.top();
			sd.pop();

			result.insert(result.begin(), digit);
		}

		return result;
	}


	unsigned short int EightKyu::expressionsMatter(unsigned short int a, unsigned short int b, unsigned short int c)
	{
		int max =  std::max(a + b + c, a * b * c);
		int max2 = std::max((a + b) * c, a * (b + c));
		
		return std::max(max, max2);

	}

}
