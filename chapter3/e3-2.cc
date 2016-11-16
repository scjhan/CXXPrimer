#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void GetLine()
{
	string buf;
	while (getline(cin, buf))
	{
		cout << cin << endl;
	}
}

void GetWord()
{
	string word;
	while (cin >> word)
	{
		cout << world << " ";
	}
}

int main()
{

	return 0;
}