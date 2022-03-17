#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <string>
#include <iostream>
#include <algorithm>

class Human : public Player
{
public:
    Human();
    void makeMove();

};
#endif

