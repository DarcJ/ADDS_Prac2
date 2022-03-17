#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H

#include "Computer.h"
#include <stdlib.h>
#include <time.h>

class RandomComputer: public Computer{
    private:
        int i;
    public:
    RandomComputer();
    void makeMove();
    ~RandomComputer();
};

#endif