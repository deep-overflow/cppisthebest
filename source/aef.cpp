/*
    다음 선언을 통해 이름공간 std에 선언됨 모든 것에 대해 이름공간 지정의 생략을 선언할 수 있다.
    using namespace std;

    이름충돌이 발생할 확률은 상대적으로 높아진다.
*/
#include <iostream>
using namespace std;

int main(void) {
    cout<<"Hello World!"<<endl;
    return 0;
}