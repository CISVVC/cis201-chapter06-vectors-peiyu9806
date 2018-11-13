#include<iostream>
#include "transactionlog.h"

void Transactionlog::add_transaction(const Transaction &t)
{
    m_transactions.push_back(t);
}

void Transactionlog::read()
{
    std::cin.ignore();
    cin >> m_amount;
    std::cin.ignore();
}

double Transactionlog::compute_balances()
{
    for(int i=0; i<daily_balances.size(); i++)
    {
        m_total_balance += daily_balances[i];
    }
    return m_total_balance;
}

double Transactionlog::min_daily_balance()
{
    m_min_balance = 500.00;
    return m_min_balance;
}

double Transactionlog::average_daily_balance()
{
    m_average_balance = m_total_balance / MAX_DAY;
    return m_average_balance;
}

void Transactionlog::earned_interest()
{
    m_interest = m_total_balance * (1 + INTEREST);
}

void Transactionlog::print()
{
    
}
