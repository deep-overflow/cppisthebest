#include <iostream>
using namespace std;

#define id_len 20
#define max_spd 200
#define fuel_step 2
#define acc_step 10
#define brk_step 10

struct car {
    char user[id_len];
    int fuel;
    int spd;
};

void carState(const car& c) {
    cout<<"id: "<<c.user<<endl;
    cout<<"fuel: "<<c.fuel<<endl;
    cout<<"speed: "<<c.spd<<endl;
}

void acc(car& c) {
    if(c.fuel<=0)
        return;
    else
        c.fuel -= fuel_step;
    
    if(c.spd+acc_step>=max_spd) {
        c.spd=max_spd;
        return;
    }

    c.spd+=acc_step;
}

void brk(car& c) {
    if(c.spd<brk_step) {
        c.spd=0;
        return;
    }

    c.spd-=brk_step;
}

int main(void) {
    car a={"carcar", 100, 0};
    acc(a);
    acc(a);
    carState(a);
    brk(a);
    carState(a);

    car b={"carcarcar", 100, 0};
    acc(b);
    brk(b);
    carState(b);
    return 0;
}