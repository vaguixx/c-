#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


#include<iostream>
#include<string>

using namespace std;

//写一个打印输出类
class print
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void test02(string test)//由于调用起来非常类似于函数调用，所以被成为仿函数
{
	cout << test << endl;
	//匿名函数对象
	//通过一个类型和一个小括号会创建一个匿名对象，匿名对象只使用一次就会被系统释放

}
//仿函数非常灵活，没有固定的写法

void test01()
{
	print p1;
	p1("helloworld!");
}


int main()
{
	test01();
	test02("helloworld");

	return 0;
}