#include "Computer.h"
#include "FistFullODollars.h"
FistFullODollars::FistFullODollars()
{
    i = 1;
}

void FistFullODollars::makeMove(){
    if (i > 3)
    {
        i = 1;
    }
    switch (i)
    {
    case 1:
        choice = 'R';
        break;
    case 2:
        choice = 'P';
        break;
    case 3:
        choice = 'P';
        break;
    }
    i++;
    
}

FistFullODollars::~FistFullODollars()
{
}
