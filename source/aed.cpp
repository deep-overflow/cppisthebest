/*
    func은 이름공감 A에서 찾으라는 선언 -> using
*/
#include <iostream>

namespace A {
    void func(void) {
        std::cout<<"func defined by A"<<std::endl;
    }
}

int main(void) {
    using A::func;
    func();
    return 0;
}