/*
    함수 오버로딩: 함수호출 시 전달되는 인자를 통해서 호출하고자 하는 함수의 구분이 가능하기 때문에 매개변수의 선언형태가 다르다면, 
    동일한 이름의 함수정의를 허용한다.

    C++은 호출할 함수를 찾을 때, 두 가지 정보를 동시에 활용한다.
    -> '함수의 이름', '매개변수의 선언'

    따라서 함수 오버로딩이 가능하려면 매개변수의 선언이 달라야 한다.
    -> 자료형이 다르거나 매개변수의 개수가 달라야 한다.

    반환형은 함수호출 시, 호출되는 함수를 구분하는 기준이 될 수 없다.
*/
#include <iostream>

void MyFunc(void) {
    std::cout<<"MyFunc(void) called"<<std::endl;
}

void MyFunc(char c) {
    std::cout<<"MyFunc(char c) called"<<std::endl;
}

void MyFunc(int a, int b) {
    std::cout<<"MyFun(int a, int b) called"<<std::endl;
}

int main(void) {
    MyFunc();
    MyFunc('A');
    MyFunc(12, 13);
    return 0;
}