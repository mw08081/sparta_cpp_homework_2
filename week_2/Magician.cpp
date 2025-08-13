#include <iostream>

#include "Magician.h"
#include "Monster.h"

using namespace std;

Magician::Magician(string nickname) : Player(nickname)
{
	cout << "Magician Constructor\n";

    this->jobName = "Magician";

    this->level = 1;
    this->HP = 30;
    this->MP = 100;
    this->power = 50;
    this->defence = 5;
    this->speed = 40;
    this->accuracy = 0.7;
}

void Magician::attack()
{
	cout << "Magician Attack\n";
}

void Magician::attack(Monster* monster)
{
    int dmg = this->power - monster->getDefence();
    if (dmg < 1)
    {
        dmg = 1;
    }

    int monsterHP = monster->getHP();
    bool isDead = !monster->setHP(monsterHP - dmg);
    cout << "* " << monster->getName() << "에게 무기로 " << dmg << "의 피해를 입혔다!\n";

    if (isDead)
    {
        cout << "* " << monster->getName() << "를 잡았습니다.\n";
        cout << this->nickname << " 이 승리하였습니다\n";
    }
    else
    {
        cout << "* " << monster->getName() << "의 현재 체력: " << monster->getHP() << '\n';
    }
}
