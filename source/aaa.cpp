// 확장자는 반드시 .c가 아니라 .cpp로 해야 한다. 그래야 C++ 문법 규칙을 적용한 C++ 컴파일러로 컴파일이 된다.
#include <iostream> // 헤더 파일 선언문, 확장자는 .h이다. 하지만 C++에서는 표준 헤더파일의 선언에서는 확장자를 생략하기로 약속되어 있다.

int main(void) {
    int num=20;
    std::cout<<"Hello World!"<<std::endl;
    std::cout<<"Hell0"<<std::endl;
    std::cout<<num<<' '<<'A';
    std::cout<<' '<<3.14<<std::endl;
    return 0;
}