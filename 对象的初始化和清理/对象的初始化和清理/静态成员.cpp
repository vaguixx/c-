#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//静态成员

//静态成员包含两种：1.静态成员变量  2.静态成员函数

//静态成员变量的特点
//1.所有静态成员共用一个数据，这个数据一般放在内存的静态区
//2.静态成员在编译阶段就分配内存
//3.静态成员要在类内声明，类外初始化
//4.静态成员变量也有访问权限、


//静态成员函数：
//所有对象共用一个函数、
//静态成员函数只能访问静态成员变量,因为如果不是静态成员变量的话，那么当有多个对象调用静态成员函数时，
//假设他们都有a这个值，那么静态成员函数到底是改变哪个对象上面的a呢




//#include<iostream>
//
//using namespace std;
//
//class person
//{
//public:
//	//所有成员公用一份数据
//	//在编译阶段分配内粗
//	//类内声明类外初始化
//
//	static int m_age;
//
//};
//	
//int person :: m_age = 18;
//
//void test01()
//{
//	person p1;
//	cout << p1.m_age << endl;
//	person p2;
//	p2.m_age = 200;
//	cout << p1.m_age << endl;
//}
//
//void test02()
//{
//	//静态成员变量不属于某一个对象上，而是所有成员共同访问同一快空间
//	//因此静态成员变量有两种访问方式
//	//1.通过对象
//
//	person p1;
//	cout << p1.m_age << endl;
//
//	//通过类名
//	cout << person::m_age << endl;
//	
//
//}
//
//int main()
//
//{
//	//test01();
//	test02();
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//class person
//{
//public:
//	static void func()
//	{
//		//m_b = 10;
//		m_a = 100;
//		cout << "静态成员函数" << endl;
//	}
//
//	static int m_a;
//	int m_b;
//};
//
//int person::m_a = 10;
//
//void test01()
//{
//	person p;
//	p.func();
//
//	person::func();
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}