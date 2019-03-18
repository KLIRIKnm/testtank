#ifndef TANK_H
#define TANK_H
#include <string>
using namespace std;

class Bullet
{
    string m_material;
public:
    Bullet(): m_material("wooden"){}
};

struct Point
{
    int x;
    int y;
};

class Tank
{
private:
    int m_hp;
    int m_damage;
    string m_name;
    Point  m_position;
  //  char * m_pWeapon;

public:
    Tank(int hp=100, int dmg=-100, string name = "T-34");
    Tank(const Tank & otherTank);
    ~Tank();

    Tank& operator= (const Tank & otherTank);
    Tank operator +(int hp);
    Tank operator -(int dmg);

    void shoot(Tank & otherTank);
    void show() const;
    void smert();
    void save();
    void showPosition() const;
    void move();

    Point getCoord() const;
  //  void nnn(string name, int dmg);
};

Tank* createTanks(int N);
void deleteTanks(Tank* pTanks);

#endif // TANK_H
