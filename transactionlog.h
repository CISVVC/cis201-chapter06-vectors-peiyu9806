#ifndef TRANSACTIONLOG_H
#define TRANSACTIONLOG_H

#include<vector>
#include "transaction.h"

const int MAX_DAY = 30;
const double INTEREST = 0.005;

class Transactionlog
{
    std::vector<Transaction> m_transactions;
public:
    void add_transaction(const Transaction &transaction);
    std::vector<double> get_daily_balances() const;
    double get_balance(int day) const;
    double get_average_daily_balance(const std::vector<double> &balances) const;
    double get_min_daily_balance(const std::vector<double> &balances) const;
    double get_transaction_total_for_day(int day)const;
    void print_transaction_for_day(int day) const;
    void print_statement_header()const;
    void print_daily_balance_report()const;
    void print() const;
};

#endif
