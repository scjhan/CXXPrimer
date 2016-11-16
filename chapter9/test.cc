#include <iostream>
#include <string>

using namespace std;

void TestingFind1()
{
	//string::find(args);
	string str("HelloWorld");
	cout << s.find('H')
}

int main(int argc, char const *argv[])
{
	
	return 0;
}

//...
template <class InputIterator first, class T>
InputIterator find(InputIterator first, InputIterator last, const T &value)
{
	while (first != last && *first != value)
		++first;
	return first;
}

template <typename T>
class C
{
	//...
	T& operator*() const { return *ptr_; }
	T* operator->() const { return ptr_; }
private:
	T *ptr_;
}

template <class I, class T
void func_impl(I iter, T t)
{
	T tmp;	//T即是迭代器的相应类型
	//这里做原本func()内容
}

template <class I>
inline
void func(I iter)
{
	func_impl(iter, *iter);	//根据*iter自动推导其类型
}



template <class T>
struct Iter
{
	typedef T value_type;
	//...
};
//使用
template <class T>
typename I::value_type func(I iter)
{
	//do something
	return *iter;
}

template <class T>
struct Iter<T*>
{
	typedef T value_type;
	//...
};



template <class I>
struct iterator_traits
{
	typedef typename I::value_type value_type;
};
//原生指针特化版本
template <class T>
struct iterator_traits<T*>
{
	typedef T value_type;
};
//这个时候调用便没有问题
template <class I>
typename iterator_traits<I>::value_type func(I iter)
{
	return *iter;
}

template <class I>
struct iterator_traits
{
	typedef typename I::vaue_type value_type;
	typedef typename I::difference_type difference_type;
	typedef typename I::pointer pointer;
	typedef typename I::reference reference;
	typedef typename I::iterator_category iterator_category;
};

template <class I, class T>
typename iterator_traits<I>::difference_type count(
	I first, I last, const T &value)
{
	typename iterator_traits<I>::difference_type n = 0;
	for (; first != last; ++first)
	{
		if (*first == value)
			++n;
	}
	return n;
}
//traits的原始指针特化版本中difference_type使用的是C++内建的ptrdiff_t(<cstddef>):
template <class I>
struct iterator_traits<T*>
{
	ty ptrdiff_t difference_type;
};