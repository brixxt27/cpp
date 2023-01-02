#include "Vector.hpp"
#include <iostream>

namespace samples {
	Vector::Vector()
	: mX(0)
	, mY(0) {}

	Vector::Vector(int x, int y)
	: mX(x)
	, mY(y) {}

	int		Vector::GetX() const {
		return mX;
	}

	void	Vector::SetX(int x) {
		mX += x;
	}

	int		Vector::GetY() const {
		return mY;
	}

	void	Vector::SetY(int y) {
		mY += y;
	}

	bool	Vector::IsEqual(const Vector& v) const {
		return (mX == v.mX && mY == v.mY);
	}

	Vector	Vector::Multiply(const Vector& v) const {
		Vector	res(mX * v.mX, mY * v.mY);

		return res;
	}

	Vector	Vector::Multiply(int multiplier) const {
		Vector	res(mX * multiplier, mY * multiplier);

		return res;
	}

	void	Vector::Scale(const Vector& v) {
		mX *= v.GetX();
		mY *= v.GetY();
	}

	void	Vector::Scale(int multiplier) {
		mX *= multiplier;
		mY *= multiplier;
	}

	Vector	Vector::operator+(const Vector& v) const {
		Vector	ret;

		ret.mX = mX + v.mX;
		ret.mY = mY + v.mY;
		return ret;
	}
}
