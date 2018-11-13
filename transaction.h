#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include <vector>

class Transaction
{
public:
   Transaction();
   void read();
   int get_day();
   double get_amount();
   void print() const;
   void print_transactions(const std::vector<Transaction> t);
private:
   int day;
   double amount;
   std::string description;
};

#endif
