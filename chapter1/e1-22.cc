#include <iostream>

int main()
{
	Sales_item item, sum;

	while (std::cin >> item)
		sum += item;

	std::cout << "The sum is : " << sum << std::endl;

	return 0;
}