#include <iostream>
#include <iomanip>
#include "swap.hpp"

namespace samples {
	void	SwapExample() {
		std::cout << "----------" << std::endl;
		std::cout << "----------" << std::endl;
		std::cout << "----------" << std::endl;
		int num1 = 1;
		int	num2 = 2;

		std::cout << std::setw(8) << std::left << std::setfill(' ') << "Before" << num1 << ", " << num2 << std::endl;
		Swap(num1, num2);
		std::cout  << std::setw(8) << std::left << std::setfill(' ') << "After" << num1 << ", " << num2 << std::endl;
	}

	void	Swap(int& num1, int& num2) {
		int	tmp = num1;

		num1 = num2;
		num2 = tmp;
	}
}
