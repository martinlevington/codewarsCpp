#include "IsNDivisableByXandY.h"

namespace CodeWarsCpp
{

	bool IsNDivisableByXandY::isDivisible(int n, int x, int y) {
		// your code here

		return  n % x == 0 && n% y == 0;
	}

}