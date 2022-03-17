#include "Computer.h"
#include "RandomComputer.h"

#include <stdlib.h>
#include <time.h>
RandomComputer::RandomComputer()
{
}
void RandomComputer::makeMove(){
        srand(time(NULL));
        i = rand() %3 + 1;

        switch (i)
        {
        case 1:
            choice = 'R';
            break;
        case 2:
            choice = 'P';
            break;
        case 3:
            choice = 'S';
            break;
        }
    }

RandomComputer::~RandomComputer()
{
}
