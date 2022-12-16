#include <iostream>
#include "Vector1.hpp"

Vector1::Vector1()
: mX(0)
, mY(0) {
	std::cout << "Vector(): (" << mX << ", " << mY << ")" << std::endl;
}

Vector1::Vector1(int x, int y)
: mX(x)
, mY(y) {
	std::cout << "Vector(): (" << mX << ", " << mY << ")" << std::endl;
}
