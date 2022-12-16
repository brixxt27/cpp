#ifndef MYSTRING_HPP
# define MYSTRING_HPP

class MyString {
	public:
		MyString();
		~MyString();
	private:
		char*	mStr;
		int		mLength;
		int		mCapacity;
};

#endif
