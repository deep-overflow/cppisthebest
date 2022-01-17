/*
    키워드 struct를 대신해서 class를 사용하면,
    구조체가 아닌 클래스가 된다.

    접근제어 지시자
    - public: 어디서든 접근허용
    - protected: 상속관계에 놓여있을 때, 유도 클래스에서의 접근허용
    - private: 클래스내에서만 접근허용
*/
#include <iostream>
#include <cstring>
using namespace std;

namespace carC {
    enum {
        id_len=20,
        max_spd=200,
        fuel_step=2,
        acc_step=10,
        brk_step=10
    };
}

class car {
private:
    char id[carC::id_len];
    int fuel;
    int spd;
public:
    void init(const char * id_, int fuel_);
    void state();
    void acc();
    void brk();
};

void car::init(const char * id_, int fuel_) {
    strcpy(id, id_);
    fuel=fuel_;
    spd=0;
}

void car::state() {
    cout<<"id: "<<id<<endl;
    cout<<"fuel: "<<fuel<<endl;
    cout<<"spd: "<<spd<<endl;
}

void car::acc() {
    if (fuel <= 0)
        return;
    else
        fuel -= carC::fuel_step;

    if (spd + carC::acc_step >= carC::max_spd)
    {
        spd = carC::max_spd;
        return;
    }

    spd += carC::acc_step;
}

void car::brk() {
    if (spd < carC::brk_step)
    {
        spd = 0;
        return;
    }

    spd -= carC::brk_step;
}

int main(void) {
    car a;
    a.init("carcar", 100);
    a.acc();
    a.acc();
    a.acc();
    a.state();
    a.brk();
    a.state();
    return 0;
}