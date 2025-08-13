#pragma once
#include <string>

#include "Player.h"

using namespace std;

class Magician : public Player
{
public:
    Magician(string nickname);

    void attack();
    void attack(class Monster* monster) override;
};