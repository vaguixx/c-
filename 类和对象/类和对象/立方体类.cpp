#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//�������������壬��������������������ж������������Ƿ��С��ͬ

//#include<iostream>
//
//using namespace std;
//
////����һ����������
//class cube
//{
//public:
//	//��ӳ�
//	void add_x(int x)
//	{
//		c_x = x;
//	}
//	//�����
//	int print_x()
//	{
//		return 	c_x;
//	}
//	//��ӿ�
//	void add_y(int y)
//	{
//		c_y = y;
//	}
//	//�����
//	int  print_y()
//	{
//		return 	c_y;
//	}
//	//��Ӹ�
//	void add_h(int h)
//	{
//		c_h= h;
//	}
//	//�����
//	int  print_h()
//	{
//		return c_h;
//	}
//
//	//�������������
//	int calculateS()
//	{
//		return 2 * c_x + 2 * c_y + 2 * c_h;
//	}
//
//	int calculateV()
//	{
//		return c_x * c_y * c_h;
//	}
//
//	//�ֲ�����ʵ���ж������������Ƿ���ͬ
//	bool is_same(cube &c)
//	{
//		if (c_x == c.print_x() && c_y == c.print_y() && c_h == c.print_h())
//		{
//			return true;
//		}
//		return false;
//	}
//
//
//	//����������,���Գ�Ա˽�л�
//private:
//	int c_x;
//	int c_y;
//	int c_h;
//};
//
////ȫ�ֺ����ж������������Ƿ���ͬ
//bool issame(cube &c1,cube &c2)
//{
//	if (c1.print_x() == c2.print_x() && c1.print_y() == c2.print_y() && c1.print_h() == c2.print_h())
//	{
//		return true;
//	}
//	return false;
//}
//
//
//int main()
//{
//	//ʵ�廯
//	cube c1;
//	c1.add_x(2);
//	cout << "add_x:  " << c1.print_x() << endl;
//	c1.add_y(3);
//	
//	c1.add_h(5);
//	
//	cout << "c1�����Ϊ" << c1.calculateS() << endl;
//	cout << "c1�����Ϊ��" << c1.calculateV() << endl;
//
//	//ʵ�廯c2
//	cube c2;
//	c2.add_x(6);
//	c2.add_y(10);
//	c2.add_h(8);
//	cout << "c2�����Ϊ" << c2.calculateS() << endl;
//	cout << "c2�����Ϊ��" << c2.calculateV() << endl;
//
//	int ret1= issame(c1, c2);
//	if (ret1 == 1)
//	{
//		cout << "������������ͬ" << endl;
//
//	}
//	else
//	{
//		cout << "���������岻ͬ" << endl;
//	}
//
//	int ret2 = c1.is_same(c2);
//	if (ret2 == 1)
//	{
//		cout << "�ֲ��亯��������������ͬ" << endl;
//
//	}
//	else
//	{
//		cout << "�ֲ��������������岻ͬ" << endl;
//	}
//	return 0;
//}