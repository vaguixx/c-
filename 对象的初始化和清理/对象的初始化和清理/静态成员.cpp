#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//��̬��Ա

//��̬��Ա�������֣�1.��̬��Ա����  2.��̬��Ա����

//��̬��Ա�������ص�
//1.���о�̬��Ա����һ�����ݣ��������һ������ڴ�ľ�̬��
//2.��̬��Ա�ڱ���׶ξͷ����ڴ�
//3.��̬��ԱҪ�����������������ʼ��
//4.��̬��Ա����Ҳ�з���Ȩ�ޡ�


//��̬��Ա������
//���ж�����һ��������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����,��Ϊ������Ǿ�̬��Ա�����Ļ�����ô���ж��������þ�̬��Ա����ʱ��
//�������Ƕ���a���ֵ����ô��̬��Ա���������Ǹı��ĸ����������a��




//#include<iostream>
//
//using namespace std;
//
//class person
//{
//public:
//	//���г�Ա����һ������
//	//�ڱ���׶η����ڴ�
//	//�������������ʼ��
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
//	//��̬��Ա����������ĳһ�������ϣ��������г�Ա��ͬ����ͬһ��ռ�
//	//��˾�̬��Ա���������ַ��ʷ�ʽ
//	//1.ͨ������
//
//	person p1;
//	cout << p1.m_age << endl;
//
//	//ͨ������
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
//		cout << "��̬��Ա����" << endl;
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