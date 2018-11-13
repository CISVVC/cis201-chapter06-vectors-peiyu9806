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
    std::getline(cin,remainder);
    std::getline(std::cin,description);
}

int Transaction::get_day()
{

}

double Transaction::get_amount()
{

}

void Transaction::print() const
{
    std::cout << "day:" << day << std::endl;
    std::cout << "amount:" << amount << std::endl;
    std::cout << "description:" << description << std::endl;
}

void Transasction::print_transactions(const std::vector<Transaction> t)
{
    for(int i=0;i<t.size();i++)
        t[i].print();
}
