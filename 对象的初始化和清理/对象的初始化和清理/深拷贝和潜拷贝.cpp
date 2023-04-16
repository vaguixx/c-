#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//深拷贝和浅拷贝问题

//1.什么是浅拷贝
//浅拷贝就是，编译器自己自动做的简单的 等号赋值操作的拷贝函数
//那么什么是深拷贝
//深拷贝就是，当一些特殊情况时，简单的等号赋值操作不在能满足我们拷贝的需要或者
//不符合我们拷贝的要求时，程序员自己去写的拷贝函数，一般是用于内存的空间的拷贝


//#include<iostream>
//
//using namespace std;
//
//class person
//{
//public:
//	person()
//	{
//		cout << "person的默认构造函数" << endl;
//
//	}
//
//	person(int age,int height)
//	{
//		cout<< "person的有参构造函数" << endl;
//		m_age = age;
//		m_height = new int(height);
//	}
//
//	~person()
//	{
//		cout << "person的析构函数" << endl;
//		//释放空间
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//	}
//
//	//深拷贝操作
//	person(const person& p)
//	{
//		m_height = p.m_height;
//		m_height = new int(*m_height);
//	}
//
//
//
//	int m_age;
//
//	int* m_height;
//};
//
//void test01()
//{
//	person p1(18,160);
//	cout << p1.m_age << *p1.m_height<<endl;
//	person p2(p1);
//	cout << p2.m_age << *p2.m_height << endl;
//}
//
//
//int main()
//{
//	test01();
//
//	return 0;
//}