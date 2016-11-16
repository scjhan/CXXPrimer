#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void WhileFunction()
{
	string str;
	string::size_type index(0);

	cin >> str;
	while (index < str.size())
		str[index] = 'X';

	cout << str << endl;

}

void ForFunction()
{
	string str;

	cin >> str;
	for (string::size_type index = 0; index != str.size(); ++index)
		str[index] = 'X';

	cout << str << endl;
}

int main(int argc, char const *argv[])
{

	return 0;
}