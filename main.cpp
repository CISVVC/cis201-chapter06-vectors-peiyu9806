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
    tlog.add_transaction(Transaction(2,-20,"ATM"));
    tlog.add_transaction(Transaction(3,122,"Centrelink benefit"));
    tlog.add_transaction(Transaction(4,-127.44,"Supermarket"));
    tlog.add_transaction(Transaction(5,-60,"ATM"));
    tlog.add_transaction(Transaction(6,-53.27,"Car insurance"));
    tlog.add_transaction(Transaction(12,500,"Cash deposit"));
    tlog.add_transaction(Transaction(15,122,"Centrelink benefit"));
    tlog.add_transaction(Transaction(19,-155.89,"Supermarket"));
    tlog.add_transaction(Transaction(23,-200,"Check 2144"));
    tlog.add_transaction(Transaction(27,200,"Cash deposit"));
    tlog.add_transaction(Transaction(30,385,"Wages"));
}

int main()
{
    Transactionlog tlog;
    add_transactions(tlog);

    tlog.print_daily_balance_report();
    
    return 0;
}
