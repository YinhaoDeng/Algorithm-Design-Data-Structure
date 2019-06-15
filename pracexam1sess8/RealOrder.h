/*  RealOrder class... 
    derived class for a order for an online company
*/

#ifndef REAL_ORDER_H
#define REAL_ORDER_H
#include "Order.h"
#include <string>

class RealOrder: public Order{
 public:
  // Constructor - takes name, date, and price - string and integers
  RealOrder(std::string nameInput, int date, int priceInput):Order(std::string Name, int Date, int Price);

  // getter methods

  virtual int get_price();
  virtual void set_current_date(int date);
 private:
  // field variables
  int current_date;
};
  
  
#endif 
