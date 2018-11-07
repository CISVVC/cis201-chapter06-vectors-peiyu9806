/**
File: main.cpp
Description: The program will read in the descriptions and then print out a bank statement listing all deposits, withdrawals, and the daily balance for each day.
Author: Pei-Yu Kuo
Email: peiyuk9810@student.vvc.edu
Data Created: 11-06-2018
**/

#include<iostream>
#include<vector>

using namespace std;



int main()
{
    Transactionlog tlog;

    tlog.add_transaction(Transaction(15,-255,"Cash Withdraw"));
    
    tlog.print();
    
    return 0;
}
  
