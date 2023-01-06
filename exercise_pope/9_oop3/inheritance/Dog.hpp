#pragma once

#include "Animal.hpp"
#include <string>

namespace sample
{
	class Dog : public Animal
	{
	public:
		Dog(int age);
		virtual ~Dog();

		virtual void	Move() const;
		virtual void	Speak() const;
		std::string Bark() const;
	};
}
