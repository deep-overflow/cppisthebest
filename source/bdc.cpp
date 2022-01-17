#include <iostream>
using namespace std;

int& func(int &ref) {
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