/*
    동일한 이름 공간에 정의된 함수를 호출할 때에는 이름공간을 명시할 필요가 없다.
    
    중첩: 이름공간은 다른 이름공간 안에 삽입될 수 있다.
*/
#include <iostream>

namespace A {
    void func(void);
    void func2(void);
}

namespace B {
    void func(void);
}

int main(void) {
    A::func2();
    return 0;
}

void A::func(void) {
    std::cout<<"func defined by A"<<std::endl;
}

void A::func2(void) {
    std::cout<<"func2 defined by A"<<std::endl;
    func();
    B::func();
}

void B::func(void) {
    std::cout<<"func defined by B"<<std::endl;
}