#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Crescendo.h"
#include "FistfullODollars.h"
#include "PaperDoll.h"
#include "RandomComputer.h"
#include "Toolbox.h"
#include "Tournament.h"

#include <iostream>
#include <array>

int main()
{
    Avalanche Player1;
    Player *p1;
    p1 = &Player1;

    Avalanche Player2;
    Player * p2;
    p2 = &Player2;

    Avalanche Player3;
    Player * p3;
    p3 = &Player3;

    Avalanche Player4;
    Player * p4;
    p4 = &Player4;

    Avalanche Player5;
    Player * p5;
    p5 = &Player5;

    Bureaucrat Player6;
    Player * p6;
    p6 = &Player6;

    Avalanche Player7;
    Player * p7;
    p7 = &Player7;

    Avalanche Player8;
    Player * p8;
    p8 = &Player8;
    
    std::array<Player*, 8> competitors = {p1, p2, p3, p4, p5, p6, p7, p8};
    
    Tournament T1;
    T1.run(competitors);


    
    return 0;
}



