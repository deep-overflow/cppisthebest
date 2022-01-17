/*
    열거형 enum을 이용해서 구조체 내에서만 유효한 상수 정의
    또는 이름공간을 이용해서 상수가 사용되는 영역을 명시

    함수의 원형선언을 구조체 안에 두고, 함수의 정의를 구조체 밖으로 빼내기

    구조체 안에 함수가 정의되어 있으면 함수를 인라인으로 처리하게 된다.
    하지만 함수의 정의가 구조체 밖으로 빠지면 이러한 의미가 사라지므로
    키워드 inline을 통해 인라인 처리를 명시적으로 지시해야 한다.
*/
#include <iostream>
using namespace std;

namespace car_const {
    enum
    {
        id_len=20,
        max_spd=200,
        fuel_step=2,
        acc_step=10,
        brk_step=10
    };
}

struct car
{
    char user[car_const::id_len];
    int fuel;
    int spd;

    void carState();
    void acc();
    void brk();
};

inline void car::carState()
{
    cout << "id: " << user << endl;
    cout << "fuel: " << fuel << endl;
    cout << "speed: " << spd << endl;
}

inline void car::acc()
{
    if (fuel <= 0)
        return;
    else
        fuel -= car_const::fuel_step;

    if (spd + car_const::acc_step >= car_const::max_spd)
    {
        spd = car_const::max_spd;
        return;
    }

    spd += car_const::acc_step;
}

inline void car::brk()
{
    if (spd < car_const::brk_step)
    {
        spd = 0;
        return;
    }

    spd -= car_const::brk_step;
}

int main(void)
{
    car a = {"carcar", 100, 0};
    a.acc();
    a.acc();
    a.carState();
    a.brk();
    a.carState();

    car b = {"carcarcar", 100, 0};
    b.acc();
    b.brk();
    b.carState();
    return 0;
}