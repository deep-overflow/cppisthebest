/*
    new와 malloc 함수의 동작방식에는 차이가 있다.

    C++에서는 new 연산자를 이용해서 할당된 메모리 공간도 변수로 간주하여
    참조자의 선언이 가능하도록 하고 있다.
    참조자의 선언을 통해서, 포인터 연산 없이 힙 영역에 접근할 수 있다.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

class simple {
public:
    simple() {
        cout<<"I'm simple constructor."<<endl;
    }
};

int main(void) {
    cout<<"case 1: ";
    simple * s1=new simple;

    cout<<"case 2: ";
    simple * s2=(simple*)malloc(sizeof(simple)*1);

    cout<<endl<<"end of main"<<endl;
    delete s1;
    free(s2);
    return 0;
}