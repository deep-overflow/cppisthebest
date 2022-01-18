#include <iostream>
#include <cstring>
#include "Car.h"
using namespace std;

void car::init(const char *id_, int fuel_)
{
    strcpy(id, id_);
    fuel = fuel_;
    spd = 0;
}

void car::state()
{
    cout << "id: " << id << endl;
    cout << "fuel: " << fuel << endl;
    cout << "spd: " << spd << endl;
}

void car::acc()
{
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

void car::brk()
{
    if (spd < carC::brk_step)
    {
        spd = 0;
        return;
    }

    spd -= carC::brk_step;
}