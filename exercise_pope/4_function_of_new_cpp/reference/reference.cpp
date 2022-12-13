#include <iostream>

int	function(int& b) {
	b++;
	return (b);
}

int	main(void) {
	int	a = 5;
	int	b = 2;
	int& c = a;
	// reference 는 처음 선언 및 초기화 된 변수로 프로그램이 끝날 때가지 사용된다.

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl << std::endl;
	c = b;
	// 이는 레퍼런스 변수 c가 b의 별칭이 되는 것이 아닌 b의 rvalue 값을 a가 가지게 된 것이다.
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl << std::endl;
	a = function(a);
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl << std::endl;
}
