#pragma once
#include <string>

#include "Player.h"

using namespace std;

class Thief : public Player
{
public:
    Thief(string nickname);

    void attack();
    void attack(class Monster* monster) override;
};