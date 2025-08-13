#pragma once
#include <string>
using namespace std;

class Player
{
public:
    Player(string nickname);

    virtual void attack() = 0;
    virtual void attack(class Monster* monster) = 0;
    void printPlayerStatus();

    // getter 함수
    string getJobName() const;
    string getNickname() const;
    int getLevel() const;
    int getHP() const;
    int getMP() const;
    int getPower() const;
    int getDefence() const;
    int getSpeed() const;
    float getAccuracy() const;

    // setter 함수
    void setNickname(string nickname);
    void setLevel(int level);
    bool setHP(int HP);
    void setMP(int MP);
    void setPower(int power);
    void setDefence(int defence);
    void setSpeed(int speed);
    void setAccuracy(float accuracy);

protected:
    string jobName;
    string nickname;

    int level;
    int HP;
    int MP;
    int power;
    int defence;
    int speed;
    float accuracy;
};