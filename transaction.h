#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

class Transaction
{
public:
   Transaction();
   Transaction(int m_day,  double m_amount, std::string m_description);
   void read();
   int get_day() const;
   double get_amount() const;
   std::string get_descri() const;
   void print() const;
private:
   int day, m_day;
   double amount, m_amount;
   std::string description, m_description;
};

#endif
