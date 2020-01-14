#pragma once
#include <cstdint>

namespace FuelDistCalcs
{
	class  FuelDistCalc
	{
	public:
		static __declspec(dllexport) bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left);
	};
}