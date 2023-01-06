#include "Cat.hpp"
#include "iostream"

namespace sample
{
	Cat::Cat(int age)
		: Animal(age)
		, _tmp(1)
	{
	}

	Cat::~Cat()
	{
		std::cout << "Cat destructor is called" << std::endl;
	}

	void	Cat::Move() const
	{
		std::cout << "A cat is moving" << std::endl;
	}

	void	Cat::Speak() const
	{
		std::cout << "A cat is Speaking" << std::endl;
	}

	std::string	Cat::Purr() const
	{
		return std::string("Purr");
	}

	int	Cat::GetTmp() const
	{
		return _tmp;
	}
}
