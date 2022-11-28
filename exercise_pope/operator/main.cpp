#include <iostream>

class Point {
	private:
		int	x;
		int	y;
	public:
		Point(int i = 0, int j = 0):x(i), y(j) {}

	int	getx() const {return x;}
	int	gety() const {return y;}
};

int	main() {
	Point	t1(4, 2);
	std::cout << "x = " << t1.getx() << ", "
		<< "y = " << t1.gety() << std::endl;
	return (0);
}
