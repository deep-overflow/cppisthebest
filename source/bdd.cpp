/*
    반환형이 참조형인 함수는 반환값을 두 가지 형태로 저장할 수 있다.
    하지만, 반환형이 기본자료형으로 선언된 함수의 반환값은 반드시 변수에 저장해야 한다.
    반환 값은 상수나 다름 없기 때문이다.

    const 참조자는 상수도 참조가 가능하다.
*/
#include <iostream>
using namespace std;

int func(int &ref) {
    ref++;
    return ref;
}

int main(void) {
    int n1=1;
    int n2=func(n1);

    n1+=1;
    n2+=100;
    cout<<"n1: "<<n1<<endl;
    cout<<"n2: "<<n2<<endl;
    return 0;
}