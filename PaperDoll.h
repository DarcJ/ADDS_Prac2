#ifndef PAPERDOLL_H
#define PAPERDOLL_H
#include "Computer.h"
class PaperDoll : public Computer{
    private:
    int i;
    public:
    PaperDoll();
    void makeMove();
    ~PaperDoll();

};

#endif