#include <iostream>

int main()
{
	int sum = 0;
	int val = 55;

	while (val <= 100)
	{
		sum += val;
		++val;
	}

	std::cout << "The sum of 55 to 100 is: " << sum << std::endl;

	return 0;
}