#include <iostream>
#include <string>

using std::cout;
using std::endl;

class Date
{
public:
	Date() : year_(0), month_(0), day_(0) {}
	Date(const string &date) 
	~Date();
private:
	typedef unsigned int elem_type;
	elem_type year_;
	elem_type month_;
	elem_type day_;
};

int main(int argc, char const *argv[])
{
	
	return 0;
}