#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//�������캯��������ʹ��ʱ��
//1.ʹ��һ���Ѿ���ʼ����ɵĶ�������ʼ��һ���¶���
//2.��ֵ���ݵķ�ʽȥ������������ֵ
//3.��ֵ��ʽ���ؾֲ�����


//
//#include<iostream>
//
//using namespace std;
//
//
//
//class person
//{
//
//public:
//
//	//person��Ĭ�Ϲ��캯������
//	person()
//	{
//		cout << "person��Ĭ�Ϲ��캯������" << endl;
//	}
//
//	//person���вι��캯���ĵ���
//	person(int age)
//	{
//		cout << "person���вι��캯������" << endl;
//		p_age = age;
//	}
//
//
//
//	//person��������������
//	~person()
//	{
//		cout << "person��������������" << endl;
//	}
//
//	//person�Ŀ������캯��
//	person(const person& p)
//	{
//		cout << "person�Ŀ������캯������" << endl;
//		p_age = p.p_age;
//	}
//
//private:
//	int p_age;
//	//1.ʹ��һ���Ѿ���ʼ����ɵĶ�������ʼ��һ���¶���
//
//};
//
//
//void test01()
//{
//	person p1(20);
//	person p2(p1);
//}
//
//
//int main()
//{
//	test01();
//
//
//		
//
//	
//
//
//	return 0;
//}