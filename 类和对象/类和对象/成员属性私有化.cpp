#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//#include<iostream>
//
//using namespace std;
//
//
//
////创建一个学生类
//class student
//{
//	//创建公有方法
//public:
//	//姓名可读可写
//	//可读
//	void print_name()
//	{
//		cout << s_name << endl;
//	}
//	//可写
//	void set_name(string name)
//	{
//		s_name = name;
//	}
//
//	//年龄只可读
//	int age_print()
//	{
//		s_age = 0;
//		cout << s_age << endl;
//		return s_age;
//	}
//
//	//情侣只能写
//	void lover_set(string lover)
//	{
//		s_lover = lover;
//	}
//
//
//	//成员属性私有化
//private:
//	string s_name;
//	int s_age;
//	string s_lover;
//};
//
//
//int main()
//{
//	//实体化
//	student s1;
//	s1.set_name("张三");
//	s1.print_name();
//	
//
//	cout << s1.age_print() << endl;
//
//	//
//	return 0;
//}