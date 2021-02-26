// LuhnCardChecker.cpp : 
//

#include <iostream>
#include <string>
#include "luhnAlgorithm.hpp"


int main() {
    std::cout << "Luhn Algorithm Check Sum" << std::endl;
    std::cout << "Enter a card number to confirm if it is valid." << std::endl;
    std::string cardNum;
    std::cin >> cardNum;

    if (check(cardNum) == true)
        std::cout << "Card is valid" << std::endl;
    else
        std::cout << "Card is not valid" << std::endl;

    return 0;
}

