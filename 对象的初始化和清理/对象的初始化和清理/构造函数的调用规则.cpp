#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//Ĭ������£������������ٸ��������������

//1.Ĭ�Ϲ��캯��
//2.��������
//3.�������캯�������Խ���ֵ�������򵥵ĵȺŸ�ֵ������

//����û�д���вι��캯����c++�Ͳ������ṩĬ�Ϲ��캯��
//����û�д�˿������캬����c++�Ͳ������ṩ���вι��캯����Ĭ�Ϲ��캯��


//#include<iostream>
//
//using namespace std;
//
//class person
//{
//public:
//
//	//Ĭ�Ϲ��캯��
//	person()
//	{
//		cout << "person��Ĭ�Ϲ��캯��" << endl;
//
//	}
//
//	//person���вι��캯��
//	person(int age)
//	{
//		m_age = age;
//		cout << "person���вι��캯���ĵ���" << endl;
//	}
//
//
//	~person()
//	{
//		cout << "person�����������ĵ���" << endl;
//	}
//
//	person(const person& p)
//	{
//		cout << "person�Ŀ������캯���ĵ���" << endl;
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
//	cout << "������" << p1.m_age << endl;
//
//	person p2(p1);
//	cout << "������" << p2.m_age << endl;
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