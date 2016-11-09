#include <iostream>

int main()
{
	int begin = 0, end = 0, sum = 0;

	std::cout << "Please enter the begin and the end" << std::endl;

	std::cin >> begin >> end;

	for (int i = begin; i <= end; ++i)
		sum += i;

	std::cout << "The sum of " << begin << " to " << end << " is " << sum << std::endl;

	return 0;

}