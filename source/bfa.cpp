/*
    헤더파일의 확장자인 .h를 생략하고 앞에 c를 붙이면 
    C언어에 대응하는 C++의 헤더파일 이름이 된다.
*/
#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;

int main(void) {
    char str1[]="result";
    char str2[30];

    strcpy(str2, str1);
    printf("%s: %f \n", str1, sin(0.14));
    printf("%s: %f \n", str2, abs(-1.25));
    return 0;
}