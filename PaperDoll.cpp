#include "Computer.h"
#include "PaperDoll.h"
PaperDoll::PaperDoll()
{
    i = 1;
}

void PaperDoll::makeMove(){
    if (i > 3)
    {
        i = 1;
    }
    switch (i)
    {
    case 1:
        choice = 'P';
        break;
    case 2:
        choice = 'S';
        break;
    case 3:
        choice = 'S';
        break;
    }
    i++;
    
}

PaperDoll::~PaperDoll()
{
}
