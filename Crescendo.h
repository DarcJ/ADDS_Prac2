#ifndef CRESCENDO_H
#define CRESCENDO_H
#include "Computer.h"
class Crescendo : public Computer{
    private:
        int i;
    public:
    Crescendo();
    void makeMove();
    ~Crescendo();

};

#endif