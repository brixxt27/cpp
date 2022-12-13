#include <iostream>

int	main() {
	std::string str = "123456789abcdefghjklmn";

	// for (int i = str.size() - 1; i >= 0; --i) {
	// 	str += str[i];
	// }
	std::cout << str << std::endl;
	std::cout << str.size() << std::endl;
	std::cout << str.capacity() << std::endl;
	std::cout << str[23] << std::endl;
}
