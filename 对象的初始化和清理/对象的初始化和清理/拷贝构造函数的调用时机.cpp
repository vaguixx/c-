#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//拷贝构造函数的三个使用时机
//1.使用一个已经初始化完成的对象来初始化一个新对象
//2.以值传递的方式去给函数参数传值
//3.以值方式返回局部对象


//
//#include<iostream>
//
//using namespace std;
//
//
//
//class person
//{
//
//public:
//
//	//person的默认构造函数调用
//	person()
//	{
//		cout << "person的默认构造函数调用" << endl;
//	}
//
//	//person的有参构造函数的调用
//	person(int age)
//	{
//		cout << "person的有参构造函数调用" << endl;
//		p_age = age;
//	}
//
//
//
//	//person的析构函数调用
//	~person()
//	{
//		cout << "person的析构函数调用" << endl;
//	}
//
//	//person的拷贝构造函数
//	person(const person& p)
//	{
//		cout << "person的拷贝构造函数调用" << endl;
//		p_age = p.p_age;
//	}
//
//private:
//	int p_age;
//	//1.使用一个已经初始化完成的对象来初始化一个新对象
//
//};
//
//
//void test01()
//{
//	person p1(20);
//	person p2(p1);
//}
//
//
//int main()
//{
//	test01();
//
//
//		
//
//	
//
//
//	return 0;
//}