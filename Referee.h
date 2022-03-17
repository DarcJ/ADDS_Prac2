#ifndef REFEREE_H
#define REFEREE_H
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Crescendo.h"
#include "FistFullODollars.h"
#include "PaperDoll.h"
#include "RandomComputer.h"
#include "ToolBox.h"
class Referee
{
private:
    char p1Choice;
    char p2Choice;
public:
    Referee();
    char refGame(Player* Player1, Player* Player2);
    ~Referee();
};
#endif
