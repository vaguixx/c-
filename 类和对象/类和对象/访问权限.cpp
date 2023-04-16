#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//#include<iostream>

//1.public权限   公有权限，用public修饰的数据是类内和类外都可以访问到的
//2.protect权限   受保护权限，用protect 修饰的数据是只能类内来访问，而类外访问不到的
//3.private权限	私有权限，用private 修饰的数据只能泪来访问，而类外访问不到

//既然protect权限和private权限，作用一样那为什么还要用两种状态来修饰呢？
//这部分在后面的内容中可以说明‘
// 当用继承时，子类继承父类的属性，当属性是受保护的时候，子类也能使用父类，当属性是私有的时候，子类也
//不能访问父类


//using namespace std;
//
//int main()
//{
//
//	return 0;
//}