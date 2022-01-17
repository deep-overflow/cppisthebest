/*
    C언어에서의 동적할당
    - 할당할 대상의 정보를 무조건 바이트 크기단위로 전달해야 한다.
    - 반환형이 void형 포인터이기 때문에 적절한 형 변환을 거쳐야 한다.
*/
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

char * makeStrAdr(int len) {
    char * str=(char*)malloc(sizeof(char)*len);
    return str;
}

int main(void) {
    char * str=makeStrAdr(20);
    strcpy(str, "I am so happy~");
    cout<<str<<endl;
    free(str);
    return 0;
}