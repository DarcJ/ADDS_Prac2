#ifndef PLAYER_H
#define PLAYER_H

class Player {
    protected:
        char choice; 
    public:
        Player();
        virtual void makeMove();
        virtual char getMove(); 
        ~Player();

};

#endif