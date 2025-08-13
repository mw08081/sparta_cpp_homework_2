#include <iostream>

#include "Warrior.h"
#include "Monster.h"

using namespace std;


Warrior::Warrior(string nickname) : Player(nickname)
{
	cout << "Warrior Constructor\n";

    this->jobName = "Warrior";

    this->level = 1;
    this->HP = 70;
    this->MP = 700;
    this->power = 30;
    this->defence = 50;
    this->speed = 30;
    this->accuracy = 0.8;
}

void Warrior::attack()
{
	cout << "Warrior Attack\n";
}

void Warrior::attack(Monster* monster)
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
