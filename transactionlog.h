#ifndef TRANSACTIONLOG_H
#define TRANSACTIONLOG_H

#include<vector>
#include "transaction.h"

class Transactionlog
{
public:
    void add_transaction(const Transaction &t);
    void read();
    double compute_balances();
    double min_daily_balance();
    double average_daily_balance();
    void earned_interest();
    void print();
private:
    std::vector<Transaction> m_transactions;
    std::vector<double> daily_balances;
    double m_amount;
    double m_balance;
    double m_min_balance;
    double m_average_balance;
    double m_total_balance;
    double m_interest;
    const int MAX_DAY = 30;
    const double INTEREST = 0.05;
};

#endif
