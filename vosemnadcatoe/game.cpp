#include "game.h"
#include "tank.h"
#include <cmath>
#include <iostream>
#include <fstream>
#include <cstring>

game::game() : m_isContinue(true)
{
m_pTanks = createTanks(NUM_T);
}

game::~game()
{
    deleteTanks(m_pTanks);
}


void game::start()
{
   while(m_isContinue)
   {
    for(int i=0; i<NUM_T; i++)
    {
    m_pTanks[i].move();
    }
    m_painter.draw(m_pTanks, NUM_T);
    m_pTanks[0].show();
    m_pTanks[0] = m_pTanks[0] +20;
    m_pTanks[1].show();
    m_pTanks[1] = m_pTanks[1] -20;
   }
}

void game::stop()
{
    m_isContinue = false;
}
