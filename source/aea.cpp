/*
    namespace: 이름 충돌이 발생하지 않도록 하기 위한 해결책

    연산자 ::을 가리켜 '범위지정 연산자(scope resolution operator)'라 하며
    이름공간을 지정할 때 사용하는 연산자이다.
*/
#include <iostream>

namespace A {
    void func(void) {
        std::cout<<"func defined by A"<<std::endl;
    }
}

namespace B {
    void func(void) {
        std::cout<<"func defined by B"<<std::endl;
    }
}

int main(void) {
    A::func();
    B::func();
    return 0;
}