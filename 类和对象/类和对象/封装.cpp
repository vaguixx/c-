#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include<string>

	/*在c++中，每一个事物都是一个对象，这个对象是独立的个体，
		有着自己的属性（即成员），和行为（函数操作），就像
		一个人有着自己的姓名，班级，年龄，准考证号，
		而人有许多的人，他们各自独立，互不相同的同时也保持着一定的相同性
		这个时候称之为人 类 ，车有车类，跑车，客运车，都是车类中的一部分，也是独立的个体*/
	

//#include<iostream>
//
//using namespace std;
//
//#define PAI 3.14
//
////创建一个圆类
//class Circle
//{
//	//定义访问权限
//public:
//	//定义属性
//	//半径
//	double c_r;
//
//	//定义行为，求圆的面积和周长,行为一般用函数的方法实现
//	double area()
//	{
//		return c_r * c_r * PAI;
//	}
//	
//	double zhouchang()
//	{
//		return 2 * c_r * PAI;
//	}
//
//};
//
//int main()
//{
//	//将类实体化为一个对象
//	Circle c1;
//	//给c1这个圆一个半径
//	c1.c_r = 5;
//	cout << "圆的面积是:" << c1.area()<< endl;
//	cout << "圆的周长是：" << c1.zhouchang()<< endl;
//	return 0;
//}



//#include<iostream>
//
//using namespace std;
//
//class Student
//{
//	//定义权限
//public:
//	//定义属性
//	string name;
//	int id;
//
//	//行为
//	//能够对name进行输出
//	void print_name()
//	{
//		cout << "姓名是" << name << endl;
//	}
//	void print_id()
//	{
//		cout << "学号是" << id << endl;
//	}
//
//	//对name和id进行改写
//	void set_name()
//	{
//		cout << "请输入要改的name的值：" << endl;
//		cin >> name;
//	}
//	void set_id()
//	{
//		cout << "请输入要改的id的值：" << endl;
//		cin >> id;
//	}
//};


//int main()
//{
//	//实体化
//	Student s1;
//	s1.name = "wangwu";
//	s1.print_name();
//	s1.id = 132;
//	s1.print_id();
//
//	//实体化2
//	Student s2;
//	s2.set_name();
//	s2.print_name();
//
//
//	return 0;
//}