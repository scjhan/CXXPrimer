#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void GetMax()
{
	string str1, str2;

	cin >> str1 >> str2;
	if (str1 > str2)
		cout << str1;;
	else if (str1 == str2)
		cout << "EQUALS" << endl;
	else
		cout << str2;
}

void GetMaxLength()
{
	string str1, str2;
	cin >> str1 >> str2;
	if (str1.size() == str2.size())
		cout << "EQUALS" << endl;
	else if (str1.size() > str2.size())
		cout << str1;
	else cout << str2;
}