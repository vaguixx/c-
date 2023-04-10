#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


#include<iostream>
using namespace std;

//重载函数

//void func(int& a)
//{
//	cout << "func(int& a)" << endl;
//}
//
//void func(const int& a)
//{
//	cout << "func(int &a)" << endl;
//}
//
//int main()
//{
//	//函数重载注意  1：函数重载碰到引用值
//	int a = 10;
//	//在这种情况下func会调用谁
//	func(a);//func(int &a)
//	//那怎么调用下面func(int& a)呢
//	func(10);
//
//	//因为int 种定义的a是一个变量，而int &a，引用值是只能作用于栈区和堆区的
//	//想要调用func(const int& a)，必须用常量来传值
//	return 0;
//}



////函数重载的注意：2.重载函数的默认参数
//#include<iostream>
//using namespace std;
//
//void func(int a,int b=10)
//{
//	cout << "func(int a = 10)" << endl;
//}
//
//void func(int a)
//{
//	cout << "func(int a)" << endl;
//}
//
//int main()
//{
//	//这样的函数重载该怎么引用
//	//func(10);这样的写法会导致系统识别不出来到底是使用哪个函数，必须消除二义性
//	//而最好的方法还是 尽量避免使用
//	return 0;
//}