#include<iostream>
#include<string>
#include<cctype>
using namespace std;

/*
使用 #define 预处理器。
使用 const 关键字。*/
/*
整数常量：0x 或 0X 表示十六进制，0 表示八进制，不带前缀则默认表示十进制；
后缀可以是大写，也可以是小写，U 和 L 的顺序任意。

字符常量是括在单引号中。如果常量以 L（仅当大写时）开头，则表示它是一个宽字符常量（例如 L'x'），此时它必须存储在 wchar_t 类型的变量中。
否则，它就是一个窄字符常量（例如 'x'），此时它可以存储在 char 类型的简单变量中。

字符串字面值或常量是括在双引号 "" 中的。


*/

#define n_W 56
int myconst()
{
	const float n_H = 23e-3;
	cout << n_H << endl;
	cout << n_W << endl;
	return 0;
}

/*
修饰符 signed、unsigned、long 和 short 可应用于整型，signed 和 unsigned 可应用于字符型，long 可应用于双精度型。
*/

void myint()
{
	short int a = 50000;
	short unsigned int b = 50000;
	cout << a << " " << b;

}

/*

for ( init; condition; increment )
{
statement(s);
}
1.init 会首先被执行，且只会执行一次。这一步允许您声明并初始化任何循环控制变量。您也可以不在这里写任何语句，只要有一个分号出现即可。
2.接下来，会判断 condition。如果为真，则执行循环主体。如果为假，则不执行循环主体，且控制流会跳转到紧接着 for 循环的下一条语句。
3.在执行完 for 循环主体后，控制流会跳回上面的 increment 语句。该语句允许您更新循环控制变量。该语句可以留空，只要在条件后有一个分号出现即可。
4.条件再次被判断。如果为真，则执行循环，这个过程会不断重复（循环主体，然后增加步值，再然后重新判断条件）。在条件变为假时，for 循环终止。

*/
void func1()
{
	for (int a = 0; a<10; a = a + 1)
	{
		cout << a << endl;
	}
}


/*
下面for述句的第一部分定义被用来做范围迭代的变量，就像被声明在一般for循环的变量一样，其作用域仅只于循环的范围。而在":"之后的第二区块，代表将被迭代的范围。
但是居然能改变迭代范围的值！！！  c++这样设计不妥吧？
*/
void func2()
{
	int my_array[5] = { 1, 2, 3, 4, 5 };
	// 每个数组元素乘于 2
	cout << "init" << endl;
	cout << "my_array[0]: " << my_array[0] << endl;
	cout << "my_array[4]: " << my_array[4] << endl;
	cout << "my_array[5]: " << my_array[5] << endl;
	cout << "my_array[6]: " << my_array[6] << endl;

	for (int &x1 : my_array)
	{
		x1 *= 2;
		cout << x1 << endl;
	}//这是要超越python的节奏吗！
	cout << "after once" << endl;
	cout << "my_array[0]: " << my_array[0] << endl;
	cout << "my_array[4]: " << my_array[4] << endl;
	cout << "my_array[5]: " << my_array[5] << endl;
	cout << "my_array[6]: " << my_array[6] << endl;


	// auto 类型也是 C++11 新标准中的，用来自动获取变量的类型
	for (auto &x2 : my_array) {
		x2 *= 2;
		cout << x2 << endl;
	}
	cout << "after twice" << endl;
	cout << "my_array[0]: " << my_array[0] << endl;
	cout << "my_array[4]: " << my_array[4] << endl;
	cout << "my_array[5]: " << my_array[5] << endl;
	cout << "my_array[6]: " << my_array[6] << endl;

}

void func3()
{
	string str("some string");
	// range for 语句  
	for (char &c : str)
	{
		c = toupper(c);
	}
	cout << str << endl;
}







