#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void ConnectAll()
{
	string s, temp;
	while (cin >> temp)
		s += temp;

	cout << s << endl;
}

void SpiltAll()
{
	string s, temp;
	while (cin >> temp)
		s = s + " " + temp;

	cout << s << endl;
}