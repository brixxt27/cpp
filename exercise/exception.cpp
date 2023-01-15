#include <iostream>
#include <exception>

struct jayoon : std::exception
{
	virtual const char* what() const throw()
	{
		return "jayoon!";
	}
};

void	func1(jayoon& e)
{
	try {
		throw e;
	} catch (std::exception ex) {
		std::cout << ex.what() << std::endl;
	}
}

int	main(void)
{
	jayoon			e;
	std::exception*	p = &e;

	func1(e);

	try {
		throw e;
	} catch (std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}

	try {
		throw *p;
	} catch (std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}
	return 0;
}
