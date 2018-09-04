#include<iostream>
#include "myfunction.h"
using namespace std;

/*
if��else��������lambda
*/
void func4()
{
	int a = 10;

	if (a < 20)
	{
		cout << "a<20" << endl;
	}
	else
	{
		cout << "a>=20" << endl;
	};
	cout << "a ��ֵ�� " << a << endl;
}

void func5()
{
	string like = "apple";

	if (like == "apple")
	{
		cout << "apple" << endl;
	}
	else if (like == "orange")
	{
		cout << "orange" << endl;
	}
}


int func6(int a, int b = 55)// b��Ĭ��ֵ��55
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

/*
Lambda ���ʽ���������һ��ʹ�ã�������Խ����Ǹ�����������Ϊ�������ݣ�����������һ��������ֵ��
[capture](parameters)->return-type{body}
[](int x, int y){ return x < y ; }

���û�з���ֵ���Ա�ʾΪ��
[capture](parameters){body}
[]{ ++global_x; }

[](int x, int y) -> int { int z = x + y; return z + x; }
�����У�һ����ʱ�Ĳ��� z �����������洢�м�������ͬһ��ĺ�����z ��ֵ���ᱣ������һ�θò����������ٴα�����ʱ��


*/

void func7()
{
	auto f1 = [](int x, int y) { return x < y; };
	cout << f1(1, 3) << endl;
	//������棬����1�����򷵻�0. ֻ�ǲ�֪������ô����lambda�����͡�
}




