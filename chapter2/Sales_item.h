#ifndef SALES_ITEM_H__
#defien SALES_ITEM_H__

#include <string>

struct Sales_item
{
	std::string bookNo;
	unsigned int units_sold = 0;
	double revenue = 0.0;
};

#endif