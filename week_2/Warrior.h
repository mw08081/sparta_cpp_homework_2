#pragma once
#include <string>

#include "Player.h"

using namespace std;

class Warrior : public Player
{
public:
    Warrior(string nickname);

    void attack();
    void attack(class Monster* monster) override;
};