#pragma once
#include "Player.h"

class GamblingGame {
    Player* p = new Player[2];
public:
    GamblingGame();
    void nameSet();
    string ranNum(string n);
    void startGame();
    ~GamblingGame();
};
