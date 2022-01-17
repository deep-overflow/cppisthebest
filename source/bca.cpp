/*
    & 연산자는 변수의 주소 값을 반환하는 연산자이기도 하다.
    하지만 이미 선언된 변수의 앞에 이 연산자가 오면 주소 값의 반환을 명령하는 뜻이 되지만,
    새로 선언되는 변수의 이름 앞에 등장하면, 이는 참조자의 선언을 뜻하게 된다.

    참조자는 기능과 연산의 결과가 변수와 동일하다.
    즉 참조자는 자신이 참조하는 변수를 대신할 수 있는 또 하나의 이름인 것이다.

    변수와 참조자는 선언의 방식에 있어서 확실한 차이를 보인다.
    참조자는 변수를 대상으로만 선언이 가능하기 때문이다.
    하지만 일단 선언이 되고 나면, 변수와 차이가 없다.
*/
#include <iostream>
using namespace std;

int main(void) {
    int n1 = 1020;
    int &n2=n1;

    n2=2040;
    cout<<"val: "<<n1<<endl;
    cout<<"ref: "<<n2<<endl;

    cout<<"val: "<<&n1<<endl;
    cout<<"ref: "<<&n2<<endl;
    return 0;
}