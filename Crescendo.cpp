#include "Computer.h"
#include "Crescendo.h"
Crescendo::Crescendo(/* args */)
{
    i = 1;
}

void Crescendo::makeMove(){
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
        choice = 'R';
        break;
    }
    i++;
    
}

Crescendo::~Crescendo()
{
}
