#include <iostream>
#include <string>
#include "transaction.h"

Transaction::Transaction()
{
   m_day = 0;
   m_amount = 0.0;
}

Transaction::Transaction(int m_day, double m_amount, std::string m_description) 
{
    day = m_day;
    amount = m_amount; 
    description = m_description;
}

int Transaction::get_day() const
{
    return day;
}

double Transaction::get_amount() const
{
    return amount;
}

std::string Transaction::get_descri() const
{
    return description;
}

void Transaction::read()
{
    std::cin >> day;
    std::cin >> amount;
    std::cin.ignore();
    std::getline(std::cin,description);
}

void Transaction::print() const
{
    std::cout << "day:" << day << std::endl;
    std::cout << "amount:" << amount << std::endl;
    std::cout << "description:" << description << std::endl;
}
