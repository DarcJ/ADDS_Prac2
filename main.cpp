#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>

int main()
{
    Human Human; 
    Computer Computer;
    Referee RPS;
    char result = RPS.refGame(Human, Computer);
    std::cout << result; 
    std::cout << "\n";
    return 0;
}



