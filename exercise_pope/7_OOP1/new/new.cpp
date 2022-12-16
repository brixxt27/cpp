#include <iostream>
/**
 * malloc/free vs new/delete
 * 1. malloc, free 는 라이브러리에서 제공하는 함수인데 반해, new, delete는 언어에서 제공하는 연산자이다.
 * 2. 연산자이기 때문에 오버로딩이 가능하다.
 * 3. 
 */

int	main(void) {
	int*	ptr = new int(123);

	std::cout << "ptr: " << ptr << std::endl 
	<< "*ptr: " << *ptr << std::endl;
}
