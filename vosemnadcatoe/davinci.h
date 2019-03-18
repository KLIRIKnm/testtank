#ifndef DAVINCI_H
#define DAVINCI_H
#include "tank.h"

class Davinci
{
public:
    Davinci();

    void draw(const Tank* const pTanks, const int N);

private:

    void gotoxy(int x, int y);
};

#endif // DAVINCI_H
