#include <iostream>
#include "pope.hpp"

namespace hello {
	void	SayHello(){
		std::cout << "hello!" << std::endl;
	}
}

namespace hi {
	void	SayHello(){
		std::cout << "hi!" << std::endl;
	}
}

int	main() {
	// std::cout << "hello, world!" << std::endl;
	hi::idx = 42;
	std::cout << hi::idx << std::endl;
	hi::SayHello();
	hello::SayHello();
	return (0);
}
