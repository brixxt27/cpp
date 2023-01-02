#include "Vector2.hpp"

Vector2::Vector2()
: mX(0)
, mY(0) {}

Vector2::Vector2(int x, int y)
: mX(x)
, mY(y) {}

int	Vector2::GexX() const {
	return mX;
}

void	Vector2::SetX(int x) {
	mX += x;
}

int Vector2::GetY() const {
	return mY;
}

void	Vector2::SetY(int y) {
	mY += y;
}

bool Vector2::operator==(const Vector2& rhs) const {
	return (mX == rhs.mX && mY == rhs.mY);
}

Vector2	Vector2::operator*(const Vector2& rhs) const {
	Vector2	res(mX * rhs.mX, mY * rhs.mY);

	return res;
}

Vector2	Vector2::operator*(const int multiplier) const {
	Vector2 res(mX * multiplier, mY * multiplier);

	return res;
}

/**
 * 이건 왜 Vector2 멤버 함수가 될 수 없는지 더 찾아봐야 할 것 같다. 대충 좌항에 있는 개체에서 멤버 함수를 호출하니 int 형이 좌측에 왔을 때는 따로 빠지는 느낌 같다. 컴파일러가 이를 어떻게 변경해줄 것인지 궁금하다!
*/
Vector2	operator*(int multiplier, const Vector2& v) {
	Vector2 res(v.mX * multiplier, v.mY * multiplier);

	return res;
}

Vector2& Vector2::operator*=(const Vector2& rhs) {
	mX *= rhs.mX;
	mY *= rhs.mY;
	return *this;
}

Vector2& Vector2::operator*=(const int multiplier) {
	mX *= multiplier;
	mY *= multiplier;
	return *this;
}

std::ostream&	operator<<(std::ostream& out, const Vector2& vector) {
	std::cout << vector.GexX() << ", " << vector.GetY() << std::endl;

	return out;
}
