/*
    반드시 오른쪽 매개변수의 디폴트 값부터 채우는 형태로 정의해야 한다.
    함수에 전달되는 인자가 왼쪽에서부터 오른쪽으로 채워지기 때문이다.
*/
#include <iostream>
int BoxVolume(int length, int width=1, int height=1);

int main(void) {
    std::cout<<"[3, 3, 3] : "<<BoxVolume(3, 3, 3)<<std::endl;
    std::cout<<"[5, 5, D] : "<<BoxVolume(5, 5)<<std::endl;
    std::cout<<"[7, D, D] : "<<BoxVolume(7)<<std::endl;
    // std::cout<<"[D, D, D] : "<<BoxVolume()<<std::endl;
    return 0;
}

int BoxVolume(int length, int width, int height) {
    return length*width*height;
}