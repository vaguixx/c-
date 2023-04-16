#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//c++中的struct和class的区别

//c++中 struct的权限是默认公有，即默认public
//        而class的权限是默认私有，即默认private

//#include<iostream>
//
//using namespace std;
//
////创建一个元素完全一样的结构体
//struct MyStruct
//{
//	string name;
//	string id;
//};
//
//class MyClass
//{
//	string name;
//	string id;
//};
//	
//
//
//int main()
//{
//	//实体化
//	MyStruct m1;
//	m1.name = "李华";
//	m1.id = "123";
//	//同时在类外访问他们
//	MyClass c1;
//	//c1.name
//
//	//即如果在没给访问权限的情况下，类外是可以访问struct的，但是类外不可以访问class
//	return 0;
//}