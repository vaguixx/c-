#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//默认情况下，编译器会至少给类添加三个函数

//1.默认构造函数
//2.析构函数
//3.拷贝构造函数对属性进行值拷贝（简单的等号赋值操作）

//如果用户写了有参构造函数，c++就不会再提供默认构造函数
//如果用户写了拷贝构造含数，c++就不会再提供，有参构造函数和默认构造函数


//#include<iostream>
//
//using namespace std;
//
//class person
//{
//public:
//
//	//默认构造函数
//	person()
//	{
//		cout << "person的默认构造函数" << endl;
//
//	}
//
//	//person的有参构造函数
//	person(int age)
//	{
//		m_age = age;
//		cout << "person的有参构造函数的调用" << endl;
//	}
//
//
//	~person()
//	{
//		cout << "person的析构函数的调用" << endl;
//	}
//
//	person(const person& p)
//	{
//		cout << "person的拷贝构造函数的调用" << endl;
//		m_age = p.m_age;
//	}
//
//
//	int m_age;
//
//};
//
//void test01()
//{
//	person p1;
//	p1.m_age = 18;
//	cout << "年龄是" << p1.m_age << endl;
//
//	person p2(p1);
//	cout << "年龄是" << p2.m_age << endl;
//
//	
//
//}
//int main()
//{
//	test01();
//
//	return 0;
//}