#include "Human.h"
#include <string>
#include <iostream>
#include <algorithm>

Human::Human()
{
}

char Human::makeMove(){
    std::cout << "Enter Choice: ";
    std::cin >> choiceIN;
    return choiceIN;
}

