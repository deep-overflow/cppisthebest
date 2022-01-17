#include <iostream>
using namespace std;

#define id_len 20
#define max_spd 200
#define fuel_step 2
#define acc_step 10
#define brk_step 10

struct car
{
    char user[id_len];
    int fuel;
    int spd;

    void carState()
    {
        cout << "id: " << user << endl;
        cout << "fuel: " << fuel << endl;
        cout << "speed: " << spd << endl;
    }

        
    void acc()
    {
        if (fuel <= 0)
            return;
        else
            fuel -= fuel_step;

        if (spd + acc_step >= max_spd)
        {
            spd = max_spd;
            return;
        }

        spd += acc_step;
    }


    void brk()
    {
        if (spd < brk_step)
        {
            spd = 0;
            return;
        }

        spd -= brk_step;
    }
};


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