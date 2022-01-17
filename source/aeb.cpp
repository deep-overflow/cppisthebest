/*
    '함수의 선언'은 헤더파일에, '함수의 정의'는 소스파일에
*/
#include <iostream>

namespace A {
    void func(void);
}

namespace B {
    void func(void);
}

int main(void) {
    A::func();
    B::func();
    return 0;
}

void A::func(void) {
    std::cout<<"func defined by A"<<std::endl;
}

void B::func(void) {
    std::cout<<"func defined by B"<<std::endl;
}