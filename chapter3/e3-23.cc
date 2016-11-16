#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> v;
	for (int i = 1;i != 11; ++i)
		v.push_back(i);

	//change
	for (auto b = v.begin(); b != v.end(); ++b)
	{
		*b *= 2;
	}

	for (auto i : v)
		cout << i << " ";
	cout << endl;

	return 0;
}