#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


#include<iostream>
#include<string>

using namespace std;

//дһ����ӡ�����
class print
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void test02(string test)//���ڵ��������ǳ������ں������ã����Ա���Ϊ�º���
{
	cout << test << endl;
	//������������
	//ͨ��һ�����ͺ�һ��С���Żᴴ��һ������������������ֻʹ��һ�ξͻᱻϵͳ�ͷ�

}
//�º����ǳ���û�й̶���д��

void test01()
{
	print p1;
	p1("helloworld!");
}


int main()
{
	test01();
	test02("helloworld");

	return 0;
}