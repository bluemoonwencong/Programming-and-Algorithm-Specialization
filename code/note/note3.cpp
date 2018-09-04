#include<iostream>
#include "myfunction.h"
using namespace std;

/*
if，else，函数，lambda
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
	cout << "a 的值是 " << a << endl;
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


int func6(int a, int b = 55)// b的默认值是55
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
Lambda 表达式可以像对象一样使用，比如可以将它们赋给变量和作为参数传递，还可以像函数一样对其求值。
[capture](parameters)->return-type{body}
[](int x, int y){ return x < y ; }

如果没有返回值可以表示为：
[capture](parameters){body}
[]{ ++global_x; }

[](int x, int y) -> int { int z = x + y; return z + x; }
本例中，一个临时的参数 z 被创建用来存储中间结果。如同一般的函数，z 的值不会保留到下一次该不具名函数再次被调用时。


*/

void func7()
{
	auto f1 = [](int x, int y) { return x < y; };
	cout << f1(1, 3) << endl;
	//如果是真，返回1，否则返回0. 只是不知道该怎么定义lambda的类型。
}




