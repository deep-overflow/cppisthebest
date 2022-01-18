#include "Car.h"

int main(void)
{
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