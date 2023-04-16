#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//在内存中成员函数和成员变量不在一个空间内存储

//总结，只有非静态成员变量是在一个空间内存储的，静态成员变量，静态成员函数，非静态成员函数都不在

//#include<iostream>
//
//using namespace std;
//
//class person
//{
//
//	int m_a;//非静态成员变量
//	static int m_b;
//	void func() {};
//	static void func1() {};
//};
//
//void test01()
//{
//	person p;
//	//当类中什么都没有的时候字节为1,编译器给空对象分配一个字节的空间是为了区分空对象在内存中的位置
//	// 每个空对象也应该有一个独一无二的地址
//	//cout << sizeof(person) << endl;
//
//}
//
//
//void test02()
//{
//	person p;
//	cout << sizeof(p) << endl;//当有一个非静态成员的变量时（int），大小为4
//	cout << sizeof(p) << endl;//当加入了一个静态成员变量时，大小还是4
//	cout << sizeof(p) << endl;//当加入了一个非静态成员函数时，大小还是4，说明非静态成员函数也不在一个空间上
//	cout << sizeof(p) << endl;//当加入了一个静态成员函数时，大小还是4，说明静态成员函数也不在一个空间上
//}
//
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}