#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

string digit("0123456789");
string word("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");

void FindFirstOfFunction(const string &str)
{
	int pos = 0;
	//find digit
	while ((pos = str.find_first_of(digit, pos)) != string::npos)
	{
		cout << str[pos];
		++pos;
	}
	cout << endl;
}

void FindFirstNotOfFunction(const string &str)
{
	int pos = 0;
	//find digit
	while ((pos = str.find_first_not_of(word, pos)) != string::npos)
	{
		cout << str[pos];
		++pos;
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{
	string str("ab2c3d7R4E6");

	cout << "FindFirstOfFunction : ";
	FindFirstOfFunction(str);
	cout << "FindFirstNotOfFunction : ";
	FindFirstNotOfFunction(str);

	return 0;
}