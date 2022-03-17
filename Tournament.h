#ifndef TOURNAMENT_H
#define TOURNAMENT_H

#include <array>

class Tournament{
    private:
        char r11, r12, r13, r14, r21, r22, fresult;
        int p1, p2, p3, p4, p5, p6, p7, p8, p21, p22, p23, p24, f1, f2;
    public:
    Tournament();
    Player* run(std::array<Player *, 8> competitors);
    ~Tournament();

};

#endif