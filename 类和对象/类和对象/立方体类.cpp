#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//创建两个立方体，求其表面积和体积，并且判断两个立方体是否大小相同

//#include<iostream>
//
//using namespace std;
//
////创建一个立方体类
//class cube
//{
//public:
//	//添加长
//	void add_x(int x)
//	{
//		c_x = x;
//	}
//	//输出长
//	int print_x()
//	{
//		return 	c_x;
//	}
//	//添加宽
//	void add_y(int y)
//	{
//		c_y = y;
//	}
//	//输出宽
//	int  print_y()
//	{
//		return 	c_y;
//	}
//	//添加高
//	void add_h(int h)
//	{
//		c_h= h;
//	}
//	//输出高
//	int  print_h()
//	{
//		return c_h;
//	}
//
//	//计算立方体面积
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
//	//局部函数实现判断两个立方体是否相同
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
//	//立方体属性,属性成员私有化
//private:
//	int c_x;
//	int c_y;
//	int c_h;
//};
//
////全局函数判断两个立方体是否相同
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
//	//实体化
//	cube c1;
//	c1.add_x(2);
//	cout << "add_x:  " << c1.print_x() << endl;
//	c1.add_y(3);
//	
//	c1.add_h(5);
//	
//	cout << "c1的面积为" << c1.calculateS() << endl;
//	cout << "c1的体积为：" << c1.calculateV() << endl;
//
//	//实体化c2
//	cube c2;
//	c2.add_x(6);
//	c2.add_y(10);
//	c2.add_h(8);
//	cout << "c2的面积为" << c2.calculateS() << endl;
//	cout << "c2的体积为：" << c2.calculateV() << endl;
//
//	int ret1= issame(c1, c2);
//	if (ret1 == 1)
//	{
//		cout << "两个立方体相同" << endl;
//
//	}
//	else
//	{
//		cout << "两个立方体不同" << endl;
//	}
//
//	int ret2 = c1.is_same(c2);
//	if (ret2 == 1)
//	{
//		cout << "局部变函数两个立方体相同" << endl;
//
//	}
//	else
//	{
//		cout << "局部函数两个立方体不同" << endl;
//	}
//	return 0;
//}