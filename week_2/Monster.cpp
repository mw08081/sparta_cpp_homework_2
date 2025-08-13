#include <iostream>
#include <string>

#include "Monster.h"
#include "Player.h"

using namespace std;

Monster::Monster(string nickname)
{
    cout << "Monster Constructor\n";

    this->name = nickname;

    this->HP = 10;
    this->power = 30;
    this->defence = 20;
    this->speed = 10;
}

void Monster::printStatus()
{
    cout << "------------------------------------" << endl;
    cout << "* 현재 능력치" << endl;
    cout << "이름: " << name << endl;
    cout << "HP: " << HP << endl;
    cout << "공격력: " << power << endl;
    cout << "방어력: " << defence << endl;
    cout << "속도: " << speed << endl;
    cout << "------------------------------------" << endl;
}

string Monster::getName() const
{
    return this->name;
}
int Monster::getHP() const
{
    return this->HP;
}
int Monster::getPower() const
{
    return this->power;
}
int Monster::getDefence() const
{
    return this->defence;
}
int Monster::getSpeed() const
{
    return this->speed;
}



void Monster::setName(string name)
{
    this->name = name;
}


bool Monster::setHP(int HP)
{
    this->HP = HP;

    // 최솟값 규정
    if (this->HP < 1)
    {
        this->HP = 0;
    }

    return HP > 0;
}
void Monster::setPower(int power)
{
    this->power = power;
}
void Monster::setDefence(int defence)
{
    this->defence = defence;
}
void Monster::setSpeed(int speed)
{
    this->speed = speed;
}


void Monster::attack(Player* player)
{
    int dmg = this->power - player->getDefence();
    if (dmg < 1)
    {
        dmg = 1;
    }

    int playerHP = player->getHP();
    bool isDead = !player->setHP(playerHP - dmg);
    cout << "* " << player->getNickname() << "에게 무기로 " << dmg << "의 피해를 입혔다!\n";

    if (isDead)
    {
        cout << "* " << player->getNickname() << "를 잡았습니다.\n";
        cout << this->name << " 이 승리하였습니다\n";
    }
    else
    {
        cout << "* " << player->getNickname() << "의 현재 체력: " << player->getHP() << '\n';
    }
}

