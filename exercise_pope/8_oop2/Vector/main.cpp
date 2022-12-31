#include "Vector.hpp"
#include <iostream>

int	main(void) {
	samples::Vector	v1(1, 2);
	samples::Vector	v2(2, 4);

	v1.Scale(2);

	if (v1.IsEqual(v2) == true) {
		std::cout << "v1 and v2 is same vector!" << std::endl;
	}

	v1.Scale(v2);

	std::cout << "x: " << v1.GetX()
	<< ", " << "y: " << v1.GetY() << std::endl;
}
