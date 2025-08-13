#pragma once
#include <string>

using namespace std;

class Monster {
public:
    Monster(string name);

    void attack(class Player* player);
    void printStatus();

    // 몬스터의 속성값을 리턴하는 get 함수
    string getName() const;
    int getHP() const;
    int getPower() const;
    int getDefence() const;
    int getSpeed() const;

    void setName(string name);
    bool setHP(int HP);
    void setPower(int power);
    void setDefence(int defence);
    void setSpeed(int speed);

protected:
    string name; // 몬스터의 이름
    int HP; // 몬스터의 HP
    int power; // 몬스터의 공격력
    int defence; // 몬스터의 방어력
    int speed; // 몬스터의 스피드
};