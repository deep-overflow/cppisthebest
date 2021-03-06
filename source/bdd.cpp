/*
    반환형이 참조형인 함수는 반환값을 두 가지 형태로 저장할 수 있다.
    하지만, 반환형이 기본자료형으로 선언된 함수의 반환값은 반드시 변수에 저장해야 한다.
    반환 값은 상수나 다름 없기 때문이다.

    const 참조자는 상수도 참조가 가능하다.

    프로그램 상에서 표현되는 숫자를 '리터럴'이라고 한다.
    "임시적으로 존재하는 값이다. 다음 행으로 넘어가면 존재하지 않는 상수다."
    const 참조자를 이용해서 상수를 참조할 때 '임시변수'라는 것을 만든다.
    그리고 이 장소에 상수를 저장하고선 참조자가 이를 참조하게끔 한다.
    임시로 생성한 변수를 상수화하여 이를 참조자가 참조하게끔 하는 구조이니,
    결과적으로 상수화된 변수를 참조하는 형태가 된다.
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