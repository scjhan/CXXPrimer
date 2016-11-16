#include <iostream>

int main()
{
	int begin = 0, end = 0, sum = 0;

	std::cout << "Please enter the begin and the end" << std::endl;

	std::cin >> begin >> end;

	if (begin < end)
		std::cout << "The first number must bigger than the second one" << std::endl;
	else
	{
		while (begin <= end)
		{
			std::cout << begin << " ";
			sum += begin;
			++begin;
		}
	}

	std::cout << "The sum of " << begin << " to " << end << " is " << sum << std::endl;

	return 0;
}