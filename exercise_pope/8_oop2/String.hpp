#pragma once

#include <iostream>
namespace temp {
    class String {
        public:
            String(const char* str);
            String(const String& str);
            ~String();

            void    Print() const;
            //생성자
            //복사생성자
            //소멸자
        private:
            char*   mStr;
            size_t  mSize;
    };
}
