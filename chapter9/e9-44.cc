#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void Function(string &s, string &oldVal, string &newVal)
{
	for (string::size_type i = 0;i != s.size(); ++i)
	{
		if ((s.substr(i, oldVal.size())) == oldVal)
			s.replace(i, oldVal.size(), newVal);		
	}
}

int main(int argc, char const *argv[])
{
	//test code
	string s("HelloWorld Hello C++");
	string oldVal("Hello");
	string newVal("HELLO");

	cout << "Before: " << s << endl;
	Function(s, oldVal, newVal);
	cout << "After: " << s << endl;

	return 0;
}