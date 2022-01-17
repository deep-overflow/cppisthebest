/*
    함수 내에서, 참조자를 통한 값의 변경을 진행하지 않을 경우, 
    참조자를 const로 선언해서, 함수의 원형만 봐도 변경이 이뤄지지 않음을 알 수 있게 해야 한다.

    함수의 반환형에도 참조형이 선언될 수 있다.
*/
#include <iostream>
using namespace std;

int& func(int &ref) {
    ref++;
    return ref;
}

int main(void) {
    int n1=1; // n1=1
    int &n2=func(n1); // n1=2, n2=2

    n1++; // n1=3, n2=3
    n2++; // n1=4, n2=4
    cout<<"n1: "<<n1<<endl;
    cout<<"n2: "<<n2<<endl;
    return 0;
}