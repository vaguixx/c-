#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//函数的重载，就是在c++中函数是可以重名的，但是必须满足一定的条件
//函数重载的意义在于提高函数的复用性



//函数重载的条件
//1.同一作用域下
//2.函数名称相同
//3.函数  类型不同   或者   个数不同   或者   顺序不同
//4.函数的返回值不可以作于函数重载的内容




//实现简单的函数重载

//#include<iostream>
//
//using namespace std;
//
//void func()
//{
//	cout << "简单函数重载参数void版" << endl;
//}
//
//void func(int a)
//{
//	cout << "简单函数重载参数int版" << endl;
//}
//
//void func(int a, int b)
//{
//	cout << "简单函数重载参数  int    int  版" << endl;
//}
//
//void func(int a, double b)
//{
//	cout << "简单函数重载参数  int    double  版" << endl;
//}
//
//
//void func(double a, int b)
//{
//	cout << "简单函数重载参数  double   int  版" << endl;
//}
//int main()
//{
//
//	//调用函数
//	func();
//	func(10);
//	func(10, 10);
//	func(10, 3.14);
//	func(3.14, 10);
//	//在这里就会发现，即使函数名完全相同也可以实现准确的调用相应的函数
//	//只要函数传入的整数符合，就可以找到完全与之对应的函数
//
//	//而对同一个函数名的参数进行这样定义时，称做函数的重载
//
//
//	//函数重载条件复习
//	//1.必须作用于同一作用域下
//	//2.函数名必须相同
//	//3.函数内的参数必须   类型不同 或者 数量不同 或者  顺序不同
//	//4.函数的返回值不同不能作为函数重载的条件
//	return 0;
//
//}