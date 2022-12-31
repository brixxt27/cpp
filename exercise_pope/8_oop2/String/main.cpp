#include "String.hpp"

int main() {
    temp::String    s1("Hello cpp world");
    temp::String    s2(s1);

    s1.Print();
    s2.Print();
}
