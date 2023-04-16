#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


////构造函数的两种调用方法
////1.无参构造也叫做默认构造
////2.有参构造
//
//
////构造函数的两种类型
////1.一种是普通构造函数（无参构造、有参构造）
////2.特殊构造函数，拷贝构造函数
//#include<iostream>
//
//using namespace std;
//
//class people
//{
//public:
//	//构造函数
//	people()
//	{
//		int age = 18;
//		cout << "无参（默认）构造函数调用" << endl;
//	}
//	people(int a)
//	{
//		cout << "有参构造函数调用" << endl;
//	}
//
//	//拷贝构造函数
//	//将传入的这个类的所有属性全部传入到该拷贝构造函数上
//	people(const people &p)
//	{
//		int age = p.age;
//		cout << "拷贝构造函数调用" << endl;
//		cout << "age=  " <<age <<endl;
//	}
//
//
//
//	//析构函数
//	~people()
//	{
//		cout<< "析构函数调用" << endl;
//	}
//
//	//属性
//private:
//	int age = 18;
//
//
//};
//
//int main()
//{
//	//三种调用方法
//	//1.括号法
//	//默认函数调用
//	//people p1;
//	//people;
//	//有参函数调用
//	//people p2(10);
//	//括号法调用拷贝构造函数
//	//people p3(p2);
//
//
//	//括号法注意：
//	//绝对不能用括号法调用 无参（默认）构造函数
//	//people p1();
//	//系统会将上述代码实现为一个函数的声明
//
//	//显示法
//	//people p1;//无参
//	//people p2 = people(10);//有参
//	//people p3 = people(p2);//拷贝；
//
//	//注意事项
//	//people p2 = people(10);//有参
//	//等号右值people(10) 的是一个没有具体名字的匿名对象
//	//系统随用随删
//
//	//注意事项2
//	//不能够利用拷贝构造函数去拷贝和初始化匿名对象
//
//	//隐式转换法
//	people p4 = 10;//这句像相当于显示法里的 people p4 = people(10);
//	//拷贝构造
//	people p5 = p4;
//	return 0;
//}