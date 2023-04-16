#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//#include<iostream>
//
//using namespace std;
//
////因为圆心也属于点类，所以应该再次创建一个点类，点类应该有xy坐标，且能添加，显示
//class point
//{
//public:
//	//点的方法，添加x坐标，添加y坐标，打印x坐标，打印y坐标
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
//	//点的属性，x，y
//private:
//	int p_x;
//	int p_y;
//};
//
//
//
//
//
////创建一个圆类，有圆心，有半径，添加圆心，半径，计算点和圆的关系
//
//class circle
//{
//public:
//	//圆的方法
//	//添加半径
//	void add_r(int r)
//	{
//		c_r = r;
//	}
//	//打印半径
//	int print_r()
//	{
//		return c_r;
//	}
//	//设置圆心
//	void add_point(point center)
//	{
//		c_center = center;
//	}
//	//打印圆心
//	point print_point()
//	{
//		return c_center;
//	}
//	//定义圆的属性
//private:
//	//半径c_r
//	int c_r;
//	//圆心center,这里的center是一个类，并没有实体化
//	point c_center;
//};
//
////全局函数实现判断点的位置
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
//		cout << "点在圆上" << endl;
//	}
//	else if(rdistance > pdistance)
//	{
//		cout << "点在圆内" << endl;
//	}
//	else
//	{
//		cout<< "点在圆外" << endl;
//	}
//}
//
//int main()
//{
//	//实体化一个圆
//	circle c1;
//	c1.add_r(10);
//	//实体化圆心
//	point c_center;
//	c_center.add_x(10);
//		c_center.add_y(0);
//	
//	//实体化一个点
//		point p;
//		p.add_x(10);
//		p.add_y(1);
//
//		//判断
//		isincircle(c1, p);
//	return 0;
//}