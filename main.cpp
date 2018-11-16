/**
File: main.cpp
Description: The program will read in the descriptions and then print out a bank statement listing all deposits, withdrawals, and the daily balance for each day.
Author: Pei-Yu Kuo
Email: peiyuk9810@student.vvc.edu
Data Created: 11-06-2018
**/

#include<iostream>
#include<vector>
#include"transaction.h"
#include"transactionlog.h"

void add_transactions(Transactionlog &tlog)
{
    tlog.add_transaction(Transaction(1,1143.24,"Initial Balance"));
    tlog.add_transaction(Transaction(2,-200,"Check 2140"));
}

int main()
{
    Transactionlog tlog;
    add_transactions(tlog);

    tlog.print_daily_balance_report();
    

    return 0;
}
