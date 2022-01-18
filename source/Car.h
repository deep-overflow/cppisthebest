#ifndef __CAR_H__
#define __CAR_H__

namespace carC
{
    enum
    {
        id_len = 20,
        max_spd = 200,
        fuel_step = 2,
        acc_step = 10,
        brk_step = 10
    };
}

class car
{
private:
    char id[carC::id_len];
    int fuel;
    int spd;

public:
    void init(const char *id_, int fuel_);
    void state();
    void acc();
    void brk();
};

#endif