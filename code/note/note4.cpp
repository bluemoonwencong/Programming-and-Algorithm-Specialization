#include <iostream>
#include<cmath>
#include <ctime>
using namespace std;

#include<iomanip>
using std::setw;


// 内容较杂，可以大略看看。
// rand, array, string

void func8()
{
	cout << cos(3.14) << endl;
	//弧度制的
}
/*
1	double cos(double);
2	double sin(double);
3	double tan(double);
4	double log(double);
该函数返回参数的自然对数。
5	double pow(double, double);
假设第一个参数为 x，第二个参数为 y，则该函数返回 x 的 y 次方。
6	double hypot(double, double);
该函数返回两个参数的平方总和的平方根，也就是说，参数为一个直角三角形的两个直角边，函数会返回斜边的长度。
7	double sqrt(double);
8	int abs(int);
9	double fabs(double);
该函数返回任意一个十进制数的绝对值。
10	double floor(double);
地板除，该函数返回一个小于或等于传入参数的最大整数。
*/

void func9()
{
	//srand( (int)time(NULL) );
	srand(1.125);
	//可以用srand(1)固定种子。种子如果是1.25会被转化为 unsigned int 类型。
	//time返回time_t类型，00:00:00 GMT, January 1, 1970
	//unsigned是类型转换，也可以用int,float
	for (int i = 0; i < 10; i++)
	{
		cout << rand() << endl;
	};
	srand(1);// 这个种子和1.25效果一样。
			 //rand()是序列，如果不重新指定种子，每次运行的rand()都和之前不一样。
	for (int i = 0; i < 10; i++)
	{
		auto cache = rand();
		cout << cache << endl;
		cout << cache % 5 << endl;
	};

}

/*
所有的数组都是由连续的内存位置组成。
type arrayName [size1][size2][size3][size4];
type 可以是任意有效的 C++ 数据类型，arrayName 是一个有效的 C++ 标识符。
*/

void func10()
{
	double mylist[5] = { 25, 23.0, 56, 87, 55.1542355 };
	cout << mylist[4] << endl;

	int mylist2[10];
	for (int i = 0; i < 10; i++)
	{
		mylist2[i] = 100 + i;
	};
	cout << "Element" << setw(6) << "Value" << setw(5) << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << i << setw(7) << mylist2[i] << setw(5) << endl;
	}

}

void func11()
{
	cout << "多维数组：" << endl;
	int val[3][4] = {
		{ 1,2,3,4 },
	{ 5,6,7,8 },
	{ 9,10,11,12 }
	};
	//int val[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};效果也完全一样。
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << val[i][j] << endl;
		}
	};

	for (int &a : val[0])
	{
		cout << a << endl;
	}

}


/*
字符串实际上是使用 null 字符 '\0' 终止的一维字符数组。

*/
void func12()
{
	char gg[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	cout << "func12:" << endl;
	cout << gg << endl;

	char str1[20] = "Hello";
	char str2[20] = "World";
	char str3[20];
	cout << "str1 length: " << strlen(str1) << endl;
	cout << "str3 length: " << strlen(str3) << endl;
	for (char &i : str1)
	{
		cout << i << endl;
	};

	strcpy_s(str3, str1);
	cout << "str3 content: " << str3 << endl;
	cout << "str3 length: " << strlen(str3) << endl;
	//str3现在和str1一样,连长度也从33变为5了。

	strcat_s(str1, str2);
	cout << str1 << endl;
	cout << strlen(str1) << endl;
	//连接之后str1长度为10

}

/*
C++ 标准库提供了 string 类，支持上述所有的操作，另外还增加了其他更多的功能。
*/

#include<string>
void func13()
{
	cout << "func13:" << endl;
	string str1 = "Hello";
	string str2 = "World";
	string str3;
	int len;

	str3 = str1;
	cout << "str3 cntent: " << str3 << endl;
	str3 = str1 + str2;
	cout << "str3 cntent: " << str3 << endl;
	len = str3.size();
	cout << "str3 length: " << len << endl;
	cout << str3.length() << endl;


}


