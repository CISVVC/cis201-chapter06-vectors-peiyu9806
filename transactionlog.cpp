#include<iostream>
#include "transactionlog.h"

void Transactionlog::add_transaction(const Transaction &t)
{
    m_transactions.push_back(t);
}

void Transactionlog::compute_balances()
{
}

double Transactionlog::get_average_daily_balance()
{
    
}

double Transactionlog::get_minimum_daily_balance()
{
}

void Transactionlog::print()
{

}
