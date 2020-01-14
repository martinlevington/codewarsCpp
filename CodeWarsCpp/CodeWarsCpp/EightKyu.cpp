#include "EightKyu.h"
#include <stack>
#include <string>

namespace CodeWarsCpp
{

	std::vector<int> CodeWarsCpp::EightKyu::digitize(unsigned long n)
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

           result.insert(result.begin(),digit);
        }
		
        return result;
	}

}
