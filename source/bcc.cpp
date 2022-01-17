/*
    포인터 변수도 변수이기 때문에 참조자의 선언이 가능하다.
*/
#include <iostream>
using namespace std;

int main(void) {
    int n=12;
    int *p=&n;
    int **dp=&p;

    int &ref=n;
    int *(&pref)=p;
    int **(&dpref)=dp;

    cout<<ref<<endl;
    cout<<*pref<<endl;
    cout<<**dpref<<endl;
    return 0;
}