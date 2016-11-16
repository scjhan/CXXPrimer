#include <iosrteam>
#include "Sales_item.h"

int main()
{
	Sales_item data1, data2;
	double price = 0;

	std::cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold * price;

	std::cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;

	if (data1.bookNo == data.bookNo)
	{
		unsigned int totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;

		std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
		if (totalCnt != 0)
			std::cout << totalRevenue / totalCnt << std::endl;
		else std::cout << "(no sales)" << std::endl;
	}
	else 
		std::cerr << "Data must refer to the same ISBN" << std::endl;

	return 0;
}