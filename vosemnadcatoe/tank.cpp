#include "tank.h"
#include <cmath>
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

Tank::Tank(int hp, int dmg, string name) : m_hp(hp), m_damage(dmg), m_name(name)
{
    m_damage=abs(m_damage);
    m_position.x = rand()%100;
    m_position.y = rand()%100;

  //  m_pWeapon = new char[50];
   // strcpy(m_pWeapon, "BREVNOMET");
}

Tank::~Tank()
{
    cout<<"Destryctor for TTTT: ";
    cout<<m_name<<endl;
   // delete [] m_pWeapon;
}

void Tank::move()
{
    int moveVectorX = rand()%3 -1;
    int moveVectorY = rand()%3 -1;
    m_position.x+=moveVectorX;
    m_position.y+=moveVectorY;
}

void Tank::shoot(Tank & otherTank)
{
    otherTank.m_hp -= this->m_damage;
}

void Tank::show() const
{
    cout<<"Name = "<<m_name<<endl;
       if(m_hp<=0)
    {
       // m_hp=0;
        cout<<"HP = "<<m_hp<<endl;
        cout<<"LOL YOU DEAD"<<endl;
    }
    else
    {
        cout<<"HP = "<<m_hp<<endl;
        cout<<"DMG = "<<m_damage<<endl;
        cout<<"ALLIVE"<<endl;
    }
}
void Tank::save()
{
    ofstream text;
    if(text.is_open())
    {
        text.open("text.txt");
    }
        else
        {
            text.open("text.txt",ios_base::app);
            text<<"Tank: "<<m_name<<"\t"<<"HP="<<m_hp<<"\t"<<"DMG="<<m_damage<<endl;
        }
        text.close();
}

Tank::Tank(const Tank & otherTank)
{
    this->m_name = otherTank.m_name;
    this->m_hp = otherTank.m_hp;
    this->m_damage = otherTank.m_damage;
    cout<<"copyconstryctor"<<endl;
}

void Tank::showPosition() const
{
    cout<<"Pos x = "<<m_position.x<<endl;
    cout<<"Pos y = "<<m_position.y<<endl;
}
  Point Tank::getCoord() const
  {
      return m_position;
  }

Tank* createTanks(int N)
{
    Tank* pArrTanks= new Tank[N];
    return pArrTanks;
}
void deleteTanks(Tank* pTanks)
{
    delete [] pTanks;
}
Tank& Tank::operator= (const Tank & otherTank)
{
    if(this == &otherTank)
    {
        return *this;
    }

    this-> m_hp = otherTank.m_hp;
    m_damage = otherTank.m_damage;
    m_position = otherTank.m_position;
}

Tank Tank::operator +(int hp)
{
    Tank newTank(*this);
    newTank.m_hp +=hp;
    return newTank;


}
  Tank Tank::operator -(int dmg)
  {
      Tank newTank(*this);
      newTank.m_damage -=dmg;
      return newTank;
  }

/*Tank& operator= (Tank & otherTank)
{
    //1 освободить память оружия
    //2 выделить новую памятm
    //3 копировать память с другого танка(othertank to us) this
    //4 return this

    //DZ githab regestracuya
}


 Tank::smert()
{
       if(m_hp<=0)
    {
        m_hp=0;
        cout<<"LOL YOU DEAD"<<endl;
    }
    else
    {
        cout<<"HP = "<<m_hp<<endl;
        cout<<"ALLIVE"<<endl;
    }
}
*/
