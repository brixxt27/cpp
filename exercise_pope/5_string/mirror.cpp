#include <iostream>

int	main() {
	std::string str = "0123456789012345678901";

	// for (int i = str.size() - 1; i >= 0; --i) {
	// 	str += str[i];
	// }
	std::cout << "string 개체의 문자열: " << str << std::endl;
	std::cout << "Size is " << str.size() << std::endl;
	std::cout << "Capacity is " << str.capacity() << std::endl;
	std::cout << "str[21]: " << str[21] << std::endl;
	std::cout << "str[22]: " << str[22] << std::endl;
	std::cout << "str[23]: " << str[23] << std::endl;
}
