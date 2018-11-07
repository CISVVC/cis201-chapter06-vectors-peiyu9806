#ifndef TRANSACTIONLOG_H
#define TRANSACTIONLOG_H

#include<vector>
#include "transaction.h"

using namespace std;

class Transactionlog
{
    vector<Transaction> m_transactions;
    double m_balance;
    double m_min_balance;
    double m_average_balance;

public:
    void add_transaction(const Transaction &t);
    int min_daily_balance();
    int average_daily_balance();
    void print();
};

#endif
