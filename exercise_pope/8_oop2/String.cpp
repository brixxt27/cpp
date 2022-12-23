#include "String.hpp"

temp::String::String(const char* str) 
: mSize(strlen(str) + 1) {
    std::cout << "Constructor is called" << std::endl;
    mStr = new char[mSize + 1];
    memcpy(mStr, str, mSize);
}

temp::String::String(const String& str) 
: mSize(str.mSize) {
    std::cout << "Copy Constructor is called" << std::endl;
    mStr = new char[mSize + 1];
    memcpy(mStr, str.mStr, mSize);
}

temp::String::~String() {
    std::cout << "mStr is deleted" << std::endl;
    delete[] mStr;
}

void    temp::String::Print() const {
    std::cout << mStr << std::endl;
}
