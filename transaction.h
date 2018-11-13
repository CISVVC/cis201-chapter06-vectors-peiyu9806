#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include <vector>

class Transaction
{
public:
   Transaction();
   void read();
   void print() const;
private:
   int day;
   double amount;
   std::string description;
};

#endif
