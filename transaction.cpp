#include <iostream>
#include <string>
#include <vector>
#include "transaction.h"

Transaction::Transaction()
{
   day = 0;
   amount = 0.0;
}

void Transaction::read()
{
    std::cin >> day;
    std::cin >> amount;
    std::string remainder;
    std::cin.ignore();
    std::getline(std::cin,description);
}

void Transaction::print() const
{
    std::cout << "day:" << day << std::endl;
    std::cout << "amount:" << amount << std::endl;
    std::cout << "description:" << description << std::endl;
}
