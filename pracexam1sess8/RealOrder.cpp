#include "RealOrder.h"
#include <iostream>

RealOrder::RealOrder(std::string nameInput, int dateInput, int priceInput):Order(std::string Name, int Date, int Price)
{	
	name = nameInput;
	date = dateInput;
	price = priceInput;
}

int RealOrder::get_price()
{
	if(current_date-date>20)
	{
		price *= 0.95;
	}else if(current_date-date<=20)
	{
		//price is unaffected.
	}
}
  
void RealOrder::set_current_date(int reset_date)
{
	current_date = reset_date;
}