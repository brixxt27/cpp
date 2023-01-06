#pragma once

#include "Animal.hpp"
#include <string>

namespace sample
{
	class Cat : public Animal
	{
	public:
		Cat(int age);
		virtual ~Cat();

		virtual void	Move() const;
		virtual void	Speak() const;
		std::string	Purr() const;

		int	GetTmp() const;
	private:
		int	_tmp;
	};
}
