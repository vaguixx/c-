#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//一个类中的成员可以是另一个类的对象
//比如a对象中的成员是类b的对象
//那么在构造的时候是先构造a还是先构造b
//析构的时候是先析构a还是先析构b

//先构造类里面的对象，再构造这个类，如果是析构的话，先析构这个类。再析构类里面的对象的这个类


//#include<iostream>
//#include<string>
//using namespace std;
//
//class phone
//{
//public:
//	phone(string phone)
//	{
//		cout << "类b的构造函数调用" << endl;
//		pname = phone;
//	}
//
//	~phone()
//	{
//		cout << "类b的析构函数调用" << endl;
//	}
//
//	string pname;
//
//};
//
//
//class person
//
//public:
//	//默认构造函数
//	person(string pername)
//	{
//		cout << "类a的默认构造函数调用" << endl;
//		name = pername;
//	}
//
//	//析构函数的调用
//
//	~person()
//	{
//		cout << "类a的析构函数调用" << endl;
//	}
//
//	string  name;
//	phone p;
//
//};
//
//void test01()
//{
//	person p1("张三");
//	phone p2("苹果");
//	cout << p1.name << "拿着" << p2.pname << endl;
//
//}
//
//
//
//int main()
//{
//	 
//
//
//	return 0;
//}