#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//
//#include<iostream>
//
//using namespace std;

//实现函数
//int func(int a, int b, int c)
//{
//	return a + b + c;
//}

//
//int func(int a, int b = 20, int c = 30)
//{
//	return a + b + c;
//}
//
//int main()
//{
//	//调用函数
//	//如果传入的参数不够，就会报错，但是如果对函数设置默认参数,就不会报错
//	cout << func(10, 20) << endl;
//	cout << func(10) << endl;
//	//如果不对函数参数进行传值，那么就函数只会用默认值
//	//一旦传入自己所用的参数，那么就会用传入的值
//	cout << func(10, 50, 90) << endl;
//	return 0;
//}


//函数的默认参数的注意事项


//1.如果函数的一个参数有了默认参数，那么从这个参数起，从左往右的参数必须都有默认值


//在函数定义的时候就会发现，如果不把第一个默认参数的后面都设置成默认参数的话，程序出错
//int func(int a, int b = 20, int c =30)
//{
//	return a + b + c;
//}
//
//
//int main()
//{
//	func();
//	return 0;
//}



//函数的默认参数的第二个错误

//2。函数的声明和定义中只能有一个设置默认值

//函数声明

//很明显这个时候程序执行时出现了二义性，到底是使用函数定义时的默认值，还是使用函数声明的默认值呢
//这样会导致bug
//int func(int a = 10, int b = 20, int c = 30);
//
//int func(int a = 20, int b = 30, int c = 40)
//{
//	return a + b + c;
//}
//
//int main()
//{
//	cout << func() << endl;
//	return 0;
//}