#include "Dog.hpp"
#include <iostream>

namespace sample
{
	Dog::Dog(int age)
		: Animal(age)
	{
	}

	Dog::~Dog()
	{
		std::cout << "Dog destructor is called" << std::endl;
	}

	void	Dog::Move() const
	{
		std::cout << "A dog is moving" << std::endl;
	}

	void	Dog::Speak() const
	{
		std::cout << "A dog is Speaking" << std::endl;
	}

	std::string	Dog::Bark() const
	{
		return std::string("BowWow");
	}
}
