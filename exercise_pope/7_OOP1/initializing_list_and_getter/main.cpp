#include <iostream>
#include "Temp.hpp"

int main(void) {
	Temp	*var = new Temp();

	std::cout << "a: " << var->getA() << std::endl;
	std::cout << "b: " << var->getB() << std::endl;
	memset(var, 0, sizeof(Temp));
	std::cout << "a: " << var->getA() << std::endl;
	std::cout << "b: " << var->getB() << std::endl;
}
