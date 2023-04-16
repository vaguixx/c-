#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//从前面可以知道，静态成员变量和静态成员函数共用同一块函数，那么当多个对象调用这个函数时
//静态成员和静态变量是怎么知道是谁在调用它呢
//原因就是this指针，简而言之，this指针就是谁调用this指针，this指针就指向它
//this指针隐含在所有非静态成员函数内，不需要定义，直接使用


//作用：1.当形参和成员变量重名时可以用this指针区分
//           2.在类的非静态成员函数中返回本身，可以使用return *this





//#include<iostream>
//
//using namespace std;
//
//class person
//{
//public:
//	person(int age)
//	{
//		//age = age;//这样重名会导致，构造函数内部的age没有赋值
//
//		//this指针指向被调用的成员函数所属的对象
//		this->age = age;
//	}
//
//	//定义一个，年龄相加的函数
//	person& personaddage(const person &p)
//	{
//		this->age += p.age;
//		return *this;
//	}
//	int age;
//};
//
////返回对象本身用*this
//
//void test02()
//{
//	person p1(10);
//	person p2(10);
//	p1.personaddage(p2).personaddage(p2).personaddage(p2);
//	cout << p1.age << endl;
//}
//
//
//void test01()
//{
//	person p(10);
//	cout << p.age << endl;
//}
//
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}