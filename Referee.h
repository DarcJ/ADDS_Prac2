#ifndef REFEREE_H
#define REFEREE_H
#include "Human.h"
#include "Computer.h"
class Referee
{
private:
    char cChoice;
    char hChoice;
public:
    Referee();
    char refGame(Human Human, Computer Computer);
    ~Referee();
};
#endif
