#include <iostream>

int main()
{
	int val1(0), val2(1);
	int *p = &val1;

	//改变指针指向的对象的值
	*p = 2;

	//改变指针指向的对象
	p = &val2;

	return 0;
}