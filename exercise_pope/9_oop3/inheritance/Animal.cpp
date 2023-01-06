#include "Animal.hpp"
#include <iostream>

namespace sample
{
	Animal::Animal(int age)
		: _age(age)
	{
	}

	Animal::~Animal()
	{
		std::cout << "Animal destructor is called" << std::endl;
	}

	void	Animal::Move() const
	{
		std::cout << "An animal is moving" << std::endl;
	}

	void	Animal::Speak() const
	{
		std::cout << "An animal is speaking" << std::endl;
	}

	int Animal::GetAge() const
	{
		return _age;
	}
}
