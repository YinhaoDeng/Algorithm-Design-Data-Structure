#include "Order.h"


Order::Order(std::string Name, int Date, int Price)
{
	name = Name;
	date = Date;
	price = Price;
}

int Order::get_price()
{
	return price;
}


std::string Order::get_name()
{
	return name;
}


int Order::get_date()
{
	return date;
}