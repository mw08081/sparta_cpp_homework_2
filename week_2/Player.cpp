#pragma once
#include <iostream>

#include "Player.h"

using namespace std;

Player::Player(string nickname)
{
    cout << "Player constructor\n";

    this->nickname = nickname;
    this->jobName = "unknown";

    this->level = 0;
    this->HP = 0;
    this->MP = 0;
    this->power = 0;
    this->defence = 0;
    this->speed = 0;
    this->accuracy = 0;
}

void Player::printPlayerStatus()
{
    cout << "------------------------------------" << endl;
    cout << "* 현재 능력치" << endl;
    cout << "닉네임: " << nickname << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "공격력: " << power << endl;
    cout << "방어력: " << defence << endl;
    cout << "정확도: " << accuracy << endl;
    cout << "속도: " << speed << endl;
    cout << "------------------------------------" << endl;
}

string Player::getJobName() const
{
    return this->jobName;
}

string Player::getNickname() const
{
    return this->nickname;
}

int Player::getLevel() const
{
    return this->level;
}
int Player::getHP() const
{
    return this->HP;
}
int Player::getMP() const
{
    return this->MP;
}
int Player::getPower() const
{
    return this->power;
}
int Player::getDefence() const
{
    return this->defence;
}
int Player::getSpeed() const
{
    return this->speed;
}
float Player::getAccuracy() const
{
    return this->accuracy;
}



void Player::setNickname(string nickname)
{
    this->nickname = nickname;
}

void Player::setLevel(int level)
{
    this->level = level;
}
bool Player::setHP(int HP)
{
    this->HP = HP;

    return HP > 1;
}
void Player::setMP(int MP)
{
     this->MP = MP;
}
void Player::setPower(int power)
{
     this->power = power;
}
void Player::setDefence(int defence)
{
     this->defence = defence;
}
void Player::setSpeed(int speed)
{
     this->speed = speed;
}
void Player::setAccuracy(float accuracy)
{
     this->accuracy = accuracy;
}