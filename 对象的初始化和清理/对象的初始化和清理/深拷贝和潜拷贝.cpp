#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//�����ǳ��������

//1.ʲô��ǳ����
//ǳ�������ǣ��������Լ��Զ����ļ򵥵� �ȺŸ�ֵ�����Ŀ�������
//��ôʲô�����
//������ǣ���һЩ�������ʱ���򵥵ĵȺŸ�ֵ�����������������ǿ�������Ҫ����
//���������ǿ�����Ҫ��ʱ������Ա�Լ�ȥд�Ŀ���������һ���������ڴ�Ŀռ�Ŀ���


//#include<iostream>
//
//using namespace std;
//
//class person
//{
//public:
//	person()
//	{
//		cout << "person��Ĭ�Ϲ��캯��" << endl;
//
//	}
//
//	person(int age,int height)
//	{
//		cout<< "person���вι��캯��" << endl;
//		m_age = age;
//		m_height = new int(height);
//	}
//
//	~person()
//	{
//		cout << "person����������" << endl;
//		//�ͷſռ�
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//	}
//
//	//�������
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