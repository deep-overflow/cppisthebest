/*
    const int num = 10;
    -> 변수 num을 상수화

    const int * ptr1 = &val1;
    -> 포인터 ptr1을 이용해서 val1의 값을 변경할 수 없음

    int * const ptr2 = &val2;
    -> 포인터 ptr2가 상수화됨

    const int * const ptr3 = &val3;
    -> 포인터 ptr3가 상수화되었으며, ptr3를 이용해서 val3의 값을 변경할 수 없음

    데이터: 전역변수가 저장되는 영역
    스택: 지역변수 및 매개변수가 저장되는 영역
    힙: malloc 함수호출에 의해 프로그램이 실행되는 과정에서 동적으로 할당이 이뤄지는 영역
    malloc & free: malloc 함수호출에 의해 할당된 메모리 공간은 free 함수호출을 통해서 소멸하지 않으면 해제되지 않는다.

    Call-by-value:
    Call-by-reference:

    정수 0은 '거짓'을 의미하는 숫자로, 0이 아닌 모든 정수는 '참'을 의미하는 숫자로 정의하고 있다.
    따라서 참과 거짓의 표현을 위해서 다음과 같이 상수를 정의하는 것이 보통이다.
    #define TRUE 1
    #define FALSE 0

    true는 1이 아니며, false 역시 0이 아니다. 이 둘은 '참'과 '거짓'을 표현하기 위한 1바이트 크기의 데이터일 뿐이다.
*/
#include <iostream>
using namespace std;

int main(void) {
    int num=10;
    int i=0;

    cout<<"true: "<<true<<endl;
    cout<<"false: "<<false<<endl;

    while(true) {
        cout<<i++;
        if(i>num) {
            break;
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"sizeof 1: "<<sizeof(1)<<endl;
    cout<<"sizeof 0: "<<sizeof(0)<<endl;
    cout<<"sizeof true: "<<sizeof(true)<<endl;
    cout<<"sizeof false: "<<sizeof(false)<<endl;
    return 0;
}
