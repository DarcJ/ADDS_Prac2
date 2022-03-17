#include "Referee.h"
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Crescendo.h"
#include "FistfullODollars.h"
#include "PaperDoll.h"
#include "RandomComputer.h"
#include "Toolbox.h"

Referee::Referee()
{
}
char Referee::refGame(Player* Player1, Player* Player2)
{
    p1Choice = Player1->getMove();
    p2Choice = Player2->getMove();

    if (p2Choice == p1Choice)
    {
        return 'T';
    }
    else if (p1Choice == 'R')
    {
        if (p2Choice == 'S')
        {
            return 'W';
        }
        if (p2Choice == 'P')
        {
            return 'L';
        }  
    }
    else if (p1Choice == 'S')
    {
        if (p2Choice == 'R')
        {
            return 'L';
        }
        if (p2Choice == 'P')
        {
            return 'W';
        }    
    }
    else if (p1Choice == 'P')
    {
        if (p2Choice == 'R')
        {
            return 'W';
        }
        if (p2Choice == 'S')
        {
            return 'L';
        }    
    }
}
Referee::~Referee()
{
}