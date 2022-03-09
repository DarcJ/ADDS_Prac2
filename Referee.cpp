#include "Referee.h"
#include "Human.h"
#include "Computer.h"

Referee::Referee()
{
}
char Referee::refGame(Human Human, Computer Computer)
{
    char hChoice = Human.makeMove();
    char cChoice = Computer.makeMove();

    if (cChoice == hChoice)
    {
        return 'T';
    }
    else if (hChoice == 'P')
    {
        return 'W';
    }
    else if (hChoice == 'S')
    {
        return 'L';
        
    }
}
Referee::~Referee()
{
}