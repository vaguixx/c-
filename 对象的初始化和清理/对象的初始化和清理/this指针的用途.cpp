#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//��ǰ�����֪������̬��Ա�����;�̬��Ա��������ͬһ�麯������ô�������������������ʱ
//��̬��Ա�;�̬��������ô֪����˭�ڵ�������
//ԭ�����thisָ�룬�����֮��thisָ�����˭����thisָ�룬thisָ���ָ����
//thisָ�����������зǾ�̬��Ա�����ڣ�����Ҫ���壬ֱ��ʹ��


//���ã�1.���βκͳ�Ա��������ʱ������thisָ������
//           2.����ķǾ�̬��Ա�����з��ر�������ʹ��return *this





//#include<iostream>
//
//using namespace std;
//
//class person
//{
//public:
//	person(int age)
//	{
//		//age = age;//���������ᵼ�£����캯���ڲ���ageû�и�ֵ
//
//		//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
//		this->age = age;
//	}
//
//	//����һ����������ӵĺ���
//	person& personaddage(const person &p)
//	{
//		this->age += p.age;
//		return *this;
//	}
//	int age;
//};
//
////���ض�������*this
//
//void test02()
//{
//	person p1(10);
//	person p2(10);
//	p1.personaddage(p2).personaddage(p2).personaddage(p2);
//	cout << p1.age << endl;
//}
//
//
//void test01()
//{
//	person p(10);
//	cout << p.age << endl;
//}
//
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}