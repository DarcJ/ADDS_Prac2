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

#include <array>

Tournament::Tournament()
{

}

Player* Tournament::run(std::array<Player*, 8> competitors){

    Player * round2[4];
    Player * round3[2];
    Player * winner;
    //ROUND ONE ------------------------------------------------------------
    for ( int i = 0; i < 6; i++)
    {
        competitors[0]->makeMove();
        competitors[1]->makeMove();
        competitors[2]->makeMove();
        competitors[3]->makeMove();
        competitors[4]->makeMove();
        competitors[5]->makeMove();
        competitors[6]->makeMove();
        competitors[7]->makeMove();

        Referee R11;
        r11 = R11.refGame(competitors[0], competitors[1]);
        if (r11 == 'W')
        {
           p1++;
        }
        else if (r11 == 'L')
        {
            p2++;
        }
        else if (r11 == 'T'){
            p1++;
            p2++;

        }

        Referee R12;
        r12 = R12.refGame(competitors[2], competitors[3]);
        if (r12 == 'W')
        {
           p3++;
        }
        else if (r12 == 'L')
        {
            p4++;
        }
        else if (r12 == 'T'){
            p3++;
            p4++;
        }

        Referee R13;
        r13 = R13.refGame(competitors[4], competitors[5]);
        if (r13 == 'W')
        {
           p5++;
        }
        else if (r13 == 'L')
        {
            p6++;
        }
        else if (r13 == 'T'){
            p5++;
            p6++;
        }

        Referee R14;
        r14 = R14.refGame(competitors[6], competitors[7]);
        if (r14 == 'W')
        {
           p7++;
        }
        else if (r14 == 'L')
        {
            p8++;
        }
        else if (r14 == 'T'){
            p7++;
            p8++;
        }
    }
    //ROUND 1 RESULTS
    if (p1 < p2)
    {
        round2[0] = competitors[1];
    }
    else if((p1 > p2) || (p1 == p2))
    {
        round2[0] = competitors[0];
    }

    if (p3 < p4)
    {
        round2[1] = competitors[3];
    }
    else if((p3 > p4) || (p3 == p4))
    {
        round2[1] = competitors[2];
    }

    if (p5 < p6)
    {
        round2[2] = competitors[5];
    }
    else if ((p5 > p6) || (p5 == p6))
    {
        round2[2] = competitors[4];
    }
    if (p7 < p8)
    {
        round2[3] = competitors[7];
    }
    else if ((p7 > p8) || (p7 == p8))
    {
        round2[3] = competitors[6];
    }
    
    //ROUND TWO----------------------------------------------------
    for (int i = 0; i < 6; i++)
    {
        round2[0]->makeMove();
        round2[1]->makeMove();
        round2[2]->makeMove();
        round2[3]->makeMove();
        Referee R21;
        r21 = R21.refGame(round2[0], round2[1]);
        if (r21 == 'W')
        {
           p21++;
        }
        else if (r21 == 'L')
        {
            p22++;
        }
        else if (r21 == 'T'){
            p21++;
            p22++;
        }

        Referee R22;
        r22 = R22.refGame(round2[2], round2[3]);
        if (r22 == 'W')
        {
           p23++;
        }
        else if (r22 == 'L')
        {
            p24++;
        }
        else if (r22 == 'T'){
            p23++;
            p24++;
        }

    }
    //ROUND 2 RESULTS
    if (p22 > p21)
    {
        round3[0] = round2[1];
    }
    else if ((p21 > p22) || (p21 == p22))
    {
        round3[0] = round2[0];
    }

    if (p23 > p24)
    {
        round3[1] = round2[3];
    }
    else if ((p23 > p24) || (p23 == p24))
    {
        round3[1] = round2[2];
    }

    //FINALL --------------------
    round3[0]->makeMove();
    round3[1]->makeMove();

    for (int i = 0; i < 6; i++)
    {
        Referee finally;
        fresult = finally.refGame(round3[0], round3[1]);
        if (fresult == 'W')
        {
           f1++;
        }
        else if (fresult == 'L')
        {
            f2++;
        }
        else if (fresult == 'T'){
            f1++;
            f2++;
        }

    }
    //FINAL RESULTS
    if (f2 > f1)
    {
        winner = round3[1];
    }
    else if ((f1 > f2) || (f1 == f2))
    {
         winner = round3[0];
    }
    return winner;
}

Tournament::~Tournament()
{
}
