#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


#include<iostream>
using namespace std;

//���غ���

//void func(int& a)
//{
//	cout << "func(int& a)" << endl;
//}
//
//void func(const int& a)
//{
//	cout << "func(int &a)" << endl;
//}
//
//int main()
//{
//	//��������ע��  1������������������ֵ
//	int a = 10;
//	//�����������func�����˭
//	func(a);//func(int &a)
//	//����ô��������func(int& a)��
//	func(10);
//
//	//��Ϊint �ֶ����a��һ����������int &a������ֵ��ֻ��������ջ���Ͷ�����
//	//��Ҫ����func(const int& a)�������ó�������ֵ
//	return 0;
//}



////�������ص�ע�⣺2.���غ�����Ĭ�ϲ���
//#include<iostream>
//using namespace std;
//
//void func(int a,int b=10)
//{
//	cout << "func(int a = 10)" << endl;
//}
//
//void func(int a)
//{
//	cout << "func(int a)" << endl;
//}
//
//int main()
//{
//	//�����ĺ������ظ���ô����
//	//func(10);������д���ᵼ��ϵͳʶ�𲻳���������ʹ���ĸ���������������������
//	//����õķ������� ��������ʹ��
//	return 0;
//}