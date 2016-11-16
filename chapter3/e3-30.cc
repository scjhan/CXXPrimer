#include <iostream>

int main(int argc, char const *argv[])
{
	constexpr std::size_t arrSize(10);
	int arr[arrSize];
	
	for (int i = 0;i < arrSize; ++i)
		arr[i] = i;

	return 0;
}