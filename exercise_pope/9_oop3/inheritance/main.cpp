#include "Cat.hpp"
#include "Dog.hpp"
#include "iostream"

int main(void)
{
	sample::Animal* MyCat = new sample::Cat(3);
	sample::Animal* MyDog = new sample::Dog(3);
	sample::Animal	SomeAnimal(3);
	sample::Cat		SomeCat(4);

	SomeAnimal = SomeCat;
	//SomeCat = SomeAnimal;


	std::cout << SomeAnimal.GetTmp() << std::endl;
	std::cout << SomeAnimal.GetAge() << std::endl;

	MyCat->Move();
	MyDog->Speak();

	delete MyCat;
	delete MyDog;
	//sample::Cat	tom(5);
	//sample::Dog	jerry(4);

	//std::cout << tom.Purr() << std::endl;
	//std::cout << jerry.Bark() << std::endl;

	//std::cout << tom.GetAge() << std::endl;
	//std::cout << jerry.GetAge() << std::endl;
}
