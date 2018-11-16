#include<iostream>
#include<vector>
#include "transactionlog.h"

void Transactionlog::add_transaction(const Transaction &transaction)
{
    m_transactions.push_back(transaction);
}

std::vector<double> Transactionlog::get_daily_balances() const
{
    std::vector<double> daily_balances;
    double balance = 0.0;
    for(int day=0;day<MAX_DAY;day++)
    {
        balance += get_transaction_total_for_day(day+1);  // day + 1 because we are starting at 0
        daily_balances.push_back(balance);
    }
    return daily_balances;
}

double Transactionlog::get_balance(int day) const
{
    std::vector<double> balances = get_daily_balances();
    return balances[day];
}

double Transactionlog::get_average_daily_balance(const std::vector<double> &balances) const
{
    double sum = 0.0;
    for(int i=0;i<balances.size(); i++)
    {
        sum +=balances[i];
    }
    return sum / balances.size();
}

double Transactionlog::get_min_daily_balance(const std::vector<double> &balances) const
{
    double lowest = balances[0];
    for(int i=0;i<balances.size();i++)
    {
        if(balances[i] < lowest)
            lowest = balances[i];   
    }
    return lowest;
}

double Transactionlog::get_transaction_total_for_day(int day) const
{
    double sum = 0.0;
    for(int i = 0;i<m_transactions.size();i++)
    {
        if(m_transactions[i].get_day() == day)
        {
            sum += m_transactions[i].get_amount();    
        }
    }
    return sum;
}

void Transactionlog::print_transaction_for_day(int day) const
{
    for(int i=0;i<m_transactions.size();i++)
    {
        if(m_transactions[i].get_day() == day)
        {
            std::cout << m_transactions[i].get_day() << '\t' << m_transactions[i].get_amount() << std::endl;
        }
    }
}

void Transactionlog::print_statement_header()const
{
    std::cout << "---------- Statement ---------- " << std::endl;
}

void Transactionlog::print() const
{
    for(int i=0;i<m_transactions.size();i++)
    {
        std::cout << "Day   Amount    Description" << std::endl;
        std::cout << m_transactions[i].get_day() << "       " << m_transactions[i].get_amount() << "    " << m_transactions[i].get_descri() << std::endl;
        std::cout << "--------------------" << std::endl;
        std::cout << "Balance for day " << m_transactions[i].get_day() << ": " << get_balance(i) << std::endl;
        std::cout << "-----------------------------------" << std::endl << std::endl;
    }
} 

void Transactionlog::print_daily_balance_report()const
{
    std::vector<double> balances = get_daily_balances();
    print_statement_header();
    print();
    std::cout << "Average daily balance: " << get_average_daily_balance(balances);
    std::cout << "     Interest: " << get_average_daily_balance(balances) * INTEREST << std::endl;
    std::cout << "Minimum daily balance: " << get_min_daily_balance(balances);
    std::cout << "     Interest: " << get_min_daily_balance(balances) * INTEREST << std::endl;
}
