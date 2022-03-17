#include "Computer.h"
#include "FistfullODollars.h"
FistfullODollars::FistfullODollars()
{
    i = 1;
}

void FistfullODollars::makeMove(){
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

FistfullODollars::~FistfullODollars()
{
}
