#include <iostream>
#include <vector>

using std::vector;

void Copy2Array()
{
	constexpr std::size_t arrSize(10);
	int arr[arrSize], arr2[arrSize];
	
	for (int i = 0;i < arrSize; ++i)
		arr[i] = i;
	//copy
	for (int i = 0;i < arrSize; ++i)
		arr2[i] = arr[i];
}

void Copy2Vector()
{
	constexpr std::size_t arrSize(10);
	vector<int> v1, v2;
	v1.resize(arrSize);

	for (int i = 0;i != arrSize; ++i)
		v1[i] = i;

	//copy
	v2 = v1;
}

int main(int argc, char const *argv[])
{
	Copy2Array();
	Copy2Vector();

	return 0;
}