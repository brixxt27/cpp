#pragma once
namespace sample
{
	class Animal
	{
	public:
		Animal(int age);
		virtual ~Animal();

		virtual void	Move() const;
		virtual void	Speak() const;

		int GetAge() const;
	
	private:
		int _age;
	};
}
