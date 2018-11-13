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

void print_transactions(const std::vector<Transaction> t)
{
    for(int i=0;i<t.size();i++)
        t[i].print();
}

int main()
{
   std::vector<Transaction> transaction;
   bool more = true;
   while(more)
   {
       Transaction t;
       t.read();
       transaction.push_back(t);
       std::cout << "Enter another (Y/N)";
       char response;
       std::cin >> response;
       if(response != 'y' && response != 'Y')
         more = false;
   }
   print_transactions(transaction);
    return 0;
}







/*int main()
{
    Transactionlog tlog;

    tlog.add_transaction(Transaction(15,-255,"Cash Withdraw"));
    
    tlog.print();
    
    return 0;
}*/
  
