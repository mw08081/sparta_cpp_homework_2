#include <iostream>

#include "Thief.h"
#include "Monster.h"

using namespace std;

Thief::Thief(string nickname) : Player(nickname)
{
	cout << "Theif Constructor\n";

    this->jobName = "Theif";

    this->level = 1;
    this->HP = 50;
    this->MP = 100;
    this->power = 40;
    this->defence = 7;
    this->speed = 50;
    this->accuracy = 0.9;
}

void Thief::attack()
{
	cout << "Theif Attack\n";
}

void Thief::attack(Monster* monster)
{
    int dmg = this->power / 5;
    dmg = dmg - monster->getDefence();
    if (dmg < 1)
    {
        dmg = 1;
    }

    for (int i = 0; i < 5; i++)
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
