#include "Vector2.hpp"
#include <iostream>

int	main(void) {
	Vector2	inst1;
	Vector2 inst2(4, 2);

	std::cout << "inst1 x: " << inst1.GetX() << std::endl;
	std::cout << "inst1 y: " << inst1.GetY() << std::endl;
	std::cout << "inst2 x: " << inst2.GetX() << std::endl;
	std::cout << "inst2 y: " << inst2.GetY() << std::endl;

	inst1.SetX(6);
	inst2.SetX(8);
	inst1.SetY(7);
	inst2.SetY(9);

	std::cout << "inst1 x: " << inst1.GetX() << std::endl;
	std::cout << "inst1 y: " << inst1.GetY() << std::endl;
	std::cout << "inst2 x: " << inst2.GetX() << std::endl;
	std::cout << "inst2 y: " << inst2.GetY() << std::endl;

	inst1.Add(inst2);

	std::cout << "inst1 x: " << inst1.GetX() << std::endl;
	std::cout << "inst1 y: " << inst1.GetY() << std::endl;
	std::cout << "inst2 x: " << inst2.GetX() << std::endl;
	std::cout << "inst2 y: " << inst2.GetY() << std::endl;
}
