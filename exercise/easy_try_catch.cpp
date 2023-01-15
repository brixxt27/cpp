#include <iostream>
#include <exception>

struct s_ooops : std::exception
{
	const char* what() const throw() {
		return "Oooops!\n";
	}
};

int	main(void)
{
	try {
		throw s_ooops();
	} catch (std::exception& ex) {
		std::cout << ex.what();
	}
	return 0;
}
