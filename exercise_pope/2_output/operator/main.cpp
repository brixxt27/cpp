#include <iostream>

class Point {
	private:
		int	x;
		int	y;
	public:
		// Point(int i = 0, int j = 0):x(i), y(j) {}
		Point(int i = 0, int j = 0):x(i), y(j) {}

	int	getx() const {return x;}
	int	gety() const {return y;}
};

int	main() {
	Point	t1(4, 2);

	std::cout << "x = " << t1.getx() << ", "
		<< "y = " << t1.gety() << std::endl;

	Point	*t2 = new Point(42, 42);

	std::cout << "x = " << t2->getx() << ", "
		<< "y = " << t2->gety() << std::endl;
	delete t2;
	return (0);
}
