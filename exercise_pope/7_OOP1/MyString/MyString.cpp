#include "MyString.hpp"
#include <iostream>

MyString::MyString()
: mLength(0)
, mCapacity(22) {
	mStr = new char[mCapacity + 1];
	std::cout << "Call the constructor!" << std::endl;
}

MyString::~MyString() {
	delete[] mStr;
	std::cout << "Call the destructor! mStr is deleted!" << std::endl;
}
