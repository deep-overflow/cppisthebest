/*
    이름공간이 과도하게 중첩된 경우 별칭을 줄 수 있다.

    지역변수의 이름이 전역변수의 이름과 같은 경우, 전역변수는 지역변수에 의해 가려진다.
    -> 이때 지역 내에서 전역변수에 접근하기 위해서는 '범위지정 연산자'를 사용하면 된다.
*/
#include <iostream>
using namespace std;

namespace aaa {
    namespace bbb {
        namespace ccc {
            int n1;
            int n2;
        }
    }
}

int main(void) {
    aaa::bbb::ccc::n1 = 20;
    aaa::bbb::ccc::n2 = 30;

    namespace abc = aaa::bbb::ccc;
    cout<<abc::n1<<endl;
    cout<<abc::n2<<endl;
    return 0;
}