#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	//ʹ������
//	int arr[5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		cout << "������С��" << i << "������" << endl;
//		cin >> arr[i];
//	}
//	//�ж�С����ֻ��
//	int max = arr[0];
//	for (i = 0; i < 5; i++)
//	{
//		if (max < arr[i])
//		{
//			//����������ֵ�����ַ�������ƿ���ߣ��߼�^
//			//��һ
//			/*int tmp = max;
//			max = arr[i];
//			arr[i] = tmp;*/
//
//			//����
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