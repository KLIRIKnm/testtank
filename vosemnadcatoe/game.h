#ifndef GAME_H
#define GAME_H
#include "tank.h"
#include "davinci.h"

const int NUM_T = 20;
class game
{
   bool m_isContinue;
   Tank* m_pTanks;

   Davinci m_painter;

public:
    void start();
    void stop();
    game();
    ~game();
};

#endif // GAME_H
