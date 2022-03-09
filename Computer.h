#ifndef COMPUTER_H
#define COMPUTER_H

#include <stdlib.h>
#include <time.h>

class Computer
{
private:
    char choice;
public:
    Computer();
    char makeMove();
};
#endif
