#include <iostream>

#include "Archer.h"
#include "Monster.h"

using namespace std;

Archer::Archer(string nickname) : Player(nickname)
{
    cout << "Archer Constructor\n";

    this->jobName = "Archer";

    this->level = 1;
    this->HP = 50;
    this->MP = 100;
    this->power = 30;
    this->defence = 10;
    this->speed = 40;
    this->accuracy = 0.8;
}

void Archer::attack()
{
    cout << "archer attack\n";
}

void Archer::attack(Monster* monster)
{
    int dmg = this->power / 3;
    dmg = dmg - monster->getDefence();
    if (dmg < 1)
    {
        dmg = 1;
    }

    for (int i = 0; i < 3; i++)
    {
        int monsterHP = monster->getHP();
        bool isDead = !monster->setHP(monsterHP - dmg);
        cout << "* " << monster->getName() << "에게 화살로 " << dmg << "의 피해를 입혔다!\n";
        
        if (isDead)
        {
            cout << "* " << monster->getName() << "를 잡았습니다.\n";
            cout << this->nickname << " 이 승리하였습니다\n";
            break;
        }
    }
    cout << "* " << monster->getName() << "의 현재 체력: " << monster->getHP() << '\n';
}
