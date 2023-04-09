#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	//使用数组
//	int arr[5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		cout << "请输入小猪" << i << "的体重" << endl;
//		cin >> arr[i];
//	}
//	//判断小猪哪只重
//	int max = arr[0];
//	for (i = 0; i < 5; i++)
//	{
//		if (max < arr[i])
//		{
//			//交换两个的值，两种方法，空瓶或者，逻辑^
//			//法一
//			/*int tmp = max;
//			max = arr[i];
//			arr[i] = tmp;*/
//
//			//法二
//			max = max ^ arr[i];
//			arr[i] = max ^ arr[i];
//			max = max ^ arr[i];
//
//		}
//	}
//	cout << max << endl;
//	return 0;
//
//}