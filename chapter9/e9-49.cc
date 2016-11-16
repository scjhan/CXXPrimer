#include <iostream>
#include <string>
#include <fstream>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;

int main(int argc, char const *argv[])
{
	string ok_word("aceimnorsuvwxz");
	ifstream ifs("word.file");
	if (!ifs) return -1;

	string longest_word, word;

	while (ifs >> word)
	{
		if (word.find_first_not_of(ok_word) == string::npos && word.size() > longest_word.size())
			longest_word = word;
	}
	cout << "The longest word: " << longest_word << endl;

	return 0;
}