#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//#include<iostream>
//
//using namespace std;
//
////��ΪԲ��Ҳ���ڵ��࣬����Ӧ���ٴδ���һ�����࣬����Ӧ����xy���꣬������ӣ���ʾ
//class point
//{
//public:
//	//��ķ��������x���꣬���y���꣬��ӡx���꣬��ӡy����
//	void add_x(int x)
//	{
//		p_x = x;
//	}
//	int print_x()
//	{
//		return p_x;
//	}
//
//	void add_y(int y)
//	{
//		p_y = y;
//	}
//	int print_y()
//	{
//		return p_y;
//	}
//
//
//	//������ԣ�x��y
//private:
//	int p_x;
//	int p_y;
//};
//
//
//
//
//
////����һ��Բ�࣬��Բ�ģ��а뾶�����Բ�ģ��뾶��������Բ�Ĺ�ϵ
//
//class circle
//{
//public:
//	//Բ�ķ���
//	//��Ӱ뾶
//	void add_r(int r)
//	{
//		c_r = r;
//	}
//	//��ӡ�뾶
//	int print_r()
//	{
//		return c_r;
//	}
//	//����Բ��
//	void add_point(point center)
//	{
//		c_center = center;
//	}
//	//��ӡԲ��
//	point print_point()
//	{
//		return c_center;
//	}
//	//����Բ������
//private:
//	//�뾶c_r
//	int c_r;
//	//Բ��center,�����center��һ���࣬��û��ʵ�廯
//	point c_center;
//};
//
////ȫ�ֺ���ʵ���жϵ��λ��
//void isincircle(circle& c1, point& p)
//{
//	int pdistance = 0;
//	int rdistance = 0;
//	rdistance = c1.print_r() * c1.print_r();
//
//	pdistance = (c1.print_point().print_x() - p.print_x()) * (c1.print_point().print_x() - p.print_x())
//						+ (c1.print_point().print_y() - p.print_y()) * (c1.print_point().print_y() - p.print_y());
//	if (rdistance == pdistance)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else if(rdistance > pdistance)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else
//	{
//		cout<< "����Բ��" << endl;
//	}
//}
//
//int main()
//{
//	//ʵ�廯һ��Բ
//	circle c1;
//	c1.add_r(10);
//	//ʵ�廯Բ��
//	point c_center;
//	c_center.add_x(10);
//		c_center.add_y(0);
//	
//	//ʵ�廯һ����
//		point p;
//		p.add_x(10);
//		p.add_y(1);
//
//		//�ж�
//		isincircle(c1, p);
//	return 0;
//}