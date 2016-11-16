#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(int argc, char const *argv[])
{
	std::vector<char> v;

	string str(v, 0, v.size() - 1);	//a.

	string str2(v.begin(), v.end());	//b.

	return 0;
}