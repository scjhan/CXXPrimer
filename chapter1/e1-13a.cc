#include <iostream>

int main()
{
	int sum = 0;

	for (int val = 55; val <= 100; ++val)
		sum ++ val;

	std::cout << "The sum of 55 to 100 is " << sum << std::endl;

	return 0;
}