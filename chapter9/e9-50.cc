#include <string>
#include <iostream>
#include <vector>
#include <stdexcept>

using std::cout;
using std::endl;
using std::string;
using std::vector;

typedef vector<string> VecType;

int IntegerSum(const VecType &v)
{
	int sum = 0, num;
	for (string s : v)
	{
		try
		{
			num = stoi(s);
		}
		catch(std::invalid_argument ia)
		{
			cout << "Catch invalid_argument" << endl;
			return -1;
		}
		catch(std::out_of_range)
		{
			cout << "Catch out_of_range" << endl;
			return -1;
		}
		sum += num;
	}
	return sum;
}

double DoubleSum(const VecType &v)
{
	double sum = 0.0, num = 0.0;
	for (string s : v)
	{
		try
		{
			num = stod(s);
		}
		catch(std::invalid_argument ia)
		{
			cout << "Catch invalid_argument" << endl;
			return -1;
		}
		catch(std::out_of_range)
		{
			cout << "Catch out_of_range" << endl;
			return -1;
		}
		sum += num;
	}
	
	return sum;
}

int main(int argc, char const *argv[])
{
	VecType v;
	v.push_back("1");
	v.push_back("    2");
	v.push_back("3a");
	cout << "IntegerSum: " << IntegerSum(v) << endl;	//ouput 6

	v.push_back("a3");
	IntegerSum(v);	//Catch invalid_argument
	v.push_back("11111111111111111111111111111111111111111111111111");
	IntegerSum(v);


	return 0;
}