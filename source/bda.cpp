/*
    Call-by-value: 값을 인자로 전달하는 함수의 호출방식, 함수외부에 선언된 변수에 접근이 불가능하다.
    Call-by-reference: 주소 값을 인자로 전달하는 함수의 호출방식

    주소 값을 이용한 Call-by-reference
    참조자를 이용한 Call-by-reference

    매개변수는 함수가 호출되어야 초기화가 진행되는 변수이므로,
    참조자 매개변수는 함수호출 시 전달되는 인자로 초기화를 하겠다는 의미이다.
*/
#include <iostream>
using namespace std;

void SwapByRef(int &ref1, int &ref2) {
    int temp=ref1;
    ref1=ref2;
    ref2=temp;
}

int main(void) {
    int v1=10;
    int v2=20;

    SwapByRef(v1, v2);
    cout<<"val1: "<<v1<<endl;
    cout<<"val2: "<<v2<<endl;
    return 0;
}