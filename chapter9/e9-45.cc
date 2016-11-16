#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string Function(const string &name, const string &prefix, const string &subfix)
{
	string retString(name);

	retString.insert(0, prefix);
	retString.append(subfix);

	return retString;
}

int main(int argc, char const *argv[])
{
	string prefix("Mr."), name("Tom"), subfix("III");

	cout << Function(name, prefix, subfix) << endl;

	return 0;
}