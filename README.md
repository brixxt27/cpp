## CPP_Module
This first module of C++ is designed to help you understand the specifities of the language when compared to C. Time to dive into Object Oriented Programming!

## General rules
### Compiling
1. -Wall -Wextra -Werror 로 컴파일 하기
2. -std=c++98 플래그를 붙여 컴파일 하기
### Formatting and naming conventions
1. Directories 의 이름은 ex00, ex01, ... , exn 으로 해야 한다.
2. 클래스 이름은 UpperCamelCase를 사용한다. 클래스 내요을 포함한 파일들은 항상 클래스 이름을 따라야 한다. 예를 들어 헤더 파일에 BrickWall 이라는 클래스를 포함한다면, 이 헤더파일의 이름은 BrickWall.hpp 가 될 것이다.
3. 특정되지 않는 한 모든 출력 메시지는 줄 바꿈으로 끝나야 하며, 표준 출력으로 표시 되어야 합니다.
4. Norminette 는 이제 안녕~~! 그러나 동료 평가자에게 이해할 수 없는 코드는 등급을 매길 수 없는 코드임을 명심하세요. 깨끗하고, 읽기 쉬운 코드를 작성하기 위해 최선을 다하세요!
### Allowed/Forbidden
1. 대부분의 표준 라이브러리가 허용된다. 그러므로 이미 알고 있는 것을 계속 가져가는 것 대신, 익숙한 C 함수의 C++-ish 버전을 가능한 많이 사용하는 것이 현명할 것이다. (-ish 란 "~정도"라는 뜻으로 해석되는 단어이다)
2. 그러나 다른 외부 라이브러리는 사용할 수 없다. 이는 C++11, Boost 라이브러리들은 금지된다는 뜻이다. 다음 오는 함수들 또한 금지된다: *printf, *alloc(), free. 만약 이것들을 사용한다면 당신은 0점을 맞을 것이다.
3. 명시적으로 허용되지 않는 한 NameSpace <ns_name> 및 friend 키워드를 사용하는 것은 금지된다. 그렇지 않으면 -42점을 받게 될 것이다.
4. Module 08서만 STL 사용을 허용할 것이다. Containers(vetor/list/map/and so forth), Alorithms(anything that requires to include the <algorithm> header) 는 사용하면 안 된다.
### A few design requirements
1. Memory leakage 는 C++ 또한 발생한다. new 키워드를 사용하여 메모리 할당을 할 때, 당신은 memory leaks 를 피해야 한다.
2. Module 02 ~ 08 에서의 클래스는 명시적으로 이야기한 부분을 제외하고, Orthodox Canonical Form 으로 설계되어야 한다.
3. 함수 템플릿을 제외하고 헤더 파일에 무엇이든 함수 구현을 넣는다면 그것은 0점을 의미한다.
4. 각각의 헤더 파일들을 다른 헤더들로부터 독립적으로 사용할 수 있어야 한다. 따라서, 그들은 필요로 하는 모든 의존성을 포함해야 한다. 그러나 include guards를 추가하여 Problem of double inclusion 을 피해야 한다. 그렇지 않으면 당신은 0점이다.

## Detail
### cpp01
Namespaces, classes, member function, stdio streams, initialization list, static, const, and some other basic stuff
### cpp02
