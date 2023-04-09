#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//用do while求出三位数中所有的水鲜花数

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//生成99~1000的数字
//	int i = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		//判断是否为水仙花数
//		//153%10=3
//		//153/10=15
//		//15%10=5
//		//15/10=1
//
//		//已经知道是三位数
//		int a = i / 100;
//		int b = i /10 %10;
//		
//		int c = i%10;
//		if (a * a * a + b * b * b + c * c * c == i)
//		{
//			cout << i << endl;
//		}
//		
//	}
//	return 0;
//}